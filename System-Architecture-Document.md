Introduction  
Dans le cadre de notre PPE, nous devons à présent rédiger un document sur l’architecture du système de la console CROS. Ce dossier a pour objectif principal de décrire et d’expliquer précisément le fonctionnement et l’utilisation de chaque composant. De plus, il a un rôle important dans la phase de développement car il va nous permettre de faire état de l’avancement du projet en indiquant les phases complètes, incomplètes et en cours.  
Tout d’abord, nous vous détaillerons l’architecture du projet  Puis dans une deuxième partie, nous écrirons les éléments du sous-système avec ses caractéristiques externes et internes. Enfin vous trouverez les différentes composantes du système ainsi que leurs interactions.

1. Architecture du système  
Dans ce paragraphe, nous allons vous présenter les sous-systèmes et les systèmes externes de notre console CROS. Tous ces systèmes seront accompagnés d’un schéma, d’un diagramme ou en encore d’une explication détaillée sur sa structure et sur les moyens mis en œuvre. Par ailleurs, cette section vous expliquera nos décisions quant à l’architecture et à la composition de notre projet.  
1.1. Sous-systèmes  
Le système de la CROS est composé de quatre sous-systèmes permettant de réaliser les différentes fonctions de la console : l’affichage, la génération du son, les connectiques et interactions, ainsi que la gestion de l’énergie.  
1.1.1. Sous-système : Affichage  
L’affichage est un sous-système principalement dédié à l’utilisateur « joueur ». C’est un outil d'interaction de premier ordre entre le joueur et la console. Grâce à cette interface, il peut voir le déroulement du jeu mais aussi les résultats des boutons actionnés à l’écran, ou tout simplement naviguer au travers de l’interface. A chaque action de l’utilisateur, l’écran se met à jour pour montrer l’évolution et la conséquence de cette commande.
1.1.2. Sous-système : Son  
Le sous-système son permet de restituer à l’utilisateur « joueur » la partie audio du jeu via des haut-parleurs. Plus généralement, pour n’importe quel utilisateur, il retranscrit l’état du système à l’aide d’alerte. Il est également possible d’écouter de la musique.  
1.1.3 Sous-système interaction/connexion  
L’ensemble des boutons et des connectiques représentent l'interaction principale entre l’utilisateur et le système. Grâce à ses éléments, les développeurs comme les joueurs agissent sur le système. La console possède huit boutons différents (A, B, X, Y, L, R, start, select), une molette pour régler le son, un bouton glissant on/off et un joystick. Tout cela permet au joueur d’interagir avec les fonctions disponibles sur la console. Pour les développeurs, le branchement sur le port Ethernet, la carte SD amovible et l’accès facile à la carte de développement sont des options qui lui permettent de se connecter au cœur du système de la console et ainsi améliorer la CROS selon ses préférences.
1.1.4. Sous-système : Energie  
Ce dernier sous-système est fondamental, il permet à la console de fonctionner et d’être portable. Il fournit l’énergie électrique qui permet d’alimenter l’ensemble du système. La batterie Lithium-ion donne accès à une plus importante capacité et une meilleure autonomie. Son chargement se fait via un câble d’alimentation ou un câble mini USB et ne se détériore pas dans le temps si elle n’est pas chargée au maximum comme dans les batteries au plomb.  

