/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/ClockStatus.h>
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
      namespace ClockStatusMapper
      {

        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t STARTED_HASH = ConstExprHashingUtils::HashString("STARTED");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");


        ClockStatus GetClockStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNKNOWN_HASH)
          {
            return ClockStatus::UNKNOWN;
          }
          else if (hashCode == STARTING_HASH)
          {
            return ClockStatus::STARTING;
          }
          else if (hashCode == STARTED_HASH)
          {
            return ClockStatus::STARTED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return ClockStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ClockStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClockStatus>(hashCode);
          }

          return ClockStatus::NOT_SET;
        }

        Aws::String GetNameForClockStatus(ClockStatus enumValue)
        {
          switch(enumValue)
          {
          case ClockStatus::NOT_SET:
            return {};
          case ClockStatus::UNKNOWN:
            return "UNKNOWN";
          case ClockStatus::STARTING:
            return "STARTING";
          case ClockStatus::STARTED:
            return "STARTED";
          case ClockStatus::STOPPING:
            return "STOPPING";
          case ClockStatus::STOPPED:
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

      } // namespace ClockStatusMapper
    } // namespace Model
  } // namespace SimSpaceWeaver
} // namespace Aws
