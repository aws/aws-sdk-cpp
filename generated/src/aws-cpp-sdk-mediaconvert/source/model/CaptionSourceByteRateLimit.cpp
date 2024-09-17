/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CaptionSourceByteRateLimit.h>
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
      namespace CaptionSourceByteRateLimitMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        CaptionSourceByteRateLimit GetCaptionSourceByteRateLimitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return CaptionSourceByteRateLimit::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return CaptionSourceByteRateLimit::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CaptionSourceByteRateLimit>(hashCode);
          }

          return CaptionSourceByteRateLimit::NOT_SET;
        }

        Aws::String GetNameForCaptionSourceByteRateLimit(CaptionSourceByteRateLimit enumValue)
        {
          switch(enumValue)
          {
          case CaptionSourceByteRateLimit::NOT_SET:
            return {};
          case CaptionSourceByteRateLimit::ENABLED:
            return "ENABLED";
          case CaptionSourceByteRateLimit::DISABLED:
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

      } // namespace CaptionSourceByteRateLimitMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
