/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DvbSubtitleStylePassthrough.h>
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
      namespace DvbSubtitleStylePassthroughMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        DvbSubtitleStylePassthrough GetDvbSubtitleStylePassthroughForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return DvbSubtitleStylePassthrough::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DvbSubtitleStylePassthrough::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubtitleStylePassthrough>(hashCode);
          }

          return DvbSubtitleStylePassthrough::NOT_SET;
        }

        Aws::String GetNameForDvbSubtitleStylePassthrough(DvbSubtitleStylePassthrough enumValue)
        {
          switch(enumValue)
          {
          case DvbSubtitleStylePassthrough::NOT_SET:
            return {};
          case DvbSubtitleStylePassthrough::ENABLED:
            return "ENABLED";
          case DvbSubtitleStylePassthrough::DISABLED:
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

      } // namespace DvbSubtitleStylePassthroughMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
