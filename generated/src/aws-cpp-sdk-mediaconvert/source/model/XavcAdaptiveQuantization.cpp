/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/XavcAdaptiveQuantization.h>
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
      namespace XavcAdaptiveQuantizationMapper
      {

        static constexpr uint32_t OFF_HASH = ConstExprHashingUtils::HashString("OFF");
        static constexpr uint32_t AUTO_HASH = ConstExprHashingUtils::HashString("AUTO");
        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t HIGHER_HASH = ConstExprHashingUtils::HashString("HIGHER");
        static constexpr uint32_t MAX_HASH = ConstExprHashingUtils::HashString("MAX");


        XavcAdaptiveQuantization GetXavcAdaptiveQuantizationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return XavcAdaptiveQuantization::OFF;
          }
          else if (hashCode == AUTO_HASH)
          {
            return XavcAdaptiveQuantization::AUTO;
          }
          else if (hashCode == LOW_HASH)
          {
            return XavcAdaptiveQuantization::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return XavcAdaptiveQuantization::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return XavcAdaptiveQuantization::HIGH;
          }
          else if (hashCode == HIGHER_HASH)
          {
            return XavcAdaptiveQuantization::HIGHER;
          }
          else if (hashCode == MAX_HASH)
          {
            return XavcAdaptiveQuantization::MAX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<XavcAdaptiveQuantization>(hashCode);
          }

          return XavcAdaptiveQuantization::NOT_SET;
        }

        Aws::String GetNameForXavcAdaptiveQuantization(XavcAdaptiveQuantization enumValue)
        {
          switch(enumValue)
          {
          case XavcAdaptiveQuantization::NOT_SET:
            return {};
          case XavcAdaptiveQuantization::OFF:
            return "OFF";
          case XavcAdaptiveQuantization::AUTO:
            return "AUTO";
          case XavcAdaptiveQuantization::LOW:
            return "LOW";
          case XavcAdaptiveQuantization::MEDIUM:
            return "MEDIUM";
          case XavcAdaptiveQuantization::HIGH:
            return "HIGH";
          case XavcAdaptiveQuantization::HIGHER:
            return "HIGHER";
          case XavcAdaptiveQuantization::MAX:
            return "MAX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace XavcAdaptiveQuantizationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
