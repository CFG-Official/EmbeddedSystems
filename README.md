La cartella contiene i seguenti elementi:

- Harnesses: cartella contenente tutti i Test Harness creati per la validazione del modello. Al suo interno troviamo un file per ogni scenario di ciascun componente, e per ciascun componente un file generale che contiene tutti gli scenari di test. Totale file 21.
- TestManager: cartella contenete i file di test da lanciare utilizzando il tool Test Manager di MATLAB. Troviamo al suo interno un file per ogni componente testato, e ciascuno di essi testa a sua volta ogni scenario. Totale file 5.
- InductionCookerBuild: cartella generata da MATLAB durante il processo di build del sistema, necessaria ai fini del deploy del firmware.
- Documentation.pdf: documentazione prodotta contenente: progettazione, descrizione modello Stateflow, descrizione degli scenari di test realizzati in Stateflow, descrizione degli scenari di test effettuati sul dispositivo a valle del deploy del firmware.
- InductionCooker.slx: file del progetto Stateflow utilizzato durante la fase 2 (Implementazione) e 3 (Validazione) del progetto. Contiene gli harness contenuti nella cartella Harnesses accessibili dalla vista più esterna.
- InductionCookerDeploy.slx: file del progetto Stateflow utilizzato durante la fase 4 (Deploy). Si è ritenuto importante duplicare il file di progetto in maniera tale da non modificare quanto fatto nelle fasi procedenti per introdurre i blocchi del package Simulink Coder Support Package for STMicroelectronics Nucleo Boards. Da questo file è eseguire il comando "Build, Deploy and Start) per ottenere il contenuto della cartella InductionCookerBuild e caricare il firmware sulla board.
- SuddivisioneAttività.xlsx: rendiconto dell'impegno orario di ciascun componente del gruppo nelle varie fasi del progetto.
