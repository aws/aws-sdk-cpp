/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/LocaleType.h>
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
      namespace LocaleTypeMapper
      {

        static constexpr uint32_t en_HASH = ConstExprHashingUtils::HashString("en");
        static constexpr uint32_t fr_HASH = ConstExprHashingUtils::HashString("fr");
        static constexpr uint32_t ko_HASH = ConstExprHashingUtils::HashString("ko");
        static constexpr uint32_t de_HASH = ConstExprHashingUtils::HashString("de");
        static constexpr uint32_t es_HASH = ConstExprHashingUtils::HashString("es");
        static constexpr uint32_t ja_HASH = ConstExprHashingUtils::HashString("ja");
        static constexpr uint32_t ru_HASH = ConstExprHashingUtils::HashString("ru");
        static constexpr uint32_t zh_CN_HASH = ConstExprHashingUtils::HashString("zh_CN");
        static constexpr uint32_t zh_TW_HASH = ConstExprHashingUtils::HashString("zh_TW");
        static constexpr uint32_t pt_BR_HASH = ConstExprHashingUtils::HashString("pt_BR");
        static constexpr uint32_t default__HASH = ConstExprHashingUtils::HashString("default");


        LocaleType GetLocaleTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == en_HASH)
          {
            return LocaleType::en;
          }
          else if (hashCode == fr_HASH)
          {
            return LocaleType::fr;
          }
          else if (hashCode == ko_HASH)
          {
            return LocaleType::ko;
          }
          else if (hashCode == de_HASH)
          {
            return LocaleType::de;
          }
          else if (hashCode == es_HASH)
          {
            return LocaleType::es;
          }
          else if (hashCode == ja_HASH)
          {
            return LocaleType::ja;
          }
          else if (hashCode == ru_HASH)
          {
            return LocaleType::ru;
          }
          else if (hashCode == zh_CN_HASH)
          {
            return LocaleType::zh_CN;
          }
          else if (hashCode == zh_TW_HASH)
          {
            return LocaleType::zh_TW;
          }
          else if (hashCode == pt_BR_HASH)
          {
            return LocaleType::pt_BR;
          }
          else if (hashCode == default__HASH)
          {
            return LocaleType::default_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocaleType>(hashCode);
          }

          return LocaleType::NOT_SET;
        }

        Aws::String GetNameForLocaleType(LocaleType enumValue)
        {
          switch(enumValue)
          {
          case LocaleType::NOT_SET:
            return {};
          case LocaleType::en:
            return "en";
          case LocaleType::fr:
            return "fr";
          case LocaleType::ko:
            return "ko";
          case LocaleType::de:
            return "de";
          case LocaleType::es:
            return "es";
          case LocaleType::ja:
            return "ja";
          case LocaleType::ru:
            return "ru";
          case LocaleType::zh_CN:
            return "zh_CN";
          case LocaleType::zh_TW:
            return "zh_TW";
          case LocaleType::pt_BR:
            return "pt_BR";
          case LocaleType::default_:
            return "default";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LocaleTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
