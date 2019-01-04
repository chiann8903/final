#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>
#define Acct_Data 50

void Accounting(int *, int*, struct Acct[]);
void Feeding(int*, int*);
void Personality();
void Divination();

void Personality()
{
	printf("==================\n");
	printf("=    個性測驗    =\n");
	printf("==================\n");
	int a = 0;
	int s;
	printf("1.你何時感覺最好?\n(1)早晨 (2)下午或傍晚 (3)夜晚    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 2;
		break;
	case 2:
		a = a + 4;
		break;
	case 3:
		a = a + 6;
		break;
	}
	printf("2.你走路時是......\n(1)大步的快走 (2)小步的快走 (3)不快，仰著頭面對世界 (4)不快，低著頭 (5)很慢    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 6;
		break;
	case 2:
		a = a + 4;
		break;
	case 3:
		a = a + 7;
		break;
	case 4:
		a = a + 2;
		break;
	case 5:
		a = a + 1;
		break;
	}
	printf("3.和人說話時，你......\n(1)手臂交叉的站著 (2)雙手緊握著 (3)一隻手或兩手放在臀部 (4)碰著或推著與你說話的人 (5)玩著你的耳朵、摸著你的下巴或用手整理頭髮    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 4;
		break;
	case 2:
		a = a + 2;
		break;
	case 3:
		a = a + 5;
		break;
	case 4:
		a = a + 7;
		break;
	case 5:
		a = a + 6;
		break;
	}
	printf("4.坐著休息時，你的......\n(1)兩膝蓋攏 (2)兩腿交叉 (3)兩腿伸直 (4)一腿捲在身下    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 4;
		break;
	case 2:
		a = a + 6;
		break;
	case 3:
		a = a + 2;
		break;
	case 4:
		a = a + 1;
		break;
	}
	printf("5.碰到你感到發笑的事時，你的反應是......\n(1)一個欣賞的大笑 (2)笑著，但不大聲 (3)輕聲的咯咯笑 (4)羞怯的微笑    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 6;
		break;
	case 2:
		a = a + 4;
		break;
	case 3:
		a = a + 3;
		break;
	case 4:
		a = a + 5;
		break;
	}
	printf("6.當你去一個派對或社交場合時，你......\n(1)很大聲地入場以引起注意 (2)安靜地入場，找你認識的人 (3)非常安靜地入場，儘量保持不被注意    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 6;
		break;
	case 2:
		a = a + 4;
		break;
	case 3:
		a = a + 2;
		break;
	}
	printf("7.當你非常專心工作時，有人打斷你，你會......\n(1)歡迎他 (2)感到非常憤怒 (3)在上兩極端之間    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 6;
		break;
	case 2:
		a = a + 2;
		break;
	case 3:
		a = a + 4;
		break;
	}
	printf("8.下列顏色中，你最喜歡哪一顏色......\n(1)紅或橘色 (2)黑色 (3)黃或淺藍色 (4)綠色 (5)深藍或紫色 (6)白色 (7)棕或灰色    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 6;
		break;
	case 2:
		a = a + 7;
		break;
	case 3:
		a = a + 5;
		break;
	case 4:
		a = a + 4;
		break;
	case 5:
		a = a + 3;
		break;
	case 6:
		a = a + 2;
		break;
	case 7:
		a = a + 1;
		break;
	}
	printf("9.臨入睡的前幾分鐘，你的床上姿勢是......\n(1)仰躺，伸直 (2)，俯躺，伸直 (3)側躺，微捲 (4)頭睡在一手臂上 (5)被蓋過頭    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 7;
		break;
	case 2:
		a = a + 6;
		break;
	case 3:
		a = a + 4;
		break;
	case 4:
		a = a + 2;
		break;
	case 5:
		a = a + 1;
		break;
	}
	printf("10.你經常夢到你在......\n(1)落下 (2)打架或掙扎 (3)找東西或人 (4)飛或漂浮 (5)你平常不作夢 (6)你的夢都是愉快的    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 4;
		break;
	case 2:
		a = a + 2;
		break;
	case 3:
		a = a + 3;
		break;
	case 4:
		a = a + 5;
		break;
	case 5:
		a = a + 6;
		break;
	case 6:
		a = a + 1;
		break;
	}
	if (a < 21) {
		printf("【你是內向的悲觀者】\n");
		printf("人們認為你是一個害羞的、神經質的、優柔寡斷的、是需要人照顧的、永遠要別人替你做決定、\n不想遇任何事或任何人有關。他們認為你是一個杞人憂天者，一個永遠看到不存在的問題的人。\n有些人認為你令人乏味，只有那些深知你的人知道你不是這樣的人。\n");
	}
	else if (a >= 21 && a < 31) {
		printf("【缺乏信心的挑剔者】\n");
		printf("你的朋友認為你勤勉刻苦、很挑剔。他們認為你是一個謹慎的、十分小心的人，一個緩慢而\n穩定新潛工作的人。如果你做任何衝動的事或無準備的事，你會令他們大吃一驚。他們認為你會\n從各個角度仔細地檢查一切之後，仍經常決定不做。他們認為對你的這種反應一部分是因為你的\n小心的天性所引起的。\n");
	}
	else if (a >= 31 && a < 41) {
		printf("【以牙還牙的自我保護者】\n");
		printf("別人認為你是一個明智、謹慎、注重時效的人，也認為你是一個伶俐、有天賦有才幹且謙虛\n的人。你不會很快、很容易和人成為朋友，卻是一個對朋友非常忠誠的人，同時要求朋友對你也\n有忠誠的回報。那些真正有機會了解你的人會知道要動搖你對朋友的信念是很難的，但對等的，\n依但這信任被破壞，會使你很難熬過。\n");
	}
	else if (a >= 41 && a < 51) {
		printf("【平衡的中道】\n");
		printf("別人認為你是一個新鮮的、有活力的、有魅力的、好玩的、講究實際的、而永遠有趣的人;\n個經常是群眾注意力的焦點，但你是一個足夠平行的人，不至於因此而昏了頭。他們也認為你\n親切、和藹、體貼、能諒解人;一個永遠會使人高興起來且會幫助別人的人。\n");
	}
	else if (a >= 51 && a < 61) {
		printf("【吸引人的冒險家】\n");
		printf("別人認為你是一個令人興奮的、高度活潑的、相當易衝動的個性;你是一個天生的領袖、一\n個做決定會很快的人，雖然你的決定不總是對的。他們認為你是大膽地和冒險的，會願意試做任何\n事至少一次;是一個願意嘗試機會而欣賞冒險的人。因為妳散發的刺激，他們喜歡跟你在一\n起。\n");
	}
	else {
		printf("【傲慢的孤獨者】");
		printf("別人認為對你必須「小心處理」。在別人眼中，你是自負的、自我中心的、是個極端有支\n配慾的、統治慾的。別人可能欽佩妳，希望能多向你一點，但不會永遠相信你，會對與你更深入的\n來往有所躊躇及猶豫。\n");
	}
	printf("\n");
}

