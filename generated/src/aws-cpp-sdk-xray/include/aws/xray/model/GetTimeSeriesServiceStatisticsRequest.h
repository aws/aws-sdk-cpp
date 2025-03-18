/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class GetTimeSeriesServiceStatisticsRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API GetTimeSeriesServiceStatisticsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTimeSeriesServiceStatistics"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The start of the time frame for which to aggregate statistics.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetTimeSeriesServiceStatisticsRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the time frame for which to aggregate statistics.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetTimeSeriesServiceStatisticsRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The case-sensitive name of the group for which to pull statistics from.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    GetTimeSeriesServiceStatisticsRequest& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the group for which to pull statistics
     * from.</p>
     */
    inline const Aws::String& GetGroupARN() const { return m_groupARN; }
    inline bool GroupARNHasBeenSet() const { return m_groupARNHasBeenSet; }
    template<typename GroupARNT = Aws::String>
    void SetGroupARN(GroupARNT&& value) { m_groupARNHasBeenSet = true; m_groupARN = std::forward<GroupARNT>(value); }
    template<typename GroupARNT = Aws::String>
    GetTimeSeriesServiceStatisticsRequest& WithGroupARN(GroupARNT&& value) { SetGroupARN(std::forward<GroupARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter expression defining entities that will be aggregated for statistics.
     * Supports ID, service, and edge functions. If no selector expression is
     * specified, edge statistics are returned. </p>
     */
    inline const Aws::String& GetEntitySelectorExpression() const { return m_entitySelectorExpression; }
    inline bool EntitySelectorExpressionHasBeenSet() const { return m_entitySelectorExpressionHasBeenSet; }
    template<typename EntitySelectorExpressionT = Aws::String>
    void SetEntitySelectorExpression(EntitySelectorExpressionT&& value) { m_entitySelectorExpressionHasBeenSet = true; m_entitySelectorExpression = std::forward<EntitySelectorExpressionT>(value); }
    template<typename EntitySelectorExpressionT = Aws::String>
    GetTimeSeriesServiceStatisticsRequest& WithEntitySelectorExpression(EntitySelectorExpressionT&& value) { SetEntitySelectorExpression(std::forward<EntitySelectorExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Aggregation period in seconds.</p>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline GetTimeSeriesServiceStatisticsRequest& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forecasted high and low fault count values. Forecast enabled requests
     * require the EntitySelectorExpression ID be provided.</p>
     */
    inline bool GetForecastStatistics() const { return m_forecastStatistics; }
    inline bool ForecastStatisticsHasBeenSet() const { return m_forecastStatisticsHasBeenSet; }
    inline void SetForecastStatistics(bool value) { m_forecastStatisticsHasBeenSet = true; m_forecastStatistics = value; }
    inline GetTimeSeriesServiceStatisticsRequest& WithForecastStatistics(bool value) { SetForecastStatistics(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetTimeSeriesServiceStatisticsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_groupARN;
    bool m_groupARNHasBeenSet = false;

    Aws::String m_entitySelectorExpression;
    bool m_entitySelectorExpressionHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    bool m_forecastStatistics{false};
    bool m_forecastStatisticsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
