/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/CapacityReservationPreferenceEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkspacesInstances
  {
    namespace Model
    {
      namespace CapacityReservationPreferenceEnumMapper
      {

        static const int capacity_reservations_only_HASH = HashingUtils::HashString("capacity-reservations-only");
        static const int open_HASH = HashingUtils::HashString("open");
        static const int none_HASH = HashingUtils::HashString("none");


        CapacityReservationPreferenceEnum GetCapacityReservationPreferenceEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == capacity_reservations_only_HASH)
          {
            return CapacityReservationPreferenceEnum::capacity_reservations_only;
          }
          else if (hashCode == open_HASH)
          {
            return CapacityReservationPreferenceEnum::open;
          }
          else if (hashCode == none_HASH)
          {
            return CapacityReservationPreferenceEnum::none;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityReservationPreferenceEnum>(hashCode);
          }

          return CapacityReservationPreferenceEnum::NOT_SET;
        }

        Aws::String GetNameForCapacityReservationPreferenceEnum(CapacityReservationPreferenceEnum enumValue)
        {
          switch(enumValue)
          {
          case CapacityReservationPreferenceEnum::NOT_SET:
            return {};
          case CapacityReservationPreferenceEnum::capacity_reservations_only:
            return "capacity-reservations-only";
          case CapacityReservationPreferenceEnum::open:
            return "open";
          case CapacityReservationPreferenceEnum::none:
            return "none";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityReservationPreferenceEnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws
