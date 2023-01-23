/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ReservationMaximumFramerate.h>
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
      namespace ReservationMaximumFramerateMapper
      {

        static const int MAX_30_FPS_HASH = HashingUtils::HashString("MAX_30_FPS");
        static const int MAX_60_FPS_HASH = HashingUtils::HashString("MAX_60_FPS");


        ReservationMaximumFramerate GetReservationMaximumFramerateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MAX_30_FPS_HASH)
          {
            return ReservationMaximumFramerate::MAX_30_FPS;
          }
          else if (hashCode == MAX_60_FPS_HASH)
          {
            return ReservationMaximumFramerate::MAX_60_FPS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservationMaximumFramerate>(hashCode);
          }

          return ReservationMaximumFramerate::NOT_SET;
        }

        Aws::String GetNameForReservationMaximumFramerate(ReservationMaximumFramerate enumValue)
        {
          switch(enumValue)
          {
          case ReservationMaximumFramerate::MAX_30_FPS:
            return "MAX_30_FPS";
          case ReservationMaximumFramerate::MAX_60_FPS:
            return "MAX_60_FPS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservationMaximumFramerateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
