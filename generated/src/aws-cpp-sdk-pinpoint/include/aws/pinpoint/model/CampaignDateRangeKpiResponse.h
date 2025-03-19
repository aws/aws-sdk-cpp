/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pinpoint/model/BaseKpiResult.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides the results of a query that retrieved the data for a standard metric
   * that applies to a campaign, and provides information about that
   * query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CampaignDateRangeKpiResponse">AWS
   * API Reference</a></p>
   */
  class CampaignDateRangeKpiResponse
  {
  public:
    AWS_PINPOINT_API CampaignDateRangeKpiResponse() = default;
    AWS_PINPOINT_API CampaignDateRangeKpiResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API CampaignDateRangeKpiResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    CampaignDateRangeKpiResponse& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the campaign that the metric applies to.</p>
     */
    inline const Aws::String& GetCampaignId() const { return m_campaignId; }
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }
    template<typename CampaignIdT = Aws::String>
    void SetCampaignId(CampaignIdT&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::forward<CampaignIdT>(value); }
    template<typename CampaignIdT = Aws::String>
    CampaignDateRangeKpiResponse& WithCampaignId(CampaignIdT&& value) { SetCampaignId(std::forward<CampaignIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    CampaignDateRangeKpiResponse& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, that the data was retrieved for. This value describes the associated
     * metric and consists of two or more terms, which are comprised of lowercase
     * alphanumeric characters, separated by a hyphen. For a list of possible values,
     * see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline const Aws::String& GetKpiName() const { return m_kpiName; }
    inline bool KpiNameHasBeenSet() const { return m_kpiNameHasBeenSet; }
    template<typename KpiNameT = Aws::String>
    void SetKpiName(KpiNameT&& value) { m_kpiNameHasBeenSet = true; m_kpiName = std::forward<KpiNameT>(value); }
    template<typename KpiNameT = Aws::String>
    CampaignDateRangeKpiResponse& WithKpiName(KpiNameT&& value) { SetKpiName(std::forward<KpiNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the value for the metric and metadata about that value.</p>
     */
    inline const BaseKpiResult& GetKpiResult() const { return m_kpiResult; }
    inline bool KpiResultHasBeenSet() const { return m_kpiResultHasBeenSet; }
    template<typename KpiResultT = BaseKpiResult>
    void SetKpiResult(KpiResultT&& value) { m_kpiResultHasBeenSet = true; m_kpiResult = std::forward<KpiResultT>(value); }
    template<typename KpiResultT = BaseKpiResult>
    CampaignDateRangeKpiResponse& WithKpiResult(KpiResultT&& value) { SetKpiResult(std::forward<KpiResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null for the Campaign Metrics resource
     * because the resource returns all results in a single page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    CampaignDateRangeKpiResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    CampaignDateRangeKpiResponse& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_campaignId;
    bool m_campaignIdHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_kpiName;
    bool m_kpiNameHasBeenSet = false;

    BaseKpiResult m_kpiResult;
    bool m_kpiResultHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
