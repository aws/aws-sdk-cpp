/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/networkflowmonitor/model/WorkloadInsightsMetric.h>
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
  class StartQueryWorkloadInsightsTopContributorsDataRequest : public NetworkFlowMonitorRequest
  {
  public:
    AWS_NETWORKFLOWMONITOR_API StartQueryWorkloadInsightsTopContributorsDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartQueryWorkloadInsightsTopContributorsData"; }

    AWS_NETWORKFLOWMONITOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the scope that includes the resources you want to get data
     * results for. A scope ID is an internally-generated identifier that includes all
     * the resources for a specific root account.</p>
     */
    inline const Aws::String& GetScopeId() const { return m_scopeId; }
    inline bool ScopeIdHasBeenSet() const { return m_scopeIdHasBeenSet; }
    template<typename ScopeIdT = Aws::String>
    void SetScopeId(ScopeIdT&& value) { m_scopeIdHasBeenSet = true; m_scopeId = std::forward<ScopeIdT>(value); }
    template<typename ScopeIdT = Aws::String>
    StartQueryWorkloadInsightsTopContributorsDataRequest& WithScopeId(ScopeIdT&& value) { SetScopeId(std::forward<ScopeIdT>(value)); return *this;}
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
    StartQueryWorkloadInsightsTopContributorsDataRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
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
    StartQueryWorkloadInsightsTopContributorsDataRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric that you want to query top contributors for. That is, you can
     * specify this metric to return the top contributor network flows, for this type
     * of metric, for a monitor and (optionally) within a specific category, such as
     * network flows between Availability Zones.</p>
     */
    inline WorkloadInsightsMetric GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(WorkloadInsightsMetric value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline StartQueryWorkloadInsightsTopContributorsDataRequest& WithMetricName(WorkloadInsightsMetric value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination category for a top contributors. Destination categories can
     * be one of the following: </p> <ul> <li> <p> <code>INTRA_AZ</code>: Top
     * contributor network flows within a single Availability Zone</p> </li> <li> <p>
     * <code>INTER_AZ</code>: Top contributor network flows between Availability
     * Zones</p> </li> <li> <p> <code>INTER_REGION</code>: Top contributor network
     * flows between Regions (to the edge of another Region)</p> </li> <li> <p>
     * <code>INTER_VPC</code>: Top contributor network flows between VPCs</p> </li>
     * <li> <p> <code>AWS_SERVICES</code>: Top contributor network flows to or from
     * Amazon Web Services services</p> </li> <li> <p> <code>UNCLASSIFIED</code>: Top
     * contributor network flows that do not have a bucket classification</p> </li>
     * </ul>
     */
    inline DestinationCategory GetDestinationCategory() const { return m_destinationCategory; }
    inline bool DestinationCategoryHasBeenSet() const { return m_destinationCategoryHasBeenSet; }
    inline void SetDestinationCategory(DestinationCategory value) { m_destinationCategoryHasBeenSet = true; m_destinationCategory = value; }
    inline StartQueryWorkloadInsightsTopContributorsDataRequest& WithDestinationCategory(DestinationCategory value) { SetDestinationCategory(value); return *this;}
    ///@}
  private:

    Aws::String m_scopeId;
    bool m_scopeIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    WorkloadInsightsMetric m_metricName{WorkloadInsightsMetric::NOT_SET};
    bool m_metricNameHasBeenSet = false;

    DestinationCategory m_destinationCategory{DestinationCategory::NOT_SET};
    bool m_destinationCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
