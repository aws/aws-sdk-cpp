/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/xray/model/TimeRangeType.h>
#include <aws/xray/model/SamplingStrategy.h>
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
  class GetTraceSummariesRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API GetTraceSummariesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTraceSummaries"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The start of the time frame for which to retrieve traces.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline GetTraceSummariesRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetTraceSummariesRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the time frame for which to retrieve traces.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline GetTraceSummariesRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetTraceSummariesRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Query trace summaries by TraceId (trace start time), Event (trace update
     * time), or Service (trace segment end time).</p>
     */
    inline const TimeRangeType& GetTimeRangeType() const{ return m_timeRangeType; }
    inline bool TimeRangeTypeHasBeenSet() const { return m_timeRangeTypeHasBeenSet; }
    inline void SetTimeRangeType(const TimeRangeType& value) { m_timeRangeTypeHasBeenSet = true; m_timeRangeType = value; }
    inline void SetTimeRangeType(TimeRangeType&& value) { m_timeRangeTypeHasBeenSet = true; m_timeRangeType = std::move(value); }
    inline GetTraceSummariesRequest& WithTimeRangeType(const TimeRangeType& value) { SetTimeRangeType(value); return *this;}
    inline GetTraceSummariesRequest& WithTimeRangeType(TimeRangeType&& value) { SetTimeRangeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to get summaries for only a subset of available
     * traces.</p>
     */
    inline bool GetSampling() const{ return m_sampling; }
    inline bool SamplingHasBeenSet() const { return m_samplingHasBeenSet; }
    inline void SetSampling(bool value) { m_samplingHasBeenSet = true; m_sampling = value; }
    inline GetTraceSummariesRequest& WithSampling(bool value) { SetSampling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter to indicate whether to enable sampling on trace summaries. Input
     * parameters are Name and Value.</p>
     */
    inline const SamplingStrategy& GetSamplingStrategy() const{ return m_samplingStrategy; }
    inline bool SamplingStrategyHasBeenSet() const { return m_samplingStrategyHasBeenSet; }
    inline void SetSamplingStrategy(const SamplingStrategy& value) { m_samplingStrategyHasBeenSet = true; m_samplingStrategy = value; }
    inline void SetSamplingStrategy(SamplingStrategy&& value) { m_samplingStrategyHasBeenSet = true; m_samplingStrategy = std::move(value); }
    inline GetTraceSummariesRequest& WithSamplingStrategy(const SamplingStrategy& value) { SetSamplingStrategy(value); return *this;}
    inline GetTraceSummariesRequest& WithSamplingStrategy(SamplingStrategy&& value) { SetSamplingStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a filter expression to retrieve trace summaries for services or
     * requests that meet certain requirements.</p>
     */
    inline const Aws::String& GetFilterExpression() const{ return m_filterExpression; }
    inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }
    inline void SetFilterExpression(const Aws::String& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = value; }
    inline void SetFilterExpression(Aws::String&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::move(value); }
    inline void SetFilterExpression(const char* value) { m_filterExpressionHasBeenSet = true; m_filterExpression.assign(value); }
    inline GetTraceSummariesRequest& WithFilterExpression(const Aws::String& value) { SetFilterExpression(value); return *this;}
    inline GetTraceSummariesRequest& WithFilterExpression(Aws::String&& value) { SetFilterExpression(std::move(value)); return *this;}
    inline GetTraceSummariesRequest& WithFilterExpression(const char* value) { SetFilterExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetTraceSummariesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetTraceSummariesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetTraceSummariesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    TimeRangeType m_timeRangeType;
    bool m_timeRangeTypeHasBeenSet = false;

    bool m_sampling;
    bool m_samplingHasBeenSet = false;

    SamplingStrategy m_samplingStrategy;
    bool m_samplingStrategyHasBeenSet = false;

    Aws::String m_filterExpression;
    bool m_filterExpressionHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
