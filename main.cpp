﻿#include<iostream>
#include<string>
using namespace std;


int main() {
	//cin
	//1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5
	//check

	string question[31] = {};
	int answer[31] = {};

	question[0] = "5非常同意 4比較同意 3差不多 2一點同意 1不同意";

	question[1] = "1.你做事是一個值得信賴的人嗎？";
	question[2] = "2.你個性溫和嗎？";
	question[3] = "3.你有活力嗎？";
	question[4] = "4.你善解人意嗎？";
	question[5] = "5.你獨立嗎？";
	question[6] = "6.你受人愛戴嗎？";
	question[7] = "7.做事認真且正直嗎？";
	question[8] = "8.你富有同情心嗎？";
	question[9] = "9.你有說服力嗎？";
	question[10] = "10.你大膽嗎？";
	question[11] = "11.你精確嗎？";
	question[12] = "12.你適應能力強嗎？";
	question[13] = "13.你組織能力好嗎？";
	question[14] = "14.你是否積極主動？";
	question[15] = "15.你害羞嗎？";
	question[16] = "16.你強勢嗎？";
	question[17] = "17.你鎮定嗎？";
	question[18] = "18.你勇於學習嗎？";
	question[19] = "19.你反應快嗎？";
	question[20] = "20.你外向嗎？";
	question[21] = "21.你注意細節嗎？";
	question[22] = "22.你愛說話嗎？";
	question[23] = "23.你的協調能力好嗎？";
	question[24] = "24.你勤勞嗎？";
	question[25] = "25.你慷慨嗎？";
	question[26] = "26.你小心翼翼嗎？";
	question[27] = "27.你令人愉快嗎？";
	question[28] = "28.你傳統嗎？";
	question[29] = "29.你親切嗎？";
	question[30] = "30.你工作足夠有效率嗎？";

	answer[1] = 0;
	answer[2] = 0;
	answer[3] = 0;
	answer[4] = 0;
	answer[5] = 0;
	answer[6] = 0;
	answer[7] = 0;
	answer[8] = 0;
	answer[9] = 0;
	answer[10] = 0;
	answer[11] = 0;
	answer[12] = 0;
	answer[13] = 0;
	answer[14] = 0;
	answer[15] = 0;
	answer[16] = 0;
	answer[17] = 0;
	answer[18] = 0;
	answer[19] = 0;
	answer[20] = 0;
	answer[21] = 0;
	answer[22] = 0;
	answer[23] = 0;
	answer[24] = 0;
	answer[25] = 0;
	answer[26] = 0;
	answer[27] = 0;
	answer[28] = 0;
	answer[29] = 0;
	answer[30] = 0;

	cout << "PDP美國經典性格測試，一看便知你是什麼性格的人！" << endl;

	cout << "PDP事業優勢診斷系統(Professional DynaMetricPrograms)是全球涵蓋範圍最廣、精確度最高的，目前知名企業在人才運用上的最佳管理工具。" << endl;
	cout << "PDP測試根據人的天生特質，將人群分為五種類型，包括：支配型、外向型、耐心型、精確型、整合型；為了將這五種類型的個性特質形象化，根據其各自的特點，這五類人群又分別被稱為「老虎」、「孔雀」、「考拉」、「貓頭鷹」、「變色龍」。PDP是一個進行人才管理的專業系統，能夠幫助人們認識與管理自己，幫助組織做到「人盡其才」。" << endl << endl;

	cout << endl << "老虎、孔雀、無尾熊、貓頭鷹與變色龍與領導者，究竟有著怎樣的關係？";
	cout << "個人特質分析系統（Professional Dynametric Programs，簡稱PDP）乃在1978年於美國研究開發，其成果獲得美國南加州大學與科羅拉多大學的發明專利。";
	cout<<endl<<"35年來，該系統已經有8個語言版本在34個國家使用，全球使用人數已超過1600萬人次，5000餘家企業、研究機構與政府組織持續追蹤其有效性。"<<endl;

	cout << endl << endl;
	
	cout << "請回答以下問題" << endl;
	cout << "如果答案是非常同意，請記錄5分；" << endl;
	cout << "如果是比較同意，則記錄4分；" << endl;
	cout << "如果是差不多，記錄3分；" << endl;
	cout << "如果只是有一點同意，請記錄2分；" << endl;
	cout << "如果答案是不同意，就記錄1分。" << endl;
	cout << "＊提醒你注意一點——回答問題時不是依據別人眼中的你來判斷，而是你認為你本質上是不是這樣的！" << endl << endl;
	
	for (int i = 1;i<=30; i++) {
		cout << question[i]<<endl;
		cout << question[0] << endl;
		cin >> answer[i];
		while (answer[i] > 5 or answer[i] < 1) {
			cout << "輸入不符合規範，請再輸入一次" << endl << endl;
			cout << question[i] << endl;
			cin >> answer[i];
		}
			
		cout << endl ;
	}

	int tiger, peacock, koala, owl, chameleon;
	tiger = answer[5] + answer[10] + answer[14] + answer[18] + answer[24] + answer[30];
	peacock = answer[3] + answer[6] + answer[13] + answer[20] + answer[22] + answer[29];
	koala = answer[2] + answer[8] + answer[15] + answer[17] + answer[25] + answer[28];
	owl = answer[1] + answer[7] + answer[11] + answer[16] + answer[21] + answer[26];
	chameleon = answer[4] + answer[9] + answer[12] + answer[19] + answer[23] + answer[27];
	
	cout << "測驗結果:" << endl;
	cout << "老虎" << tiger << endl;
	cout << "孔雀" << peacock << endl;
	cout << "考拉" << koala << endl;
	cout << "貓頭鷹" << owl << endl;
	cout << "變色龍" << chameleon << endl;
	cout << endl << "假若你有某一項分遠遠高於其它四項，你就是典型的這種屬性，假若你有某兩項分大大超過其它三項，你是這兩種動物的綜合；假若你各項分數都比較接近，恭喜你，你是一個面面俱到近似完美性格的人；假若你有某一項分數特別偏低的話，想提高自己就需要在那一種動物屬性的加強上下工夫了。我們就來逐一分析一下各種迥然不同的「動物」吧！";
	
	cout <<endl<<endl<< endl << "老虎型" << endl;
	cout << "個性特點：有自信，夠權威，決斷力高，競爭性強，胸懷大志，喜歡評估。" << endl;
	cout << "企圖心強烈，喜歡冒險，個性積極，競爭力強，有對抗性。" << endl;
	cout<<"優點：善於控制局面並能果斷地作出決定的能力；用這一類型工作方式的人成就非凡。" << endl;
	cout << "缺點：當感到壓力時，這類人就會太重視迅速的完成工作，就容易忽視細節，他們可能不顧自己和別人的情感。由於他們要求過高，加之好勝的天性，有時會成為工作狂。" << endl;
	cout << "老虎型工作風格的主要行為：" << endl;
	cout << "交談時進行直接的目光接觸；" << endl;
	cout << "有目的性且能迅速行動；" << endl;
	cout << "說話快速且具有說服力；" << endl;
	cout << "運用直截了當的實際性語言；" << endl;
	cout << "辦公室掛有日曆、計劃要點。" << endl;
	cout << "老虎泰格，具備高支配型特質，競爭力強、好勝心盛、積極自信，是個有決斷力的組織者。他胸懷大志、勇於冒險、分析敏銳，主動積極且具極為強烈的企圖心，只要認定目標就勇往直前，不畏反抗與攻訐，誓要取得目標的傢伙。" << endl;
	cout << "老虎型領導人都傾向以權威作風來進行決策，當其部屬者除要高度服從外，也要有冒險犯難的勇氣，為其殺敵闖關。" << endl;

	cout << "老虎型族人最適合開創性與改革性的工作，在開拓市場的時代或需要執行改革的環境中，最容易有出色的表現。" << endl;
	cout << "宏碁集團的施振榮和前美國GE總裁韋爾奇(JackWelch)等，都是老虎型領導人。" << endl;
	
			
		//孔雀型
	cout <<endl << endl << "孔雀型" << endl;
	cout << "個性特點：很熱心，夠樂觀，口才流暢，好交朋友，風度翩翩，誠懇熱心。熱情洋溢、好交朋友、口才流暢、個性樂觀、表現欲強。" << endl;
	cout << "優點：此類型的人生性活潑。能夠使人興奮，他們高效地工作，善於建立同盟或搞好關係來實現目標。他們很適合需要當眾表現、引人注目、態度公開的工作。" << endl;
	cout << "缺點：因其跳躍性的思考模式，常無法顧及細節以及對事情的完成執著度" << endl;
	cout << "孔雀型工作風格的主要行為" << endl;
	cout << "運用快速的手勢；" << endl;
	cout << "面部表情特別豐富；" << endl;
	cout << "運用有說服力的語言；" << endl;
	cout << "工作空間裡充滿了各種能鼓舞人心的東西。" << endl;
	cout << "孔雀百利具有高度的表達能力，他的社交能力極強，有流暢無礙的口才和熱情幽默的風度，在團體或社群中容易廣結善緣、建立知名度。孔雀型天生具備樂觀與和善的性格，有真誠的同情心和感染他人的能力，在以團隊合作為主的工作環境中，會有最好的表現。" << endl;

	cout << "孔雀型領導人在任何團體內，都是人緣最好的人和最受歡迎的人，是最能吹起領導號角的人物。當孔雀型領導人的部屬者，除要能樂於在團隊中工作外，還要對其領導謙遜得體，不露鋒、不出頭，把一切成功光華都讓與領導。孔雀型領導人，不宜有個老虎型領導人當二把手或部屬。" << endl;
	cout << "反之，若老虎型領導人有個孔雀型的人甘願當其二把手，則會是最佳搭配。孔雀型的人天生具有鼓吹理想的特質，在推動新思維、執行某種新使命或推廣某項宣傳等任務的工作中，都會有極出色的表現。他們在開發市場或創建產業的工作環境中，最能發揮其所長。" << endl;
	cout << "有台灣企管大師之稱的石滋宜博士，就是屬於孔雀型的人。" << endl;

			
		//考拉型
	cout << endl<<endl << "考拉型" << endl;
	cout << "個性特點：很穩定，夠敦厚，溫和規律，不好衝突。行事穩健、強調平實，有過人的耐力，溫和善良。" << endl;
	cout << "優點：他們對其他人的感情很敏感，這使他們在集體環境中左右逢源。" << endl;
	cout << "缺點：很難堅持自己的觀點和迅速做出決定。一般說來，他們不喜歡面對與同事意見不和的局面，他們不願處理爭執。" << endl;
	cout << "考拉型工作風格的主要行為" << endl;
	cout << "面部表情和藹可親；" << endl;
	cout << "說話慢條斯理，聲音輕柔；" << endl;
	cout << "用贊同型、鼓勵性的語言；" << endl;
	cout << "辦公室里擺有家人的照片。" << endl;
	cout << "無尾熊(考拉)加利具有高度的耐心。他敦厚隨和，行事冷靜自持；生活講求律規但也隨緣從容，面對困境，都能泰然自若。" << endl;
	cout << "無尾熊型領導人，適宜當安定內部的管理工作，在需要專業精密技巧的領域，或在氣氛和諧且不具趕迫時間表等的職場環境中，他們最能發揮所長。當企業的產品穩踞市場時，無尾熊型的企業領導人是極佳的總舵手。但當企業還在開拓市場的時候，老虎型或孔雀型的人似乎較占優勢。" << endl;
	cout << "或許，勇於開疆闢土的老虎型的人當一哥， 配以與人為善的無尾熊型人當二把手，也是好的搭配。無尾熊型**強調無為而治，能與周圍的人和睦相處而不樹敵，是極佳的人事領導者，適宜在企業改革後，為公司和員工重建互信的工作。又由於他們具有高度的耐心性，有能力為企業賺取長遠的利益，或為公司打好永續經營的基礎。" << endl;


		//貓頭鷹型
	cout <<endl << endl << "貓頭鷹型" << endl;
	cout << "個性特點：很傳統，注重細節，條理分明，責任感強，重視紀律。保守、分析力強，精準度高，喜歡把細節條例化，個性拘謹含蓄。" << endl;
	cout << "優點：天生就有愛找出事情真相的習性，因為他們有耐心仔細考察所有的細節並想出合乎邏輯的解決辦法。" << endl;
	cout<<"缺點：把事實和精確度置於感情之前，這會被認為是感情冷漠。在壓力下，有時為了避免做出結論，他們會分析過度。"<< endl;
	cout << "貓頭鷹型工作風格的主要行為" << endl;
	cout << "很少有面部表情；" << endl;
	cout << "動作緩慢；" << endl;
	cout << "使用精確的語言、注意特殊細節；" << endl;
	cout << "辦公室里掛有圖表、統計數字等。" << endl;
	cout << "貓頭鷹斯諾具有高度精確的能力，其行事風格，重規則輕情感，事事以規則為準繩，並以之為主導思想。他性格內斂、善於以數字或規條為表達工具而不大擅長以語言來溝通情感或向同事和部屬等作指示。他行事講究條理分明、守紀律重承諾，是個完美主義者" << endl;
	cout << "架構穩定和制度健全的組織最好聘用貓頭鷹型的人來當各級領導人，因為貓頭鷹型領導人喜歡在安全架構的環境中工作，且其表現也會最好。其行事講究制度化，事事求依據和規律的習性，極為適合事務機構的行事方式。然而，當企業需要進行目標重整、結構重組、流程變革時，貓頭鷹型領導人就會產生迷失，不知如何處事，也不知如何自處。對改革行動，上者會先保持觀望的態度，再慢慢適應新的局面；中者也會先保持觀望的態度，然後呈辭求去；下者則會結集反對力量，公然表示反對或隱晦地從事反對等的行為。" << endl;
	cout << "v又由於貓頭鷹型人的行事決策風格，是以數據和規則為其主導思想，其直覺能力和應變能力都偏低，隨而創造和創新能力也相對地弱，因而不宜擔任需要創建或創新能力的任務。組織完善和發展安定的企業，宜用貓頭鷹型企管人當家。" << endl;
	cout << "他們尊重傳統、重視架構、事事求據喜愛工作安定的性格，是企業安定力量的來源。然而，由於他們行事講究制度化，事事求依據和規律，故會將細節條例化，事事檢查以求正確無誤，甚至為了辦事精確，不惜對人吹毛求疵或挑剔別人的錯誤，以顯現自己一切照章辦事的態度和求取完美的精神，不易維持團隊內的團結精神和凝聚力。" << endl;


		//變色龍型
	cout << endl << endl <<"變色龍型" << endl;
	cout << "工作風格的優點：善於在工作中調整自己的角色去適應環境，具有很好的溝通能力。" << endl;
	cout << "缺點：從別人眼中看變色龍族群，會覺得他們較無個性及原則。" << endl;
	cout << "主要行為：" << endl;
	cout << "綜合老虎、孔雀、考拉、貓頭鷹的特質，看似沒有凸出個性，但擅長整合內外資；" << endl;
	cout << "沒有強烈的個人意識形態，是他們處事的價值觀。" << endl;
	cout << "變色龍科爾具有高度的應變能力。他性格善變，處事極具彈性，能為了適應環境的要求而調整其決定甚至信念。" << endl;
	cout << "變色龍型的領導人，是支配型、表達型、耐心型、精確型四種特質的綜合體，沒有突出的個性，擅長整合內外信息，兼容並蓄，不會與人為敵，以中庸之道處世。他們處事圓融，彈性極強，處事處處留有餘地，行事絕對不會走偏鋒極端，是一個辦事讓你放心的人物。然而，由於他們以善變為其專長，故做人不會有什麼立場或原則，也不會對任何人有效忠的意向，是個馮道式的人物。部屬會難以忍受其善變和不講原則的行為；當他們上司者，則會日夜擔心不知何時會遭其「出賣」。" << endl;
	cout << "變色龍型的領導人既沒有凸出的個性，對事也沒有什麼強烈的個人意識型態，事事求中立並傾向站在沒有立場的位置，故在衝突的環境中，是個能遊走折中的高手。由於他們能密切地融合於各種環境中，他們可以為企業進行對內對外的各種交涉，只要任務確實和目標清楚，他們都能恰如其分地完成其任務。" << endl;
						
						
		//領導人類型應對
	cout << endl<<endl<<endl << "那麼，各種類型的領導者是什麼樣的？下屬又該怎麼與之相處呢？接著往下讀吧！" << endl;
	cout << "老虎型領導者：果敢的管理者" << endl;
	cout << "老虎型老闆辦事雷厲風行，管理風格多屬於「抓大放小」型，不過，有時候他們比轎容易衝動，情緒變化比轎大，同時，他們厭惡拐彎抹角合浮於表面的逢迎。" << endl;
	cout << "應對寶典：" << endl;
	cout << "1、擺脫「恐懼感」。在這種類型的老闆手下工作，頗有「伴君如伴虎」的戰戰兢兢。不過，他們通常對事不對人，平等的與他交往，主動與他交流工作中的問題，是與老虎型老闆交往的要訣。" << endl;
	cout << "2、高度追求節果。老虎型老闆非常注重工作的節果，當工作出現問題時，跟他解釋原因是沒有意義的。所以，制定周密的工作計劃甚至做兩套以上的方案，果斷地處理突發問題（甚至採取非常規的方法）以保證實現預定目標，才是「老虎」的好職員。" << endl;
	cout << "3、高度冒險精神，有意見單獨談。由於具有權威性人格，當其部屬除要高度服從外，也要有冒險犯難的勇氣，為其殺敵闖關。老虎型老闆不喜歡有人當面與他對著幹，當然，這並不是說唯唯諾諾就好——因為「老虎」在骨子裡面是喜歡有獨立見解的屬下的。所以，當「老虎」說話時，你要做的是傾聽。如果確實與他意見存在轎大分歧的話，不妨選一個單獨見面的機會開誠布公地告訴他你的意見。" << endl;
						
	cout <<endl<<endl<< "孔雀型領導者：優雅的管理者" << endl;
	cout << "孔雀型老闆的樂觀合卓越的交際能力令人刮目相看，他喜歡未雨愁繆，帶領團隊齊上陣，所以他很少被一個項目搞的灰頭土臉，他的問題在於有時太「假」。" << endl;
	cout << "應對寶典：" << endl;
	cout << "1、不要搶他的風頭。除要能樂於在團隊中工作外，還要對其領導謙遜疵體，不露鋒、不出頭，孔雀型老闆喜歡萬眾矚目的感覺，所以在參加各種活動時，一定掌握好分寸，不要搶他的風頭，不可在言語合行為上「搶鏡頭」，不失時機地附合他，把一切成功光華都讓與他。讓他感到面子十足是需要你默念的口訣。" << endl;
	cout << "2、他的「肺腑之言」別當真。孔雀型老闆一貫待人廊情，但很多時候這種表示可能只是出於職業習慣，尤其在與他「推心置腹」交流時不要忘記要有所保留，雖然我們說過孔雀型老闆並非華而不實，但是，他們的確具有「另外一面」。這是你不得不考慮的一點。" << endl;
	cout << "3、該開口時就開口。孔雀型老闆是「言勝於行」的典型代表，也許這並非都出以本意，但是在一些關係切身利益的問題上，員工一定要學會該開口時就開口主動提出自己的要求，在孔雀型老闆的手下工作，很多人都會被他所營造的溫暖氛圍所籠罩，以至於「抹不開臉」提薪酬或晉升等問題，但是只要多了解這些老闆的性格，你就會發覺，這樣做不明智的。" << endl;
						
	cout <<endl << endl << "考拉型領導者：本色的管理者" << endl;
	cout << "考拉型老闆具有孩子氣的一面，不過，對於工作他們是認真合負責的。他們的問題在於有時勇氣合敏銳度不足。" << endl;
	cout << "應對寶典：" << endl;
	cout << "1、真誠是第一要旨。考拉型老闆在挑選員工時可能更看重人品這一項，他喜歡簡單，所以在組建自己的團隊時，他會有意識地選擇「氣味相投」的人。能夠真誠地提出建議，責任心比轎強的員工會得到他的欣賞，這樣，與無尾熊相處時，你禁可以表現出你隱藏已久的「本色」來。" << endl;
	cout << "2、進取心強者有更大的發展空間。由於自身的個性原因，考拉型老闆也喜歡有不同於自己的員工加入進來，這樣，事業心強、更具進取心的員工常常會得到他的倚重。因此，如果你是這樣的人，只要你能在工作上獨當一面，他都不會在意，從這點上來講，他是實行「兼容並蓄」的。" << endl;
	cout << "3、對酬勞合晉升，你得比他更主動。與孔雀型老闆不同，考拉型老闆對員工的表現往往心知肚明，通常他們也會給予適時的肯定合表彰，但是，當你覺得有必要提出更高的報酬要求希望爭取職位時，你最好還是直接告訴他，就如上面所說的一樣，有時候他們過於孩子氣，可能對員工的需求並不完全明白。" << endl;
						
	cout <<endl<<endl<<"貓頭鷹型領導者：嚴謹的管理者" << endl;
	cout << "有工作狂傾向的貓頭鷹型老闆，跟工作親密如戀人，他們對決定的事堅決執行不論遇到什麼挫折都能堅持到底，不過，他們過於嚴謹的個性，會使員工感到難以親近。" << endl;
	cout << "應對寶典：" << endl;
	cout << "1、恐怕你不得不加班了。對貓頭鷹型老闆而言，加班是再自然不過的事情了，所以做他的手下，恐怕也難逃「厄運」了，要說服從他不加班幾乎是不可能的事情，所以，如果你實在是不想加班，那麼最好的方法是：禁快做好你手頭茨事情，並且記清楚要提交給他的事務的詳情，下班前做好交接，保持手機開機。" << endl;
	cout << "2、勝在執行。貓頭鷹型老闆以高度務實著名，所以，要成為他眼中的好職員，首先是努力工作、認真、徹底的執行既定的計劃，理性的貓頭鷹會冷靜的觀察，以員工的工作能力合表現而不是言語來作出評價，踏實是他們最為看重的一項品質。" << endl;
	cout << "3、做到遵規守紀。也許沒有哪個老闆像貓頭鷹先生這樣紀律嚴明，不要跟他分辨說現在很過公司都可以SOHO辦公了，所以遲到早退沒有多麼嚴重，也不要向他抱怨公司的工作流程有問題——他會反駁你說：如果這樣那為什麼公司還要設計行政制度？他會把這些看作一個人所具有的品質之一，因為在他看來，一個人只有時時處處嚴格要求自己，才是一個出色的人。" << endl;
						
	cout << endl <<endl<< "變色龍型領導者：圓融的管理者" << endl;
	cout << "變色龍型老闆共同特徵為適應力及彈性都相當強，擅於整合內外資源，兼容並蓄，以合理化及中庸之道來待人處事。" << endl;
	cout << "應對寶典：" << endl;
	cout << "1、不妨韜晦。與無尾熊型老闆不同，變色龍型老闆不太喜歡鋒芒太露的員工，他欣賞中庸平合之道，因此，不要建議他加快企業發展的步伐或者投資那些高風險高回報的項目，因為他從未將事業發展看得那麼重——能做到中等規模就很好了。" << endl;
	cout << "2、保持同步。變色龍型老闆沒有明確茨預定立場，不走極端，柔軟性高，更能隨機應變。良好的應變能力，時刻保持與他同步距離員工，更能與他相處融洽。"<< endl;
	cout << "3、做事謹慎，堅定目標。與貓頭膺型老闆不同，變色龍型老闆處事圓融，是團隊中良好的潤滑劑，由於他是四種動物的綜合體，辦事有點優柔寡斷，重大事情要做決定時，變色龍對事求中立沒有堅定的立場，這時，需要員工堅定自已的選擇，讓老闆放心。" << endl;



	cout << endl << endl;

		system("pause");

}
/*測試結果：tiger老虎
孔雀
考拉
貓頭鷹
變色龍
peacock
Koala
owl
chameleon
第5、10、14、18、24、30題的分加起來就是你的「老虎」分數；
第3、6、13、20、22、29題的分加起來就是你的「孔雀」分數；
第2、8、15、17、25、28題的分加起來就是你的「考拉」分數；
第1、7、11、16、21、26題的分加起來就是你的「貓頭鷹」分數；
第4、9、12、19、23、27題的分加起來就是你的「變色龍」分數。


假若你有某一項分遠遠高於其它四項，你就是典型的這種屬性，假若你有某兩項分大大超過其它三項，你是這兩種動物的綜合；假若你各項分數都比較接近，恭喜你，你是一個面面俱到近似完美性格的人；假若你有某一項分數特別偏低的話，想提高自己就需要在那一種動物屬性的加強上下工夫了。

我們就來逐一分析一下各種迥然不同的「動物」吧！


*/