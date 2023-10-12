/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ReservationState.h>
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
      namespace ReservationStateMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t EXPIRED_HASH = ConstExprHashingUtils::HashString("EXPIRED");
        static constexpr uint32_t CANCELED_HASH = ConstExprHashingUtils::HashString("CANCELED");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        ReservationState GetReservationStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ReservationState::ACTIVE;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return ReservationState::EXPIRED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return ReservationState::CANCELED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ReservationState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservationState>(hashCode);
          }

          return ReservationState::NOT_SET;
        }

        Aws::String GetNameForReservationState(ReservationState enumValue)
        {
          switch(enumValue)
          {
          case ReservationState::NOT_SET:
            return {};
          case ReservationState::ACTIVE:
            return "ACTIVE";
          case ReservationState::EXPIRED:
            return "EXPIRED";
          case ReservationState::CANCELED:
            return "CANCELED";
          case ReservationState::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservationStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
