/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ReservationVideoQuality.h>
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
      namespace ReservationVideoQualityMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int ENHANCED_HASH = HashingUtils::HashString("ENHANCED");
        static const int PREMIUM_HASH = HashingUtils::HashString("PREMIUM");


        ReservationVideoQuality GetReservationVideoQualityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return ReservationVideoQuality::STANDARD;
          }
          else if (hashCode == ENHANCED_HASH)
          {
            return ReservationVideoQuality::ENHANCED;
          }
          else if (hashCode == PREMIUM_HASH)
          {
            return ReservationVideoQuality::PREMIUM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservationVideoQuality>(hashCode);
          }

          return ReservationVideoQuality::NOT_SET;
        }

        Aws::String GetNameForReservationVideoQuality(ReservationVideoQuality enumValue)
        {
          switch(enumValue)
          {
          case ReservationVideoQuality::STANDARD:
            return "STANDARD";
          case ReservationVideoQuality::ENHANCED:
            return "ENHANCED";
          case ReservationVideoQuality::PREMIUM:
            return "PREMIUM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservationVideoQualityMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