1.2. Système externe  
1.2.1. Joueurs/Développeurs 
Les joueurs Ce sont des utilisateurs qui vont simplement utiliser la console pour jouer aux jeux dont nous avons installé l’émulateur sur la console. Ils peuvent également se servir d’autres sources telles que la carte sd pour télécharger de nouveaux jeux vidéo directement sur la console. Ils pourront interagir avec la CROS via différents boutons de commande. Nous avons pris en compte certaines remarques de la communauté qui suit notre projet sur la page Facebook et sur le site spécialisé « open console ». Ils ont influencé notre conception de la console pour qu’elle respecte des conditions d’utilisation telles que la taille, le poids et l’intuitivité d’usage. Par ailleurs, dans le but de satisfaire un maximum les attentes des utilisateurs, nous leur laissons la possibilité de personnaliser la console et ainsi d’agir sur le système.   Les développeurs Ce deuxième type d’utilisateur que nous visons cherche directement à modifier le système au niveau interne grâce à une interface logiciel. Nous avons prévu de leur laisser la possibilité d’ajouter des émulateurs mais également de changer le logiciel se trouvant à la base du fonctionnement de la console. En se connectant par le port Ethernet de la carte de développement ils pourront avoir accès au système se trouvant dans la console.  
1.2.2. Bibliothèque des jeux
Sélection des émulateurs choisis et donc des jeux disponibles sur la console.   
1.2.3. Ordinateur pour le développement  
Un des systèmes externes qui va le plus influencer notre console est l’ordinateur du développeur. Il va agir directement sur le logiciel se trouvant à la base du fonctionnement de la console par l’intermédiaire d’un câble réseau Ethernet RJ45 grâce à une connexion SSH.   
De cette manière il va pouvoir modifier le logiciel de la console (de manière limitée), changer sa configuration ou rajouter des émulateurs. En effet, le développeur n’aura pas tous les droits administrateurs sur le logiciel. Il pourra ajouter des émulateurs à sa guise (dans la limite de puissance d’émulation de la Beaglebone black) ou encore modifier quelques configurations de la carte de développement de manière à pouvoir lui relier différents composants, sans pour autant pouvoir modifier le noyau du logiciel (réserver aux concepteurs de la CROS).  
L’utilisation d’un câble d’alimentation relié au secteur ou à une prise électrique est également indispensable afin de recharger la batterie de la console et lui permettre de fonctionner.

1.3. Comportement du système  
1.3.1. Interaction entre la beaglebone black et les développeurs     
Les échanges entre les développeurs et la beaglebone black (BBB) se font surtout par l’intermédiaire des touches et de l’écran se trouvant sur la console. En fonction de ce que le joueur souhaite réaliser, il appuiera sur les touches correspondantes et ces dernières enverront un signal à la BBB de manière à ce qu’elle interprète ces messages.   
Ils peuvent également communiquer avec la carte de développement en se connectant avec un câble réseau Ethernet et en branchant un clavier via le port USB. Ses messages seront donc envoyés, soient par l’intermédiaire de bus I2C, soient par des entrées au clavier (transférées par le port USB), mais aussi par des fils reliés à des boutons de commandes prédéfinis sur la BBB au niveau logiciel et de la configuration de ses GPIO.  
Ainsi, la carte de développement pourra recevoir les messages, les interpréter et exécuter les actions voulues par les utilisateurs et afficher le résultat de ses commandes sur l’écran.  
1.3.2. Interaction entre le son et les joueurs  
Le son a pour but d’immerger le joueur au cœur de l’univers du jeu auquel il joue. Le son apporte une dimension qui permet de mieux s’imprégner de la scène en cours et suivant les effets sonores, adapter ses actions à des choses qui ne sont pas explicitement visible (ennemis caché, objets secrets, etc… ).
Le son propose donc d’offrir des informations qui ne sont pas susceptibles d’être affichées à l’écran. Ceci est valable dans les jeux mais aussi hors-jeux. Grâce à des alertes, le joueur pourra être averti de l’état du système (batterie faible, erreur de lancement, branchement secteur, etc…).  
1.3.3. Interaction entre les jeux vidéo et les joueurs  
Le lien entre le joueur et son jeu est une chose primordiale dans le monde du jeu vidéo. En premier lieu les interactions avec les boutons, placés sur la console, sont les principaux moyens de commande de notre console. Les boutons sont couplés à un joystick permettant d’offrir une expérience de jeu des plus agréables et de déplacer tout objet à l’écran (curseur, personnage,...). Il est lui aussi placé de façon à garantir le confort de l’utilisateur.     Dans un second temps, nous disposons d’un écran tactile, très peu utilisable pour les jeux rétro, il montre tout son avantage dans la navigation au sein des menus de notre console mais aussi dans le cadre de l’émulation de jeu ou application Android. C’est grâce à l’écran que les joueurs vont pouvoir savoir où ils se trouvent dans le jeu, où en est leur avancement et les résultats des commandes qu’il rentre grâce aux boutons.  

