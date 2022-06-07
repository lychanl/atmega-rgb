#ifndef _TEST_DATA_H
#define _TEST_DATA_H

#include "complex.h"


int TEST_DATA_RATE = 2000;

// only first 450 to preserve the memory, the rest of the fft is symmetric and not needed
complex TEST_DATA[] = {
    {-1611.0f, -0.0f},
	{2034.8522017124342f, -11510.31032737057f},
	{-15485.917202451157f, -15311.245589385322f},
	{-2668.7550511439977f, 15527.366716637138f},
	{-10840.088015876787f, -4815.318954754367f},
	{-8982.280173495348f, 17539.94860515912f},
	{10040.145123260088f, -512.8329411021477f},
	{-8610.429383972532f, 1530.492952092738f},
	{4518.562165786956f, 2850.367044268081f},
	{-9362.177742036103f, -3142.7279660225317f},
	{5926.039210269688f, -730.2057541798886f},
	{-9292.729786576288f, -2439.624490790354f},
	{-4021.226832551333f, 10269.938041267822f},
	{-3262.5752882615875f, -1703.7864455149997f},
	{-10269.6662656351f, -109.80277818647801f},
	{10313.748345116617f, -12339.010855138771f},
	{-8543.367897618304f, 7779.0431969746505f},
	{7485.87702217695f, 1916.3819684897567f},
	{-3790.6298393722345f, -1712.614650500932f},
	{5478.235235919137f, -193.26663103989813f},
	{-14689.658353925626f, 10503.128251721226f},
	{4422.769154858752f, 7832.154109626069f},
	{3251.6940934360177f, -5273.450515675753f},
	{-1176.6501849377155f, 758.8370694646237f},
	{-77.29947960848949f, -10654.786011740414f},
	{-4154.342428526994f, 5804.834054319033f},
	{5690.650250969055f, -4028.501658865516f},
	{-11038.558539783626f, 2387.9833132616377f},
	{6528.0543614147555f, 10931.755124263334f},
	{5849.605262753255f, -3713.1006789080566f},
	{5474.0856840207325f, -3329.635206809593f},
	{-13495.509894524377f, -10848.744158978978f},
	{-7908.495671297356f, 18710.794490499666f},
	{12242.1454217229f, 2756.4081575604414f},
	{7076.5182346814945f, 1973.8465363415062f},
	{4960.245635982583f, -17385.699474859106f},
	{-16345.088063829564f, 1436.1866649472013f},
	{-1659.0018708500666f, 4182.462941283768f},
	{-8462.953917056475f, 8211.24634375562f},
	{10319.478096255314f, 7464.716397613001f},
	{-154.9736556337998f, -3126.6758914210586f},
	{1942.5754256313176f, 1214.4675568087005f},
	{-395.74227767798766f, -7845.264148723161f},
	{-6406.053831901879f, 2594.6154772166137f},
	{3667.493400700141f, -2465.7435651631f},
	{-2565.8519116983134f, 699.0543043064463f},
	{-283.3590020816937f, -3072.0720381543942f},
	{-6185.40264214203f, 1065.2267162912322f},
	{3387.6797343379876f, 10963.786934709773f},
	{-920.7417987134536f, -2260.296179005927f},
	{634.1855930638849f, 3250.9123119034575f},
	{4778.18432650754f, -2460.221881476791f},
	{507.6737374973545f, 516.9480408556647f},
	{4747.072776890485f, -6371.9134538741f},
	{-5223.8657275565365f, 321.8753578993483f},
	{6775.878145256436f, -4279.683046320372f},
	{-9315.49892441872f, 3040.935647520658f},
	{5544.3619832639215f, 8176.14968982155f},
	{-6220.5217003482885f, -6334.466753463519f},
	{-1804.440779516206f, 5809.106921923667f},
	{2174.4449107235178f, -7030.574185056712f},
	{-6322.200343973964f, 3929.999431044984f},
	{2537.1924267969443f, 6474.287603793167f},
	{9736.577021682115f, -1170.2440983412198f},
	{5701.973938884621f, -10460.470088069422f},
	{-12226.926881461823f, -7538.986662178189f},
	{719.4442040199356f, 12226.207054843275f},
	{4018.576061677293f, 74.72816471681654f},
	{4274.533047426145f, 890.4655997437876f},
	{1523.0376764321663f, -5409.694860144007f},
	{4192.132613181322f, 3185.6971528026806f},
	{-4667.882138003479f, -5534.9101479975725f},
	{-2909.9553743909637f, 14536.286139680364f},
	{9424.282607787049f, 7054.1623669772425f},
	{8860.352494987488f, 3502.9304810071844f},
	{-1575.3163723747493f, -17533.719272569168f},
	{-2779.416102032581f, -5335.760293376854f},
	{-7295.360303230322f, -5519.268540529527f},
	{-10241.125634156362f, 10498.171789302723f},
	{-2341.711408287729f, -4330.4920581827f},
	{-6281.132401792764f, 13021.992087883433f},
	{13360.27558337607f, 9016.705825970323f},
	{10657.949548803204f, -20430.805966938602f},
	{-3113.5072372222603f, -9507.454557080044f},
	{-4199.980323770349f, -3781.1034310313307f},
	{-3890.0617417906833f, 494.1586745967352f},
	{-1117.0102509358967f, 8442.322937065344f},
	{6326.403255864316f, -6801.818327882862f},
	{-15616.07782750374f, 8845.558449362325f},
	{29996.511825910326f, 6185.805640347604f},
	{-13605.353339373361f, -34507.50758103591f},
	{9930.562414913007f, 26636.285156390404f},
	{275.9394181552177f, -40504.6280827049f},
	{-26104.97791284808f, 33289.37867112203f},
	{28198.3765673737f, 1244.0626895075748f},
	{8814.894767854908f, -11143.797556065525f},
	{-27369.55766556615f, -22828.034462483083f},
	{6739.320816532932f, 59513.35420789407f},
	{44149.469533956915f, -63523.25612926734f},
	{-76785.78103309957f, 4417.198597735019f},
	{35428.539751281394f, 46894.13129911149f},
	{26434.161713265956f, -25785.44419258782f},
	{-29428.411839301833f, -42722.79113882673f},
	{-48316.55872977573f, 57436.06837073761f},
	{81498.31708079217f, 27114.802321936644f},
	{1113.003845184176f, -75505.69168204954f},
	{-56044.59363188206f, 6638.729761189371f},
	{9783.164281356243f, 53930.564066444655f},
	{63397.936063026864f, -9739.008122058982f},
	{-13636.847712640225f, -79098.30598082498f},
	{-93782.29875822173f, 16588.68004295409f},
	{20462.1739762738f, 106097.16184437464f},
	{114652.82087632107f, -14427.485242305556f},
	{-335.8940084197211f, -121199.51121375435f},
	{-134282.66415112413f, -5198.548068336853f},
	{-5089.635868104511f, 137727.16235514815f},
	{135948.4287310923f, 22442.351095786915f},
	{66402.15152160614f, -139061.52051025417f},
	{-151808.5070531854f, -126018.4077860782f},
	{-187532.2782448216f, 150957.79358318893f},
	{122998.47965342188f, 252637.18746953824f},
	{322455.37204653583f, -62946.00607888171f},
	{13366.126757938095f, -392763.5700957627f},
	{-446366.155932262f, -87134.58216502839f},
	{-151668.2452816635f, 454878.70666903094f},
	{391671.7238462664f, 227548.35277708457f},
	{325633.9749773969f, -267699.29954613117f},
	{-125950.58883750878f, -397247.10693571816f},
	{-380693.43180337804f, -22560.545951778477f},
	{-148868.95116079765f, 274290.89889176533f},
	{120188.60364649318f, 215457.39723741385f},
	{186702.08104457636f, 30934.28929474523f},
	{114084.18466454482f, -93714.33844297612f},
	{13403.403187927877f, -112581.25991996171f},
	{-50550.87607981884f, -78990.62941954081f},
	{-78495.22560143637f, -22205.507884208793f},
	{-62045.38661418701f, 32222.948956467182f},
	{-14443.77691336773f, 56610.18684204339f},
	{21163.163500620813f, 31150.47506859466f},
	{19277.654596818116f, 9958.26518757203f},
	{16386.113052442844f, -1533.9832295628835f},
	{11660.683138375092f, -1473.330174701653f},
	{14546.690265858853f, -7861.40414466589f},
	{-315.05303446270545f, -14553.267713011182f},
	{1925.2759311766713f, -5316.252806067496f},
	{-8029.055590841971f, -13552.891826642452f},
	{-6103.175225786905f, 4122.994203146401f},
	{-7466.742350715981f, -5124.960690292752f},
	{-5495.331754092944f, 13792.530497744012f},
	{7164.181979531972f, 419.54233570500946f},
	{-3916.47220291575f, 4354.568641160713f},
	{11979.908714379762f, 4049.515108365517f},
	{2960.0386300103505f, -14506.433278010878f},
	{-2311.683424348257f, -9056.709348711775f},
	{-14163.699975360489f, -12002.479333756026f},
	{-15874.888254787915f, 13590.047260723539f},
	{-4066.1196063839343f, 5090.999800664935f},
	{-9321.423786667183f, 26792.81930617871f},
	{30405.645731654076f, 17509.306368174122f},
	{16233.93968830966f, -10001.242272883475f},
	{19443.663705951592f, -8434.307115626283f},
	{854.9929660153034f, -33184.5411241088f},
	{-19263.044885326814f, -6285.889225753204f},
	{-4488.7646478007955f, -9841.781167889374f},
	{-26111.908819355893f, -1806.0608778367891f},
	{2208.3275771421813f, 12953.249375546697f},
	{-16936.71192041764f, -4687.933709900988f},
	{-3158.7864148269673f, 37624.23750355438f},
	{22072.58548854538f, -10339.038068792945f},
	{-13581.068706107666f, 19843.7446442723f},
	{41237.87817237424f, -3319.1339377199f},
	{-22393.181492515843f, -13086.663549984134f},
	{28282.421178448996f, 16240.59066459306f},
	{471.26755016588413f, -38734.25561148241f},
	{-13076.916335757141f, 2862.4291905754017f},
	{5357.1602337397935f, -6436.101260027967f},
	{-17484.13911100642f, -22234.30261467518f},
	{-29860.798137896607f, 28169.24310158599f},
	{25101.451721343892f, 853.392138095503f},
	{-38324.18013374383f, 8863.292524739227f},
	{44114.572035510544f, 38256.87304277747f},
	{-360.8638918303832f, -42229.33603586904f},
	{-4557.044404520791f, 32130.896461363587f},
	{35699.774584488216f, -19524.337935243897f},
	{-22584.734213369076f, -24534.80628659933f},
	{-8117.48373608464f, 19554.439095460297f},
	{11705.308783446759f, -9692.601282699263f},
	{-14271.673531170381f, -6124.26856084965f},
	{-5816.688376337528f, 9445.522166828861f},
	{14990.74842932674f, 8815.123721877857f},
	{-2650.23458188508f, -22648.336904561816f},
	{-20881.73306215489f, 20911.96247914419f},
	{37899.29459972726f, 5832.630218454301f},
	{-8695.223182359416f, -44211.22812419417f},
	{-45456.08512745812f, 17535.29856436182f},
	{32339.78397904468f, 39195.538803316085f},
	{10489.689482501017f, -55237.19493289446f},
	{-68043.55215133599f, 44440.47922026181f},
	{81360.02106712185f, 53971.18298406778f},
	{34900.052701570676f, -78814.37282855829f},
	{-62865.02272243808f, -28073.613291681166f},
	{-462.9492691622545f, 58702.87416040728f},
	{50963.55436613616f, -48474.276904801714f},
	{-86186.41712191008f, -34896.56154770161f},
	{-12498.570241903737f, 92247.2129967475f},
	{72640.59156239373f, -4314.705535328335f},
	{-15057.355852234916f, -52294.618734537326f},
	{-44454.30946976146f, 27074.782955990624f},
	{47208.992084520905f, 43323.268772656265f},
	{33978.62700628652f, -64509.40896756237f},
	{-65113.35970561958f, -17119.589310688643f},
	{-21009.995039850834f, 58428.494861572166f},
	{64569.794875859654f, 28606.623070648217f},
	{26111.013143193617f, -73379.4839897182f},
	{-70561.88416046987f, -7409.18854501853f},
	{17638.403485473784f, 60216.45816818248f},
	{55155.61136426749f, -49613.20584166403f},
	{-69759.57632427689f, -50663.32362301044f},
	{-46120.62635245803f, 65603.78176371582f},
	{37020.13699832512f, 42340.35786513881f},
	{37235.58817879816f, -7101.2604163866845f},
	{5511.264279802314f, -34518.72071786842f},
	{-35087.25207220769f, 4664.021166851891f},
	{25742.671999260307f, 41108.54751376328f},
	{50919.87385412952f, -40921.05812207342f},
	{-29302.98594156938f, -58515.79631349144f},
	{-62113.8916792557f, 7707.675006980831f},
	{-9445.522464910398f, 55040.2757113613f},
	{39022.319169278344f, 11619.647072316402f},
	{10036.060994718317f, -27780.447938695117f},
	{-34226.00651906506f, -20674.86018979325f},
	{-40385.88201444312f, 57234.424390874876f},
	{81595.96363238237f, 60911.0509826921f},
	{74133.00963639093f, -85572.47545814727f},
	{-69109.19885871807f, -81806.7920608599f},
	{-91484.95042200916f, 43739.35799017233f},
	{28407.71633200116f, 101887.94054626665f},
	{102657.72957744446f, -25609.922164498283f},
	{-21724.86591675461f, -95314.36872559381f},
	{-84689.43875160233f, 12081.637962958124f},
	{2844.4339948524753f, 74409.2096498794f},
	{59052.95845478661f, 7708.699171973356f},
	{23371.97919546283f, -35668.34796543463f},
	{-12338.020686305445f, -42982.078318285196f},
	{-59987.51419883736f, -14354.417380085686f},
	{-42885.47952367384f, 70392.64353439985f},
	{63817.336501242615f, 64103.69040706937f},
	{75824.70187608784f, -34098.63600622838f},
	{12166.345024304803f, -79784.8910365001f},
	{-74649.87871639317f, -56219.20182662546f},
	{-81156.49752879562f, 56509.74530720946f},
	{17008.66928814584f, 83000.50534544968f},
	{78612.15681547015f, 35841.01175464524f},
	{71729.83600843963f, -69085.05474854159f},
	{-36205.86697015111f, -80340.65190062737f},
	{-69080.30108773886f, -17472.64496056435f},
	{-73935.06260302477f, 41685.816479498f},
	{-897.5887492385141f, 103798.66882346208f},
	{96518.71267442552f, 55801.741731592265f},
	{90679.86016034512f, -56497.1733990771f},
	{15460.021073918164f, -83737.09847156602f},
	{-56683.96234754002f, -110352.4206181678f},
	{-163042.53200854477f, 43692.73424002721f},
	{20761.377128967797f, 123459.24487744455f},
	{47377.80295905584f, 42800.66284921513f},
	{90503.3224200327f, -5927.058943013988f},
	{10165.254041575732f, -80642.36465081247f},
	{-42689.853969056654f, -18733.645700569505f},
	{-13110.395484859933f, 4564.324637142618f},
	{-21183.143674797142f, -3564.9406819442192f},
	{-11986.97543613179f, 31696.51040609363f},
	{24231.83507966045f, 9492.914884786544f},
	{3994.435821385746f, -9320.477166400335f},
	{-923.2839428709099f, -3212.4419853357904f},
	{330.67051109817476f, 8046.460640851665f},
	{12230.573960866534f, -11675.05628616457f},
	{-17035.603664349845f, -4507.696697230878f},
	{6997.641769209358f, 11719.575586074538f},
	{1284.112689015063f, -10194.784660379957f},
	{-3083.295019750073f, -716.425286448085f},
	{-3498.5085417275964f, -2735.607392921699f},
	{-2413.242541185504f, 53.75592972229424f},
	{-10472.424974490266f, -1187.6364246322191f},
	{-2499.5891216345935f, 23520.479634325944f},
	{30568.88246283553f, -5962.363945904457f},
	{-16168.68027090716f, -17624.8848233935f},
	{3240.4742976535244f, 22677.798290600345f},
	{24835.65532976056f, -20641.130185288326f},
	{-26738.268502538624f, -22497.159706781036f},
	{-16871.483991790585f, 24032.565459835867f},
	{22823.747199053818f, 1787.834811674069f},
	{-26157.057642081472f, -15597.000428788695f},
	{1177.4433396162476f, 45799.97970100959f},
	{38082.755175803744f, -17522.771189668987f},
	{-23442.872494358977f, -16120.230488215966f},
	{1773.9460010691027f, 22688.391965891176f},
	{23655.07808362652f, -12571.632864577528f},
	{-24346.32515644451f, -34182.80644285158f},
	{-51959.27798759147f, 27029.271282404035f},
	{39142.20860112316f, 38958.5774927624f},
	{9655.903875734575f, -28361.45186010918f},
	{-14808.201327565117f, 14112.315832403187f},
	{23748.371797620133f, 8919.811153917868f},
	{9414.205992214396f, -23718.0454209145f},
	{-25564.99818412105f, -12801.64660016198f},
	{-10343.039472584249f, 27501.973537581558f},
	{28948.688678059687f, 2999.641034783587f},
	{-12305.343491887772f, -28864.88298253111f},
	{-22134.13183553142f, 29054.023875412568f},
	{45427.70569759035f, 8601.685092709065f},
	{-3322.2759635328666f, -49945.85423424293f},
	{-47410.18000744792f, 13426.408655545667f},
	{19971.572186083446f, 41088.14953182822f},
	{27730.8971852257f, -25058.94551183655f},
	{-23096.952097309353f, -9159.372265175638f},
	{4204.058296773002f, 15379.875082429517f},
	{7123.388899983766f, -7741.78510788569f},
	{-2642.415322247781f, -1691.0175562883069f},
	{-3523.412503415137f, -4886.062550634827f},
	{-4612.995214047818f, 6415.360666221265f},
	{6832.172953464355f, -278.2534569241343f},
	{-661.9418651036585f, -3031.107459331354f},
	{-1779.8746667521086f, -6511.149383520598f},
	{-13188.47731069657f, 12514.82351424274f},
	{27788.466917463553f, 11831.952957363315f},
	{4848.060793923085f, -32354.062121938336f},
	{-22389.778167200144f, -4603.083478605308f},
	{-12182.836500927226f, 12113.66222998919f},
	{10750.974957461833f, 14150.612030574805f},
	{11379.180551191252f, -9629.056723693706f},
	{-16068.01049512314f, 1487.7842018727324f},
	{10047.166493081206f, 21944.934862966256f},
	{29489.593201359912f, -4945.057164104336f},
	{4386.525812025134f, -39740.00089596137f},
	{-40844.33927964865f, -7027.72609658966f},
	{-1653.745625967002f, 30809.971695208482f},
	{12247.879892152687f, -4668.076102770652f},
	{-8694.75676850103f, -1572.4316773170658f},
	{-4464.550968721476f, 7667.929298349691f},
	{11808.441804368988f, 21686.03316487723f},
	{34424.86585198373f, -15983.29721249955f},
	{-10627.731558300684f, -38392.07364217314f},
	{-37086.62436123217f, 571.3066517937896f},
	{-9741.259888769197f, 33644.13907207416f},
	{30960.429116177147f, 7966.742786562305f},
	{-6851.1473352654475f, -21207.053568835596f},
	{-5942.498199669172f, 16266.744648685999f},
	{10393.45920479071f, 1725.4874473142067f},
	{12066.568811594989f, 6158.153887550649f},
	{26830.224990074283f, -27698.795000890528f},
	{-40365.81265137716f, -51119.51122384968f},
	{-65627.24284658673f, 47014.47193640232f},
	{41612.31437699716f, 63164.63713907203f},
	{48976.31720433763f, -30594.920192739766f},
	{-20368.2577145626f, -35206.31777441806f},
	{-23396.834804210474f, 22926.625526191245f},
	{25550.416591821435f, 16645.12744775243f},
	{21609.18723266376f, -17061.273339449115f},
	{4725.72459960359f, -42777.617367252016f},
	{-63039.48226975226f, -15746.230941649923f},
	{-16391.15838013901f, 56589.0598797072f},
	{21604.894844932645f, 29911.20897550563f},
	{52349.807879032494f, 5025.005128812134f},
	{10959.793192424691f, -60045.693212612416f},
	{-43594.14604687003f, -12355.643103248789f},
	{-25484.643107732893f, 26057.374510643796f},
	{28724.53683775952f, 40455.38089084625f},
	{34045.567954714315f, -39224.86949581611f},
	{-33010.50673310065f, -20064.433395488464f},
	{-15958.331624751729f, 4474.998552132198f},
	{-19772.642631879087f, 26919.087300818737f},
	{36283.61165027617f, 37030.37265344543f},
	{50395.197715029266f, -23108.919098751663f},
	{-5835.1507321602185f, -64259.36172989095f},
	{-64505.940223077014f, -8314.716450858352f},
	{-18288.253974945525f, 40871.12275779036f},
	{1662.0928314280318f, 24311.667460168086f},
	{28185.767868258496f, 34425.14311780721f},
	{51983.04417469045f, -26292.398366931222f},
	{-15871.489313396498f, -45548.90163363239f},
	{-26204.09981006228f, 14.195182160037803f},
	{-14612.25237608856f, 6158.236691121521f},
	{-10370.75164820085f, 11592.547097495491f},
	{1852.4276897460368f, 24158.015169309518f},
	{32943.03186292162f, 8348.1505346466f},
	{12687.893940503162f, -28669.957338710567f},
	{-10888.406504850116f, -11770.765807908407f},
	{-5037.856797912331f, -6696.124349133891f},
	{-25903.080296207445f, -11971.749599361614f},
	{-28311.490967666963f, 33897.845570632206f},
	{28070.600920572804f, 30598.084328579527f},
	{23772.34600452127f, -10490.943878831564f},
	{6891.977362354206f, -6897.943401067947f},
	{15965.788695815976f, -11522.292825661114f},
	{-5964.647848655251f, -35987.18303923352f},
	{-50801.496890766706f, 2069.043480805419f},
	{2348.0115389082102f, 42575.28245281988f},
	{13679.378602961631f, -7181.840835257832f},
	{-3259.551636866937f, 12554.189646184766f},
	{15497.700505987776f, 2439.8134736092215f},
	{15360.875688664257f, -7597.936379936335f},
	{-3327.6152879466836f, -32457.54560114376f},
	{-30983.095626210365f, 10907.641566473992f},
	{18218.85824535264f, 11928.43162376638f},
	{-9638.25252967227f, -18647.511701323994f},
	{-22874.6094853715f, 22715.57692485094f},
	{24525.550996833055f, 29748.52953175234f},
	{35381.93145161493f, -31453.000822114023f},
	{-40459.330004071395f, -23397.444348423236f},
	{6663.456223502507f, 41576.40920073045f},
	{23239.700607329676f, -29228.38786697297f},
	{-28441.280514382266f, -7316.200162963167f},
	{412.61585284725516f, 11045.208620047131f},
	{-1220.0172851977259f, 7055.581725093507f},
	{14421.965847613405f, -9571.324209052407f},
	{-30491.531272125143f, -12705.520673153707f},
	{-3355.745764251482f, 40779.636148336154f},
	{32798.16880611438f, 3925.839282332079f},
	{16740.65676064366f, -20882.72760283642f},
	{-21386.30268094803f, -17057.466777756737f},
	{9678.617117197418f, 18211.40378910632f},
	{4871.547542850149f, -36018.776845654385f},
	{-43481.77113190091f, 7010.083713634975f},
	{722.0365343781668f, 25358.781521551093f},
	{7812.197245647505f, 12494.096267047047f},
	{16431.582162333914f, 2127.25925992649f},
	{2042.6269364281325f, -8718.939016694334f},
	{3633.1020664787065f, 5454.615070350523f},
	{8742.479080004705f, -6803.401546414345f},
	{12254.021806823046f, -13319.207120426057f},
	{-25717.9162279226f, -34401.9895796394f},
	{-34182.42992607037f, 37716.67394054236f},
	{32225.615029792563f, 9614.224093332254f},
	{-11180.73109272508f, -17432.97286669354f},
	{-9412.21493457642f, 20323.341088229652f},
	{23451.490722230854f, 16452.13231994384f},
	{27122.122205628042f, -21678.69227429318f},
	{-9622.618171539187f, -31869.37273050843f},
	{-32453.50856019628f, -7095.519707867134f},
	{-22910.595051016455f, 36294.63647854058f},
	{38690.48698176408f, 25234.822554753657f},
	{10454.253395104377f, -42906.29544520368f},
	{-45204.242272601856f, 18344.494319409387f},
	{54542.323816127486f, 36690.731361079066f},
	{19943.618736482615f, -74090.16010408789f},
	{-68016.77851328906f, -14009.616049988093f},
	{-21584.95626125835f, 49032.74737828161f},
	{34335.93051731102f, 31768.92498635187f},
	{41562.66917366819f, -15031.848480049259f},
	{2353.1357067092467f, -52332.23838078238f},
};

#endif