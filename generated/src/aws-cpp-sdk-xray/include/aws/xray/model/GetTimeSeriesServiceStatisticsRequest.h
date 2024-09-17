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
    AWS_XRAY_API GetTimeSeriesServiceStatisticsRequest();

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
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline GetTimeSeriesServiceStatisticsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetTimeSeriesServiceStatisticsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the time frame for which to aggregate statistics.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline GetTimeSeriesServiceStatisticsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetTimeSeriesServiceStatisticsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The case-sensitive name of the group for which to pull statistics from.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline GetTimeSeriesServiceStatisticsRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline GetTimeSeriesServiceStatisticsRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline GetTimeSeriesServiceStatisticsRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the group for which to pull statistics
     * from.</p>
     */
    inline const Aws::String& GetGroupARN() const{ return m_groupARN; }
    inline bool GroupARNHasBeenSet() const { return m_groupARNHasBeenSet; }
    inline void SetGroupARN(const Aws::String& value) { m_groupARNHasBeenSet = true; m_groupARN = value; }
    inline void SetGroupARN(Aws::String&& value) { m_groupARNHasBeenSet = true; m_groupARN = std::move(value); }
    inline void SetGroupARN(const char* value) { m_groupARNHasBeenSet = true; m_groupARN.assign(value); }
    inline GetTimeSeriesServiceStatisticsRequest& WithGroupARN(const Aws::String& value) { SetGroupARN(value); return *this;}
    inline GetTimeSeriesServiceStatisticsRequest& WithGroupARN(Aws::String&& value) { SetGroupARN(std::move(value)); return *this;}
    inline GetTimeSeriesServiceStatisticsRequest& WithGroupARN(const char* value) { SetGroupARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter expression defining entities that will be aggregated for statistics.
     * Supports ID, service, and edge functions. If no selector expression is
     * specified, edge statistics are returned. </p>
     */
    inline const Aws::String& GetEntitySelectorExpression() const{ return m_entitySelectorExpression; }
    inline bool EntitySelectorExpressionHasBeenSet() const { return m_entitySelectorExpressionHasBeenSet; }
    inline void SetEntitySelectorExpression(const Aws::String& value) { m_entitySelectorExpressionHasBeenSet = true; m_entitySelectorExpression = value; }
    inline void SetEntitySelectorExpression(Aws::String&& value) { m_entitySelectorExpressionHasBeenSet = true; m_entitySelectorExpression = std::move(value); }
    inline void SetEntitySelectorExpression(const char* value) { m_entitySelectorExpressionHasBeenSet = true; m_entitySelectorExpression.assign(value); }
    inline GetTimeSeriesServiceStatisticsRequest& WithEntitySelectorExpression(const Aws::String& value) { SetEntitySelectorExpression(value); return *this;}
    inline GetTimeSeriesServiceStatisticsRequest& WithEntitySelectorExpression(Aws::String&& value) { SetEntitySelectorExpression(std::move(value)); return *this;}
    inline GetTimeSeriesServiceStatisticsRequest& WithEntitySelectorExpression(const char* value) { SetEntitySelectorExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Aggregation period in seconds.</p>
     */
    inline int GetPeriod() const{ return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline GetTimeSeriesServiceStatisticsRequest& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forecasted high and low fault count values. Forecast enabled requests
     * require the EntitySelectorExpression ID be provided.</p>
     */
    inline bool GetForecastStatistics() const{ return m_forecastStatistics; }
    inline bool ForecastStatisticsHasBeenSet() const { return m_forecastStatisticsHasBeenSet; }
    inline void SetForecastStatistics(bool value) { m_forecastStatisticsHasBeenSet = true; m_forecastStatistics = value; }
    inline GetTimeSeriesServiceStatisticsRequest& WithForecastStatistics(bool value) { SetForecastStatistics(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetTimeSeriesServiceStatisticsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetTimeSeriesServiceStatisticsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetTimeSeriesServiceStatisticsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_groupARN;
    bool m_groupARNHasBeenSet = false;

    Aws::String m_entitySelectorExpression;
    bool m_entitySelectorExpressionHasBeenSet = false;

    int m_period;
    bool m_periodHasBeenSet = false;

    bool m_forecastStatistics;
    bool m_forecastStatisticsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
