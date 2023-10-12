/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Mpeg2AdaptiveQuantization.h>
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
      namespace Mpeg2AdaptiveQuantizationMapper
      {

        static constexpr uint32_t OFF_HASH = ConstExprHashingUtils::HashString("OFF");
        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");


        Mpeg2AdaptiveQuantization GetMpeg2AdaptiveQuantizationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return Mpeg2AdaptiveQuantization::OFF;
          }
          else if (hashCode == LOW_HASH)
          {
            return Mpeg2AdaptiveQuantization::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return Mpeg2AdaptiveQuantization::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return Mpeg2AdaptiveQuantization::HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mpeg2AdaptiveQuantization>(hashCode);
          }

          return Mpeg2AdaptiveQuantization::NOT_SET;
        }

        Aws::String GetNameForMpeg2AdaptiveQuantization(Mpeg2AdaptiveQuantization enumValue)
        {
          switch(enumValue)
          {
          case Mpeg2AdaptiveQuantization::NOT_SET:
            return {};
          case Mpeg2AdaptiveQuantization::OFF:
            return "OFF";
          case Mpeg2AdaptiveQuantization::LOW:
            return "LOW";
          case Mpeg2AdaptiveQuantization::MEDIUM:
            return "MEDIUM";
          case Mpeg2AdaptiveQuantization::HIGH:
            return "HIGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mpeg2AdaptiveQuantizationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
