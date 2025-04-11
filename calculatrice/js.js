let ecran = document.getElementById('ecran');
let calculEnCours = '';
let resetEcran = false;

function ajouterNombre(nombre) {
    if (ecran.textContent === '0' || resetEcran) {
        ecran.textContent = '';
        resetEcran = false;
    }
    ecran.textContent += nombre;
}

function ajouterOperation(operation) {
    // if (resetEcran) {
    //     resetEcran = false;
    // }
    // calculEnCours += ecran.textContent + operation;
    // ecran.textContent = '0';
    ecran.textContent += operation;
}

function ajouterDecimal() {
    if (resetEcran) {
        ecran.textContent = '0';
        resetEcran = false;
    }
    if (!ecran.textContent.includes('.')) {
        ecran.textContent += '.';
    }
}

function ajouterPourcentage() {
    ecran.textContent = parseFloat(ecran.textContent) / 100;
}

function effacerTout() {
    ecran.textContent = '0';
    calculEnCours = '';
}

function supprimer() {
    if (ecran.textContent.length === 1 || 
        (ecran.textContent.length === 2 && ecran.textContent.startsWith('-'))) {
        ecran.textContent = '0';
    } else {
        ecran.textContent = ecran.textContent.slice(0, -1);
    }
}

function calculer() {
    calculEnCours += ecran.textContent;
    try {
        // Remplacer × par * pour l'évaluation
        let expression = calculEnCours.replace(/×/g, '*');
        ecran.textContent = eval(expression);
    } catch (error) {
        ecran.textContent = 'Erreur';
    }
    calculEnCours = '';
    resetEcran = true;
}

// Gestion du clavier
document.addEventListener('keydown', function(event) {
    if (event.key >= '0' && event.key <= '9') {
        ajouterNombre(event.key);
    } else if (event.key === '.') {
        ajouterDecimal();
    } else if (event.key === '+' || event.key === '-' || event.key === '*' || event.key === '/') {
        ajouterOperation(event.key);
    } else if (event.key === '%') {
        ajouterPourcentage();
    } else if (event.key === 'Enter' || event.key === '=') {
        calculer();
    } else if (event.key === 'Backspace') {
        supprimer();
    } else if (event.key === 'Escape') {
        effacerTout();
    }
});