/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ReservationSpecialFeature.h>
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
      namespace ReservationSpecialFeatureMapper
      {

        static constexpr uint32_t ADVANCED_AUDIO_HASH = ConstExprHashingUtils::HashString("ADVANCED_AUDIO");
        static constexpr uint32_t AUDIO_NORMALIZATION_HASH = ConstExprHashingUtils::HashString("AUDIO_NORMALIZATION");
        static constexpr uint32_t MGHD_HASH = ConstExprHashingUtils::HashString("MGHD");
        static constexpr uint32_t MGUHD_HASH = ConstExprHashingUtils::HashString("MGUHD");


        ReservationSpecialFeature GetReservationSpecialFeatureForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADVANCED_AUDIO_HASH)
          {
            return ReservationSpecialFeature::ADVANCED_AUDIO;
          }
          else if (hashCode == AUDIO_NORMALIZATION_HASH)
          {
            return ReservationSpecialFeature::AUDIO_NORMALIZATION;
          }
          else if (hashCode == MGHD_HASH)
          {
            return ReservationSpecialFeature::MGHD;
          }
          else if (hashCode == MGUHD_HASH)
          {
            return ReservationSpecialFeature::MGUHD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservationSpecialFeature>(hashCode);
          }

          return ReservationSpecialFeature::NOT_SET;
        }

        Aws::String GetNameForReservationSpecialFeature(ReservationSpecialFeature enumValue)
        {
          switch(enumValue)
          {
          case ReservationSpecialFeature::NOT_SET:
            return {};
          case ReservationSpecialFeature::ADVANCED_AUDIO:
            return "ADVANCED_AUDIO";
          case ReservationSpecialFeature::AUDIO_NORMALIZATION:
            return "AUDIO_NORMALIZATION";
          case ReservationSpecialFeature::MGHD:
            return "MGHD";
          case ReservationSpecialFeature::MGUHD:
            return "MGUHD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservationSpecialFeatureMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
