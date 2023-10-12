/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/State.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace StateMapper
      {

        static constexpr uint32_t DRAFT_HASH = ConstExprHashingUtils::HashString("DRAFT");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t CLOSED_HASH = ConstExprHashingUtils::HashString("CLOSED");
        static constexpr uint32_t PAUSED_HASH = ConstExprHashingUtils::HashString("PAUSED");


        State GetStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DRAFT_HASH)
          {
            return State::DRAFT;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return State::ACTIVE;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return State::COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return State::CANCELLED;
          }
          else if (hashCode == CLOSED_HASH)
          {
            return State::CLOSED;
          }
          else if (hashCode == PAUSED_HASH)
          {
            return State::PAUSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<State>(hashCode);
          }

          return State::NOT_SET;
        }

        Aws::String GetNameForState(State enumValue)
        {
          switch(enumValue)
          {
          case State::NOT_SET:
            return {};
          case State::DRAFT:
            return "DRAFT";
          case State::ACTIVE:
            return "ACTIVE";
          case State::COMPLETED:
            return "COMPLETED";
          case State::CANCELLED:
            return "CANCELLED";
          case State::CLOSED:
            return "CLOSED";
          case State::PAUSED:
            return "PAUSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StateMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
