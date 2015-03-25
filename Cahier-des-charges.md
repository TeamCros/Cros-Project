1. Objet  
 Dans le cadre de notre PPE (Projet Pluridisciplinaire en Equipe) dans la catégorie des divertissements numériques, nous sommes chargés de l’élaboration d’une console de jeux portable. C’est un projet qui s’inscrit dans la valorisation open source, c’est à dire que la documentation de notre projet sera mise en accès libre afin de le partager avec toutes les personnes intéressées. L’enjeu principal est donc de s’intégrer à une communauté ou de la créer afin d’établir un lien entre notre produit et ses futurs utilisateurs. Notre projet a pour but de rassembler en une seule et même console plusieurs jeux ou applications qui, actuellement, ne sont accessibles que via différents appareils spécifiques à une fonctionnalité précise. Le tout aura également une interface instinctive, un aspect attrayant et les joueurs auront la possibilité de le transporter facilement grâce à sa petite taille, sa légèreté et sa grande autonomie.  
Pour aboutir à ce résultat, voici le cahier des charges qui, dans un premier temps, présente les produits existants et justifie le choix de notre valorisation en open source. Dans une deuxième partie, vous trouverez le processus de vie, l’environnement, les fonctions du système ainsi que ses contraintes. Pour finir, nous vous détaillerons la feuille de route du projet avec ses acteurs, son équipe et ses livrables qui nous permettrons de réponde à la problématique. 

2. Terminologie  
2.1. Termes   
Emulateur : Un émulateur est un programme qui permet de reproduire sur une plateforme le comportement d’une autre 
Open Source “code source ouvert” : Qui soit accessible à tous et que les programmeurs peuvent modifier afin de le partager ensuite avec la communauté concernée 
Rétrogaming : Le rétrogaming est l'activité qui consiste à jouer à des jeux vidéo anciens et à les collectionner (wikipédia) 
Linux : Système d’exploitation libre utilisé généralement dans les super ordinateurs, les smartphones et les systèmes embarqués.  
  
2.2. Acronymes  
CROS (Console Rétrogaming Open Source) : Il s’agit du nom de la console que l’on compte fabriquer. En effet, celle-ci sera une console de jeux portable, possédant plusieurs émulateurs et toute sa documentation (hardware et software) sera disponible en ligne. 
PPE (Projet Pluridisciplinaire en Equipe) : Projet réalisé par des élèves en quatrième année d’école d’ingénieur, mettant en relation différents domaines. 
MicroSD (Micro Secure Digital Card) : Unité de stockage le plus souvent utilisée dans les appareils portables. 

3. Justification et valorisation du système  
Au travers de cette partie nous allons décrire les différents rôles et utilisations du système. Notre projet s’inscrit dans la valorisation open source, nous devons donc créer une communauté ou se rapprocher des communautés déjà existantes. Mais avant ça, nous allons nous intéresser aux réels besoins des joueurs et aux consoles déjà existantes.  
3.1. Justification du besoin initial  
Grâce aux avancées technologiques, de plus en plus de plateformes de jeux font leur apparition. Le très grand nombre de consoles existantes, avec chacune ses particularités et ses jeux, oblige les utilisateurs à en avoir plusieurs à disposition s’ils veulent jouer à différents jeux. On peut alors prévoir de rassembler tous ces types de jeux dans un seul support comme une carte mémoire que notre console lire, de manière à ce que l’on n’ait pas plusieurs consoles à transporter.  
L’utilisation de jeux vidéo au quotidien se fait le plus souvent dans les transports en commun ou dans les salles d’attente pour faire passer le temps plus vite. Notre console est ainsi destinée à être portable, c’est à dire avec une petite de taille, un poids léger et une importante autonomie de manière à faciliter le transport de celleci par les utilisateurs. Par ailleurs, en plus de toucher les joueurs de jeux vidéo, elle s’adresse également aux développeurs. En effet, une chose fondamentale à propos de notre système est qu’il se veut extrêmement évolutif et personnalisable, que ce soit sur le plan hardware ou software. Effectivement, grâce à l’aspect open source du projet, le système devra être détaillé dans son intégralité, avec une documentation facilement accessible. De ce fait, il sera simple de configurer le système selon ses envies pour une personnalisation “surmesure” et adaptée à ses besoins. La CROS est donc une console intemporelle et indémodable grâces à ses utilisateurs actifs qui pourront l’améliorer au fil du temps.  
Pour résumer,  nous avons identifié plusieurs besoins de la part des personnes ciblées : les joueurs et les développeurs. Premièrement,  avoir accès à un appareil unique regroupant plusieurs jeux venant de consoles différentes et deuxièmement, pouvoir facilement utiliser et modifier le côté hardware ainsi que le côté software du produit. Voici à présent l’état de l’art décrivant toutes les technologies déjà existantes dans le domaine qui nous concerne.

