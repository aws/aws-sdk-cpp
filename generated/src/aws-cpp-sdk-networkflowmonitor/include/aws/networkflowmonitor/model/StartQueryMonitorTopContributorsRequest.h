/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/networkflowmonitor/model/MonitorMetric.h>
#include <aws/networkflowmonitor/model/DestinationCategory.h>
#include <utility>

namespace Aws
{
namespace NetworkFlowMonitor
{
namespace Model
{

  /**
   */
  class StartQueryMonitorTopContributorsRequest : public NetworkFlowMonitorRequest
  {
  public:
    AWS_NETWORKFLOWMONITOR_API StartQueryMonitorTopContributorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartQueryMonitorTopContributors"; }

    AWS_NETWORKFLOWMONITOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the monitor.</p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    inline void SetMonitorName(const Aws::String& value) { m_monitorNameHasBeenSet = true; m_monitorName = value; }
    inline void SetMonitorName(Aws::String&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::move(value); }
    inline void SetMonitorName(const char* value) { m_monitorNameHasBeenSet = true; m_monitorName.assign(value); }
    inline StartQueryMonitorTopContributorsRequest& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}
    inline StartQueryMonitorTopContributorsRequest& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}
    inline StartQueryMonitorTopContributorsRequest& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that is the date and time beginning of the period that you want
     * to retrieve results for with your query.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline StartQueryMonitorTopContributorsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline StartQueryMonitorTopContributorsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that is the date and time end of the period that you want to
     * retrieve results for with your query.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline StartQueryMonitorTopContributorsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline StartQueryMonitorTopContributorsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric that you want to query top contributors for. That is, you can
     * specify this metric to return the top contributor network flows, for this type
     * of metric, for a monitor and (optionally) within a specific category, such as
     * network flows between Availability Zones.</p>
     */
    inline const MonitorMetric& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const MonitorMetric& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(MonitorMetric&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline StartQueryMonitorTopContributorsRequest& WithMetricName(const MonitorMetric& value) { SetMetricName(value); return *this;}
    inline StartQueryMonitorTopContributorsRequest& WithMetricName(MonitorMetric&& value) { SetMetricName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category that you want to query top contributors for, for a specific
     * monitor. Destination categories can be one of the following: </p> <ul> <li> <p>
     * <code>INTRA_AZ</code>: Top contributor network flows within a single
     * Availability Zone</p> </li> <li> <p> <code>INTER_AZ</code>: Top contributor
     * network flows between Availability Zones</p> </li> <li> <p>
     * <code>INTER_VPC</code>: Top contributor network flows between VPCs</p> </li>
     * <li> <p> <code>AWS_SERVICES</code>: Top contributor network flows to or from
     * Amazon Web Services services</p> </li> <li> <p> <code>UNCLASSIFIED</code>: Top
     * contributor network flows that do not have a bucket classification</p> </li>
     * </ul>
     */
    inline const DestinationCategory& GetDestinationCategory() const{ return m_destinationCategory; }
    inline bool DestinationCategoryHasBeenSet() const { return m_destinationCategoryHasBeenSet; }
    inline void SetDestinationCategory(const DestinationCategory& value) { m_destinationCategoryHasBeenSet = true; m_destinationCategory = value; }
    inline void SetDestinationCategory(DestinationCategory&& value) { m_destinationCategoryHasBeenSet = true; m_destinationCategory = std::move(value); }
    inline StartQueryMonitorTopContributorsRequest& WithDestinationCategory(const DestinationCategory& value) { SetDestinationCategory(value); return *this;}
    inline StartQueryMonitorTopContributorsRequest& WithDestinationCategory(DestinationCategory&& value) { SetDestinationCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of top contributors to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline StartQueryMonitorTopContributorsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    MonitorMetric m_metricName;
    bool m_metricNameHasBeenSet = false;

    DestinationCategory m_destinationCategory;
    bool m_destinationCategoryHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
