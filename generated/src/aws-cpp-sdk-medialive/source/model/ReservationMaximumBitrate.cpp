﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ReservationMaximumBitrate.h>
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
      namespace ReservationMaximumBitrateMapper
      {

        static const int MAX_10_MBPS_HASH = HashingUtils::HashString("MAX_10_MBPS");
        static const int MAX_20_MBPS_HASH = HashingUtils::HashString("MAX_20_MBPS");
        static const int MAX_50_MBPS_HASH = HashingUtils::HashString("MAX_50_MBPS");


        ReservationMaximumBitrate GetReservationMaximumBitrateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MAX_10_MBPS_HASH)
          {
            return ReservationMaximumBitrate::MAX_10_MBPS;
          }
          else if (hashCode == MAX_20_MBPS_HASH)
          {
            return ReservationMaximumBitrate::MAX_20_MBPS;
          }
          else if (hashCode == MAX_50_MBPS_HASH)
          {
            return ReservationMaximumBitrate::MAX_50_MBPS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservationMaximumBitrate>(hashCode);
          }

          return ReservationMaximumBitrate::NOT_SET;
        }

        Aws::String GetNameForReservationMaximumBitrate(ReservationMaximumBitrate enumValue)
        {
          switch(enumValue)
          {
          case ReservationMaximumBitrate::MAX_10_MBPS:
            return "MAX_10_MBPS";
          case ReservationMaximumBitrate::MAX_20_MBPS:
            return "MAX_20_MBPS";
          case ReservationMaximumBitrate::MAX_50_MBPS:
            return "MAX_50_MBPS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservationMaximumBitrateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
