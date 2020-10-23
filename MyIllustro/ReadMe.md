# ReadMe Rainmeter MyIllustro

## Guide

### Modifier un skin

Les skins sont des carcaces vides qui font appel à une Template: ```@Resources/Templates/{...}.inc```.

Les Templates font appel aux Layouts: ```@Resources/Includes/{...}/Layouts/{...}.inc```.
Ce sont les layouts qui s'occupent de toute la partie affichage.

Les Layouts font appel aux Modules: ```@Resources/Includes/{...}/Modules/{...}.inc```.
Ce sont les modules qui s'occupent de la partie réflexion, ils font les mesures, calcules, ...

### Ajouter une nouvelle application

J'ai ajouté le script: ```@Resources\Plugins\Bat\newInclude.bat```.
Celui-ci permet d'ajouter une nouvelle application avec les contrôles de base: ON/OFF, CPU, RAM, IOR, IOW.

Example:

- newInclude.bat Delphi bds
- newInclude.bat Excel excel
- newInclude.bat SSMS ssms
- newInclude.bat Word winword

### ShareX

Le chemin du dossier des captures ShareX est à changer ici: ```@Resources/Templates/Template.ShareX.inc```

## Sources

### RainMeter

- Illustro
- DriveLights: <https://www.deviantart.com/jsmorley/art/Drive-Lights-123923957>
- RecycleBin: <https://visualskins.com/skin/recyclebin>

### Autoit

- TaskKiller: <https://forum.rainmeter.net/viewtopic.php?t=15712#p87630>
- AddImageToClipboard: <https://www.autoitscript.com/forum/topic/191946-how-to-copy-a-picture-to-the-clipboard%E3%80%90solved%E3%80%91/?tab=comments#comment-1377147>

## ToDo

- Améliorer globalement
  - <https://forum.rainmeter.net/viewtopic.php?f=27&t=29806>
  - <https://forum.rainmeter.net/viewtopic.php?f=27&t=24381>
- Améliorer network
  - <https://forum.rainmeter.net/viewtopic.php?t=23719>
- Top
  - <https://forum.rainmeter.net/viewtopic.php?p=119192&sid=e53d21f744298adbec9f6bf76ba0a36e#p119192>
- Meteo
- RSS