2. Eléments de la CROS
2.1. Composants  
2.1.1. Beaglebone Black  
Notre carte de développement, la beaglebone black se trouve au cœur même de la console. C’est elle qui va permettre de relier tous les éléments de la console entre eux. Mais c’est elle aussi qui va héberger le logiciel décrivant le mode de fonctionnement de la CROS. Elle contient en mémoire le programme de fonctionnement et c’est en se connectant à la beaglebone black que les développeurs pourront le modifier. Les modifications seront visibles  à l’écran qui est directement connecté à la carte.  
2.1.2. Ecran  
L’écran de la console portable fait 5 pouces et est directement connecté à la beaglebone black grâce à des pins de connexion. L’écran sert alors d’interface entre l’utilisateur et le logiciel se trouvant au sein de la console. Toutes les commandes effectuées sur les différents composants de la CROS (boutons, molette pour le volume,...) auront une incidence sur l’image affichée à l’écran.  
2.1.3. Carte son  
La carte son est un petit circuit intégré permettant de décoder différents formats audio. Elle est connectée à la carte via les GPIO (General Purpose Input/Output). Elle peut communiquer avec la carte via SPI (serial peripheral interface), I2C (inter integrated circuit) ou encore UART (universal asynchronous receiver transmitter). Il décodera donc les fichiers sonores provenant d’un jeu ou tout simplement si l’utilisateur veut écouter sa propre musique.  Par défaut, le son est transmis aux haut-parleurs afin de le restituer auprès de l’utilisateur. Mais si pour des raisons de confort, l’utilisateur préfère utiliser des écouteurs ou un casque, la carte son offre un port audio output via un jack 3.5mm. Grâce à une molette, l’utilisateur peut régler le volume sonore à sa convenance.  
2.1.4. Joystick  
Le joystick est le composant qui va permettre au joueur de se déplacer dans le jeu mais aussi dans les différents menus proposés par le logiciel. L’utilisateur va alors pouvoir sélectionner des items, des jeux, des propriétés à observer … Le joystick se connecte à la beaglebone black également grâce à ses GPIO et va transmettre ses messages de mouvements par une connexion I2C.
2.1.5. Batterie  
La batterie est branchée à la Beaglebone Black grâce à un connecteur (molex picoblade 1,25mm receptors) qui est relié directement sur la carte de développement. Pour les développeurs, cela leur permet de la retirer ou de même la changer selon leurs préférences. Elle sera facile d’accès et rechargeable simplement.  La recharge de la batterie sera possible avec un câble d’alimentation mais aussi avec un câble micro USB. Pour les joueurs ce système leur permettra d'optimiser l’utilisation et  l’autonomie de la console CROS.  
2.1.6. Boutons de commandes  
Les différents boutons se trouvant sur la CROS permettent aux utilisateurs d’interagir directement avec la console sans avoir à y connecter avec des câbles de connexion. Ils sont là pour transcrire les demandes de l’utilisateur à la beaglebone black qui va les traduire en action à effectuer sur le jeu ou sur le logiciel et ensuite les retranscrire à l’écran. Les boutons sont reliés via les GPIO à la carte de développement.  
2.1.7. Switch On/Off  
Cet interrupteur à glissière est un composant électronique qui, une fois connecté correctement à la beaglebone black, allume et éteint la console. Il s’occupe de la gestion de l’alimentation de la carte et permet de la mettre ou non en fonctionnement.

2.2. Eléments du logiciel  
La distribution Linux que nous utilisons, Debian, nous fournit le noyau Linux et l’environnement graphique LXDE. 
L’application graphique de la CROS est basée sur l’outil de développement graphique GTK. L’application vit dans l’environnement graphique LXDE et est géré par le système d’exploitation Linux. L’application CROS permet de lancer les émulateurs comme une application Linux distincte. Aussi, cette application peut contrôler l’exécution des émulateurs. Elle peut donc quitter un des émulateurs pour libérer de l’espace mémoire. L’application CROS permet de modifier les paramètres de la console. Pour ce faire elle utilise les commandes Linux, notamment pour modifier la date et l’heure ou la langue de la console.  Les émulateurs utilisés sont disponibles pour notre distribution Linux. Nous utilisons un émulateur par système. Les besoins des émulateurs en mémoire et en temps d’exécution sont gérés par le système d’exploitation Linux. De plus, toutes les interactions homme-machine tel que le son et les interactions simulant un clavier. 
L’arbre de périphériques (device tree en anglais) permet au système d’exploitation de traiter les informations provenant des périphériques de la console. L’arbre de périphériques est un ajout récent au noyau Linux. Pour chaque périphérique, il faut appliquer une surcouche à l’arbre (device tree overlay en anglais) qui détaille l’utilisation du périphérique. La surcouche est écrite dans un fichier source qui est compilé par le compilateur de surcouche. Le fichier binaire de surcouche est finalement lancé au démarrage par le système d’exploitation.   
2.2.1. Fonction jeu  
2.2.1.1  Noyau Linux  
 Nous utilisons une distribution Debian de Linux fournie par la fondation BeagleBoard. La version utilisée date du 14 mai 2014. Cette distribution est basée sur le noyau Linux 3.8 et est open source.   