3.2. Contexte / Etat de l’art  
Depuis 1972, date de création de la première console de jeu vidéo, plus d’une centaine ont fait leur apparition dans le monde. C’est pourquoi, nous avons aujourd’hui un grand nombre de jeux vidéo avec leur connectique, leur interface et leurs utilisations particulières. Vous trouverez ci-dessous le descriptif des cartes de développement, des joysticks, des écrans, des batteries et des logiciels actuellement utilisés.  
Des consoles Open Sources sont déjà présentes sur le marché, comme la GCW-Zero, la Pandora ou encore la Caanoo. Mais il existe plus d’une centaine de consoles de jeux vidéo ; en voici quelques exemples :  
La 3DS XL  
La PS Vita  
La GCW-Zero (Console Open Source)  

Carte de développement  
Pour la réalisation de ce projet, nous avons besoin d’une carte de développement. Cependant, notre valorisation open source nous impose des contraintes quant au choix de la carte. La carte doit avant tout être compatible avec le linux embarquée car c’est notre plateforme de développement étant donné qu’il s’agit d’un système d’exploitation open source. De plus, l’architecture de la carte doit elle aussi être open source, il doit être aisé de récupérer la fiche technique des schémas électriques.   
La carte de développement doit être compacte, peu coûteuse, embarquer suffisamment de puissance et posséder un panel de modules complémentaires riches et variés afin de permettre l’ajout de fonctionnalité. Tout ceci permettra à la CROS d’avoir de nombreux accessoires pour correspondre à une console de jeux tout en restant portable.   
Emulation   L’émulation est une technique pour simuler de manière logicielle un élément de matériel informatique. L’émulation est utilisée depuis longtemps dans les systèmes informatiques dans divers buts. On peut distinguer deux utilisations principales : l’émulation d’anciens systèmes hérités dans une société et l’émulation de plateformes de jeux vidéo dans un but ludique.  
L’émulation de systèmes de jeux vidéo est répandue et il existe des émulateurs pour un grand nombre de consoles. Ces émulateurs sont implémentés dans les consoles open source existantes.

Joysticks  
Le classique  
Points positifs : Précis Agréable  
Points négatifs : Encombrant Dépasse de la console ce qui ne permet pas de mettre la console dans sa poche  
La croix   
Points positifs : Peu encombrant La console peut rentrer dans une poche Facilité de récupération de l’information  
Points négatifs : Peu précis mais finalement suffisant (8 directions) http://ludopad.over-blog.com/article-les-autresjoypads-38286209.html 
Le plat  
Points positifs : Peu encombrant Même précision que le joystick classique  
Points négatifs : Relativement fragile sans écran rabattable sur le dessus (comme 3DS) Le mettre dans une poche peut l'abîmer  

Ecrans  
Au sujet des écrans, nous avons recherché différents produits pouvant répondre à nos attentes, allant d’un simple écran LCD (liquid cristal display) aux récents écrans AmoLED, de nombreux types d’écran existent de nos jours ce qui va nous permettre de choisir le plus adapté à nos besoins et à nos moyens.  
Les différentes caractéristiques sont les suivantes:  
Définition en nombre de pixels : le nombre de points constituant l’image visible.
Dimensions : c’est la diagonale qui est indiquée en pouces ou en centimètres. (1 pouce = 2,54cm)
Contraste : rapport de luminosité entre un pixel blanc et un pixel noir. Souvent obtenue en poussant la luminosité au-delà de l’utilisable. Les constructeurs exhibent des écrans ayant des contrastes artificiels de 10000:1 voire bien plus, alors qu’un contraste supérieur à 1000:1 représente déjà une valeur exceptionnelle pour un LCD.
Angle de vision horizontal et vertical : indique jusqu’à quel angle on peut observer l’image, avec un contraste supérieur à 10:1. Ce contraste limite est déjà très faible au vue des contrastes de face.  Luminosité : mesurée de face, c’est la quantité de lumière émise par l’écran.  Temps de réponse : l’ISO définit le temps total de l’aller-retour blanc → noir → blanc. Il est souvent plus optimiste que celui nécessaire à la transition blanc → gris → blanc plus représentative d’une utilisation courante.  
A l’aide de ces critères nous pourrons définir dans la fiche technique les bornes que nous nous imposons, que ce soit d’un point de vue budget mais aussi au niveau de l’exigence technique du système.  

