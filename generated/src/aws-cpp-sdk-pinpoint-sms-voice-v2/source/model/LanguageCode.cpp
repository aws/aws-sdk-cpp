/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/LanguageCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointSMSVoiceV2
  {
    namespace Model
    {
      namespace LanguageCodeMapper
      {

        static const int DE_DE_HASH = HashingUtils::HashString("DE_DE");
        static const int EN_GB_HASH = HashingUtils::HashString("EN_GB");
        static const int EN_US_HASH = HashingUtils::HashString("EN_US");
        static const int ES_419_HASH = HashingUtils::HashString("ES_419");
        static const int ES_ES_HASH = HashingUtils::HashString("ES_ES");
        static const int FR_CA_HASH = HashingUtils::HashString("FR_CA");
        static const int FR_FR_HASH = HashingUtils::HashString("FR_FR");
        static const int IT_IT_HASH = HashingUtils::HashString("IT_IT");
        static const int JA_JP_HASH = HashingUtils::HashString("JA_JP");
        static const int KO_KR_HASH = HashingUtils::HashString("KO_KR");
        static const int PT_BR_HASH = HashingUtils::HashString("PT_BR");
        static const int ZH_CN_HASH = HashingUtils::HashString("ZH_CN");
        static const int ZH_TW_HASH = HashingUtils::HashString("ZH_TW");


        LanguageCode GetLanguageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DE_DE_HASH)
          {
            return LanguageCode::DE_DE;
          }
          else if (hashCode == EN_GB_HASH)
          {
            return LanguageCode::EN_GB;
          }
          else if (hashCode == EN_US_HASH)
          {
            return LanguageCode::EN_US;
          }
          else if (hashCode == ES_419_HASH)
          {
            return LanguageCode::ES_419;
          }
          else if (hashCode == ES_ES_HASH)
          {
            return LanguageCode::ES_ES;
          }
          else if (hashCode == FR_CA_HASH)
          {
            return LanguageCode::FR_CA;
          }
          else if (hashCode == FR_FR_HASH)
          {
            return LanguageCode::FR_FR;
          }
          else if (hashCode == IT_IT_HASH)
          {
            return LanguageCode::IT_IT;
          }
          else if (hashCode == JA_JP_HASH)
          {
            return LanguageCode::JA_JP;
          }
          else if (hashCode == KO_KR_HASH)
          {
            return LanguageCode::KO_KR;
          }
          else if (hashCode == PT_BR_HASH)
          {
            return LanguageCode::PT_BR;
          }
          else if (hashCode == ZH_CN_HASH)
          {
            return LanguageCode::ZH_CN;
          }
          else if (hashCode == ZH_TW_HASH)
          {
            return LanguageCode::ZH_TW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LanguageCode>(hashCode);
          }

          return LanguageCode::NOT_SET;
        }

        Aws::String GetNameForLanguageCode(LanguageCode enumValue)
        {
          switch(enumValue)
          {
          case LanguageCode::NOT_SET:
            return {};
          case LanguageCode::DE_DE:
            return "DE_DE";
          case LanguageCode::EN_GB:
            return "EN_GB";
          case LanguageCode::EN_US:
            return "EN_US";
          case LanguageCode::ES_419:
            return "ES_419";
          case LanguageCode::ES_ES:
            return "ES_ES";
          case LanguageCode::FR_CA:
            return "FR_CA";
          case LanguageCode::FR_FR:
            return "FR_FR";
          case LanguageCode::IT_IT:
            return "IT_IT";
          case LanguageCode::JA_JP:
            return "JA_JP";
          case LanguageCode::KO_KR:
            return "KO_KR";
          case LanguageCode::PT_BR:
            return "PT_BR";
          case LanguageCode::ZH_CN:
            return "ZH_CN";
          case LanguageCode::ZH_TW:
            return "ZH_TW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LanguageCodeMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
