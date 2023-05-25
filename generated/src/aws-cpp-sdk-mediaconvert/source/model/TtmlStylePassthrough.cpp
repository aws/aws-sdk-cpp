/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/TtmlStylePassthrough.h>
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
      namespace TtmlStylePassthroughMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        TtmlStylePassthrough GetTtmlStylePassthroughForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return TtmlStylePassthrough::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return TtmlStylePassthrough::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TtmlStylePassthrough>(hashCode);
          }

          return TtmlStylePassthrough::NOT_SET;
        }

        Aws::String GetNameForTtmlStylePassthrough(TtmlStylePassthrough enumValue)
        {
          switch(enumValue)
          {
          case TtmlStylePassthrough::ENABLED:
            return "ENABLED";
          case TtmlStylePassthrough::DISABLED:
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

      } // namespace TtmlStylePassthroughMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
