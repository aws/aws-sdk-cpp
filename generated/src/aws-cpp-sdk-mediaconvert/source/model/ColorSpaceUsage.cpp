/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ColorSpaceUsage.h>
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
      namespace ColorSpaceUsageMapper
      {

        static constexpr uint32_t FORCE_HASH = ConstExprHashingUtils::HashString("FORCE");
        static constexpr uint32_t FALLBACK_HASH = ConstExprHashingUtils::HashString("FALLBACK");


        ColorSpaceUsage GetColorSpaceUsageForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FORCE_HASH)
          {
            return ColorSpaceUsage::FORCE;
          }
          else if (hashCode == FALLBACK_HASH)
          {
            return ColorSpaceUsage::FALLBACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColorSpaceUsage>(hashCode);
          }

          return ColorSpaceUsage::NOT_SET;
        }

        Aws::String GetNameForColorSpaceUsage(ColorSpaceUsage enumValue)
        {
          switch(enumValue)
          {
          case ColorSpaceUsage::NOT_SET:
            return {};
          case ColorSpaceUsage::FORCE:
            return "FORCE";
          case ColorSpaceUsage::FALLBACK:
            return "FALLBACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColorSpaceUsageMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