Linus Torvalds est l’auteur principal du noyau Linux. On peut trouver la dernière version de ce noyau et l’historique des versions ici : http://beagleboard.org/latest-images. Le système d’exploitation Linux va nous permettre d’utiliser des applications sur le microprocesseur ARM.   
Le système d’exploitation alloue de la mémoire et du temps d’exécution à chaque application. De ce fait, nous n’aurons pas à gérer l’exécution et la mémoire de l’application CROS et des émulateurs. De plus, on peut ajouter un bureau au noyau Linux pour utiliser des applications graphiques.  
2.2.1.2  Environnement graphique  
 L’environnement graphique est celui de la distribution Debian fournie. C’est un environnement LXDE, de License GNU GPL et adapté aux plateformes embarquées. En effet, LXDE nécessite peu de ressources mémoires. Il utilise GTK+ et permet de facilement développer des applications. L’application CROS et les émulateurs seront affichés grâce à LXDE. Cet environnement de bureau permet de naviguer dans l’arborescence de fichiers de la console et d’y apporter des modifications. Le projet LXDE a été lancé par Hong Jen Yee.
2.2.1.3  Application CROS  
 L’application que nous allons développer, l’application CROS, est une application basée sur le framework Qt. Le framework Qt peut être utilisé avec une licence open source (GPL). Qt a changé de développeur au cours du temps, de Nokia à Digia. Ce framework nous permet de développer facilement des applications graphiques pour les plateformes Linux embarqués. Nous utiliserons le langage C++ et le compilateur GCC.  Le rôle de l’application CROS est de permettre à l’utilisateur de choisir le jeu auquel il souhaite jouer grâce à des boutons. L’application affiche la liste de jeux et l’utilisateur peut naviguer dedans. Ensuite, lorsque l’utilisateur a sélectionné le jeu auquel il souhaite jouer, l’application démarre l’émulateur associé au jeu sélectionné et démarre le jeu dans l’émulateur.  L’application permet à l’utilisateur de configurer sa console. Dans un menu de configuration, l’utilisateur modifie les paramètres tels que la langue, la luminosité, le volume, … . Ces modifications sont ensuite répercutées dans l’application et dans la configuration Linux.  
2.2.1.4  Émulateurs  
 Les émulateurs utilisés sont disponibles pour Linux. Nous utilisons un émulateur par système (N64, SNES, GBA, gameboy). Les besoins des émulateurs en mémoire et en temps d’exécution sont gérés par le système d’exploitation Linux.  Les émulateurs sont démarrés par l’application CROS lorsque l’utilisateur souhaite jouer à un jeu associé à cet émulateur. Lorsque l’utilisateur quitte un jeu et ne démarre aucun autre jeu qui utilise le même émulateur, l’émulateur est éteint par le système.  La ROM du jeu sélectionné est chargée dans l’émulateur et le jeu fonctionne dans l’émulateur jusqu’à ce que l’utilisateur choisisse de quitter le jeu.   
2.2.1.5  Jeux  
 Les jeux sont sous forme de fichiers (ROMs) à télécharger sur des sites internet externes. Ils s’utilisent avec un émulateur en particulier. 
2.2.2  Lien matériel   
2.2.2.1  Noyau Linux  
 Pour le lien matériel, le noyau Linux permet à une application d’interagir avec le matériel connecté. Le matériel est accessible sous forme de fichiers et de fonctions systèmes.
2.2.2.2  Arbre de périphériques  
 L’arbre de périphériques (device tree en anglais) permet au système d’exploitation de traiter les informations provenant des périphériques de la console. L’arbre de périphériques est un ajout récent au noyau Linux. Pour chaque périphérique, il faut appliquer une surcouche à l’arbre (device tree overlay en anglais) qui détaille l’utilisation du périphérique. Ensuite, les périphériques peuvent être utilisés par toutes les applications, dont notre application CROS et les émulateurs.  
