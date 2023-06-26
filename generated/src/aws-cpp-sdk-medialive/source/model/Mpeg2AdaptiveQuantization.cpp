/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Mpeg2AdaptiveQuantization.h>
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
      namespace Mpeg2AdaptiveQuantizationMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int OFF_HASH = HashingUtils::HashString("OFF");


        Mpeg2AdaptiveQuantization GetMpeg2AdaptiveQuantizationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return Mpeg2AdaptiveQuantization::AUTO;
          }
          else if (hashCode == HIGH_HASH)
          {
            return Mpeg2AdaptiveQuantization::HIGH;
          }
          else if (hashCode == LOW_HASH)
          {
            return Mpeg2AdaptiveQuantization::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return Mpeg2AdaptiveQuantization::MEDIUM;
          }
          else if (hashCode == OFF_HASH)
          {
            return Mpeg2AdaptiveQuantization::OFF;
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
          case Mpeg2AdaptiveQuantization::AUTO:
            return "AUTO";
          case Mpeg2AdaptiveQuantization::HIGH:
            return "HIGH";
          case Mpeg2AdaptiveQuantization::LOW:
            return "LOW";
          case Mpeg2AdaptiveQuantization::MEDIUM:
            return "MEDIUM";
          case Mpeg2AdaptiveQuantization::OFF:
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

      } // namespace Mpeg2AdaptiveQuantizationMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
