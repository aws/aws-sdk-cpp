/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ReservationPlanStatus.h>
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
      namespace ReservationPlanStatusMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t EXPIRED_HASH = ConstExprHashingUtils::HashString("EXPIRED");


        ReservationPlanStatus GetReservationPlanStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ReservationPlanStatus::ACTIVE;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return ReservationPlanStatus::EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservationPlanStatus>(hashCode);
          }

          return ReservationPlanStatus::NOT_SET;
        }

        Aws::String GetNameForReservationPlanStatus(ReservationPlanStatus enumValue)
        {
          switch(enumValue)
          {
          case ReservationPlanStatus::NOT_SET:
            return {};
          case ReservationPlanStatus::ACTIVE:
            return "ACTIVE";
          case ReservationPlanStatus::EXPIRED:
            return "EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservationPlanStatusMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
