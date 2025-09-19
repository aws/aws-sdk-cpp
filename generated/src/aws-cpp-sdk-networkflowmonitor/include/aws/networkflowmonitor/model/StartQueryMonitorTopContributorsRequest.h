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
    AWS_NETWORKFLOWMONITOR_API StartQueryMonitorTopContributorsRequest() = default;

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
    inline const Aws::String& GetMonitorName() const { return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    template<typename MonitorNameT = Aws::String>
    void SetMonitorName(MonitorNameT&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::forward<MonitorNameT>(value); }
    template<typename MonitorNameT = Aws::String>
    StartQueryMonitorTopContributorsRequest& WithMonitorName(MonitorNameT&& value) { SetMonitorName(std::forward<MonitorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that is the date and time that is the beginning of the period
     * that you want to retrieve results for with your query.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    StartQueryMonitorTopContributorsRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that is the date and time end of the period that you want to
     * retrieve results for with your query.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    StartQueryMonitorTopContributorsRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric that you want to query top contributors for. That is, you can
     * specify a metric with this call and return the top contributor network flows,
     * for that type of metric, for a monitor and (optionally) within a specific
     * category, such as network flows between Availability Zones.</p>
     */
    inline MonitorMetric GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(MonitorMetric value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline StartQueryMonitorTopContributorsRequest& WithMetricName(MonitorMetric value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category that you want to query top contributors for, for a specific
     * monitor. Destination categories can be one of the following: </p> <ul> <li> <p>
     * <code>INTRA_AZ</code>: Top contributor network flows within a single
     * Availability Zone</p> </li> <li> <p> <code>INTER_AZ</code>: Top contributor
     * network flows between Availability Zones</p> </li> <li> <p>
     * <code>INTER_REGION</code>: Top contributor network flows between Regions (to the
     * edge of another Region)</p> </li> <li> <p> <code>INTER_VPC</code>: Top
     * contributor network flows between VPCs</p> </li> <li> <p>
     * <code>AMAZON_S3</code>: Top contributor network flows to or from Amazon S3</p>
     * </li> <li> <p> <code>AMAZON_DYNAMODB</code>: Top contributor network flows to or
     * from Amazon Dynamo DB</p> </li> <li> <p> <code>UNCLASSIFIED</code>: Top
     * contributor network flows that do not have a bucket classification</p> </li>
     * </ul>
     */
    inline DestinationCategory GetDestinationCategory() const { return m_destinationCategory; }
    inline bool DestinationCategoryHasBeenSet() const { return m_destinationCategoryHasBeenSet; }
    inline void SetDestinationCategory(DestinationCategory value) { m_destinationCategoryHasBeenSet = true; m_destinationCategory = value; }
    inline StartQueryMonitorTopContributorsRequest& WithDestinationCategory(DestinationCategory value) { SetDestinationCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of top contributors to return.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline StartQueryMonitorTopContributorsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    MonitorMetric m_metricName{MonitorMetric::NOT_SET};
    bool m_metricNameHasBeenSet = false;

    DestinationCategory m_destinationCategory{DestinationCategory::NOT_SET};
    bool m_destinationCategoryHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
