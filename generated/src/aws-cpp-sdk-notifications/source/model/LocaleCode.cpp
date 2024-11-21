/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/LocaleCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Notifications
  {
    namespace Model
    {
      namespace LocaleCodeMapper
      {

        static const int de_DE_HASH = HashingUtils::HashString("de_DE");
        static const int en_CA_HASH = HashingUtils::HashString("en_CA");
        static const int en_US_HASH = HashingUtils::HashString("en_US");
        static const int en_UK_HASH = HashingUtils::HashString("en_UK");
        static const int es_ES_HASH = HashingUtils::HashString("es_ES");
        static const int fr_CA_HASH = HashingUtils::HashString("fr_CA");
        static const int fr_FR_HASH = HashingUtils::HashString("fr_FR");
        static const int id_ID_HASH = HashingUtils::HashString("id_ID");
        static const int it_IT_HASH = HashingUtils::HashString("it_IT");
        static const int ja_JP_HASH = HashingUtils::HashString("ja_JP");
        static const int ko_KR_HASH = HashingUtils::HashString("ko_KR");
        static const int pt_BR_HASH = HashingUtils::HashString("pt_BR");
        static const int tr_TR_HASH = HashingUtils::HashString("tr_TR");
        static const int zh_CN_HASH = HashingUtils::HashString("zh_CN");
        static const int zh_TW_HASH = HashingUtils::HashString("zh_TW");


        LocaleCode GetLocaleCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == de_DE_HASH)
          {
            return LocaleCode::de_DE;
          }
          else if (hashCode == en_CA_HASH)
          {
            return LocaleCode::en_CA;
          }
          else if (hashCode == en_US_HASH)
          {
            return LocaleCode::en_US;
          }
          else if (hashCode == en_UK_HASH)
          {
            return LocaleCode::en_UK;
          }
          else if (hashCode == es_ES_HASH)
          {
            return LocaleCode::es_ES;
          }
          else if (hashCode == fr_CA_HASH)
          {
            return LocaleCode::fr_CA;
          }
          else if (hashCode == fr_FR_HASH)
          {
            return LocaleCode::fr_FR;
          }
          else if (hashCode == id_ID_HASH)
          {
            return LocaleCode::id_ID;
          }
          else if (hashCode == it_IT_HASH)
          {
            return LocaleCode::it_IT;
          }
          else if (hashCode == ja_JP_HASH)
          {
            return LocaleCode::ja_JP;
          }
          else if (hashCode == ko_KR_HASH)
          {
            return LocaleCode::ko_KR;
          }
          else if (hashCode == pt_BR_HASH)
          {
            return LocaleCode::pt_BR;
          }
          else if (hashCode == tr_TR_HASH)
          {
            return LocaleCode::tr_TR;
          }
          else if (hashCode == zh_CN_HASH)
          {
            return LocaleCode::zh_CN;
          }
          else if (hashCode == zh_TW_HASH)
          {
            return LocaleCode::zh_TW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocaleCode>(hashCode);
          }

          return LocaleCode::NOT_SET;
        }

        Aws::String GetNameForLocaleCode(LocaleCode enumValue)
        {
          switch(enumValue)
          {
          case LocaleCode::NOT_SET:
            return {};
          case LocaleCode::de_DE:
            return "de_DE";
          case LocaleCode::en_CA:
            return "en_CA";
          case LocaleCode::en_US:
            return "en_US";
          case LocaleCode::en_UK:
            return "en_UK";
          case LocaleCode::es_ES:
            return "es_ES";
          case LocaleCode::fr_CA:
            return "fr_CA";
          case LocaleCode::fr_FR:
            return "fr_FR";
          case LocaleCode::id_ID:
            return "id_ID";
          case LocaleCode::it_IT:
            return "it_IT";
          case LocaleCode::ja_JP:
            return "ja_JP";
          case LocaleCode::ko_KR:
            return "ko_KR";
          case LocaleCode::pt_BR:
            return "pt_BR";
          case LocaleCode::tr_TR:
            return "tr_TR";
          case LocaleCode::zh_CN:
            return "zh_CN";
          case LocaleCode::zh_TW:
            return "zh_TW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LocaleCodeMapper
    } // namespace Model
  } // namespace Notifications
} // namespace Aws