La surcouche est écrite dans un fichier source qui est compilé par le compilateur de surcouche. Le fichier binaire de surcouche est finalement lancé au démarrage par le système d’exploitation. L’arbre de périphériques est spécifique pour chaque plateforme qui met en place Linux.   
Ici, on utilise un processeur ARM avec de nombreux périphériques déjà présents sur la puce Sitara de Texas Instruments. L’arbre de périphériques nous donne accès à ces périphériques.  
2.2.2.3  Surcouche de périphérique pour l’écran  
La surcouche pour l’écran est déjà présente sur la carte de développement. Elle a été développée par la communauté de la Beaglebone Black et est donc parfaitement compatible avec celle-ci. L’écran est automatiquement reconnu par la Beaglebone Black grâce à une mémoire contenant un identifiant associé à la surcouche correspondante par le système. 
2.2.2.4  Surcouche de périphérique pour le joystick  
 La surcouche de périphérique pour le joystick indique au noyau Linux comment accéder aux données du joystick et comment interpréter les mouvements de l’utilisateur. La surcouche spécifie que le joystick est connecté au bus I2C numéro 1 de la Beaglebone Black. 
2.2.2.5  Surcouche de périphérique pour la carte son  
 La surcouche de périphérique pour la carte son indique au noyau Linux comment interagir avec la carte son. Elle spécifie que la carte son est connectée au bus SPI.  
2.2.2.3  Surcouche de périphérique pour les boutons  
La surcouche de périphérique pour les boutons indique au noyau Linux comment interagir avec eux. 

3. La CROS  
3.1. Les composants 
3.1.1. La Beaglebone Black (BBB)  
Comme énoncé précédemment, la beaglebone black est la pièce maîtresse de cette console. Son rôle est d’héberger le logiciel qui se trouve à la base du fonctionnement de la console de jeux. C’est également à elle que la majorité des composants sont liés. En effet, c’est à travers elle que vont transiter toutes les données transmises par les autres composants qui permettent aux utilisateurs d’interagir avec la console. Elle va interpréter ses messages et agir sur le logiciel en fonction des différentes données qui sont transmises. 
La beaglebone black possède :
un processeur d’1 GHz
512MB RAM
4GB 8-bit eMMC de mémoire flash
Accélérateur graphique 3D
2 microcontrôleurs  PRU 32-bit
De plus, elle a pour connectivité : 
un port micro USB pour l’alimentation
un port USB
un port HDMI
un port Ethernet
92 GPIO  
Et pour finir, la beaglebone peut supporter plusieurs logiciels dont Debian, Ubuntu et Android. 
Des images et autres informations sur la beaglebone black sont disponibles dans les annexes.  
3.1.2. L’écran LCD  
Il s’agit d’un écran tactile de 5” avec une résolution de 800*480 et qui est compatible avec la Beaglebone Black. Cet écran va nous permettre d’observer toutes les modifications effectuées sur le logiciel, mais aussi les jeux en pleine action et toutes les interfaces que l’on aura codées pour que l’utilisateur puisse facilement utiliser la console.  
De plus, cet écran possède sept touches déjà intégrées et configurées de manières à répondre aux commandes “haut, bas, gauche, droite, entrée, reset et power “. Au dos de l’écran se trouvent les pins nécessaires pour la connexion de la beaglebone black à l’écran (comme nous pouvons le voir sur les images ci-dessous).
3.1.3. La batterie  
Il s’agit d’une batterie Lithium-Ion de 3000 mAh avec une tension d’alimentation de 3,7 volts. Celle-ci se connecte à la beaglebone black par l’intermédiaire d’un connecteur molex.        
3.1.4 Le joystick  
 Le module joystick est basé sur une puce AS5013 à effet hall et un module joystick N50P105 magnétique. Lorsque l’utilisateur déplace le joystick avec son pouce, un aimant incorporé au joystick provoque un déplacement du champ magnétique. Ce déplacement du champ est mesuré par la puce situé du côté inférieur de la carte. La puce utilise 5 capteurs à effet hall pour déterminer l’emplacement du joystick. Le processus de calcul de position est entièrement intégré dans la puce. Il nous suffit de périodiquement envoyer une requête par I2C pour recevoir la position. Ce module peut également être utilisé avec une interruption pour recevoir l’information de position plus rapidement.  Le module utilise une alimentation de 3.3V qui est présente sur la carte Beaglebone Black.
