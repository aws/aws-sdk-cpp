/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsCaptionLanguageSetting.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace HlsCaptionLanguageSettingMapper
      {

        static constexpr uint32_t INSERT_HASH = ConstExprHashingUtils::HashString("INSERT");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t OMIT_HASH = ConstExprHashingUtils::HashString("OMIT");


        HlsCaptionLanguageSetting GetHlsCaptionLanguageSettingForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSERT_HASH)
          {
            return HlsCaptionLanguageSetting::INSERT;
          }
          else if (hashCode == NONE_HASH)
          {
            return HlsCaptionLanguageSetting::NONE;
          }
          else if (hashCode == OMIT_HASH)
          {
            return HlsCaptionLanguageSetting::OMIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsCaptionLanguageSetting>(hashCode);
          }

          return HlsCaptionLanguageSetting::NOT_SET;
        }

        Aws::String GetNameForHlsCaptionLanguageSetting(HlsCaptionLanguageSetting enumValue)
        {
          switch(enumValue)
          {
          case HlsCaptionLanguageSetting::NOT_SET:
            return {};
          case HlsCaptionLanguageSetting::INSERT:
            return "INSERT";
          case HlsCaptionLanguageSetting::NONE:
            return "NONE";
          case HlsCaptionLanguageSetting::OMIT:
            return "OMIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsCaptionLanguageSettingMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
