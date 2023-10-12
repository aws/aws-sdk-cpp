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

        static constexpr uint32_t AR_HASH = ConstExprHashingUtils::HashString("AR");
        static constexpr uint32_t BG_HASH = ConstExprHashingUtils::HashString("BG");
        static constexpr uint32_t BN_HASH = ConstExprHashingUtils::HashString("BN");
        static constexpr uint32_t DA_HASH = ConstExprHashingUtils::HashString("DA");
        static constexpr uint32_t DE_HASH = ConstExprHashingUtils::HashString("DE");
        static constexpr uint32_t CS_HASH = ConstExprHashingUtils::HashString("CS");
        static constexpr uint32_t EL_HASH = ConstExprHashingUtils::HashString("EL");
        static constexpr uint32_t EN_HASH = ConstExprHashingUtils::HashString("EN");
        static constexpr uint32_t ES_HASH = ConstExprHashingUtils::HashString("ES");
        static constexpr uint32_t FA_HASH = ConstExprHashingUtils::HashString("FA");
        static constexpr uint32_t FI_HASH = ConstExprHashingUtils::HashString("FI");
        static constexpr uint32_t FR_HASH = ConstExprHashingUtils::HashString("FR");
        static constexpr uint32_t HI_HASH = ConstExprHashingUtils::HashString("HI");
        static constexpr uint32_t HU_HASH = ConstExprHashingUtils::HashString("HU");
        static constexpr uint32_t ID_HASH = ConstExprHashingUtils::HashString("ID");
        static constexpr uint32_t IT_HASH = ConstExprHashingUtils::HashString("IT");
        static constexpr uint32_t JA_HASH = ConstExprHashingUtils::HashString("JA");
        static constexpr uint32_t KO_HASH = ConstExprHashingUtils::HashString("KO");
        static constexpr uint32_t LT_HASH = ConstExprHashingUtils::HashString("LT");
        static constexpr uint32_t LV_HASH = ConstExprHashingUtils::HashString("LV");
        static constexpr uint32_t NL_HASH = ConstExprHashingUtils::HashString("NL");
        static constexpr uint32_t NO_HASH = ConstExprHashingUtils::HashString("NO");
        static constexpr uint32_t PT_HASH = ConstExprHashingUtils::HashString("PT");
        static constexpr uint32_t RO_HASH = ConstExprHashingUtils::HashString("RO");
        static constexpr uint32_t RU_HASH = ConstExprHashingUtils::HashString("RU");
        static constexpr uint32_t SV_HASH = ConstExprHashingUtils::HashString("SV");
        static constexpr uint32_t SW_HASH = ConstExprHashingUtils::HashString("SW");
        static constexpr uint32_t TH_HASH = ConstExprHashingUtils::HashString("TH");
        static constexpr uint32_t TR_HASH = ConstExprHashingUtils::HashString("TR");
        static constexpr uint32_t ZH_HASH = ConstExprHashingUtils::HashString("ZH");
        static constexpr uint32_t DEFAULT_HASH = ConstExprHashingUtils::HashString("DEFAULT");


        LanguageCodeType GetLanguageCodeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
