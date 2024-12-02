/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/WorkloadInsightsMetric.h>
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
      namespace WorkloadInsightsMetricMapper
      {

        static const int TIMEOUTS_HASH = HashingUtils::HashString("TIMEOUTS");
        static const int RETRANSMISSIONS_HASH = HashingUtils::HashString("RETRANSMISSIONS");
        static const int DATA_TRANSFERRED_HASH = HashingUtils::HashString("DATA_TRANSFERRED");


        WorkloadInsightsMetric GetWorkloadInsightsMetricForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TIMEOUTS_HASH)
          {
            return WorkloadInsightsMetric::TIMEOUTS;
          }
          else if (hashCode == RETRANSMISSIONS_HASH)
          {
            return WorkloadInsightsMetric::RETRANSMISSIONS;
          }
          else if (hashCode == DATA_TRANSFERRED_HASH)
          {
            return WorkloadInsightsMetric::DATA_TRANSFERRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkloadInsightsMetric>(hashCode);
          }

          return WorkloadInsightsMetric::NOT_SET;
        }

        Aws::String GetNameForWorkloadInsightsMetric(WorkloadInsightsMetric enumValue)
        {
          switch(enumValue)
          {
          case WorkloadInsightsMetric::NOT_SET:
            return {};
          case WorkloadInsightsMetric::TIMEOUTS:
            return "TIMEOUTS";
          case WorkloadInsightsMetric::RETRANSMISSIONS:
            return "RETRANSMISSIONS";
          case WorkloadInsightsMetric::DATA_TRANSFERRED:
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

      } // namespace WorkloadInsightsMetricMapper
    } // namespace Model
  } // namespace NetworkFlowMonitor
} // namespace Aws
