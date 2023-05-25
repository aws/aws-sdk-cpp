/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ReservationResolution.h>
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
      namespace ReservationResolutionMapper
      {

        static const int SD_HASH = HashingUtils::HashString("SD");
        static const int HD_HASH = HashingUtils::HashString("HD");
        static const int FHD_HASH = HashingUtils::HashString("FHD");
        static const int UHD_HASH = HashingUtils::HashString("UHD");


        ReservationResolution GetReservationResolutionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SD_HASH)
          {
            return ReservationResolution::SD;
          }
          else if (hashCode == HD_HASH)
          {
            return ReservationResolution::HD;
          }
          else if (hashCode == FHD_HASH)
          {
            return ReservationResolution::FHD;
          }
          else if (hashCode == UHD_HASH)
          {
            return ReservationResolution::UHD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservationResolution>(hashCode);
          }

          return ReservationResolution::NOT_SET;
        }

        Aws::String GetNameForReservationResolution(ReservationResolution enumValue)
        {
          switch(enumValue)
          {
          case ReservationResolution::SD:
            return "SD";
          case ReservationResolution::HD:
            return "HD";
          case ReservationResolution::FHD:
            return "FHD";
          case ReservationResolution::UHD:
            return "UHD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservationResolutionMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
