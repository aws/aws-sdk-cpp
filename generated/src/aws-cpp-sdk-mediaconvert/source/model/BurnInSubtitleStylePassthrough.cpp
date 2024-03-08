/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/BurnInSubtitleStylePassthrough.h>
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
      namespace BurnInSubtitleStylePassthroughMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        BurnInSubtitleStylePassthrough GetBurnInSubtitleStylePassthroughForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return BurnInSubtitleStylePassthrough::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return BurnInSubtitleStylePassthrough::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurnInSubtitleStylePassthrough>(hashCode);
          }

          return BurnInSubtitleStylePassthrough::NOT_SET;
        }

        Aws::String GetNameForBurnInSubtitleStylePassthrough(BurnInSubtitleStylePassthrough enumValue)
        {
          switch(enumValue)
          {
          case BurnInSubtitleStylePassthrough::NOT_SET:
            return {};
          case BurnInSubtitleStylePassthrough::ENABLED:
            return "ENABLED";
          case BurnInSubtitleStylePassthrough::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BurnInSubtitleStylePassthroughMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
