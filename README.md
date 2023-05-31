# Embedded Systems - Fornello a Induzione

## Descrizione del progetto

Questo progetto è stato realizzato con l'obiettivo di progettare e implementare il firmware per un sistema di controllo di un fornello a induzione. Il dispositivo gestisce accensione e spegnimento, controllo della potenza e verifica della presenza di una pentola sul piano di cottura.

## Funzionalità del dispositivo

### Accensione e Spegnimento

Il dispositivo è equipaggiato con un pulsante di accensione/spegnimento. Quando il dispositivo è spento, premendo il pulsante questo si accende. Se il dispositivo è già acceso, tenendo premuto il pulsante per almeno 1 secondo si spegne il dispositivo. Un led indica all'utente lo stato del dispositivo.

### Controllo della potenza

Il dispositivo può operare a quattro livelli di potenza: 300W, 500W, 1000W, 1500W. Una volta acceso, l'utente può variare la potenza tramite due pulsanti dedicati. Inizialmente il fornello non è attivo (0W), ma una volta selezionata la potenza desiderata, il fornello si attiva se questa non viene variata ulteriormente entro 5 secondi. La potenza può essere variata anche quando il fornello è attivo, con la nuova potenza che viene applicata se non viene variata ulteriormente entro 5 secondi.

### Visualizzazione della potenza

Un led indica l'attivazione del fornello e varia la sua modalità di lampeggio in base alla potenza impostata. Questa è la corrispondenza tra potenza e frequenza di lampeggio:
- 0W: spento
- 300W: lampeggia con un periodo di 2 secondi
- 500W: lampeggia con un periodo di 1 secondo
- 1000W: lampeggia con un periodo di 500 millisecondi
- 1500W: lampeggia con un periodo di 250 millisecondi

### Controllo della presenza

Il dispositivo verifica la presenza di una pentola sul piano di cottura prima di attivare il fornello. Se la pentola viene rimossa mentre il fornello è attivo, un led segnala l'anomalia per 10 secondi. Se la pentola non viene riposizionata entro questo tempo, il dispositivo disattiva il fornello.

## Team di sviluppo

- Alessio Guarini
- Grazia Ferrara
- Cristian Cerasuolo