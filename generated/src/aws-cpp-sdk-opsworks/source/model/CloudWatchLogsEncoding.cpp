/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/CloudWatchLogsEncoding.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorks
  {
    namespace Model
    {
      namespace CloudWatchLogsEncodingMapper
      {

        static constexpr uint32_t ascii_HASH = ConstExprHashingUtils::HashString("ascii");
        static constexpr uint32_t big5_HASH = ConstExprHashingUtils::HashString("big5");
        static constexpr uint32_t big5hkscs_HASH = ConstExprHashingUtils::HashString("big5hkscs");
        static constexpr uint32_t cp037_HASH = ConstExprHashingUtils::HashString("cp037");
        static constexpr uint32_t cp424_HASH = ConstExprHashingUtils::HashString("cp424");
        static constexpr uint32_t cp437_HASH = ConstExprHashingUtils::HashString("cp437");
        static constexpr uint32_t cp500_HASH = ConstExprHashingUtils::HashString("cp500");
        static constexpr uint32_t cp720_HASH = ConstExprHashingUtils::HashString("cp720");
        static constexpr uint32_t cp737_HASH = ConstExprHashingUtils::HashString("cp737");
        static constexpr uint32_t cp775_HASH = ConstExprHashingUtils::HashString("cp775");
        static constexpr uint32_t cp850_HASH = ConstExprHashingUtils::HashString("cp850");
        static constexpr uint32_t cp852_HASH = ConstExprHashingUtils::HashString("cp852");
        static constexpr uint32_t cp855_HASH = ConstExprHashingUtils::HashString("cp855");
        static constexpr uint32_t cp856_HASH = ConstExprHashingUtils::HashString("cp856");
        static constexpr uint32_t cp857_HASH = ConstExprHashingUtils::HashString("cp857");
        static constexpr uint32_t cp858_HASH = ConstExprHashingUtils::HashString("cp858");
        static constexpr uint32_t cp860_HASH = ConstExprHashingUtils::HashString("cp860");
        static constexpr uint32_t cp861_HASH = ConstExprHashingUtils::HashString("cp861");
        static constexpr uint32_t cp862_HASH = ConstExprHashingUtils::HashString("cp862");
        static constexpr uint32_t cp863_HASH = ConstExprHashingUtils::HashString("cp863");
        static constexpr uint32_t cp864_HASH = ConstExprHashingUtils::HashString("cp864");
        static constexpr uint32_t cp865_HASH = ConstExprHashingUtils::HashString("cp865");
        static constexpr uint32_t cp866_HASH = ConstExprHashingUtils::HashString("cp866");
        static constexpr uint32_t cp869_HASH = ConstExprHashingUtils::HashString("cp869");
        static constexpr uint32_t cp874_HASH = ConstExprHashingUtils::HashString("cp874");
        static constexpr uint32_t cp875_HASH = ConstExprHashingUtils::HashString("cp875");
        static constexpr uint32_t cp932_HASH = ConstExprHashingUtils::HashString("cp932");
        static constexpr uint32_t cp949_HASH = ConstExprHashingUtils::HashString("cp949");
        static constexpr uint32_t cp950_HASH = ConstExprHashingUtils::HashString("cp950");
        static constexpr uint32_t cp1006_HASH = ConstExprHashingUtils::HashString("cp1006");
        static constexpr uint32_t cp1026_HASH = ConstExprHashingUtils::HashString("cp1026");
        static constexpr uint32_t cp1140_HASH = ConstExprHashingUtils::HashString("cp1140");
        static constexpr uint32_t cp1250_HASH = ConstExprHashingUtils::HashString("cp1250");
        static constexpr uint32_t cp1251_HASH = ConstExprHashingUtils::HashString("cp1251");
        static constexpr uint32_t cp1252_HASH = ConstExprHashingUtils::HashString("cp1252");
        static constexpr uint32_t cp1253_HASH = ConstExprHashingUtils::HashString("cp1253");
        static constexpr uint32_t cp1254_HASH = ConstExprHashingUtils::HashString("cp1254");
        static constexpr uint32_t cp1255_HASH = ConstExprHashingUtils::HashString("cp1255");
        static constexpr uint32_t cp1256_HASH = ConstExprHashingUtils::HashString("cp1256");
        static constexpr uint32_t cp1257_HASH = ConstExprHashingUtils::HashString("cp1257");
        static constexpr uint32_t cp1258_HASH = ConstExprHashingUtils::HashString("cp1258");
        static constexpr uint32_t euc_jp_HASH = ConstExprHashingUtils::HashString("euc_jp");
        static constexpr uint32_t euc_jis_2004_HASH = ConstExprHashingUtils::HashString("euc_jis_2004");
        static constexpr uint32_t euc_jisx0213_HASH = ConstExprHashingUtils::HashString("euc_jisx0213");
        static constexpr uint32_t euc_kr_HASH = ConstExprHashingUtils::HashString("euc_kr");
        static constexpr uint32_t gb2312_HASH = ConstExprHashingUtils::HashString("gb2312");
        static constexpr uint32_t gbk_HASH = ConstExprHashingUtils::HashString("gbk");
        static constexpr uint32_t gb18030_HASH = ConstExprHashingUtils::HashString("gb18030");
        static constexpr uint32_t hz_HASH = ConstExprHashingUtils::HashString("hz");
        static constexpr uint32_t iso2022_jp_HASH = ConstExprHashingUtils::HashString("iso2022_jp");
        static constexpr uint32_t iso2022_jp_1_HASH = ConstExprHashingUtils::HashString("iso2022_jp_1");
        static constexpr uint32_t iso2022_jp_2_HASH = ConstExprHashingUtils::HashString("iso2022_jp_2");
        static constexpr uint32_t iso2022_jp_2004_HASH = ConstExprHashingUtils::HashString("iso2022_jp_2004");
        static constexpr uint32_t iso2022_jp_3_HASH = ConstExprHashingUtils::HashString("iso2022_jp_3");
        static constexpr uint32_t iso2022_jp_ext_HASH = ConstExprHashingUtils::HashString("iso2022_jp_ext");
        static constexpr uint32_t iso2022_kr_HASH = ConstExprHashingUtils::HashString("iso2022_kr");
        static constexpr uint32_t latin_1_HASH = ConstExprHashingUtils::HashString("latin_1");
        static constexpr uint32_t iso8859_2_HASH = ConstExprHashingUtils::HashString("iso8859_2");
        static constexpr uint32_t iso8859_3_HASH = ConstExprHashingUtils::HashString("iso8859_3");
        static constexpr uint32_t iso8859_4_HASH = ConstExprHashingUtils::HashString("iso8859_4");
        static constexpr uint32_t iso8859_5_HASH = ConstExprHashingUtils::HashString("iso8859_5");
        static constexpr uint32_t iso8859_6_HASH = ConstExprHashingUtils::HashString("iso8859_6");
        static constexpr uint32_t iso8859_7_HASH = ConstExprHashingUtils::HashString("iso8859_7");
        static constexpr uint32_t iso8859_8_HASH = ConstExprHashingUtils::HashString("iso8859_8");
        static constexpr uint32_t iso8859_9_HASH = ConstExprHashingUtils::HashString("iso8859_9");
        static constexpr uint32_t iso8859_10_HASH = ConstExprHashingUtils::HashString("iso8859_10");
        static constexpr uint32_t iso8859_13_HASH = ConstExprHashingUtils::HashString("iso8859_13");
        static constexpr uint32_t iso8859_14_HASH = ConstExprHashingUtils::HashString("iso8859_14");
        static constexpr uint32_t iso8859_15_HASH = ConstExprHashingUtils::HashString("iso8859_15");
        static constexpr uint32_t iso8859_16_HASH = ConstExprHashingUtils::HashString("iso8859_16");
        static constexpr uint32_t johab_HASH = ConstExprHashingUtils::HashString("johab");
        static constexpr uint32_t koi8_r_HASH = ConstExprHashingUtils::HashString("koi8_r");
        static constexpr uint32_t koi8_u_HASH = ConstExprHashingUtils::HashString("koi8_u");
        static constexpr uint32_t mac_cyrillic_HASH = ConstExprHashingUtils::HashString("mac_cyrillic");
        static constexpr uint32_t mac_greek_HASH = ConstExprHashingUtils::HashString("mac_greek");
        static constexpr uint32_t mac_iceland_HASH = ConstExprHashingUtils::HashString("mac_iceland");
        static constexpr uint32_t mac_latin2_HASH = ConstExprHashingUtils::HashString("mac_latin2");
        static constexpr uint32_t mac_roman_HASH = ConstExprHashingUtils::HashString("mac_roman");
        static constexpr uint32_t mac_turkish_HASH = ConstExprHashingUtils::HashString("mac_turkish");
        static constexpr uint32_t ptcp154_HASH = ConstExprHashingUtils::HashString("ptcp154");
        static constexpr uint32_t shift_jis_HASH = ConstExprHashingUtils::HashString("shift_jis");
        static constexpr uint32_t shift_jis_2004_HASH = ConstExprHashingUtils::HashString("shift_jis_2004");
        static constexpr uint32_t shift_jisx0213_HASH = ConstExprHashingUtils::HashString("shift_jisx0213");
        static constexpr uint32_t utf_32_HASH = ConstExprHashingUtils::HashString("utf_32");
        static constexpr uint32_t utf_32_be_HASH = ConstExprHashingUtils::HashString("utf_32_be");
        static constexpr uint32_t utf_32_le_HASH = ConstExprHashingUtils::HashString("utf_32_le");
        static constexpr uint32_t utf_16_HASH = ConstExprHashingUtils::HashString("utf_16");
        static constexpr uint32_t utf_16_be_HASH = ConstExprHashingUtils::HashString("utf_16_be");
        static constexpr uint32_t utf_16_le_HASH = ConstExprHashingUtils::HashString("utf_16_le");
        static constexpr uint32_t utf_7_HASH = ConstExprHashingUtils::HashString("utf_7");
        static constexpr uint32_t utf_8_HASH = ConstExprHashingUtils::HashString("utf_8");
        static constexpr uint32_t utf_8_sig_HASH = ConstExprHashingUtils::HashString("utf_8_sig");


        CloudWatchLogsEncoding GetCloudWatchLogsEncodingForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ascii_HASH)
          {
            return CloudWatchLogsEncoding::ascii;
          }
          else if (hashCode == big5_HASH)
          {
            return CloudWatchLogsEncoding::big5;
          }
          else if (hashCode == big5hkscs_HASH)
          {
            return CloudWatchLogsEncoding::big5hkscs;
          }
          else if (hashCode == cp037_HASH)
          {
            return CloudWatchLogsEncoding::cp037;
          }
          else if (hashCode == cp424_HASH)
          {
            return CloudWatchLogsEncoding::cp424;
          }
          else if (hashCode == cp437_HASH)
          {
            return CloudWatchLogsEncoding::cp437;
          }
          else if (hashCode == cp500_HASH)
          {
            return CloudWatchLogsEncoding::cp500;
          }
          else if (hashCode == cp720_HASH)
          {
            return CloudWatchLogsEncoding::cp720;
          }
          else if (hashCode == cp737_HASH)
          {
            return CloudWatchLogsEncoding::cp737;
          }
          else if (hashCode == cp775_HASH)
          {
            return CloudWatchLogsEncoding::cp775;
          }
          else if (hashCode == cp850_HASH)
          {
            return CloudWatchLogsEncoding::cp850;
          }
          else if (hashCode == cp852_HASH)
          {
            return CloudWatchLogsEncoding::cp852;
          }
          else if (hashCode == cp855_HASH)
          {
            return CloudWatchLogsEncoding::cp855;
          }
          else if (hashCode == cp856_HASH)
          {
            return CloudWatchLogsEncoding::cp856;
          }
          else if (hashCode == cp857_HASH)
          {
            return CloudWatchLogsEncoding::cp857;
          }
          else if (hashCode == cp858_HASH)
          {
            return CloudWatchLogsEncoding::cp858;
          }
          else if (hashCode == cp860_HASH)
          {
            return CloudWatchLogsEncoding::cp860;
          }
          else if (hashCode == cp861_HASH)
          {
            return CloudWatchLogsEncoding::cp861;
          }
          else if (hashCode == cp862_HASH)
          {
            return CloudWatchLogsEncoding::cp862;
          }
          else if (hashCode == cp863_HASH)
          {
            return CloudWatchLogsEncoding::cp863;
          }
          else if (hashCode == cp864_HASH)
          {
            return CloudWatchLogsEncoding::cp864;
          }
          else if (hashCode == cp865_HASH)
          {
            return CloudWatchLogsEncoding::cp865;
          }
          else if (hashCode == cp866_HASH)
          {
            return CloudWatchLogsEncoding::cp866;
          }
          else if (hashCode == cp869_HASH)
          {
            return CloudWatchLogsEncoding::cp869;
          }
          else if (hashCode == cp874_HASH)
          {
            return CloudWatchLogsEncoding::cp874;
          }
          else if (hashCode == cp875_HASH)
          {
            return CloudWatchLogsEncoding::cp875;
          }
          else if (hashCode == cp932_HASH)
          {
            return CloudWatchLogsEncoding::cp932;
          }
          else if (hashCode == cp949_HASH)
          {
            return CloudWatchLogsEncoding::cp949;
          }
          else if (hashCode == cp950_HASH)
          {
            return CloudWatchLogsEncoding::cp950;
          }
          else if (hashCode == cp1006_HASH)
          {
            return CloudWatchLogsEncoding::cp1006;
          }
          else if (hashCode == cp1026_HASH)
          {
            return CloudWatchLogsEncoding::cp1026;
          }
          else if (hashCode == cp1140_HASH)
          {
            return CloudWatchLogsEncoding::cp1140;
          }
          else if (hashCode == cp1250_HASH)
          {
            return CloudWatchLogsEncoding::cp1250;
          }
          else if (hashCode == cp1251_HASH)
          {
            return CloudWatchLogsEncoding::cp1251;
          }
          else if (hashCode == cp1252_HASH)
          {
            return CloudWatchLogsEncoding::cp1252;
          }
          else if (hashCode == cp1253_HASH)
          {
            return CloudWatchLogsEncoding::cp1253;
          }
          else if (hashCode == cp1254_HASH)
          {
            return CloudWatchLogsEncoding::cp1254;
          }
          else if (hashCode == cp1255_HASH)
          {
            return CloudWatchLogsEncoding::cp1255;
          }
          else if (hashCode == cp1256_HASH)
          {
            return CloudWatchLogsEncoding::cp1256;
          }
          else if (hashCode == cp1257_HASH)
          {
            return CloudWatchLogsEncoding::cp1257;
          }
          else if (hashCode == cp1258_HASH)
          {
            return CloudWatchLogsEncoding::cp1258;
          }
          else if (hashCode == euc_jp_HASH)
          {
            return CloudWatchLogsEncoding::euc_jp;
          }
          else if (hashCode == euc_jis_2004_HASH)
          {
            return CloudWatchLogsEncoding::euc_jis_2004;
          }
          else if (hashCode == euc_jisx0213_HASH)
          {
            return CloudWatchLogsEncoding::euc_jisx0213;
          }
          else if (hashCode == euc_kr_HASH)
          {
            return CloudWatchLogsEncoding::euc_kr;
          }
          else if (hashCode == gb2312_HASH)
          {
            return CloudWatchLogsEncoding::gb2312;
          }
          else if (hashCode == gbk_HASH)
          {
            return CloudWatchLogsEncoding::gbk;
          }
          else if (hashCode == gb18030_HASH)
          {
            return CloudWatchLogsEncoding::gb18030;
          }
          else if (hashCode == hz_HASH)
          {
            return CloudWatchLogsEncoding::hz;
          }
          else if (hashCode == iso2022_jp_HASH)
          {
            return CloudWatchLogsEncoding::iso2022_jp;
          }
          else if (hashCode == iso2022_jp_1_HASH)
          {
            return CloudWatchLogsEncoding::iso2022_jp_1;
          }
          else if (hashCode == iso2022_jp_2_HASH)
          {
            return CloudWatchLogsEncoding::iso2022_jp_2;
          }
          else if (hashCode == iso2022_jp_2004_HASH)
          {
            return CloudWatchLogsEncoding::iso2022_jp_2004;
          }
          else if (hashCode == iso2022_jp_3_HASH)
          {
            return CloudWatchLogsEncoding::iso2022_jp_3;
          }
          else if (hashCode == iso2022_jp_ext_HASH)
          {
            return CloudWatchLogsEncoding::iso2022_jp_ext;
          }
          else if (hashCode == iso2022_kr_HASH)
          {
            return CloudWatchLogsEncoding::iso2022_kr;
          }
          else if (hashCode == latin_1_HASH)
          {
            return CloudWatchLogsEncoding::latin_1;
          }
          else if (hashCode == iso8859_2_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_2;
          }
          else if (hashCode == iso8859_3_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_3;
          }
          else if (hashCode == iso8859_4_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_4;
          }
          else if (hashCode == iso8859_5_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_5;
          }
          else if (hashCode == iso8859_6_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_6;
          }
          else if (hashCode == iso8859_7_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_7;
          }
          else if (hashCode == iso8859_8_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_8;
          }
          else if (hashCode == iso8859_9_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_9;
          }
          else if (hashCode == iso8859_10_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_10;
          }
          else if (hashCode == iso8859_13_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_13;
          }
          else if (hashCode == iso8859_14_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_14;
          }
          else if (hashCode == iso8859_15_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_15;
          }
          else if (hashCode == iso8859_16_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_16;
          }
          else if (hashCode == johab_HASH)
          {
            return CloudWatchLogsEncoding::johab;
          }
          else if (hashCode == koi8_r_HASH)
          {
            return CloudWatchLogsEncoding::koi8_r;
          }
          else if (hashCode == koi8_u_HASH)
          {
            return CloudWatchLogsEncoding::koi8_u;
          }
          else if (hashCode == mac_cyrillic_HASH)
          {
            return CloudWatchLogsEncoding::mac_cyrillic;
          }
          else if (hashCode == mac_greek_HASH)
          {
            return CloudWatchLogsEncoding::mac_greek;
          }
          else if (hashCode == mac_iceland_HASH)
          {
            return CloudWatchLogsEncoding::mac_iceland;
          }
          else if (hashCode == mac_latin2_HASH)
          {
            return CloudWatchLogsEncoding::mac_latin2;
          }
          else if (hashCode == mac_roman_HASH)
          {
            return CloudWatchLogsEncoding::mac_roman;
          }
          else if (hashCode == mac_turkish_HASH)
          {
            return CloudWatchLogsEncoding::mac_turkish;
          }
          else if (hashCode == ptcp154_HASH)
          {
            return CloudWatchLogsEncoding::ptcp154;
          }
          else if (hashCode == shift_jis_HASH)
          {
            return CloudWatchLogsEncoding::shift_jis;
          }
          else if (hashCode == shift_jis_2004_HASH)
          {
            return CloudWatchLogsEncoding::shift_jis_2004;
          }
          else if (hashCode == shift_jisx0213_HASH)
          {
            return CloudWatchLogsEncoding::shift_jisx0213;
          }
          else if (hashCode == utf_32_HASH)
          {
            return CloudWatchLogsEncoding::utf_32;
          }
          else if (hashCode == utf_32_be_HASH)
          {
            return CloudWatchLogsEncoding::utf_32_be;
          }
          else if (hashCode == utf_32_le_HASH)
          {
            return CloudWatchLogsEncoding::utf_32_le;
          }
          else if (hashCode == utf_16_HASH)
          {
            return CloudWatchLogsEncoding::utf_16;
          }
          else if (hashCode == utf_16_be_HASH)
          {
            return CloudWatchLogsEncoding::utf_16_be;
          }
          else if (hashCode == utf_16_le_HASH)
          {
            return CloudWatchLogsEncoding::utf_16_le;
          }
          else if (hashCode == utf_7_HASH)
          {
            return CloudWatchLogsEncoding::utf_7;
          }
          else if (hashCode == utf_8_HASH)
          {
            return CloudWatchLogsEncoding::utf_8;
          }
          else if (hashCode == utf_8_sig_HASH)
          {
            return CloudWatchLogsEncoding::utf_8_sig;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CloudWatchLogsEncoding>(hashCode);
          }

          return CloudWatchLogsEncoding::NOT_SET;
        }

        Aws::String GetNameForCloudWatchLogsEncoding(CloudWatchLogsEncoding enumValue)
        {
          switch(enumValue)
          {
          case CloudWatchLogsEncoding::NOT_SET:
            return {};
          case CloudWatchLogsEncoding::ascii:
            return "ascii";
          case CloudWatchLogsEncoding::big5:
            return "big5";
          case CloudWatchLogsEncoding::big5hkscs:
            return "big5hkscs";
          case CloudWatchLogsEncoding::cp037:
            return "cp037";
          case CloudWatchLogsEncoding::cp424:
            return "cp424";
          case CloudWatchLogsEncoding::cp437:
            return "cp437";
          case CloudWatchLogsEncoding::cp500:
            return "cp500";
          case CloudWatchLogsEncoding::cp720:
            return "cp720";
          case CloudWatchLogsEncoding::cp737:
            return "cp737";
          case CloudWatchLogsEncoding::cp775:
            return "cp775";
          case CloudWatchLogsEncoding::cp850:
            return "cp850";
          case CloudWatchLogsEncoding::cp852:
            return "cp852";
          case CloudWatchLogsEncoding::cp855:
            return "cp855";
          case CloudWatchLogsEncoding::cp856:
            return "cp856";
          case CloudWatchLogsEncoding::cp857:
            return "cp857";
          case CloudWatchLogsEncoding::cp858:
            return "cp858";
          case CloudWatchLogsEncoding::cp860:
            return "cp860";
          case CloudWatchLogsEncoding::cp861:
            return "cp861";
          case CloudWatchLogsEncoding::cp862:
            return "cp862";
          case CloudWatchLogsEncoding::cp863:
            return "cp863";
          case CloudWatchLogsEncoding::cp864:
            return "cp864";
          case CloudWatchLogsEncoding::cp865:
            return "cp865";
          case CloudWatchLogsEncoding::cp866:
            return "cp866";
          case CloudWatchLogsEncoding::cp869:
            return "cp869";
          case CloudWatchLogsEncoding::cp874:
            return "cp874";
          case CloudWatchLogsEncoding::cp875:
            return "cp875";
          case CloudWatchLogsEncoding::cp932:
            return "cp932";
          case CloudWatchLogsEncoding::cp949:
            return "cp949";
          case CloudWatchLogsEncoding::cp950:
            return "cp950";
          case CloudWatchLogsEncoding::cp1006:
            return "cp1006";
          case CloudWatchLogsEncoding::cp1026:
            return "cp1026";
          case CloudWatchLogsEncoding::cp1140:
            return "cp1140";
          case CloudWatchLogsEncoding::cp1250:
            return "cp1250";
          case CloudWatchLogsEncoding::cp1251:
            return "cp1251";
          case CloudWatchLogsEncoding::cp1252:
            return "cp1252";
          case CloudWatchLogsEncoding::cp1253:
            return "cp1253";
          case CloudWatchLogsEncoding::cp1254:
            return "cp1254";
          case CloudWatchLogsEncoding::cp1255:
            return "cp1255";
          case CloudWatchLogsEncoding::cp1256:
            return "cp1256";
          case CloudWatchLogsEncoding::cp1257:
            return "cp1257";
          case CloudWatchLogsEncoding::cp1258:
            return "cp1258";
          case CloudWatchLogsEncoding::euc_jp:
            return "euc_jp";
          case CloudWatchLogsEncoding::euc_jis_2004:
            return "euc_jis_2004";
          case CloudWatchLogsEncoding::euc_jisx0213:
            return "euc_jisx0213";
          case CloudWatchLogsEncoding::euc_kr:
            return "euc_kr";
          case CloudWatchLogsEncoding::gb2312:
            return "gb2312";
          case CloudWatchLogsEncoding::gbk:
            return "gbk";
          case CloudWatchLogsEncoding::gb18030:
            return "gb18030";
          case CloudWatchLogsEncoding::hz:
            return "hz";
          case CloudWatchLogsEncoding::iso2022_jp:
            return "iso2022_jp";
          case CloudWatchLogsEncoding::iso2022_jp_1:
            return "iso2022_jp_1";
          case CloudWatchLogsEncoding::iso2022_jp_2:
            return "iso2022_jp_2";
          case CloudWatchLogsEncoding::iso2022_jp_2004:
            return "iso2022_jp_2004";
          case CloudWatchLogsEncoding::iso2022_jp_3:
            return "iso2022_jp_3";
          case CloudWatchLogsEncoding::iso2022_jp_ext:
            return "iso2022_jp_ext";
          case CloudWatchLogsEncoding::iso2022_kr:
            return "iso2022_kr";
          case CloudWatchLogsEncoding::latin_1:
            return "latin_1";
          case CloudWatchLogsEncoding::iso8859_2:
            return "iso8859_2";
          case CloudWatchLogsEncoding::iso8859_3:
            return "iso8859_3";
          case CloudWatchLogsEncoding::iso8859_4:
            return "iso8859_4";
          case CloudWatchLogsEncoding::iso8859_5:
            return "iso8859_5";
          case CloudWatchLogsEncoding::iso8859_6:
            return "iso8859_6";
          case CloudWatchLogsEncoding::iso8859_7:
            return "iso8859_7";
          case CloudWatchLogsEncoding::iso8859_8:
            return "iso8859_8";
          case CloudWatchLogsEncoding::iso8859_9:
            return "iso8859_9";
          case CloudWatchLogsEncoding::iso8859_10:
            return "iso8859_10";
          case CloudWatchLogsEncoding::iso8859_13:
            return "iso8859_13";
          case CloudWatchLogsEncoding::iso8859_14:
            return "iso8859_14";
          case CloudWatchLogsEncoding::iso8859_15:
            return "iso8859_15";
          case CloudWatchLogsEncoding::iso8859_16:
            return "iso8859_16";
          case CloudWatchLogsEncoding::johab:
            return "johab";
          case CloudWatchLogsEncoding::koi8_r:
            return "koi8_r";
          case CloudWatchLogsEncoding::koi8_u:
            return "koi8_u";
          case CloudWatchLogsEncoding::mac_cyrillic:
            return "mac_cyrillic";
          case CloudWatchLogsEncoding::mac_greek:
            return "mac_greek";
          case CloudWatchLogsEncoding::mac_iceland:
            return "mac_iceland";
          case CloudWatchLogsEncoding::mac_latin2:
            return "mac_latin2";
          case CloudWatchLogsEncoding::mac_roman:
            return "mac_roman";
          case CloudWatchLogsEncoding::mac_turkish:
            return "mac_turkish";
          case CloudWatchLogsEncoding::ptcp154:
            return "ptcp154";
          case CloudWatchLogsEncoding::shift_jis:
            return "shift_jis";
          case CloudWatchLogsEncoding::shift_jis_2004:
            return "shift_jis_2004";
          case CloudWatchLogsEncoding::shift_jisx0213:
            return "shift_jisx0213";
          case CloudWatchLogsEncoding::utf_32:
            return "utf_32";
          case CloudWatchLogsEncoding::utf_32_be:
            return "utf_32_be";
          case CloudWatchLogsEncoding::utf_32_le:
            return "utf_32_le";
          case CloudWatchLogsEncoding::utf_16:
            return "utf_16";
          case CloudWatchLogsEncoding::utf_16_be:
            return "utf_16_be";
          case CloudWatchLogsEncoding::utf_16_le:
            return "utf_16_le";
          case CloudWatchLogsEncoding::utf_7:
            return "utf_7";
          case CloudWatchLogsEncoding::utf_8:
            return "utf_8";
          case CloudWatchLogsEncoding::utf_8_sig:
            return "utf_8_sig";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CloudWatchLogsEncodingMapper
    } // namespace Model
  } // namespace OpsWorks
} // namespace Aws
