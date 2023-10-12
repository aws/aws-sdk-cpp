/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H265FlickerAdaptiveQuantization.h>
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
      namespace H265FlickerAdaptiveQuantizationMapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");


        H265FlickerAdaptiveQuantization GetH265FlickerAdaptiveQuantizationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return H265FlickerAdaptiveQuantization::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return H265FlickerAdaptiveQuantization::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265FlickerAdaptiveQuantization>(hashCode);
          }

          return H265FlickerAdaptiveQuantization::NOT_SET;
        }

        Aws::String GetNameForH265FlickerAdaptiveQuantization(H265FlickerAdaptiveQuantization enumValue)
        {
          switch(enumValue)
          {
          case H265FlickerAdaptiveQuantization::NOT_SET:
            return {};
          case H265FlickerAdaptiveQuantization::DISABLED:
            return "DISABLED";
          case H265FlickerAdaptiveQuantization::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265FlickerAdaptiveQuantizationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