Ecrans tactiles  
Afin de compléter cette partie à propos des écrans, nous allons explorer les écrans tactiles existants. Il existe différentes technologies afin de détecter un doigt sur un écran, nous allons vous les présenter en précisant pour chaque technologie une courte expertise des points positifs et des points négatifs.
Technologie résistive analogique : 
Le principal point négatif de cette solution est l’usure de l’écran, en effet les appuis répétés sur l’écran causes des micro-étincelles qui endommagent les surfaces électrifiées. Ce phénomène entraîne une perte de précision importante.  
Technologie capacitive : Un avantage majeur des systèmes capacitifs, par rapport aux résistifs, est leur capacité à laisser passer la lumière. Seulement 75% de la lumière traversera une dalle résistive contre plus de 90% pour une dalle capacitive. Ce gain de luminosité permet d’avoir un écran qui consomme moins d’énergie étant donné qu’il y a moins de perte. L’autonomie étant une chose importante pour notre console, l’écran capacitif propose donc un avantage important. Cependant ces écrans sont plus coûteux.  
Dans un cadre plus général, l’utilisation d’un écran tactile n’est pas des plus adapté pour notre système. Malgré le fait que les touches ou les joysticks peuvent être simulés sur l’écran afin de pouvoir jouer, cela n’offre pas un confort de jeu optimal. De plus, les jeux rétro ne sont pas forcément adaptés aux écrans tactiles. Cependant, nous n'occultons pas cette solution qui permettrait d’obtenir une taille maximum d’écran dans un système compact.   
Autre élément important : des zones tactiles. Que ce soit l’écran en lui-même et/ou une surface dédiée, les appareils portables profitent tous de cette technologie afin de diminuer leur encombrement, mais aussi pour son côté pratique. Il offre aussi de nouvelles possibilités dans les jeux que de simples boutons ne peuvent retranscrire (déjà mentionné dans le paragraphe précédent).  
On retrouve de plus en plus ces types de capteurs dans les appareils mobiles afin d’augmenter les fonctionnalités de celui-ci et de chercher à satisfaire le plus d’utilisateurs possible.   

Capteurs
La plupart des consoles de jeux portables possèdent des capteurs de mouvement, un gyroscope trois axes qui détermine une position angulaire et un accéléromètre sur trois axes qui calcule la vitesse de déplacement. La combinaison des deux capteurs permet de déterminer le mouvement de l’utilisateur. Ainsi, grâce à ce système de détection, le joueur peut interagir d’une autre façon avec le jeu en lui permettant des actions uniques.  
Il est également possible de trouver des capteurs de position comme une boussole électronique sur trois axes et/ou un système de localisation GPS.   

Connectivité réseau  
Dans le contexte actuel du “tout connecté”, il existe de nombreux moyens pour avoir accès à Internet. La révolution du monde sans-fil n’a fait qu’accentuer ce besoin de connexion permanent. On retrouve globalement, sur une grande majorité des appareils mobiles un module de connexion Wi-Fi, le meilleur moyen d’être connecté à Internet. On retrouve aussi, pour certains, un module Bluetooth afin de pouvoir utiliser divers périphériques comme des écouteurs sans-fil.  

Connectique  
Il n’y a pas que le sans-fil sur un appareil portable. Par exemple, la course à la mémoire est aussi un autre facteur d’influence. C’est pourquoi, la majorité des appareils mobiles proposent un port pour carte mémoire type SD ou Micro SD. Sur certains on peut aussi trouver des ports mini-USB qui peuvent faire office d’alimentation, de transfert de données ou de connexion de périphérique. Mais globalement, sur la connectique, il n’est pas rare d’avoir affaire à des fiches propriétaires ce qui a tendance à enfermer l’utilisateur dans son produit. Il ne peut pas, par exemple, emprunter un accessoire d’un autre appareil car il ne serait pas compatible.  