void Divination()
{
	int Divination, i, j, ans;

	typedef struct lovetest
	{
		char love[200];
	}lovetest;
	lovetest lt[3];
	strcpy_s(lt[0].love, 200, "你與情人去爬山，一不小心走失了，你找不到他，他也找不到你，最後你會採取什麼行動？\n");
	strcpy_s(lt[1].love, 200, "測驗你的戀愛成功率？走在一條狹小的巷子裡，迎面走來一個讓你心跳加快的理想異性，這時你會怎麼做？\n");
	strcpy_s(lt[2].love, 200, "如果你是動物王國裡的國王或皇后，你的寶貝女兒被牛魔王擄掠去了，牛魔王威脅你說：“想要回女兒，請把寶貝拿來！”你會拿以下哪種寶貝去救女兒？\n");


	srand(time(NULL));

	printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf("    　｛歡迎來到石虎喵喵占卜吧檯｝　　　　　\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
	printf("　　　　  ◥◣◢◣◢◤　　\n");
	printf("　　　　◢█◤◥◤◥█◣　\n\n");
	printf("　　　　／　　　　　　＼\n\n");
	printf("　　　／　 ◥◤���� ◥◤　＼ ◥◣◢◤\n\n");
	printf("　　＿︳ ≡　　￣　　≡　｜／◥◤　　\n\n");
	printf("　／／＼　　 ╰─ ─╯　　   ／_／//∥\\ \n\n");
	printf("　︶　　＼　　︶︶　　／　　　/§\\　\n\n");
	printf("　　　 　 ◢█◤＿◥█◣　　　　　　　　\n\n");
	/*printf("  ◢███◣            ◢███◣\n");
	printf("  ██□██            ██□██\n");
	printf("  ◥███◤◢████◣◥███◤\n");
	printf("  ◢█                        █◣\n");
	printf("  █  �歈�                 �歈�     █\n");
	printf("≡≡  ∥●      ╭╮       ∥●   ≡≡\n");
	printf("  █  �裺�        ╰╯       �裺�     █\n");
	printf("  ◥▆▆▆▆▆▆▆▆▆▆▆▆▆▆◤\n");
	printf("  ◢█                        █◣\n");*/
	for (;;)
	{
		printf("\n      ~請選擇你要占卜類型~\n");
		printf("(１)愛情\n\n(２)財富\n\n(３)運氣\n\n(４)退出\n\nplease input your answer：");
		scanf_s("%d", &Divination);
		switch (Divination)
		{
		case 1:
			printf("\n\n");
			printf("  ◢███◣            ◢███◣\n");
			printf("  ██□██            ██□██\n");
			printf("  ◥███◤◢████◣◥███◤\n");
			printf("  ◢█                        █◣\n");
			printf("  █  �歈�                 �歈�     █\n");
			printf("≡≡  ∥●      ╭╮       ∥●   ≡≡\n");
			printf("  █  �裺�        ╰╯       �裺�     █\n");
			printf("  ◥▆▆▆▆▆▆▆▆▆▆▆▆▆▆◤\n");
			printf("  ◢█                        █◣\n");
			printf("\n\n");
			for (j = 1; j <= 1; j++)
			{
				i = rand() % 3;
				printf("%s", lt[i].love);
				if (i == 0)
				{
					printf("．１．找一個可以休息的地方，等待對方來找你。\n．２．一定會把對方找到。\n．３．不相信會走失，因此慢慢閒逛看風景，等待對方找到自己。\n．４．報警，讓員警來幫忙找對方。\n");
					printf("請選擇你的答案:");
					scanf_s("%d", &ans);
					printf("\n");
					switch (ans)
					{
					case 1:
						printf("測驗結果:\n");
						printf("－＞你需要一個明智體貼的情人，幫助你兩人建立一個良好的關係，因為你多半是被動的地位，如果你遇到無理取鬧的情人，你很難處理兩人之間的關係，多會採取逃避的態度。依從他人的決策處理重大事件，。\n\n");
						break;
					case 2:
						printf("測驗結果:\n");
						printf("－＞你對愛情非常執著，從來沒有自己的生活空間，將全部的關懷放在所愛的人身上，有時過分干涉對方使對方無法消受，而你卻又難免感到委屈而牢騷滿腹，因此建議你愛得輕鬆一些，給彼此一點空間吧。\n\n");
						break;
					case 3:
						printf("測驗結果:\n");
						printf("－＞你將男女之間的感情看得很輕鬆，有充分的自信及安全感，從來不擔心失去情人，仿佛他對你忠心耿耿。你的愛情帶著孩子的頑皮及幽默，只是應當注意一些對方的感受，以免情人認為你愛得不夠認真。\n\n");						break;
					case 4:
						printf("測驗結果:\n");
						printf("－＞當你們兩人感情出現問題時，你總希望找到第三者來幫忙，彌補能力不足，並且成為兩人之間的橋樑。你使用的方法很好，但是要注意這第三者的能力是否足夠，否則過度依賴一位無用的第三者反而使自己更倒楣。\n\n");
						break;
					default:
						break;
					}
				}
				else if (i == 1)
				{
					printf("\n．１．主動往回走，禮讓對方先過\n．２．繼續向前，趁機和對方搭訕 \n．３．站在原地，看對方會怎麼反應 \n．４．故意耍寶，搖搖晃晃，引起對方注意\n");
					printf("請選擇你的答案:");
					scanf_s("%d", &ans);
					printf("\n");
					switch (ans)
					{
					case 1:
						printf("測驗結果:\n");
						printf("－＞成功率70%。你溫和有禮的態度，成為吸引別人注意的好條件。即使你沒有直接表明心意，平日的口碑就已經不錯。當你表白，只要對方身邊沒對象，你應該有很高的勝算。\n\n");
						break;
					case 2:
						printf("測驗結果:\n");
						printf("－＞成功率為50%。看你會變出什麼花樣，或是又換了哪個目標，是你週遭的人的一大樂趣。你的積極主動，是致勝的原因，但也可能會成為敗筆。懂得拿捏分寸，是你需要學習的地方。\n\n");
						break;
					case 3:
						printf("測驗結果:\n");
						printf("－＞成功率是90%。沒有人能看出你心裡在想什麼，派間諜去套話也沒用，你的口風緊的連一點縫都看不到。私下觀察對方，秘密展開戀情…大多數的人，都是收到你的喜帖，才知道生米已經煮成熟飯。\n\n");
						break;
					case 4:
						printf("測驗結果:\n");
						printf("－＞成功率是35%。愛放煙幕彈的你，看起來好像有點小聰明。別人被你活潑的表現弄得糊裡糊塗，不知道你到底是什麼意思。因為你像哥兒們一樣容易相處，只能變成人家的好弟兄、好姐妹。\n\n");
						break;
					default:
						break;
					}
				}
				else
				{
					printf("\n．１．珍貴的草藥\n．２．水晶石\n．３．龍鱗\n．４．珍珠\n．５．漂亮的貝殼\n");
					printf("請選擇你的答案:");
					scanf_s("%d", &ans);
					printf("\n");
					switch (ans)
					{
					case 1:
						printf("測驗結果:\n");
						printf("－＞桃花開在別處。難有主動送上門的桃花，你得打起精神來，多在異性朋友面前扮小丑，可以提升桃花運。\n\n");
						break;
					case 2:
						printf("測驗結果:\n");
						printf("桃花運不錯。你的身邊有紅娘出現，有機會因同學、朋友撮合而結識不錯的異性朋友。\n\n");
						break;
					case 3:
						printf("測驗結果:\n");
						printf("－＞桃花運旺盛。愛神很快降臨到你身邊，走在路上都能感受到一路上異性對你投來的強力電波。	\n\n");
						break;
					case 4:
						printf("測驗結果:\n");
						printf("－＞桃花忽隱忽現。上半月你的桃花隱藏得很深，偶爾飄來一兩朵，還是爛桃花，下半月後桃花逐漸變強。\n\n");
						break;
					case 5:
						printf("測驗結果:\n");
						printf("－＞桃花在路上。桃花離你比較遙遠，但已經邁開大步向你趕來，你得抬頭挺胸樂觀生活，迎接桃花的到來。\n\n");
						break;
					default:
						break;
					}
				}
				break;
			}
			break;
		case 2:
			printf("\n\n");
			printf("  ◢███◣            ◢███◣\n");
			printf("  ██□██            ██□██\n");
			printf("  ◥███◤◢████◣◥███◤\n");
			printf("  ◢█                        █◣\n");
			printf("  █  �歈�                 �歈�     █\n");
			printf("≡≡  ∥●      ╭╮       ∥●   ≡≡\n");
			printf("  █  �裺�        ╰╯       �裺�     █\n");
			printf("  ◥▆▆▆▆▆▆▆▆▆▆▆▆▆▆◤\n");
			printf("  ◢█                        █◣\n");
			printf("\n\n");			printf("測試你的一生財運？\n當你走進森林，發現在一處空地上的動物樂園，動物們一看到你，就像久別重逢的朋友似的過來打招呼，你也覺得跟他似曾相識。心理測驗猜猜看，這個動物樂園裡過來打招呼的會是以下四種動物中的哪一種？\n");
			printf("\n．1．dog\n．2．horse\n．3．rabbit\n．4．sheep\n");
			printf("請選擇你的答案:");
			scanf_s("%d", &ans);
			printf("\n");
			switch (ans)
			{
			case 1:
				printf("測驗結果:\n");
				printf("－＞你腳踏車實地默默工作，有小錢可存。動物樂園的狗雖然比兔子大，但耕起田來也有限，不過一家溫飽絕對苶虞，所以切勿妄想一攫千金，想賺大錢。儲蓄存錢，較有保障。\n\n");
				break;
			case 2:
				printf("測驗結果:\n");
				printf("－＞你財運亨通的財主。馬最會耕田，在廣大耕地上，又可能再產生意想不到的財富。事業愈做愈大，財源從四面八方滾滾而入。\n\n");
				break;
			case 3:
				printf("測驗結果:\n");
				printf("－＞你雖辛勞工作一生，卻與大富大財無緣。動物樂園的兔子太小不宜耕田，耕出的面積小，作物收成有限。所以終日勞碌，或可溫飽，萬貫家財，對你是天邊彩虹。\n\n");
				break;
			case 4:
				printf("測驗結果:\n");
				printf("－＞你只要肯努力下工夫，百萬富翁不是夢。動物樂園的羊的體力僅次馬，加倍幼力，收入可觀。從身上又可獲取副產品羊毛線，你除主收入外，尚有副業收入，保證有中上級生活。\n\n");
				break;
			default:
				break;
			}
			break;
		case 3:
			for (int k = 1; k <= 1; k++)
			{
				printf("\n\n");
				printf("  ◢███◣            ◢███◣\n");
				printf("  ██□██            ██□██\n");
				printf("  ◥███◤◢████◣◥███◤\n");
				printf("  ◢█                        █◣\n");
				printf("  █  �歈�                 �歈�     █\n");
				printf("≡≡  ∥●      ╭╮       ∥●   ≡≡\n");
				printf("  █  �裺�        ╰╯       �裺�     █\n");
				printf("  ◥▆▆▆▆▆▆▆▆▆▆▆▆▆▆◤\n");
				printf("  ◢█                        █◣\n");
				printf("\n\n");
				i = rand() % 5;
				if (i == 0)
					printf("最近你的運氣也還是很不錯的，雖然不是最幸運的那一個，但是就如同中獎，人家中特等獎，你至少也可以中個二等獎，聽起來也是很好啦。儘管沒有達成你想要的效果，但是也能給你一定的鼓勵。更何況，你未來的財運和桃花運都是上升的，現在只要把自己實力再提升上去，未來根本不用操心運氣的問題，那是做什麼都會成功。\n\n");
				else if (i == 1)
					printf("你之前的運氣還是不錯的，只是好到了盡頭，也要給你一些苦頭吃吃了。不過你從來不會因為運氣不好，就沮喪不已，你也從來不會灰心，畢竟運氣只是實力的一部分，如果你其他方面夠強，運氣不好，你也可以做成事情。如果你技術精湛，如果你人氣極高，如果你資源很多，那麼運氣不好，你也無所謂。大不了等運氣來了再出山。\n\n");
				else if (i == 2)
					printf("你最近的運氣是一般般的啦，談不上有多好，畢竟運氣好的人比你更幸運地得到一些東西，比你做得更加成功。但是你的運氣也不會有多差，比起那些過得十分艱難的人，運氣很衰的人，你至少有錢可花，有人在你身邊給你加油。但是你還是需要好好地改變一下自己目前的生活狀態，多多努力，更加努力才能匹配上那些幸運。\n\n");
				else if (i == 3)
					printf("你最近的運氣很好，所有的好的事情都會環繞著你，讓你的工作順利無比，升職加薪都有你的份；也讓你的感情運很好，桃花多，遇到的人個個都喜歡你，愛慕你。你的財運也是好的啦，工作賺錢比較多之外，還說不定中個獎什麼的。現在運氣這麼好，可以趁此機會，多多實施之前的計劃，說不定很快就實現了。\n\n");
				else if (i == 4)
					printf("時好時壞的運氣，你也不知道該說好還是不好了。有的時候還不錯的樣子，事事順心，遇到的人也特別好。有的時候又很糟糕，你想做點事情吧，所有的人都會來阻撓你一般，連喝一口水都塞牙縫的節奏。你也把握不好將來會是什麼情況，因為當下的節奏，你只能走一步算一步，盡量讓自己好運的時候多做點事情，運氣不好的時候索性關上門睡大覺，只求平安渡過。\n\n");
				else
					printf("這個時候，你真的會有不少的怨言了，因為你的運氣好像就從來沒有好過！是呀，好像一直這麼低谷呢，爬都爬不出一個坑的感覺。不知道你是不是應該要好好改變一下自己的思維與性格了呢，多多接觸人，多多讀些書，多多鍛煉身體，慢慢地一天一天改變，你真的會有大變化。到時候，好運也會跟著一起進你的家門的哦。\n\n");

			}
			break;
		case 4:
			return;
			break;
		}
	}
}