3.1.5 La carte son  
 La carte son possède une puce codec VS1053 qui lui permet de décoder les trames que la Beaglebone lui envoie. Elle peut lire un grand nombre de format (OGG vorbis, MP3, MP1, MP2, MPEG4, WMA, FLAC, WAV et MIDI).   
 Elle peut également transmettre du flux audio à la Beaglebone via son entrée microphone. Le son enregistré peut être encodé sous différents formats en mono ou stéréo (OGG vorbis, IMA ADPCM, 16-bit PCM).     
3.1.6 Le Haut-parleur  
Il s’agit d’un mini haut-parleur de 23 mm de diamètre développant une puissance de 0,1W. Le niveau de son de ce haut-parleur est de 88dB ce qui nous permettra d’avoir un son suffisamment audible. Cet élément nous permettra de rendre l'expérience de jeu bien plus prenante. Allié à la carte son, le haut-parleur diffusera aussi bien les sons des jeux vidéo que des musiques chargées en mémoire sur le système.   
3.1.7 Les boutons 
3.1.8 Interrupteur à glissière   

3.2. Interaction des composants de la CROS  
La fonction principale de notre console est le jeu. Il est essentiel de bien saisir le fonctionnement et les interactions des différents composants de notre système lors de l’utilisation de la console de jeu. La fonction de jeu de notre console utilise l’ensemble des composants présent dans la machine, en effet il nous est impératif d’avoir une vue avec l’écran, du son avec les hauts parleurs et une interaction avec les boutons, le joystick et l’écran tactile. Nous nous plaçons maintenant dans le cas de figure le plus répandue sur les jeux qui seront émulé sur notre machine, le jeu.   
3.2.1 Interaction Beaglebone black/écran   
 L’écran est compatible avec la beaglebone black et se connecte directement grâce aux pins qui se trouvent à l’arrière de l’écran. Tous les pins de la Beaglebone étant occupés par l’écran, ce dernier bénéficie d’un déport des pins ce qui nous permet de relier les autres composants aux pins laissés libres par l’écran. La Beaglebone Black fournie non seulement des informations permettant l’affichage du jeu à l'écran mais aussi de l’énergie pour l’alimenter.  Les données transmises par l’écran et la beaglebone black transitent via les Pins UART_Rx et UART_Tx ainsi que les Pins Vsync et Hsync pour se positionner sur l’écran. La configuration des GPIO est nativement compatible avec l’écran. L’écran dispose aussi d’une surface tactile qui envoie à la Beaglebone les coordonnées du point appuyé par l’utilisateur. L’écran est principalement utilisé pour le jeu mais peut être également utilisé par les développeurs. 
3.2.2 Interaction Beaglebone black/joystick    
 Le joystick envoie à la Beaglebone des informations sur sa position en temps réel. Ces informations sont transmises via le protocole I2C. Ces informations nous permettront de déplacer le curseur à l’écran dans les menus et permettra aussi le déplacement dans les jeux.   
3.2.3 Interaction Beaglebone black/carte son    
 La carte son permet de transformer les informations sonores transférées par la Beaglebone black. La carte son s’y connecte également par les GPIO de la Beaglebone black afin qu’elle puisse recevoir le signal sonore à interpréter. Elle a également besoin d’une alimentation qui lui sera fournie par cette même carte de développement. De plus celle-ci transmettra les signaux audio par une connexion SPI. La carte son permettra de transporter l’utilisateur dans l’univers du jeu auquel il joue en y connectant un haut-parleur ou un casque audio. Elle sera surtout utilisée pour transférer la musique du jeu.  
3.2.4 Interaction Beaglebone black/batterie   
La batterie permet d’alimenter l’ensemble des composants du système via la beaglebone. Plus simplement, elle alimente la Beaglebone qui à son tour alimente les autres composants. Le lien entre la beaglebone et la batterie peut être interrompu par un interrupteur qui permet de couper l’alimentation et ainsi d'éteindre la console. La batterie est nécessaire aussi bien pour le jeu et pour le développement.     
3.2.5 Interaction carte son/Haut-parleur   
 La carte son génère un signal sonore transmis directement au haut-parleur. Le hautparleur vibre à la fréquence du signal fourni et ainsi génère un son. Cette interaction permettra à la console de pouvoir avertir l’utilisateur lors d’une charge de batterie faible ou pour émettre simplement le son des jeux.   
