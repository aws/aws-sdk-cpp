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

        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t STRICT_HASH = ConstExprHashingUtils::HashString("STRICT");


        WebvttStylePassthrough GetWebvttStylePassthroughForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
