#ifndef _MODEL_H
#define _MODEL_H

#include "definitions.h"
#include "stdint.h"


#define CLASSIFY_FFT_W 400
#define CLASSIFY_FFT_D 4
#define CLASSIFY_FFT_N 3

const uint8_t CLASSES[] = { RED, GREEN, BLUE };

const float TEMPLATES[][CLASSIFY_FFT_N] = {
    {1.6440478433025387, -0.2597102612829352, -0.7810165042920804f},
    {2.7452616337415376, -3.0382594711639617, 1.2682786828722663f},
    {3.69127485706366, -2.7443432560585794, -0.44840886935115964f},
};

#define THRESHOLD 0.73f

const float WEIGHTS[][CLASSIFY_FFT_N] = {
	{-0.0030270753478430037f, -0.0024818169382027164f, 0.005369979286418648f},
	{-0.01527664999493765f, -0.006206484681928966f, 0.00027785170385159584f},
	{-0.003443992704805346f, -0.006111483759117099f, 0.0028396432356579894f},
	{-0.009356303150769836f, -0.004095249311647302f, 0.003954698627727348f},
	{-0.005372974919763645f, 0.0013145389502550273f, 0.002986679471545985f},
	{-0.0050841994724439895f, -5.480886325961987e-05f, -0.00034312827106438535f},
	{-0.0021910686787817253f, -0.0012439722433397128f, -0.002948697018514235f},
	{-0.00302882267565548f, 0.00025267447907597137f, -0.0011812025383716189f},
	{-0.0076636557915343f, 0.0013548303906647365f, 0.0006233207338607992f},
	{-0.0032887090083973287f, 0.004276172760488921f, -0.005417137070192632f},
	{0.003043426609642979f, -0.00516566787250716f, 0.002588700377845833f},
	{-0.001593935133427447f, 0.004768175793860539f, 0.0018422445561304904f},
	{0.004049772417038963f, -0.0032798266541737764f, -0.0003698101940876126f},
	{0.005275732325615061f, 0.004026624841838732f, -0.0039019993674081154f},
	{-0.0027111067645082068f, 0.0025844949961284793f, -0.0002651536764456643f},
	{-0.0024919130057953786f, -0.0012676859518613221f, 0.0044239166408056325f},
	{-2.123622177317205e-05f, -0.0004247213898015733f, -0.003033906870721235f},
	{-0.004390405399290347f, -0.005278656166761389f, -0.002286449203307207f},
	{0.00847351606115199f, -0.004283344446177824f, 0.00513036059738168f},
	{0.0020089888980529685f, -0.003117269821198967f, -0.005887637168171318f},
	{0.006777186634033371f, 3.731568121295682e-05f, -0.00029121761440278714f},
	{-0.0024620065927593035f, -0.002335744069220999f, -0.00038393987008801365f},
	{0.002288016051183218f, -0.006085192040748037f, 0.002141509829208718f},
	{-0.005949972033617654f, 0.0026917053991346277f, 0.005143498844474509f},
	{0.0009942363668157335f, -0.002175100790606079f, -0.0019658015430142014f},
	{0.004729478929660977f, 0.004214618127305284f, -0.009205193630850983f},
	{-0.004626315753737866f, -0.0031513812505123656f, 0.004794870629904732f},
	{0.003255141058941072f, 0.0006460213492723107f, -0.002019543724863194f},
	{0.003802973214427204f, 0.00990906043992422f, -0.014467072613329133f},
	{0.004153390418459383f, 0.0009434048225387427f, -0.00829269117379141f},
	{0.003817140290082569f, 0.003791745721403371f, 0.0016090104347017012f},
	{-0.005733414645883277f, 0.0010246914579589113f, -0.0011083223080700336f},
	{0.003198166844266942f, 0.004227016381695676f, -0.004729736884651346f},
	{0.003665216868638708f, 0.010464165127212105f, -0.005456169811957114f},
	{-0.00611302711123523f, -0.02024586394536053f, 0.005258451488404011f},
	{0.007119961313963112f, -0.0024882507042729416f, -0.0014949703915424634f},
	{0.004579377810030493f, -0.00857681035858774f, 0.0074929374873481105f},
	{-0.0005981214847682849f, -0.007178976795841452f, 0.0010603461755216048f},
	{-0.003552673257031308f, -0.003596295061290341f, 0.002671215837453293f},
	{0.0005957250713560544f, -0.017118207995480746f, 0.008730291936242173f},
	{-0.0037153680875645968f, -0.009567974981535304f, 0.012341879455294361f},
	{-0.008297903937671911f, -0.004091093534409546f, 0.009726009569534785f},
	{-0.0016235810475480237f, -0.0035069661816565867f, 0.003657087452778807f},
	{0.009522482510400354f, 0.0050138728115707515f, -0.01680752707718948f},
	{0.004762534333061167f, 0.004855322111008766f, -0.003992509417922527f},
	{-0.002483417682139045f, 0.0020478046906567964f, -0.0059939330677324255f},
	{0.001351847529309014f, -0.008246829017688305f, 0.0013402953394551153f},
	{0.00022596208459748387f, 0.0011388141772647321f, -0.004606273098307199f},
	{0.002412040012497862f, 0.005540306193950778f, -0.0047275566262229346f},
	{0.0007364032085485742f, 0.010354125547512803f, -0.0014894449422965777f},
	{0.005964905094295884f, -0.012235373011698488f, -0.002739481450285149f},
	{-0.006491407790576971f, -0.0014031685856563106f, 0.01077308005941462f},
	{0.00734072348947317f, -0.002205936548886777f, 0.002314540446997605f},
	{0.007020907386161163f, 0.0029582366627487655f, -0.0077821287683506254f},
	{0.0006573066534151463f, 0.008322941720937197f, -0.004532475042790769f},
	{-0.0008015551715262596f, -0.0005307267717494541f, 0.0031237827865741408f},
	{0.0013513993893143573f, 0.006842130002839517f, -9.654901646369413e-06f},
	{0.007964733631487446f, -0.004540567432557223f, 0.0013724884170665291f},
	{0.0035055757647244863f, -0.0037365499298145774f, -0.0017484909378127729f},
	{-0.008817094202216179f, 0.007657144746652105f, 0.008424829271206725f},
	{0.012977259986507193f, -0.005367767884143467f, -0.003739721701539129f},
	{0.0009709277707532553f, -0.006880457168300064f, 0.007855947001321122f},
	{-0.005968531517151447f, -0.0017920165660012706f, 0.0035037633334914085f},
	{0.011730768890991287f, 0.0014769899487071334f, -0.007909155308884306f},
	{-0.0038943501511263423f, -0.012115457958909993f, 0.013269169328743115f},
	{-0.008606404824246738f, 0.004279220205513405f, -0.0034936143566895363f},
	{-0.004444564973866005f, 0.0028578423208592617f, 0.004246929839546095f},
	{0.0050047416009151155f, -0.0015628473592220124f, 0.0004890333139321754f},
	{0.005001783389770679f, -0.0007059700593247943f, -0.0038807445843730007f},
	{0.0009754960739296978f, -0.0021388746377918135f, -0.0025606042082133907f},
	{-5.942142321785028e-05f, -0.005327860961657433f, -0.0023933464740092053f},
	{0.00586736778732404f, -0.005785036770548178f, -0.005635982188705277f},
	{0.0022216673159953667f, 0.00592309510784245f, -0.011908483572914099f},
	{0.0065748204291894655f, 0.0009303319958839424f, -0.001886949444521906f},
	{-0.006414837963463778f, -0.007044368837306022f, 0.007054271638303351f},
	{0.002648450150461415f, -0.009296667953717126f, 0.0036657391652746437f},
	{-0.004114827911213909f, -0.0071202279513097495f, 0.001319090347419162f},
	{-0.00444003679478765f, -0.010814408724776133f, 0.005700646227287012f},
	{0.0024381341910444f, 0.0008786238427056607f, 0.005946700990969961f},
	{0.009572093988553132f, -0.007706542871241236f, 0.0071524212885266236f},
	{0.005518997388885317f, -0.007679905327828232f, 0.004219935884741881f},
	{-0.0021920021587835984f, -0.011546929317708688f, -0.00025998982166439014f},
	{0.00539749028412779f, -0.005064720804740535f, 0.005813817515308608f},
	{-0.0028540962831330695f, -0.00577719242057838f, 0.00043392782797542956f},
	{0.009028215967858173f, -0.00709046733394535f, 0.0014386409962203752f},
	{0.0005230251776490813f, -0.001521368105373019f, 0.009871230626556326f},
	{0.001978698543578833f, -0.004194436676873903f, 0.008749215772249139f},
	{0.0010619838376239527f, 0.0007685855633420838f, 0.001896727144070301f},
	{-0.005479235452071474f, -0.0010798659905728778f, 0.0067365528558699945f},
	{0.011474163897475397f, 0.0017939444345868008f, 0.010654299731891212f},
	{-0.002628127034348677f, -0.0005817288772375808f, 0.008529115558730819f},
	{0.005215765013179707f, -0.01154437044671918f, 0.0020544956303310585f},
	{0.00383653508664436f, -0.010530390897411762f, -0.0054336161341213066f},
	{0.00033504135027279125f, 0.0034128622267070863f, -0.009262926285351247f},
	{0.010781764177371622f, 0.007088371189003362f, -0.007788312217382663f},
	{0.013729315883233383f, -0.003111658478387344f, -0.00042987781718442663f},
	{0.014546494144917932f, -0.01003733369019236f, -0.005909966319329542f},
	{0.012770607563031567f, -0.014488222123887774f, 0.0051598704617001785f},
	{0.016236291075306598f, -0.010559384641614555f, -0.004935057005886471f},
	{0.002868400095812081f, -0.00023726681376680638f, 0.0039132803026322325f},
};

#endif