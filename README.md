# Progetto di Embedded Systems - Gruppo 3
## Contenuto della cartella

- **Harnesses**: Cartella contenente tutti i Test Harness creati per la validazione del modello. Al suo interno vi è un file per ogni scenario di ciascun componente e, per ciascun componente, un file generale che contiene tutti gli scenari di test. Totale file: 21.

- **TestManager**: Cartella contenente i file di test da lanciare utilizzando il tool Test Manager di MATLAB. Al suo interno vi è un file per ogni componente testato e ciascuno di essi testa a sua volta ogni scenario. Totale file: 5.

- **Firmware**: Cartella generata da MATLAB durante il processo di build del sistema, necessaria ai fini del deploy del firmware.

- **Documentation.pdf**: Documentazione prodotta contenente:
  - Progettazione
  - Descrizione modello StateFlow
  - Descrizione degli scenari di test realizzati in Stateflow
  - Descrizione degli scenari di test effettuati sul dispositivo a valle del deploy del firmware.

- **InductionCooker.slx**: File del progetto StateFlow utilizzato durante la fase 2 (Implementazione) e 3 (Validazione). Contiene gli harness contenuti nella cartella Harnesses accessibili dalla vista più esterna. Modello da aprire per effettuare il lancio dei test usando il SimulinkTestManager ed i file contenuti nella cartella TestManager.

- **InductionCookerDeploy.slx**: File del progetto StateFlow utilizzato durante la fase 4 (Deploy). Si è ritenuto importante duplicare il file di progetto in maniera tale da non modificare quanto fatto nelle fasi precedenti per introdurre i blocchi del package Simulink Coder Support Package for STMicroelectronics Nucleo Boards. Da questo file è possibile eseguire il comando "Build, Deploy and Start" per ottenere il contenuto della cartella InductionCookerBuild e caricare il firmware sulla board. Modello da aprire per effettuare il deploy ed ottenere il contenuto della cartella Firmware.

- **SuddivisioneAttività.xlsx**: Rendiconto dell'impegno orario di ciascun componente del gruppo nelle varie fasi del progetto.

- **induction_cooker_test.mp4**: Video contenente i test salienti effettuati direttamente sulla board, visualizzabile al link '<https://drive.google.com/file/d/1zgwOxmIYmiG65LBd2DkA6K30v3RwfV6D/view?usp=sharing>' oppure sulla repository GIT (il cui URL sta in Documentation.pdf).

## Membri del Gruppo
| Cognome e Nome      | E-Mail                                                                    | Matricola   |
|---------------------|---------------------------------------------------------------------------|-------------|
| Cerasuolo Cristian  | [c.cerasuolo2@studenti.unisa.it](mailto:c.cerasuolo2@studenti.unisa.it)   | 0622701899  |
| Ferrara Grazia      | [g.ferrara75@studenti.unisa.it](mailto:g.ferrara75@studenti.unisa.it)     | 0622701901  |
| Guarini Alessio     | [a.guarini7@studenti.unisa.it](mailto:a.guarini7@studenti.unisa.it)       | 0622702042  |