3.2.6 Interaction Beaglebone black/boutons    
 Les boutons sont nombreux sur la console et nous ne disposons pas d’assez de pins sur la Beaglebone c’est pourquoi nous avons décidé de placer les boutons en parallèle couplé chacun à une résistance différente. En lisant la tension sur le pin “Bouton” nous pourrons déterminer quel bouton a été appuyé et même reconnaître plusieurs boutons appuyés en même temps. Ces boutons permettront d’effectuer des actions dans le jeu. Ils permettront aussi de naviguer dans les menus avec les touches “sart” ou “home”. Développer sur la beaglebone ne nécessite pas l’utilisation des boutons mais ils sont indispensables pour jouer aux jeux sur la console.  
3.2.7 Interaction Beaglebone black/développeur
Outre l’aspect console de jeu, il est possible pour l’utilisateur d’utiliser la CROS comme un mini-ordinateur. En effet, grâce au système embarqué qui est une distribution Linux, il est possible de l’utiliser comme un ordinateur.   Grâce à une connexion SSH par le biais du port Ethernet, le développeur peut reprogrammer une partie du système. Malgré le fait qu’il est accès au cœur du système, cet accès sera restreint.  Dans les privilèges qui sont accordés au développeur, il pourra gérer la partie console du système en intégrant ou supprimant des émulateurs et/ou des jeux.   S’il y a eu une modification du matériel hardware, il pourra reconfigurer la partie du système concernée pour que l’ensemble fonctionne.  Le développeur pourra utiliser le système comme une petite machine de développement grâce à l’environnement Linux et exploiter la puissance de la carte pour écrire et/ou compiler de petits programmes.   

3.3  Tableau des rôles effectués par les composants   
Beaglebone Black Assurer la connexion entre les composants et avec ses propres composants. Interface hardware et software de la console 
Écran Offrir un rendu visuel indispensable pour un jeu vidéo 
Batterie Offrir une portabilité à la console en embarquant de l’énergie 
Carte son Décoder les données audio numériques 
Joystick Permettre à l’utilisateur de retranscrire des déplacements 
Haut-parleur Offrir un rendu sonore 
Boutons Permettre à l’utilisateur d’agir sur le système et lors du déroulement d’un jeu.  

4. Application CROS 
4.1    Eléments du logiciel  
4.1.1 Classe Jeu   
La classe jeu se charge de garder en mémoire l’emplacement du fichier ROM dans le système Linux. Cet emplacement est nécessaire pour pouvoir lancer le jeu, ainsi que l’émulateur associé au jeu. La classe jeu indique aussi à la classe Menu Principal quelle image doit être affichée dans le menu de sélection.  
4.1.2  Classe Émulateur  
4.1.3  Classe Paramètres  
4.1.4  Classe Fenêtre de Configuration  
La classe fenêtre de configuration permet à l’utilisateur de saisir des modifications de paramètres. La saisie de modifications s’effectue dans des menus déroulants, sliders, boites à cocher, … . Les modifications sont ensuite appliquées par l'exécution de scripts shell dans le système d’exploitation Linux. Elles sont aussi appliquées via la modification des structures de l’application CROS (langue de l’interface, affichage des images, …) La classe fenêtre de configuration est une fenêtre Qt avec différents champs textes, boutons et images.  
5.1.5  Classe Menu Principal  
La classe Menu Principal s’occupe d’afficher les jeux et de traiter la sélection de l’utilisateur. Tous les jeux existants sur la console sont accessibles dans cette classe. Les jeux sont affichés dans un menu qui affiche de grandes icônes correspondantes à chaque jeu. Le bouton sélectionné par l’utilisateur envoi l’information du jeu sélectionné à la classe Menu Principal. Ensuite, le programme détermine le jeu sélectionné dans la liste des jeux. Puis il lance l’émulateur correspondant et le jeu. Dans le menu principal, les paramètres tels que l’état de la batterie, la langue et la date et l’heure sont affichés et pris en compte. La classe Menu Principal est une fenêtre Qt avec différents champs textes, boutons et images. 
