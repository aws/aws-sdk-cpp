/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/ServiceId.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/InsightState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/xray/model/RequestImpactStatistics.h>
#include <aws/xray/model/InsightCategory.h>
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
   * <p>Information that describes an insight.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/InsightSummary">AWS
   * API Reference</a></p>
   */
  class InsightSummary
  {
  public:
    AWS_XRAY_API InsightSummary() = default;
    AWS_XRAY_API InsightSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API InsightSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The insights unique identifier. </p>
     */
    inline const Aws::String& GetInsightId() const { return m_insightId; }
    inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }
    template<typename InsightIdT = Aws::String>
    void SetInsightId(InsightIdT&& value) { m_insightIdHasBeenSet = true; m_insightId = std::forward<InsightIdT>(value); }
    template<typename InsightIdT = Aws::String>
    InsightSummary& WithInsightId(InsightIdT&& value) { SetInsightId(std::forward<InsightIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the group that the insight belongs to.</p>
     */
    inline const Aws::String& GetGroupARN() const { return m_groupARN; }
    inline bool GroupARNHasBeenSet() const { return m_groupARNHasBeenSet; }
    template<typename GroupARNT = Aws::String>
    void SetGroupARN(GroupARNT&& value) { m_groupARNHasBeenSet = true; m_groupARN = std::forward<GroupARNT>(value); }
    template<typename GroupARNT = Aws::String>
    InsightSummary& WithGroupARN(GroupARNT&& value) { SetGroupARN(std::forward<GroupARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the group that the insight belongs to.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    InsightSummary& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ServiceId& GetRootCauseServiceId() const { return m_rootCauseServiceId; }
    inline bool RootCauseServiceIdHasBeenSet() const { return m_rootCauseServiceIdHasBeenSet; }
    template<typename RootCauseServiceIdT = ServiceId>
    void SetRootCauseServiceId(RootCauseServiceIdT&& value) { m_rootCauseServiceIdHasBeenSet = true; m_rootCauseServiceId = std::forward<RootCauseServiceIdT>(value); }
    template<typename RootCauseServiceIdT = ServiceId>
    InsightSummary& WithRootCauseServiceId(RootCauseServiceIdT&& value) { SetRootCauseServiceId(std::forward<RootCauseServiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Categories The categories that label and describe the type of insight.</p>
     */
    inline const Aws::Vector<InsightCategory>& GetCategories() const { return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    template<typename CategoriesT = Aws::Vector<InsightCategory>>
    void SetCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories = std::forward<CategoriesT>(value); }
    template<typename CategoriesT = Aws::Vector<InsightCategory>>
    InsightSummary& WithCategories(CategoriesT&& value) { SetCategories(std::forward<CategoriesT>(value)); return *this;}
    inline InsightSummary& AddCategories(InsightCategory value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current state of the insight.</p>
     */
    inline InsightState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(InsightState value) { m_stateHasBeenSet = true; m_state = value; }
    inline InsightSummary& WithState(InsightState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in Unix seconds, at which the insight began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    InsightSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in Unix seconds, at which the insight ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    InsightSummary& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the insight.</p>
     */
    inline const Aws::String& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = Aws::String>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = Aws::String>
    InsightSummary& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impact statistics of the client side service. This includes the number of
     * requests to the client service and whether the requests were faults or okay.
     * </p>
     */
    inline const RequestImpactStatistics& GetClientRequestImpactStatistics() const { return m_clientRequestImpactStatistics; }
    inline bool ClientRequestImpactStatisticsHasBeenSet() const { return m_clientRequestImpactStatisticsHasBeenSet; }
    template<typename ClientRequestImpactStatisticsT = RequestImpactStatistics>
    void SetClientRequestImpactStatistics(ClientRequestImpactStatisticsT&& value) { m_clientRequestImpactStatisticsHasBeenSet = true; m_clientRequestImpactStatistics = std::forward<ClientRequestImpactStatisticsT>(value); }
    template<typename ClientRequestImpactStatisticsT = RequestImpactStatistics>
    InsightSummary& WithClientRequestImpactStatistics(ClientRequestImpactStatisticsT&& value) { SetClientRequestImpactStatistics(std::forward<ClientRequestImpactStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impact statistics of the root cause service. This includes the number of
     * requests to the client service and whether the requests were faults or okay.
     * </p>
     */
    inline const RequestImpactStatistics& GetRootCauseServiceRequestImpactStatistics() const { return m_rootCauseServiceRequestImpactStatistics; }
    inline bool RootCauseServiceRequestImpactStatisticsHasBeenSet() const { return m_rootCauseServiceRequestImpactStatisticsHasBeenSet; }
    template<typename RootCauseServiceRequestImpactStatisticsT = RequestImpactStatistics>
    void SetRootCauseServiceRequestImpactStatistics(RootCauseServiceRequestImpactStatisticsT&& value) { m_rootCauseServiceRequestImpactStatisticsHasBeenSet = true; m_rootCauseServiceRequestImpactStatistics = std::forward<RootCauseServiceRequestImpactStatisticsT>(value); }
    template<typename RootCauseServiceRequestImpactStatisticsT = RequestImpactStatistics>
    InsightSummary& WithRootCauseServiceRequestImpactStatistics(RootCauseServiceRequestImpactStatisticsT&& value) { SetRootCauseServiceRequestImpactStatistics(std::forward<RootCauseServiceRequestImpactStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service within the insight that is most impacted by the incident.</p>
     */
    inline const Aws::Vector<AnomalousService>& GetTopAnomalousServices() const { return m_topAnomalousServices; }
    inline bool TopAnomalousServicesHasBeenSet() const { return m_topAnomalousServicesHasBeenSet; }
    template<typename TopAnomalousServicesT = Aws::Vector<AnomalousService>>
    void SetTopAnomalousServices(TopAnomalousServicesT&& value) { m_topAnomalousServicesHasBeenSet = true; m_topAnomalousServices = std::forward<TopAnomalousServicesT>(value); }
    template<typename TopAnomalousServicesT = Aws::Vector<AnomalousService>>
    InsightSummary& WithTopAnomalousServices(TopAnomalousServicesT&& value) { SetTopAnomalousServices(std::forward<TopAnomalousServicesT>(value)); return *this;}
    template<typename TopAnomalousServicesT = AnomalousService>
    InsightSummary& AddTopAnomalousServices(TopAnomalousServicesT&& value) { m_topAnomalousServicesHasBeenSet = true; m_topAnomalousServices.emplace_back(std::forward<TopAnomalousServicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time, in Unix seconds, that the insight was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    InsightSummary& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_insightId;
    bool m_insightIdHasBeenSet = false;

    Aws::String m_groupARN;
    bool m_groupARNHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    ServiceId m_rootCauseServiceId;
    bool m_rootCauseServiceIdHasBeenSet = false;

    Aws::Vector<InsightCategory> m_categories;
    bool m_categoriesHasBeenSet = false;

    InsightState m_state{InsightState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_summary;
    bool m_summaryHasBeenSet = false;

    RequestImpactStatistics m_clientRequestImpactStatistics;
    bool m_clientRequestImpactStatisticsHasBeenSet = false;

    RequestImpactStatistics m_rootCauseServiceRequestImpactStatistics;
    bool m_rootCauseServiceRequestImpactStatisticsHasBeenSet = false;

    Aws::Vector<AnomalousService> m_topAnomalousServices;
    bool m_topAnomalousServicesHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
