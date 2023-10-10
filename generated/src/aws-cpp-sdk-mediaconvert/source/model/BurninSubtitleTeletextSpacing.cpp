/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/BurninSubtitleTeletextSpacing.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace BurninSubtitleTeletextSpacingMapper
      {

        static const int FIXED_GRID_HASH = HashingUtils::HashString("FIXED_GRID");
        static const int PROPORTIONAL_HASH = HashingUtils::HashString("PROPORTIONAL");
        static const int AUTO_HASH = HashingUtils::HashString("AUTO");


        BurninSubtitleTeletextSpacing GetBurninSubtitleTeletextSpacingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIXED_GRID_HASH)
          {
            return BurninSubtitleTeletextSpacing::FIXED_GRID;
          }
          else if (hashCode == PROPORTIONAL_HASH)
          {
            return BurninSubtitleTeletextSpacing::PROPORTIONAL;
          }
          else if (hashCode == AUTO_HASH)
          {
            return BurninSubtitleTeletextSpacing::AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurninSubtitleTeletextSpacing>(hashCode);
          }

          return BurninSubtitleTeletextSpacing::NOT_SET;
        }

        Aws::String GetNameForBurninSubtitleTeletextSpacing(BurninSubtitleTeletextSpacing enumValue)
        {
          switch(enumValue)
          {
          case BurninSubtitleTeletextSpacing::NOT_SET:
            return {};
          case BurninSubtitleTeletextSpacing::FIXED_GRID:
            return "FIXED_GRID";
          case BurninSubtitleTeletextSpacing::PROPORTIONAL:
            return "PROPORTIONAL";
          case BurninSubtitleTeletextSpacing::AUTO:
            return "AUTO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BurninSubtitleTeletextSpacingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
