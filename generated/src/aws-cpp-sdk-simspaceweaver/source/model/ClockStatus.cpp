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

        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int STARTED_HASH = HashingUtils::HashString("STARTED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        ClockStatus GetClockStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
