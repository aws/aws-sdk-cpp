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

        static const int INSERT_HASH = HashingUtils::HashString("INSERT");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int OMIT_HASH = HashingUtils::HashString("OMIT");


        HlsCaptionLanguageSetting GetHlsCaptionLanguageSettingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
