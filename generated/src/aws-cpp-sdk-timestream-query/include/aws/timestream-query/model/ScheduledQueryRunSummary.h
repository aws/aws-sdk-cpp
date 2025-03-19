/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/timestream-query/model/ScheduledQueryRunStatus.h>
#include <aws/timestream-query/model/ExecutionStats.h>
#include <aws/timestream-query/model/ScheduledQueryInsightsResponse.h>
#include <aws/timestream-query/model/ErrorReportLocation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Run summary for the scheduled query</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ScheduledQueryRunSummary">AWS
   * API Reference</a></p>
   */
  class ScheduledQueryRunSummary
  {
  public:
    AWS_TIMESTREAMQUERY_API ScheduledQueryRunSummary() = default;
    AWS_TIMESTREAMQUERY_API ScheduledQueryRunSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ScheduledQueryRunSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>InvocationTime for this run. This is the time at which the query is scheduled
     * to run. Parameter <code>@scheduled_runtime</code> can be used in the query to
     * get the value. </p>
     */
    inline const Aws::Utils::DateTime& GetInvocationTime() const { return m_invocationTime; }
    inline bool InvocationTimeHasBeenSet() const { return m_invocationTimeHasBeenSet; }
    template<typename InvocationTimeT = Aws::Utils::DateTime>
    void SetInvocationTime(InvocationTimeT&& value) { m_invocationTimeHasBeenSet = true; m_invocationTime = std::forward<InvocationTimeT>(value); }
    template<typename InvocationTimeT = Aws::Utils::DateTime>
    ScheduledQueryRunSummary& WithInvocationTime(InvocationTimeT&& value) { SetInvocationTime(std::forward<InvocationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual time when the query was run.</p>
     */
    inline const Aws::Utils::DateTime& GetTriggerTime() const { return m_triggerTime; }
    inline bool TriggerTimeHasBeenSet() const { return m_triggerTimeHasBeenSet; }
    template<typename TriggerTimeT = Aws::Utils::DateTime>
    void SetTriggerTime(TriggerTimeT&& value) { m_triggerTimeHasBeenSet = true; m_triggerTime = std::forward<TriggerTimeT>(value); }
    template<typename TriggerTimeT = Aws::Utils::DateTime>
    ScheduledQueryRunSummary& WithTriggerTime(TriggerTimeT&& value) { SetTriggerTime(std::forward<TriggerTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a scheduled query run.</p>
     */
    inline ScheduledQueryRunStatus GetRunStatus() const { return m_runStatus; }
    inline bool RunStatusHasBeenSet() const { return m_runStatusHasBeenSet; }
    inline void SetRunStatus(ScheduledQueryRunStatus value) { m_runStatusHasBeenSet = true; m_runStatus = value; }
    inline ScheduledQueryRunSummary& WithRunStatus(ScheduledQueryRunStatus value) { SetRunStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Runtime statistics for a scheduled run.</p>
     */
    inline const ExecutionStats& GetExecutionStats() const { return m_executionStats; }
    inline bool ExecutionStatsHasBeenSet() const { return m_executionStatsHasBeenSet; }
    template<typename ExecutionStatsT = ExecutionStats>
    void SetExecutionStats(ExecutionStatsT&& value) { m_executionStatsHasBeenSet = true; m_executionStats = std::forward<ExecutionStatsT>(value); }
    template<typename ExecutionStatsT = ExecutionStats>
    ScheduledQueryRunSummary& WithExecutionStats(ExecutionStatsT&& value) { SetExecutionStats(std::forward<ExecutionStatsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides various insights and metrics related to the run summary of the
     * scheduled query.</p>
     */
    inline const ScheduledQueryInsightsResponse& GetQueryInsightsResponse() const { return m_queryInsightsResponse; }
    inline bool QueryInsightsResponseHasBeenSet() const { return m_queryInsightsResponseHasBeenSet; }
    template<typename QueryInsightsResponseT = ScheduledQueryInsightsResponse>
    void SetQueryInsightsResponse(QueryInsightsResponseT&& value) { m_queryInsightsResponseHasBeenSet = true; m_queryInsightsResponse = std::forward<QueryInsightsResponseT>(value); }
    template<typename QueryInsightsResponseT = ScheduledQueryInsightsResponse>
    ScheduledQueryRunSummary& WithQueryInsightsResponse(QueryInsightsResponseT&& value) { SetQueryInsightsResponse(std::forward<QueryInsightsResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>S3 location for error report.</p>
     */
    inline const ErrorReportLocation& GetErrorReportLocation() const { return m_errorReportLocation; }
    inline bool ErrorReportLocationHasBeenSet() const { return m_errorReportLocationHasBeenSet; }
    template<typename ErrorReportLocationT = ErrorReportLocation>
    void SetErrorReportLocation(ErrorReportLocationT&& value) { m_errorReportLocationHasBeenSet = true; m_errorReportLocation = std::forward<ErrorReportLocationT>(value); }
    template<typename ErrorReportLocationT = ErrorReportLocation>
    ScheduledQueryRunSummary& WithErrorReportLocation(ErrorReportLocationT&& value) { SetErrorReportLocation(std::forward<ErrorReportLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error message for the scheduled query in case of failure. You might have to
     * look at the error report to get more detailed error reasons. </p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    ScheduledQueryRunSummary& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_invocationTime{};
    bool m_invocationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_triggerTime{};
    bool m_triggerTimeHasBeenSet = false;

    ScheduledQueryRunStatus m_runStatus{ScheduledQueryRunStatus::NOT_SET};
    bool m_runStatusHasBeenSet = false;

    ExecutionStats m_executionStats;
    bool m_executionStatsHasBeenSet = false;

    ScheduledQueryInsightsResponse m_queryInsightsResponse;
    bool m_queryInsightsResponseHasBeenSet = false;

    ErrorReportLocation m_errorReportLocation;
    bool m_errorReportLocationHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
