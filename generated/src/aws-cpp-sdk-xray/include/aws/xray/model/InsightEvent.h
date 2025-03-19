/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/xray/model/RequestImpactStatistics.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/AnomalousService.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace XRay
{
namespace Model
{

  /**
   * <p>X-Ray reevaluates insights periodically until they are resolved, and records
   * each intermediate state in an event. You can review incident events in the
   * Impact Timeline on the Inspect page in the X-Ray console.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/InsightEvent">AWS
   * API Reference</a></p>
   */
  class InsightEvent
  {
  public:
    AWS_XRAY_API InsightEvent() = default;
    AWS_XRAY_API InsightEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API InsightEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A brief description of the event.</p>
     */
    inline const Aws::String& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = Aws::String>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = Aws::String>
    InsightEvent& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in Unix seconds, at which the event was recorded.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const { return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    template<typename EventTimeT = Aws::Utils::DateTime>
    void SetEventTime(EventTimeT&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::forward<EventTimeT>(value); }
    template<typename EventTimeT = Aws::Utils::DateTime>
    InsightEvent& WithEventTime(EventTimeT&& value) { SetEventTime(std::forward<EventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impact statistics of the client side service. This includes the number of
     * requests to the client service and whether the requests were faults or okay.</p>
     */
    inline const RequestImpactStatistics& GetClientRequestImpactStatistics() const { return m_clientRequestImpactStatistics; }
    inline bool ClientRequestImpactStatisticsHasBeenSet() const { return m_clientRequestImpactStatisticsHasBeenSet; }
    template<typename ClientRequestImpactStatisticsT = RequestImpactStatistics>
    void SetClientRequestImpactStatistics(ClientRequestImpactStatisticsT&& value) { m_clientRequestImpactStatisticsHasBeenSet = true; m_clientRequestImpactStatistics = std::forward<ClientRequestImpactStatisticsT>(value); }
    template<typename ClientRequestImpactStatisticsT = RequestImpactStatistics>
    InsightEvent& WithClientRequestImpactStatistics(ClientRequestImpactStatisticsT&& value) { SetClientRequestImpactStatistics(std::forward<ClientRequestImpactStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impact statistics of the root cause service. This includes the number of
     * requests to the client service and whether the requests were faults or okay.</p>
     */
    inline const RequestImpactStatistics& GetRootCauseServiceRequestImpactStatistics() const { return m_rootCauseServiceRequestImpactStatistics; }
    inline bool RootCauseServiceRequestImpactStatisticsHasBeenSet() const { return m_rootCauseServiceRequestImpactStatisticsHasBeenSet; }
    template<typename RootCauseServiceRequestImpactStatisticsT = RequestImpactStatistics>
    void SetRootCauseServiceRequestImpactStatistics(RootCauseServiceRequestImpactStatisticsT&& value) { m_rootCauseServiceRequestImpactStatisticsHasBeenSet = true; m_rootCauseServiceRequestImpactStatistics = std::forward<RootCauseServiceRequestImpactStatisticsT>(value); }
    template<typename RootCauseServiceRequestImpactStatisticsT = RequestImpactStatistics>
    InsightEvent& WithRootCauseServiceRequestImpactStatistics(RootCauseServiceRequestImpactStatisticsT&& value) { SetRootCauseServiceRequestImpactStatistics(std::forward<RootCauseServiceRequestImpactStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service during the event that is most impacted by the incident.</p>
     */
    inline const Aws::Vector<AnomalousService>& GetTopAnomalousServices() const { return m_topAnomalousServices; }
    inline bool TopAnomalousServicesHasBeenSet() const { return m_topAnomalousServicesHasBeenSet; }
    template<typename TopAnomalousServicesT = Aws::Vector<AnomalousService>>
    void SetTopAnomalousServices(TopAnomalousServicesT&& value) { m_topAnomalousServicesHasBeenSet = true; m_topAnomalousServices = std::forward<TopAnomalousServicesT>(value); }
    template<typename TopAnomalousServicesT = Aws::Vector<AnomalousService>>
    InsightEvent& WithTopAnomalousServices(TopAnomalousServicesT&& value) { SetTopAnomalousServices(std::forward<TopAnomalousServicesT>(value)); return *this;}
    template<typename TopAnomalousServicesT = AnomalousService>
    InsightEvent& AddTopAnomalousServices(TopAnomalousServicesT&& value) { m_topAnomalousServicesHasBeenSet = true; m_topAnomalousServices.emplace_back(std::forward<TopAnomalousServicesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime{};
    bool m_eventTimeHasBeenSet = false;

    RequestImpactStatistics m_clientRequestImpactStatistics;
    bool m_clientRequestImpactStatisticsHasBeenSet = false;

    RequestImpactStatistics m_rootCauseServiceRequestImpactStatistics;
    bool m_rootCauseServiceRequestImpactStatisticsHasBeenSet = false;

    Aws::Vector<AnomalousService> m_topAnomalousServices;
    bool m_topAnomalousServicesHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
