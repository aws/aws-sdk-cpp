/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/WebvttStylePassthrough.h>
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
      namespace WebvttStylePassthroughMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int STRICT_HASH = HashingUtils::HashString("STRICT");
        static const int MERGE_HASH = HashingUtils::HashString("MERGE");


        WebvttStylePassthrough GetWebvttStylePassthroughForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return WebvttStylePassthrough::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return WebvttStylePassthrough::DISABLED;
          }
          else if (hashCode == STRICT_HASH)
          {
            return WebvttStylePassthrough::STRICT;
          }
          else if (hashCode == MERGE_HASH)
          {
            return WebvttStylePassthrough::MERGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WebvttStylePassthrough>(hashCode);
          }

          return WebvttStylePassthrough::NOT_SET;
        }

        Aws::String GetNameForWebvttStylePassthrough(WebvttStylePassthrough enumValue)
        {
          switch(enumValue)
          {
          case WebvttStylePassthrough::NOT_SET:
            return {};
          case WebvttStylePassthrough::ENABLED:
            return "ENABLED";
          case WebvttStylePassthrough::DISABLED:
            return "DISABLED";
          case WebvttStylePassthrough::STRICT:
            return "STRICT";
          case WebvttStylePassthrough::MERGE:
            return "MERGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WebvttStylePassthroughMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
