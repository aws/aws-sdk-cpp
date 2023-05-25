/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Av1AdaptiveQuantization.h>
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
      namespace Av1AdaptiveQuantizationMapper
      {

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int HIGHER_HASH = HashingUtils::HashString("HIGHER");
        static const int MAX_HASH = HashingUtils::HashString("MAX");


        Av1AdaptiveQuantization GetAv1AdaptiveQuantizationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return Av1AdaptiveQuantization::OFF;
          }
          else if (hashCode == LOW_HASH)
          {
            return Av1AdaptiveQuantization::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return Av1AdaptiveQuantization::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return Av1AdaptiveQuantization::HIGH;
          }
          else if (hashCode == HIGHER_HASH)
          {
            return Av1AdaptiveQuantization::HIGHER;
          }
          else if (hashCode == MAX_HASH)
          {
            return Av1AdaptiveQuantization::MAX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Av1AdaptiveQuantization>(hashCode);
          }

          return Av1AdaptiveQuantization::NOT_SET;
        }

        Aws::String GetNameForAv1AdaptiveQuantization(Av1AdaptiveQuantization enumValue)
        {
          switch(enumValue)
          {
          case Av1AdaptiveQuantization::OFF:
            return "OFF";
          case Av1AdaptiveQuantization::LOW:
            return "LOW";
          case Av1AdaptiveQuantization::MEDIUM:
            return "MEDIUM";
          case Av1AdaptiveQuantization::HIGH:
            return "HIGH";
          case Av1AdaptiveQuantization::HIGHER:
            return "HIGHER";
          case Av1AdaptiveQuantization::MAX:
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

      } // namespace Av1AdaptiveQuantizationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
