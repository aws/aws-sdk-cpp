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

        static constexpr uint32_t OFF_HASH = ConstExprHashingUtils::HashString("OFF");
        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t HIGHER_HASH = ConstExprHashingUtils::HashString("HIGHER");
        static constexpr uint32_t MAX_HASH = ConstExprHashingUtils::HashString("MAX");


        Av1AdaptiveQuantization GetAv1AdaptiveQuantizationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case Av1AdaptiveQuantization::NOT_SET:
            return {};
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
