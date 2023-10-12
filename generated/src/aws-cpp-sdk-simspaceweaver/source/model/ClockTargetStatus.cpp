/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/ClockTargetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SimSpaceWeaver
  {
    namespace Model
    {
      namespace ClockTargetStatusMapper
      {

        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");
        static constexpr uint32_t STARTED_HASH = ConstExprHashingUtils::HashString("STARTED");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");


        ClockTargetStatus GetClockTargetStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNKNOWN_HASH)
          {
            return ClockTargetStatus::UNKNOWN;
          }
          else if (hashCode == STARTED_HASH)
          {
            return ClockTargetStatus::STARTED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ClockTargetStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClockTargetStatus>(hashCode);
          }

          return ClockTargetStatus::NOT_SET;
        }

        Aws::String GetNameForClockTargetStatus(ClockTargetStatus enumValue)
        {
          switch(enumValue)
          {
          case ClockTargetStatus::NOT_SET:
            return {};
          case ClockTargetStatus::UNKNOWN:
            return "UNKNOWN";
          case ClockTargetStatus::STARTED:
            return "STARTED";
          case ClockTargetStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClockTargetStatusMapper
    } // namespace Model
  } // namespace SimSpaceWeaver
} // namespace Aws
