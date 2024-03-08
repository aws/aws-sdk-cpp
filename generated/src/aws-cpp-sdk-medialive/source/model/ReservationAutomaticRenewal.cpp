/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ReservationAutomaticRenewal.h>
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
      namespace ReservationAutomaticRenewalMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");


        ReservationAutomaticRenewal GetReservationAutomaticRenewalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return ReservationAutomaticRenewal::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return ReservationAutomaticRenewal::ENABLED;
          }
          else if (hashCode == UNAVAILABLE_HASH)
          {
            return ReservationAutomaticRenewal::UNAVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservationAutomaticRenewal>(hashCode);
          }

          return ReservationAutomaticRenewal::NOT_SET;
        }

        Aws::String GetNameForReservationAutomaticRenewal(ReservationAutomaticRenewal enumValue)
        {
          switch(enumValue)
          {
          case ReservationAutomaticRenewal::NOT_SET:
            return {};
          case ReservationAutomaticRenewal::DISABLED:
            return "DISABLED";
          case ReservationAutomaticRenewal::ENABLED:
            return "ENABLED";
          case ReservationAutomaticRenewal::UNAVAILABLE:
            return "UNAVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservationAutomaticRenewalMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
