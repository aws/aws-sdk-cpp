/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/LanguageCodeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace LanguageCodeTypeMapper
      {

        static const int AR_HASH = HashingUtils::HashString("AR");
        static const int BG_HASH = HashingUtils::HashString("BG");
        static const int BN_HASH = HashingUtils::HashString("BN");
        static const int DA_HASH = HashingUtils::HashString("DA");
        static const int DE_HASH = HashingUtils::HashString("DE");
        static const int CS_HASH = HashingUtils::HashString("CS");
        static const int EL_HASH = HashingUtils::HashString("EL");
        static const int EN_HASH = HashingUtils::HashString("EN");
        static const int ES_HASH = HashingUtils::HashString("ES");
        static const int FA_HASH = HashingUtils::HashString("FA");
        static const int FI_HASH = HashingUtils::HashString("FI");
        static const int FR_HASH = HashingUtils::HashString("FR");
        static const int HI_HASH = HashingUtils::HashString("HI");
        static const int HU_HASH = HashingUtils::HashString("HU");
        static const int ID_HASH = HashingUtils::HashString("ID");
        static const int IT_HASH = HashingUtils::HashString("IT");
        static const int JA_HASH = HashingUtils::HashString("JA");
        static const int KO_HASH = HashingUtils::HashString("KO");
        static const int LT_HASH = HashingUtils::HashString("LT");
        static const int LV_HASH = HashingUtils::HashString("LV");
        static const int NL_HASH = HashingUtils::HashString("NL");
        static const int NO_HASH = HashingUtils::HashString("NO");
        static const int PT_HASH = HashingUtils::HashString("PT");
        static const int RO_HASH = HashingUtils::HashString("RO");
        static const int RU_HASH = HashingUtils::HashString("RU");
        static const int SV_HASH = HashingUtils::HashString("SV");
        static const int SW_HASH = HashingUtils::HashString("SW");
        static const int TH_HASH = HashingUtils::HashString("TH");
        static const int TR_HASH = HashingUtils::HashString("TR");
        static const int ZH_HASH = HashingUtils::HashString("ZH");
        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");


        LanguageCodeType GetLanguageCodeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AR_HASH)
          {
            return LanguageCodeType::AR;
          }
          else if (hashCode == BG_HASH)
          {
            return LanguageCodeType::BG;
          }
          else if (hashCode == BN_HASH)
          {
            return LanguageCodeType::BN;
          }
          else if (hashCode == DA_HASH)
          {
            return LanguageCodeType::DA;
          }
          else if (hashCode == DE_HASH)
          {
            return LanguageCodeType::DE;
          }
          else if (hashCode == CS_HASH)
          {
            return LanguageCodeType::CS;
          }
          else if (hashCode == EL_HASH)
          {
            return LanguageCodeType::EL;
          }
          else if (hashCode == EN_HASH)
          {
            return LanguageCodeType::EN;
          }
          else if (hashCode == ES_HASH)
          {
            return LanguageCodeType::ES;
          }
          else if (hashCode == FA_HASH)
          {
            return LanguageCodeType::FA;
          }
          else if (hashCode == FI_HASH)
          {
            return LanguageCodeType::FI;
          }
          else if (hashCode == FR_HASH)
          {
            return LanguageCodeType::FR;
          }
          else if (hashCode == HI_HASH)
          {
            return LanguageCodeType::HI;
          }
          else if (hashCode == HU_HASH)
          {
            return LanguageCodeType::HU;
          }
          else if (hashCode == ID_HASH)
          {
            return LanguageCodeType::ID;
          }
          else if (hashCode == IT_HASH)
          {
            return LanguageCodeType::IT;
          }
          else if (hashCode == JA_HASH)
          {
            return LanguageCodeType::JA;
          }
          else if (hashCode == KO_HASH)
          {
            return LanguageCodeType::KO;
          }
          else if (hashCode == LT_HASH)
          {
            return LanguageCodeType::LT;
          }
          else if (hashCode == LV_HASH)
          {
            return LanguageCodeType::LV;
          }
          else if (hashCode == NL_HASH)
          {
            return LanguageCodeType::NL;
          }
          else if (hashCode == NO_HASH)
          {
            return LanguageCodeType::NO;
          }
          else if (hashCode == PT_HASH)
          {
            return LanguageCodeType::PT;
          }
          else if (hashCode == RO_HASH)
          {
            return LanguageCodeType::RO;
          }
          else if (hashCode == RU_HASH)
          {
            return LanguageCodeType::RU;
          }
          else if (hashCode == SV_HASH)
          {
            return LanguageCodeType::SV;
          }
          else if (hashCode == SW_HASH)
          {
            return LanguageCodeType::SW;
          }
          else if (hashCode == TH_HASH)
          {
            return LanguageCodeType::TH;
          }
          else if (hashCode == TR_HASH)
          {
            return LanguageCodeType::TR;
          }
          else if (hashCode == ZH_HASH)
          {
            return LanguageCodeType::ZH;
          }
          else if (hashCode == DEFAULT_HASH)
          {
            return LanguageCodeType::DEFAULT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LanguageCodeType>(hashCode);
          }

          return LanguageCodeType::NOT_SET;
        }

        Aws::String GetNameForLanguageCodeType(LanguageCodeType enumValue)
        {
          switch(enumValue)
          {
          case LanguageCodeType::NOT_SET:
            return {};
          case LanguageCodeType::AR:
            return "AR";
          case LanguageCodeType::BG:
            return "BG";
          case LanguageCodeType::BN:
            return "BN";
          case LanguageCodeType::DA:
            return "DA";
          case LanguageCodeType::DE:
            return "DE";
          case LanguageCodeType::CS:
            return "CS";
          case LanguageCodeType::EL:
            return "EL";
          case LanguageCodeType::EN:
            return "EN";
          case LanguageCodeType::ES:
            return "ES";
          case LanguageCodeType::FA:
            return "FA";
          case LanguageCodeType::FI:
            return "FI";
          case LanguageCodeType::FR:
            return "FR";
          case LanguageCodeType::HI:
            return "HI";
          case LanguageCodeType::HU:
            return "HU";
          case LanguageCodeType::ID:
            return "ID";
          case LanguageCodeType::IT:
            return "IT";
          case LanguageCodeType::JA:
            return "JA";
          case LanguageCodeType::KO:
            return "KO";
          case LanguageCodeType::LT:
            return "LT";
          case LanguageCodeType::LV:
            return "LV";
          case LanguageCodeType::NL:
            return "NL";
          case LanguageCodeType::NO:
            return "NO";
          case LanguageCodeType::PT:
            return "PT";
          case LanguageCodeType::RO:
            return "RO";
          case LanguageCodeType::RU:
            return "RU";
          case LanguageCodeType::SV:
            return "SV";
          case LanguageCodeType::SW:
            return "SW";
          case LanguageCodeType::TH:
            return "TH";
          case LanguageCodeType::TR:
            return "TR";
          case LanguageCodeType::ZH:
            return "ZH";
          case LanguageCodeType::DEFAULT:
            return "DEFAULT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LanguageCodeTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