3.3. Stratégie de valorisation  
Dans le but de valoriser notre console, et de manière à ce qu’elle respecte son caractère de console open source, nous prévoyons de rendre le code source du logiciel et toute la documentation liée à la conception accessible à tous. Ainsi,  les programmeurs confirmés ou débutants pourront modifier notre produit et l’améliorer comme bon leur semble. En effet, avec la documentation présente sur le net, les communautés pourront en profiter et même nous aider à concevoir notre console de façon à ce qu’elle satisfasse le plus grand nombre de personne. Actuellement, nous sommes en contact avec la communauté existante sur ce site : www.open-consoles.com. L’aspect modulaire les a particulièrement intéressés. En effet, notre système se partage en différents modules qui peuvent chacun fonctionner de façon autonome et être remplacé facilement. De cette manière, notre console deviendrait pérenne et c’est pour cette raison également que nous avons choisi de rejoindre la valorisation Open Source.
4. Exigences 
4.1. Processus de vie            
Premièrement, notre console sera considérée comme utilisable à partir du moment où l’on pourra jouer dessus. De plus, elle commencera à vivre et à être utilisée réellement lorsque les membres de communautés virtuelles commenceront à avoir accès au code source de notre console. Ainsi, tout le monde pourra modifier le software et le côté hardware de la CROS quand nous mettrons toute sa documentation en ligne. L’avantage de cette console open source est qu’elle pourra être utilisée plus longtemps que les consoles normales car elle sera modifiable au cours du temps par des développeurs. Donc lorsqu’un composant plus puissant ou qu’un nouveau jeu vidéo arrivera sur le marché, on pourra améliorer la console de façon à ce que l’on puisse jouer à ce dernier. De cette manière, on ne sait pas vraiment combien de temps elle restera sur le marché, ni combien de temps on pourra réellement l’utiliser. La seule limite de vie éventuelle de la console est la batterie qui détermine notre temps de jeu sur la console.  La CROS, une fois en état de marche permettra donc de jouer à des jeux rétro, mais aussi à des jeux plus récents. Elle est dédiée à un large panel de joueurs de jeux vidéo et de développeurs de tout âge.  
Deuxièmement, nous avons la possibilité d’insérer à notre console un capteur Wi-Fi. Cette option sera insérée à la console une fois que la fonction première de celle-ci (jouer à des jeux vidéo) sera respectée.  
Stockage Le produit sera vendu en kit aux utilisateurs. Il sera alors modulaire, chaque client pourra choisir les parties du kit qu’il souhaite acquérir. Assemblage L’utilisateur assemblera le kit lui-même. Il pourra modifier le matériel ou ajouter son propre matériel à la console. Utilisation L’utilisateur jouera à des jeux déjà installés dans le produit. Par la suite, il pourra ajouter des jeux supplémentaires et des applications supplémentaires. Ceci augmentera la durée de vie du produit. Mise à jour Nous mettrons à disposition de l’utilisateur une plateforme qui permettra de maintenir le projet. Nous apporterons des mises à jour du logiciel et du matériel. Les mises à jour auront pour but d’ajouter des fonctionnalités et de corriger des anomalies. Maintenance L’utilisateur pourra effectuer lui-même la maintenance. Dans le cas d’une défaillance d’un élément du système. Il sera possible pour l’utilisateur de le réparer, grâce à notre conception modulaire qui permet une intervention sur l’élément endommagé aisé. Recyclage Enfin, notre produit sera désassemblé et recyclé lorsque des éléments vitaux à la console seront touchés.   

4.2. Environnement  
Concernant l’environnement de notre système, il est clair que le rendu final de notre console dépendra fortement des composants que l’on aura pu avoir, ainsi que du matériel que l’on aura utilisé. Ce matériel on l’obtiendra après avoir délibéré entre nous, mais aussi grâce aux conseils des acteurs externes que sont les futurs utilisateurs de la console ainsi que les membres de la communauté virtuelle. En plus de cela, il va nous falloir respecter une certaine législation appliquée aux consoles Open Source. En effet, il peut y avoir le problème de téléchargement de jeux illégaux.  Par la suite, les utilisateurs de la console open source seront les responsables des modifications qu’ils apporteront à la CROS. Mais deux choses sont à prendre en compte : pour le confort des utilisateurs, nous devons fabriquer une console qui soit facilement transportable et de plus avec une certaine autonomie pour pouvoir y jouer sans avoir à la recharger souvent. Les développeurs seront également des acteurs primordiaux en ce qui concerne l’amélioration du fonctionnement de la CROS. Pour résumer, nous avons donc:  
-> Nos joueurs qui nous apportent leur ressentis sur la console après l’avoir testée. -> La loi qui nous apporte des contraintes de légalité au niveau du copyright des jeux vidéo. -> Les communautés de consoles Open Source qui apportent également leur ressentis et des conseils pour l’amélioration ou pour la conception. Ils pourront également être amenés à la tester et s’ils sont convaincus ils pourront nous aider à en parler autour d’eux. -> Les communautés de développeurs de jeux Open Source peuvent nous fournir des jeux que l’on implémentera, et ils pourront également nous conseiller ou nous aider pour le développement de notre console. Nous leur apportons en retour une console sur laquelle ils pourront s’amuser à développer et ainsi améliorer notre software.   

