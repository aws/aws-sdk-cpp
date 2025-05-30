/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CapacityReservationPreference.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace CapacityReservationPreferenceMapper
      {

        static const int capacity_reservations_only_HASH = HashingUtils::HashString("capacity-reservations-only");


        CapacityReservationPreference GetCapacityReservationPreferenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == capacity_reservations_only_HASH)
          {
            return CapacityReservationPreference::capacity_reservations_only;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityReservationPreference>(hashCode);
          }

          return CapacityReservationPreference::NOT_SET;
        }

        Aws::String GetNameForCapacityReservationPreference(CapacityReservationPreference enumValue)
        {
          switch(enumValue)
          {
          case CapacityReservationPreference::NOT_SET:
            return {};
          case CapacityReservationPreference::capacity_reservations_only:
            return "capacity-reservations-only";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityReservationPreferenceMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
