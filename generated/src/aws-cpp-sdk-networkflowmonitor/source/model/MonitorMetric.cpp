/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/MonitorMetric.h>
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
      namespace MonitorMetricMapper
      {

        static const int ROUND_TRIP_TIME_HASH = HashingUtils::HashString("ROUND_TRIP_TIME");
        static const int TIMEOUTS_HASH = HashingUtils::HashString("TIMEOUTS");
        static const int RETRANSMISSIONS_HASH = HashingUtils::HashString("RETRANSMISSIONS");
        static const int DATA_TRANSFERRED_HASH = HashingUtils::HashString("DATA_TRANSFERRED");


        MonitorMetric GetMonitorMetricForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROUND_TRIP_TIME_HASH)
          {
            return MonitorMetric::ROUND_TRIP_TIME;
          }
          else if (hashCode == TIMEOUTS_HASH)
          {
            return MonitorMetric::TIMEOUTS;
          }
          else if (hashCode == RETRANSMISSIONS_HASH)
          {
            return MonitorMetric::RETRANSMISSIONS;
          }
          else if (hashCode == DATA_TRANSFERRED_HASH)
          {
            return MonitorMetric::DATA_TRANSFERRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitorMetric>(hashCode);
          }

          return MonitorMetric::NOT_SET;
        }

        Aws::String GetNameForMonitorMetric(MonitorMetric enumValue)
        {
          switch(enumValue)
          {
          case MonitorMetric::NOT_SET:
            return {};
          case MonitorMetric::ROUND_TRIP_TIME:
            return "ROUND_TRIP_TIME";
          case MonitorMetric::TIMEOUTS:
            return "TIMEOUTS";
          case MonitorMetric::RETRANSMISSIONS:
            return "RETRANSMISSIONS";
          case MonitorMetric::DATA_TRANSFERRED:
            return "DATA_TRANSFERRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MonitorMetricMapper
    } // namespace Model
  } // namespace NetworkFlowMonitor
} // namespace Aws
