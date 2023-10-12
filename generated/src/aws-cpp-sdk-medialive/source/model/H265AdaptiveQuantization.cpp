/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H265AdaptiveQuantization.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace H265AdaptiveQuantizationMapper
      {

        static constexpr uint32_t AUTO_HASH = ConstExprHashingUtils::HashString("AUTO");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t HIGHER_HASH = ConstExprHashingUtils::HashString("HIGHER");
        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t MAX_HASH = ConstExprHashingUtils::HashString("MAX");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t OFF_HASH = ConstExprHashingUtils::HashString("OFF");


        H265AdaptiveQuantization GetH265AdaptiveQuantizationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return H265AdaptiveQuantization::AUTO;
          }
          else if (hashCode == HIGH_HASH)
          {
            return H265AdaptiveQuantization::HIGH;
          }
          else if (hashCode == HIGHER_HASH)
          {
            return H265AdaptiveQuantization::HIGHER;
          }
          else if (hashCode == LOW_HASH)
          {
            return H265AdaptiveQuantization::LOW;
          }
          else if (hashCode == MAX_HASH)
          {
            return H265AdaptiveQuantization::MAX;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return H265AdaptiveQuantization::MEDIUM;
          }
          else if (hashCode == OFF_HASH)
          {
            return H265AdaptiveQuantization::OFF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265AdaptiveQuantization>(hashCode);
          }

          return H265AdaptiveQuantization::NOT_SET;
        }

        Aws::String GetNameForH265AdaptiveQuantization(H265AdaptiveQuantization enumValue)
        {
          switch(enumValue)
          {
          case H265AdaptiveQuantization::NOT_SET:
            return {};
          case H265AdaptiveQuantization::AUTO:
            return "AUTO";
          case H265AdaptiveQuantization::HIGH:
            return "HIGH";
          case H265AdaptiveQuantization::HIGHER:
            return "HIGHER";
          case H265AdaptiveQuantization::LOW:
            return "LOW";
          case H265AdaptiveQuantization::MAX:
            return "MAX";
          case H265AdaptiveQuantization::MEDIUM:
            return "MEDIUM";
          case H265AdaptiveQuantization::OFF:
            return "OFF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265AdaptiveQuantizationMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
