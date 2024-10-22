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
    AWS_TIMESTREAMQUERY_API ScheduledQueryRunSummary();
    AWS_TIMESTREAMQUERY_API ScheduledQueryRunSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ScheduledQueryRunSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>InvocationTime for this run. This is the time at which the query is scheduled
     * to run. Parameter <code>@scheduled_runtime</code> can be used in the query to
     * get the value. </p>
     */
    inline const Aws::Utils::DateTime& GetInvocationTime() const{ return m_invocationTime; }
    inline bool InvocationTimeHasBeenSet() const { return m_invocationTimeHasBeenSet; }
    inline void SetInvocationTime(const Aws::Utils::DateTime& value) { m_invocationTimeHasBeenSet = true; m_invocationTime = value; }
    inline void SetInvocationTime(Aws::Utils::DateTime&& value) { m_invocationTimeHasBeenSet = true; m_invocationTime = std::move(value); }
    inline ScheduledQueryRunSummary& WithInvocationTime(const Aws::Utils::DateTime& value) { SetInvocationTime(value); return *this;}
    inline ScheduledQueryRunSummary& WithInvocationTime(Aws::Utils::DateTime&& value) { SetInvocationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual time when the query was run.</p>
     */
    inline const Aws::Utils::DateTime& GetTriggerTime() const{ return m_triggerTime; }
    inline bool TriggerTimeHasBeenSet() const { return m_triggerTimeHasBeenSet; }
    inline void SetTriggerTime(const Aws::Utils::DateTime& value) { m_triggerTimeHasBeenSet = true; m_triggerTime = value; }
    inline void SetTriggerTime(Aws::Utils::DateTime&& value) { m_triggerTimeHasBeenSet = true; m_triggerTime = std::move(value); }
    inline ScheduledQueryRunSummary& WithTriggerTime(const Aws::Utils::DateTime& value) { SetTriggerTime(value); return *this;}
    inline ScheduledQueryRunSummary& WithTriggerTime(Aws::Utils::DateTime&& value) { SetTriggerTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a scheduled query run.</p>
     */
    inline const ScheduledQueryRunStatus& GetRunStatus() const{ return m_runStatus; }
    inline bool RunStatusHasBeenSet() const { return m_runStatusHasBeenSet; }
    inline void SetRunStatus(const ScheduledQueryRunStatus& value) { m_runStatusHasBeenSet = true; m_runStatus = value; }
    inline void SetRunStatus(ScheduledQueryRunStatus&& value) { m_runStatusHasBeenSet = true; m_runStatus = std::move(value); }
    inline ScheduledQueryRunSummary& WithRunStatus(const ScheduledQueryRunStatus& value) { SetRunStatus(value); return *this;}
    inline ScheduledQueryRunSummary& WithRunStatus(ScheduledQueryRunStatus&& value) { SetRunStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Runtime statistics for a scheduled run.</p>
     */
    inline const ExecutionStats& GetExecutionStats() const{ return m_executionStats; }
    inline bool ExecutionStatsHasBeenSet() const { return m_executionStatsHasBeenSet; }
    inline void SetExecutionStats(const ExecutionStats& value) { m_executionStatsHasBeenSet = true; m_executionStats = value; }
    inline void SetExecutionStats(ExecutionStats&& value) { m_executionStatsHasBeenSet = true; m_executionStats = std::move(value); }
    inline ScheduledQueryRunSummary& WithExecutionStats(const ExecutionStats& value) { SetExecutionStats(value); return *this;}
    inline ScheduledQueryRunSummary& WithExecutionStats(ExecutionStats&& value) { SetExecutionStats(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides various insights and metrics related to the run summary of the
     * scheduled query.</p>
     */
    inline const ScheduledQueryInsightsResponse& GetQueryInsightsResponse() const{ return m_queryInsightsResponse; }
    inline bool QueryInsightsResponseHasBeenSet() const { return m_queryInsightsResponseHasBeenSet; }
    inline void SetQueryInsightsResponse(const ScheduledQueryInsightsResponse& value) { m_queryInsightsResponseHasBeenSet = true; m_queryInsightsResponse = value; }
    inline void SetQueryInsightsResponse(ScheduledQueryInsightsResponse&& value) { m_queryInsightsResponseHasBeenSet = true; m_queryInsightsResponse = std::move(value); }
    inline ScheduledQueryRunSummary& WithQueryInsightsResponse(const ScheduledQueryInsightsResponse& value) { SetQueryInsightsResponse(value); return *this;}
    inline ScheduledQueryRunSummary& WithQueryInsightsResponse(ScheduledQueryInsightsResponse&& value) { SetQueryInsightsResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>S3 location for error report.</p>
     */
    inline const ErrorReportLocation& GetErrorReportLocation() const{ return m_errorReportLocation; }
    inline bool ErrorReportLocationHasBeenSet() const { return m_errorReportLocationHasBeenSet; }
    inline void SetErrorReportLocation(const ErrorReportLocation& value) { m_errorReportLocationHasBeenSet = true; m_errorReportLocation = value; }
    inline void SetErrorReportLocation(ErrorReportLocation&& value) { m_errorReportLocationHasBeenSet = true; m_errorReportLocation = std::move(value); }
    inline ScheduledQueryRunSummary& WithErrorReportLocation(const ErrorReportLocation& value) { SetErrorReportLocation(value); return *this;}
    inline ScheduledQueryRunSummary& WithErrorReportLocation(ErrorReportLocation&& value) { SetErrorReportLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error message for the scheduled query in case of failure. You might have to
     * look at the error report to get more detailed error reasons. </p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline ScheduledQueryRunSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline ScheduledQueryRunSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline ScheduledQueryRunSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_invocationTime;
    bool m_invocationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_triggerTime;
    bool m_triggerTimeHasBeenSet = false;

    ScheduledQueryRunStatus m_runStatus;
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