4.3. Fonctions du système  
4.3.1 Fonctions clés 
Fonction F1: Jouer à des jeux de sources différentes  
La première fonction de notre produit est celle de permettre de jouer à des jeux vidéo provenant de sources, de plateformes différentes. Pour cela, nous devons pouvoir assurer les fonctions F1.2 et F1.3.  

4.3.2. Fonctions secondaires 
 Fonction F1.1: Afficher le jeu à l’écran  
En effet, pour que l’utilisateur sache où il en est dans le jeu et savoir ce qui lui reste à faire, il doit pouvoir voir l’avancement du jeu sur un écran.  
 Fonction F1.2: Récupérer les actions de l’utilisateur  
Afin de pouvoir avancer dans le jeu et réagir en fonction des requêtes du jeu auquel joue l’utilisateur, il faut pouvoir récupérer ses commandes à l’aide de boutons ou de joysticks.  
Fonction F1.3: Connectivité réseau  
La connexion à un réseau internet permettra à l’utilisateur de télécharger des jeux supplémentaires.  

4.3.3. Fonction pour les développeurs 
Fonction F2: Outils de développements  
Afin que les développeurs puissent améliorer notre console, ils auront accès à notre logiciel de développement. Ainsi ils pourront par exemple rajouter des émulateurs à notre console de manière à pouvoir jouer à des jeux vidéo provenant de sources différentes.  

4.3.4. Fonction pour les utilisateurs  
 Fonction F3: Console modulaire  
L’une des particularités de notre console est qu’elle aura toute sa documentation en ligne, notamment les informations concernant les composants de la console ainsi que les liens entre ces derniers. De cette manière, les utilisateurs pourront choisir de remplacer eux-mêmes les différents éléments de la console.

4.4. Contraintes  
C.1  Contrainte légale : Problème de copyright des rom Il peut y avoir des utilisateurs qui vont chercher à télécharger des jeux sur internet de manière illégale.  
C.2 Contrainte de puissance : pour pouvoir recevoir plusieurs émulateurs et lire des jeux de sources différentes, il faut que notre carte de développement ait une certaine puissance minimale.  
C.3 Contrainte de batterie : Il faut une autonomie suffisante pour que les utilisateurs puissent jouer à des jeux quelques heures sans avoir à la recharger. Sans cela, les joueurs de jeux vidéo seront constamment interrompus dans leurs parties à cause d’un manque de batterie. Ou alors ils devront constamment être branchés à une source d’alimentation pour pouvoir y jouer et la CROS ne serait donc plus portable.  
C.4 Contrainte de taille : Notre console doit pouvoir être facilement transportable afin de pouvoir y jouer partout. Que ce soit dans la poche ou dans un petit sac de transport, la CROS devra donc être légère et de petite taille (sans non plus être trop petite de manière à pouvoir voir facilement ce qui sera affiché sur l’écran de la console).  
C.5 Contrainte liée à la fabrication : Pour concevoir notre premier prototype, nous prévoyons d’utiliser une imprimante 3D. Ainsi nous pourrons concevoir la coque de la console mais aussi les boutons. Sans cette imprimante, le coût de fabrication de la console aurait été plus élevé. 

5. Feuille de route 
5.1.  Acteurs  
Les principaux acteurs de notre projet sont :  
Le responsable du cluster “digital Entertainment” : M. Guillaume Jacquemin
Le responsable de la valorisation “open source” : M. Pierre Paradinas
Le mentor, doctorant de l’ECE : M. Olivier Cros
Les membres de la communauté virtuelle “open-consoles” et ceux qui nous ont suivi sur les réseaux sociaux.
Les membres de la team CROS  
Les membres de la communauté virtuelle nous ont donné leurs préférences sur ce qu’ils auraient aimé trouver dans notre console, ainsi que la forme de cette dernière et des moyens pour arriver plus facilement à nos fins. Ils sont très réceptifs à notre projet, nos idées et participent activement à son avancement. Cependant, leurs nombreuses idées sont seulement des suggestions et seuls les membres du projet sont habilités à prendre les décisions qui s’imposent. De plus, notre mentor nous a beaucoup aidé afin de savoir quelle direction prendre pour notre projet et nous centraliser sur les objectifs essentiels. 

5.2. Équipe
Team Leader Alban MAYNADIE maynadie@ece.fr
Responsable logiciel Programmation Léopold DELOUCHE  delouche@ece.fr
Responsable Capteur/ Connectivité Zener Rasamoelison rasamoel@ece.fr
Responsable Interface Alexandre Delort delort@ece.fr
Responsable Autonomie Camille Brun cbrun@ece.fr
