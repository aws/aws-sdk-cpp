/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmonitor/model/MonitorState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkMonitor
  {
    namespace Model
    {
      namespace MonitorStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        MonitorState GetMonitorStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return MonitorState::PENDING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return MonitorState::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return MonitorState::INACTIVE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return MonitorState::ERROR_;
          }
          else if (hashCode == DELETING_HASH)
          {
            return MonitorState::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitorState>(hashCode);
          }

          return MonitorState::NOT_SET;
        }

        Aws::String GetNameForMonitorState(MonitorState enumValue)
        {
          switch(enumValue)
          {
          case MonitorState::NOT_SET:
            return {};
          case MonitorState::PENDING:
            return "PENDING";
          case MonitorState::ACTIVE:
            return "ACTIVE";
          case MonitorState::INACTIVE:
            return "INACTIVE";
          case MonitorState::ERROR_:
            return "ERROR";
          case MonitorState::DELETING:
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

      } // namespace MonitorStateMapper
    } // namespace Model
  } // namespace NetworkMonitor
} // namespace Aws
