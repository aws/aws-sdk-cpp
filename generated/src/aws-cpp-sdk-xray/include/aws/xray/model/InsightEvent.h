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
    AWS_XRAY_API InsightEvent();
    AWS_XRAY_API InsightEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API InsightEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A brief description of the event.</p>
     */
    inline const Aws::String& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const Aws::String& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(Aws::String&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline void SetSummary(const char* value) { m_summaryHasBeenSet = true; m_summary.assign(value); }
    inline InsightEvent& WithSummary(const Aws::String& value) { SetSummary(value); return *this;}
    inline InsightEvent& WithSummary(Aws::String&& value) { SetSummary(std::move(value)); return *this;}
    inline InsightEvent& WithSummary(const char* value) { SetSummary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in Unix seconds, at which the event was recorded.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }
    inline InsightEvent& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}
    inline InsightEvent& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impact statistics of the client side service. This includes the number of
     * requests to the client service and whether the requests were faults or okay.</p>
     */
    inline const RequestImpactStatistics& GetClientRequestImpactStatistics() const{ return m_clientRequestImpactStatistics; }
    inline bool ClientRequestImpactStatisticsHasBeenSet() const { return m_clientRequestImpactStatisticsHasBeenSet; }
    inline void SetClientRequestImpactStatistics(const RequestImpactStatistics& value) { m_clientRequestImpactStatisticsHasBeenSet = true; m_clientRequestImpactStatistics = value; }
    inline void SetClientRequestImpactStatistics(RequestImpactStatistics&& value) { m_clientRequestImpactStatisticsHasBeenSet = true; m_clientRequestImpactStatistics = std::move(value); }
    inline InsightEvent& WithClientRequestImpactStatistics(const RequestImpactStatistics& value) { SetClientRequestImpactStatistics(value); return *this;}
    inline InsightEvent& WithClientRequestImpactStatistics(RequestImpactStatistics&& value) { SetClientRequestImpactStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impact statistics of the root cause service. This includes the number of
     * requests to the client service and whether the requests were faults or okay.</p>
     */
    inline const RequestImpactStatistics& GetRootCauseServiceRequestImpactStatistics() const{ return m_rootCauseServiceRequestImpactStatistics; }
    inline bool RootCauseServiceRequestImpactStatisticsHasBeenSet() const { return m_rootCauseServiceRequestImpactStatisticsHasBeenSet; }
    inline void SetRootCauseServiceRequestImpactStatistics(const RequestImpactStatistics& value) { m_rootCauseServiceRequestImpactStatisticsHasBeenSet = true; m_rootCauseServiceRequestImpactStatistics = value; }
    inline void SetRootCauseServiceRequestImpactStatistics(RequestImpactStatistics&& value) { m_rootCauseServiceRequestImpactStatisticsHasBeenSet = true; m_rootCauseServiceRequestImpactStatistics = std::move(value); }
    inline InsightEvent& WithRootCauseServiceRequestImpactStatistics(const RequestImpactStatistics& value) { SetRootCauseServiceRequestImpactStatistics(value); return *this;}
    inline InsightEvent& WithRootCauseServiceRequestImpactStatistics(RequestImpactStatistics&& value) { SetRootCauseServiceRequestImpactStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service during the event that is most impacted by the incident.</p>
     */
    inline const Aws::Vector<AnomalousService>& GetTopAnomalousServices() const{ return m_topAnomalousServices; }
    inline bool TopAnomalousServicesHasBeenSet() const { return m_topAnomalousServicesHasBeenSet; }
    inline void SetTopAnomalousServices(const Aws::Vector<AnomalousService>& value) { m_topAnomalousServicesHasBeenSet = true; m_topAnomalousServices = value; }
    inline void SetTopAnomalousServices(Aws::Vector<AnomalousService>&& value) { m_topAnomalousServicesHasBeenSet = true; m_topAnomalousServices = std::move(value); }
    inline InsightEvent& WithTopAnomalousServices(const Aws::Vector<AnomalousService>& value) { SetTopAnomalousServices(value); return *this;}
    inline InsightEvent& WithTopAnomalousServices(Aws::Vector<AnomalousService>&& value) { SetTopAnomalousServices(std::move(value)); return *this;}
    inline InsightEvent& AddTopAnomalousServices(const AnomalousService& value) { m_topAnomalousServicesHasBeenSet = true; m_topAnomalousServices.push_back(value); return *this; }
    inline InsightEvent& AddTopAnomalousServices(AnomalousService&& value) { m_topAnomalousServicesHasBeenSet = true; m_topAnomalousServices.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime;
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
