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
    AWS_XRAY_API GetTraceSummariesRequest() = default;

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
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetTraceSummariesRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the time frame for which to retrieve traces.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetTraceSummariesRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Query trace summaries by TraceId (trace start time), Event (trace update
     * time), or Service (trace segment end time).</p>
     */
    inline TimeRangeType GetTimeRangeType() const { return m_timeRangeType; }
    inline bool TimeRangeTypeHasBeenSet() const { return m_timeRangeTypeHasBeenSet; }
    inline void SetTimeRangeType(TimeRangeType value) { m_timeRangeTypeHasBeenSet = true; m_timeRangeType = value; }
    inline GetTraceSummariesRequest& WithTimeRangeType(TimeRangeType value) { SetTimeRangeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to get summaries for only a subset of available
     * traces.</p>
     */
    inline bool GetSampling() const { return m_sampling; }
    inline bool SamplingHasBeenSet() const { return m_samplingHasBeenSet; }
    inline void SetSampling(bool value) { m_samplingHasBeenSet = true; m_sampling = value; }
    inline GetTraceSummariesRequest& WithSampling(bool value) { SetSampling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter to indicate whether to enable sampling on trace summaries. Input
     * parameters are Name and Value.</p>
     */
    inline const SamplingStrategy& GetSamplingStrategy() const { return m_samplingStrategy; }
    inline bool SamplingStrategyHasBeenSet() const { return m_samplingStrategyHasBeenSet; }
    template<typename SamplingStrategyT = SamplingStrategy>
    void SetSamplingStrategy(SamplingStrategyT&& value) { m_samplingStrategyHasBeenSet = true; m_samplingStrategy = std::forward<SamplingStrategyT>(value); }
    template<typename SamplingStrategyT = SamplingStrategy>
    GetTraceSummariesRequest& WithSamplingStrategy(SamplingStrategyT&& value) { SetSamplingStrategy(std::forward<SamplingStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a filter expression to retrieve trace summaries for services or
     * requests that meet certain requirements.</p>
     */
    inline const Aws::String& GetFilterExpression() const { return m_filterExpression; }
    inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }
    template<typename FilterExpressionT = Aws::String>
    void SetFilterExpression(FilterExpressionT&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::forward<FilterExpressionT>(value); }
    template<typename FilterExpressionT = Aws::String>
    GetTraceSummariesRequest& WithFilterExpression(FilterExpressionT&& value) { SetFilterExpression(std::forward<FilterExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetTraceSummariesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    TimeRangeType m_timeRangeType{TimeRangeType::NOT_SET};
    bool m_timeRangeTypeHasBeenSet = false;

    bool m_sampling{false};
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
