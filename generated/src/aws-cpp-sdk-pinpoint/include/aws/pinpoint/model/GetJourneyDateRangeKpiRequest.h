/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class GetJourneyDateRangeKpiRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API GetJourneyDateRangeKpiRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetJourneyDateRangeKpi"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;

    AWS_PINPOINT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    GetJourneyDateRangeKpiRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date and time to retrieve data for, as part of an inclusive date
     * range that filters the query results. This value should be in extended ISO 8601
     * format and use Coordinated Universal Time (UTC), for example:
     * 2019-07-26T20:00:00Z for 8:00 PM UTC July 26, 2019.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetJourneyDateRangeKpiRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline const Aws::String& GetJourneyId() const { return m_journeyId; }
    inline bool JourneyIdHasBeenSet() const { return m_journeyIdHasBeenSet; }
    template<typename JourneyIdT = Aws::String>
    void SetJourneyId(JourneyIdT&& value) { m_journeyIdHasBeenSet = true; m_journeyId = std::forward<JourneyIdT>(value); }
    template<typename JourneyIdT = Aws::String>
    GetJourneyDateRangeKpiRequest& WithJourneyId(JourneyIdT&& value) { SetJourneyId(std::forward<JourneyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, to retrieve data for. This value describes the associated metric and
     * consists of two or more terms, which are comprised of lowercase alphanumeric
     * characters, separated by a hyphen. Examples are email-open-rate and
     * successful-delivery-rate. For a list of valid values, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline const Aws::String& GetKpiName() const { return m_kpiName; }
    inline bool KpiNameHasBeenSet() const { return m_kpiNameHasBeenSet; }
    template<typename KpiNameT = Aws::String>
    void SetKpiName(KpiNameT&& value) { m_kpiNameHasBeenSet = true; m_kpiName = std::forward<KpiNameT>(value); }
    template<typename KpiNameT = Aws::String>
    GetJourneyDateRangeKpiRequest& WithKpiName(KpiNameT&& value) { SetKpiName(std::forward<KpiNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetJourneyDateRangeKpiRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline const Aws::String& GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    template<typename PageSizeT = Aws::String>
    void SetPageSize(PageSizeT&& value) { m_pageSizeHasBeenSet = true; m_pageSize = std::forward<PageSizeT>(value); }
    template<typename PageSizeT = Aws::String>
    GetJourneyDateRangeKpiRequest& WithPageSize(PageSizeT&& value) { SetPageSize(std::forward<PageSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first date and time to retrieve data for, as part of an inclusive date
     * range that filters the query results. This value should be in extended ISO 8601
     * format and use Coordinated Universal Time (UTC), for example:
     * 2019-07-19T20:00:00Z for 8:00 PM UTC July 19, 2019. This value should also be
     * fewer than 90 days from the current day.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetJourneyDateRangeKpiRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_journeyId;
    bool m_journeyIdHasBeenSet = false;

    Aws::String m_kpiName;
    bool m_kpiNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
