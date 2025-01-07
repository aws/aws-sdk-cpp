/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/MonitorStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFlowMonitor
  {
    namespace Model
    {
      namespace MonitorStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        MonitorStatus GetMonitorStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return MonitorStatus::PENDING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return MonitorStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return MonitorStatus::INACTIVE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return MonitorStatus::ERROR_;
          }
          else if (hashCode == DELETING_HASH)
          {
            return MonitorStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitorStatus>(hashCode);
          }

          return MonitorStatus::NOT_SET;
        }

        Aws::String GetNameForMonitorStatus(MonitorStatus enumValue)
        {
          switch(enumValue)
          {
          case MonitorStatus::NOT_SET:
            return {};
          case MonitorStatus::PENDING:
            return "PENDING";
          case MonitorStatus::ACTIVE:
            return "ACTIVE";
          case MonitorStatus::INACTIVE:
            return "INACTIVE";
          case MonitorStatus::ERROR_:
            return "ERROR";
          case MonitorStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MonitorStatusMapper
    } // namespace Model
  } // namespace NetworkFlowMonitor
} // namespace Aws
