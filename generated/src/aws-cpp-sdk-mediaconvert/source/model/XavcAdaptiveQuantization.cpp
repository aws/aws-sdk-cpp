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

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int HIGHER_HASH = HashingUtils::HashString("HIGHER");
        static const int MAX_HASH = HashingUtils::HashString("MAX");


        XavcAdaptiveQuantization GetXavcAdaptiveQuantizationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
