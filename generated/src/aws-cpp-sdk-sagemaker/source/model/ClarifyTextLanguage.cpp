/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClarifyTextLanguage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ClarifyTextLanguageMapper
      {

        static constexpr uint32_t af_HASH = ConstExprHashingUtils::HashString("af");
        static constexpr uint32_t sq_HASH = ConstExprHashingUtils::HashString("sq");
        static constexpr uint32_t ar_HASH = ConstExprHashingUtils::HashString("ar");
        static constexpr uint32_t hy_HASH = ConstExprHashingUtils::HashString("hy");
        static constexpr uint32_t eu_HASH = ConstExprHashingUtils::HashString("eu");
        static constexpr uint32_t bn_HASH = ConstExprHashingUtils::HashString("bn");
        static constexpr uint32_t bg_HASH = ConstExprHashingUtils::HashString("bg");
        static constexpr uint32_t ca_HASH = ConstExprHashingUtils::HashString("ca");
        static constexpr uint32_t zh_HASH = ConstExprHashingUtils::HashString("zh");
        static constexpr uint32_t hr_HASH = ConstExprHashingUtils::HashString("hr");
        static constexpr uint32_t cs_HASH = ConstExprHashingUtils::HashString("cs");
        static constexpr uint32_t da_HASH = ConstExprHashingUtils::HashString("da");
        static constexpr uint32_t nl_HASH = ConstExprHashingUtils::HashString("nl");
        static constexpr uint32_t en_HASH = ConstExprHashingUtils::HashString("en");
        static constexpr uint32_t et_HASH = ConstExprHashingUtils::HashString("et");
        static constexpr uint32_t fi_HASH = ConstExprHashingUtils::HashString("fi");
        static constexpr uint32_t fr_HASH = ConstExprHashingUtils::HashString("fr");
        static constexpr uint32_t de_HASH = ConstExprHashingUtils::HashString("de");
        static constexpr uint32_t el_HASH = ConstExprHashingUtils::HashString("el");
        static constexpr uint32_t gu_HASH = ConstExprHashingUtils::HashString("gu");
        static constexpr uint32_t he_HASH = ConstExprHashingUtils::HashString("he");
        static constexpr uint32_t hi_HASH = ConstExprHashingUtils::HashString("hi");
        static constexpr uint32_t hu_HASH = ConstExprHashingUtils::HashString("hu");
        static constexpr uint32_t is_HASH = ConstExprHashingUtils::HashString("is");
        static constexpr uint32_t id_HASH = ConstExprHashingUtils::HashString("id");
        static constexpr uint32_t ga_HASH = ConstExprHashingUtils::HashString("ga");
        static constexpr uint32_t it_HASH = ConstExprHashingUtils::HashString("it");
        static constexpr uint32_t kn_HASH = ConstExprHashingUtils::HashString("kn");
        static constexpr uint32_t ky_HASH = ConstExprHashingUtils::HashString("ky");
        static constexpr uint32_t lv_HASH = ConstExprHashingUtils::HashString("lv");
        static constexpr uint32_t lt_HASH = ConstExprHashingUtils::HashString("lt");
        static constexpr uint32_t lb_HASH = ConstExprHashingUtils::HashString("lb");
        static constexpr uint32_t mk_HASH = ConstExprHashingUtils::HashString("mk");
        static constexpr uint32_t ml_HASH = ConstExprHashingUtils::HashString("ml");
        static constexpr uint32_t mr_HASH = ConstExprHashingUtils::HashString("mr");
        static constexpr uint32_t ne_HASH = ConstExprHashingUtils::HashString("ne");
        static constexpr uint32_t nb_HASH = ConstExprHashingUtils::HashString("nb");
        static constexpr uint32_t fa_HASH = ConstExprHashingUtils::HashString("fa");
        static constexpr uint32_t pl_HASH = ConstExprHashingUtils::HashString("pl");
        static constexpr uint32_t pt_HASH = ConstExprHashingUtils::HashString("pt");
        static constexpr uint32_t ro_HASH = ConstExprHashingUtils::HashString("ro");
        static constexpr uint32_t ru_HASH = ConstExprHashingUtils::HashString("ru");
        static constexpr uint32_t sa_HASH = ConstExprHashingUtils::HashString("sa");
        static constexpr uint32_t sr_HASH = ConstExprHashingUtils::HashString("sr");
        static constexpr uint32_t tn_HASH = ConstExprHashingUtils::HashString("tn");
        static constexpr uint32_t si_HASH = ConstExprHashingUtils::HashString("si");
        static constexpr uint32_t sk_HASH = ConstExprHashingUtils::HashString("sk");
        static constexpr uint32_t sl_HASH = ConstExprHashingUtils::HashString("sl");
        static constexpr uint32_t es_HASH = ConstExprHashingUtils::HashString("es");
        static constexpr uint32_t sv_HASH = ConstExprHashingUtils::HashString("sv");
        static constexpr uint32_t tl_HASH = ConstExprHashingUtils::HashString("tl");
        static constexpr uint32_t ta_HASH = ConstExprHashingUtils::HashString("ta");
        static constexpr uint32_t tt_HASH = ConstExprHashingUtils::HashString("tt");
        static constexpr uint32_t te_HASH = ConstExprHashingUtils::HashString("te");
        static constexpr uint32_t tr_HASH = ConstExprHashingUtils::HashString("tr");
        static constexpr uint32_t uk_HASH = ConstExprHashingUtils::HashString("uk");
        static constexpr uint32_t ur_HASH = ConstExprHashingUtils::HashString("ur");
        static constexpr uint32_t yo_HASH = ConstExprHashingUtils::HashString("yo");
        static constexpr uint32_t lij_HASH = ConstExprHashingUtils::HashString("lij");
        static constexpr uint32_t xx_HASH = ConstExprHashingUtils::HashString("xx");


        ClarifyTextLanguage GetClarifyTextLanguageForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == af_HASH)
          {
            return ClarifyTextLanguage::af;
          }
          else if (hashCode == sq_HASH)
          {
            return ClarifyTextLanguage::sq;
          }
          else if (hashCode == ar_HASH)
          {
            return ClarifyTextLanguage::ar;
          }
          else if (hashCode == hy_HASH)
          {
            return ClarifyTextLanguage::hy;
          }
          else if (hashCode == eu_HASH)
          {
            return ClarifyTextLanguage::eu;
          }
          else if (hashCode == bn_HASH)
          {
            return ClarifyTextLanguage::bn;
          }
          else if (hashCode == bg_HASH)
          {
            return ClarifyTextLanguage::bg;
          }
          else if (hashCode == ca_HASH)
          {
            return ClarifyTextLanguage::ca;
          }
          else if (hashCode == zh_HASH)
          {
            return ClarifyTextLanguage::zh;
          }
          else if (hashCode == hr_HASH)
          {
            return ClarifyTextLanguage::hr;
          }
          else if (hashCode == cs_HASH)
          {
            return ClarifyTextLanguage::cs;
          }
          else if (hashCode == da_HASH)
          {
            return ClarifyTextLanguage::da;
          }
          else if (hashCode == nl_HASH)
          {
            return ClarifyTextLanguage::nl;
          }
          else if (hashCode == en_HASH)
          {
            return ClarifyTextLanguage::en;
          }
          else if (hashCode == et_HASH)
          {
            return ClarifyTextLanguage::et;
          }
          else if (hashCode == fi_HASH)
          {
            return ClarifyTextLanguage::fi;
          }
          else if (hashCode == fr_HASH)
          {
            return ClarifyTextLanguage::fr;
          }
          else if (hashCode == de_HASH)
          {
            return ClarifyTextLanguage::de;
          }
          else if (hashCode == el_HASH)
          {
            return ClarifyTextLanguage::el;
          }
          else if (hashCode == gu_HASH)
          {
            return ClarifyTextLanguage::gu;
          }
          else if (hashCode == he_HASH)
          {
            return ClarifyTextLanguage::he;
          }
          else if (hashCode == hi_HASH)
          {
            return ClarifyTextLanguage::hi;
          }
          else if (hashCode == hu_HASH)
          {
            return ClarifyTextLanguage::hu;
          }
          else if (hashCode == is_HASH)
          {
            return ClarifyTextLanguage::is;
          }
          else if (hashCode == id_HASH)
          {
            return ClarifyTextLanguage::id;
          }
          else if (hashCode == ga_HASH)
          {
            return ClarifyTextLanguage::ga;
          }
          else if (hashCode == it_HASH)
          {
            return ClarifyTextLanguage::it;
          }
          else if (hashCode == kn_HASH)
          {
            return ClarifyTextLanguage::kn;
          }
          else if (hashCode == ky_HASH)
          {
            return ClarifyTextLanguage::ky;
          }
          else if (hashCode == lv_HASH)
          {
            return ClarifyTextLanguage::lv;
          }
          else if (hashCode == lt_HASH)
          {
            return ClarifyTextLanguage::lt;
          }
          else if (hashCode == lb_HASH)
          {
            return ClarifyTextLanguage::lb;
          }
          else if (hashCode == mk_HASH)
          {
            return ClarifyTextLanguage::mk;
          }
          else if (hashCode == ml_HASH)
          {
            return ClarifyTextLanguage::ml;
          }
          else if (hashCode == mr_HASH)
          {
            return ClarifyTextLanguage::mr;
          }
          else if (hashCode == ne_HASH)
          {
            return ClarifyTextLanguage::ne;
          }
          else if (hashCode == nb_HASH)
          {
            return ClarifyTextLanguage::nb;
          }
          else if (hashCode == fa_HASH)
          {
            return ClarifyTextLanguage::fa;
          }
          else if (hashCode == pl_HASH)
          {
            return ClarifyTextLanguage::pl;
          }
          else if (hashCode == pt_HASH)
          {
            return ClarifyTextLanguage::pt;
          }
          else if (hashCode == ro_HASH)
          {
            return ClarifyTextLanguage::ro;
          }
          else if (hashCode == ru_HASH)
          {
            return ClarifyTextLanguage::ru;
          }
          else if (hashCode == sa_HASH)
          {
            return ClarifyTextLanguage::sa;
          }
          else if (hashCode == sr_HASH)
          {
            return ClarifyTextLanguage::sr;
          }
          else if (hashCode == tn_HASH)
          {
            return ClarifyTextLanguage::tn;
          }
          else if (hashCode == si_HASH)
          {
            return ClarifyTextLanguage::si;
          }
          else if (hashCode == sk_HASH)
          {
            return ClarifyTextLanguage::sk;
          }
          else if (hashCode == sl_HASH)
          {
            return ClarifyTextLanguage::sl;
          }
          else if (hashCode == es_HASH)
          {
            return ClarifyTextLanguage::es;
          }
          else if (hashCode == sv_HASH)
          {
            return ClarifyTextLanguage::sv;
          }
          else if (hashCode == tl_HASH)
          {
            return ClarifyTextLanguage::tl;
          }
          else if (hashCode == ta_HASH)
          {
            return ClarifyTextLanguage::ta;
          }
          else if (hashCode == tt_HASH)
          {
            return ClarifyTextLanguage::tt;
          }
          else if (hashCode == te_HASH)
          {
            return ClarifyTextLanguage::te;
          }
          else if (hashCode == tr_HASH)
          {
            return ClarifyTextLanguage::tr;
          }
          else if (hashCode == uk_HASH)
          {
            return ClarifyTextLanguage::uk;
          }
          else if (hashCode == ur_HASH)
          {
            return ClarifyTextLanguage::ur;
          }
          else if (hashCode == yo_HASH)
          {
            return ClarifyTextLanguage::yo;
          }
          else if (hashCode == lij_HASH)
          {
            return ClarifyTextLanguage::lij;
          }
          else if (hashCode == xx_HASH)
          {
            return ClarifyTextLanguage::xx;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClarifyTextLanguage>(hashCode);
          }

          return ClarifyTextLanguage::NOT_SET;
        }

        Aws::String GetNameForClarifyTextLanguage(ClarifyTextLanguage enumValue)
        {
          switch(enumValue)
          {
          case ClarifyTextLanguage::NOT_SET:
            return {};
          case ClarifyTextLanguage::af:
            return "af";
          case ClarifyTextLanguage::sq:
            return "sq";
          case ClarifyTextLanguage::ar:
            return "ar";
          case ClarifyTextLanguage::hy:
            return "hy";
          case ClarifyTextLanguage::eu:
            return "eu";
          case ClarifyTextLanguage::bn:
            return "bn";
          case ClarifyTextLanguage::bg:
            return "bg";
          case ClarifyTextLanguage::ca:
            return "ca";
          case ClarifyTextLanguage::zh:
            return "zh";
          case ClarifyTextLanguage::hr:
            return "hr";
          case ClarifyTextLanguage::cs:
            return "cs";
          case ClarifyTextLanguage::da:
            return "da";
          case ClarifyTextLanguage::nl:
            return "nl";
          case ClarifyTextLanguage::en:
            return "en";
          case ClarifyTextLanguage::et:
            return "et";
          case ClarifyTextLanguage::fi:
            return "fi";
          case ClarifyTextLanguage::fr:
            return "fr";
          case ClarifyTextLanguage::de:
            return "de";
          case ClarifyTextLanguage::el:
            return "el";
          case ClarifyTextLanguage::gu:
            return "gu";
          case ClarifyTextLanguage::he:
            return "he";
          case ClarifyTextLanguage::hi:
            return "hi";
          case ClarifyTextLanguage::hu:
            return "hu";
          case ClarifyTextLanguage::is:
            return "is";
          case ClarifyTextLanguage::id:
            return "id";
          case ClarifyTextLanguage::ga:
            return "ga";
          case ClarifyTextLanguage::it:
            return "it";
          case ClarifyTextLanguage::kn:
            return "kn";
          case ClarifyTextLanguage::ky:
            return "ky";
          case ClarifyTextLanguage::lv:
            return "lv";
          case ClarifyTextLanguage::lt:
            return "lt";
          case ClarifyTextLanguage::lb:
            return "lb";
          case ClarifyTextLanguage::mk:
            return "mk";
          case ClarifyTextLanguage::ml:
            return "ml";
          case ClarifyTextLanguage::mr:
            return "mr";
          case ClarifyTextLanguage::ne:
            return "ne";
          case ClarifyTextLanguage::nb:
            return "nb";
          case ClarifyTextLanguage::fa:
            return "fa";
          case ClarifyTextLanguage::pl:
            return "pl";
          case ClarifyTextLanguage::pt:
            return "pt";
          case ClarifyTextLanguage::ro:
            return "ro";
          case ClarifyTextLanguage::ru:
            return "ru";
          case ClarifyTextLanguage::sa:
            return "sa";
          case ClarifyTextLanguage::sr:
            return "sr";
          case ClarifyTextLanguage::tn:
            return "tn";
          case ClarifyTextLanguage::si:
            return "si";
          case ClarifyTextLanguage::sk:
            return "sk";
          case ClarifyTextLanguage::sl:
            return "sl";
          case ClarifyTextLanguage::es:
            return "es";
          case ClarifyTextLanguage::sv:
            return "sv";
          case ClarifyTextLanguage::tl:
            return "tl";
          case ClarifyTextLanguage::ta:
            return "ta";
          case ClarifyTextLanguage::tt:
            return "tt";
          case ClarifyTextLanguage::te:
            return "te";
          case ClarifyTextLanguage::tr:
            return "tr";
          case ClarifyTextLanguage::uk:
            return "uk";
          case ClarifyTextLanguage::ur:
            return "ur";
          case ClarifyTextLanguage::yo:
            return "yo";
          case ClarifyTextLanguage::lij:
            return "lij";
          case ClarifyTextLanguage::xx:
            return "xx";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClarifyTextLanguageMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
