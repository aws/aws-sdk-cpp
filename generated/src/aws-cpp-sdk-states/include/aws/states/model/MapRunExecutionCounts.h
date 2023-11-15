﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>

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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about all of the child workflow executions started by a Map
   * Run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/MapRunExecutionCounts">AWS
   * API Reference</a></p>
   */
  class MapRunExecutionCounts
  {
  public:
    AWS_SFN_API MapRunExecutionCounts();
    AWS_SFN_API MapRunExecutionCounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API MapRunExecutionCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of child workflow executions that were started by a Map Run,
     * but haven't started executing yet. </p>
     */
    inline long long GetPending() const{ return m_pending; }

    /**
     * <p>The total number of child workflow executions that were started by a Map Run,
     * but haven't started executing yet. </p>
     */
    inline bool PendingHasBeenSet() const { return m_pendingHasBeenSet; }

    /**
     * <p>The total number of child workflow executions that were started by a Map Run,
     * but haven't started executing yet. </p>
     */
    inline void SetPending(long long value) { m_pendingHasBeenSet = true; m_pending = value; }

    /**
     * <p>The total number of child workflow executions that were started by a Map Run,
     * but haven't started executing yet. </p>
     */
    inline MapRunExecutionCounts& WithPending(long long value) { SetPending(value); return *this;}


    /**
     * <p>The total number of child workflow executions that were started by a Map Run
     * and are currently in-progress.</p>
     */
    inline long long GetRunning() const{ return m_running; }

    /**
     * <p>The total number of child workflow executions that were started by a Map Run
     * and are currently in-progress.</p>
     */
    inline bool RunningHasBeenSet() const { return m_runningHasBeenSet; }

    /**
     * <p>The total number of child workflow executions that were started by a Map Run
     * and are currently in-progress.</p>
     */
    inline void SetRunning(long long value) { m_runningHasBeenSet = true; m_running = value; }

    /**
     * <p>The total number of child workflow executions that were started by a Map Run
     * and are currently in-progress.</p>
     */
    inline MapRunExecutionCounts& WithRunning(long long value) { SetRunning(value); return *this;}


    /**
     * <p>The total number of child workflow executions that were started by a Map Run
     * and have completed successfully.</p>
     */
    inline long long GetSucceeded() const{ return m_succeeded; }

    /**
     * <p>The total number of child workflow executions that were started by a Map Run
     * and have completed successfully.</p>
     */
    inline bool SucceededHasBeenSet() const { return m_succeededHasBeenSet; }

    /**
     * <p>The total number of child workflow executions that were started by a Map Run
     * and have completed successfully.</p>
     */
    inline void SetSucceeded(long long value) { m_succeededHasBeenSet = true; m_succeeded = value; }

    /**
     * <p>The total number of child workflow executions that were started by a Map Run
     * and have completed successfully.</p>
     */
    inline MapRunExecutionCounts& WithSucceeded(long long value) { SetSucceeded(value); return *this;}


    /**
     * <p>The total number of child workflow executions that were started by a Map Run,
     * but have failed.</p>
     */
    inline long long GetFailed() const{ return m_failed; }

    /**
     * <p>The total number of child workflow executions that were started by a Map Run,
     * but have failed.</p>
     */
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }

    /**
     * <p>The total number of child workflow executions that were started by a Map Run,
     * but have failed.</p>
     */
    inline void SetFailed(long long value) { m_failedHasBeenSet = true; m_failed = value; }

    /**
     * <p>The total number of child workflow executions that were started by a Map Run,
     * but have failed.</p>
     */
    inline MapRunExecutionCounts& WithFailed(long long value) { SetFailed(value); return *this;}


    /**
     * <p>The total number of child workflow executions that were started by a Map Run
     * and have timed out.</p>
     */
    inline long long GetTimedOut() const{ return m_timedOut; }

    /**
     * <p>The total number of child workflow executions that were started by a Map Run
     * and have timed out.</p>
     */
    inline bool TimedOutHasBeenSet() const { return m_timedOutHasBeenSet; }

    /**
     * <p>The total number of child workflow executions that were started by a Map Run
     * and have timed out.</p>
     */
    inline void SetTimedOut(long long value) { m_timedOutHasBeenSet = true; m_timedOut = value; }

    /**
     * <p>The total number of child workflow executions that were started by a Map Run
     * and have timed out.</p>
     */
    inline MapRunExecutionCounts& WithTimedOut(long long value) { SetTimedOut(value); return *this;}


    /**
     * <p>The total number of child workflow executions that were started by a Map Run
     * and were running, but were either stopped by the user or by Step Functions
     * because the Map Run failed. </p>
     */
    inline long long GetAborted() const{ return m_aborted; }

    /**
     * <p>The total number of child workflow executions that were started by a Map Run
     * and were running, but were either stopped by the user or by Step Functions
     * because the Map Run failed. </p>
     */
    inline bool AbortedHasBeenSet() const { return m_abortedHasBeenSet; }

    /**
     * <p>The total number of child workflow executions that were started by a Map Run
     * and were running, but were either stopped by the user or by Step Functions
     * because the Map Run failed. </p>
     */
    inline void SetAborted(long long value) { m_abortedHasBeenSet = true; m_aborted = value; }

    /**
     * <p>The total number of child workflow executions that were started by a Map Run
     * and were running, but were either stopped by the user or by Step Functions
     * because the Map Run failed. </p>
     */
    inline MapRunExecutionCounts& WithAborted(long long value) { SetAborted(value); return *this;}


    /**
     * <p>The total number of child workflow executions that were started by a Map
     * Run.</p>
     */
    inline long long GetTotal() const{ return m_total; }

    /**
     * <p>The total number of child workflow executions that were started by a Map
     * Run.</p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p>The total number of child workflow executions that were started by a Map
     * Run.</p>
     */
    inline void SetTotal(long long value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>The total number of child workflow executions that were started by a Map
     * Run.</p>
     */
    inline MapRunExecutionCounts& WithTotal(long long value) { SetTotal(value); return *this;}


    /**
     * <p>Returns the count of child workflow executions whose results were written by
     * <code>ResultWriter</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultwriter.html">ResultWriter</a>
     * in the <i>Step Functions Developer Guide</i>.</p>
     */
    inline long long GetResultsWritten() const{ return m_resultsWritten; }

    /**
     * <p>Returns the count of child workflow executions whose results were written by
     * <code>ResultWriter</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultwriter.html">ResultWriter</a>
     * in the <i>Step Functions Developer Guide</i>.</p>
     */
    inline bool ResultsWrittenHasBeenSet() const { return m_resultsWrittenHasBeenSet; }

    /**
     * <p>Returns the count of child workflow executions whose results were written by
     * <code>ResultWriter</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultwriter.html">ResultWriter</a>
     * in the <i>Step Functions Developer Guide</i>.</p>
     */
    inline void SetResultsWritten(long long value) { m_resultsWrittenHasBeenSet = true; m_resultsWritten = value; }

    /**
     * <p>Returns the count of child workflow executions whose results were written by
     * <code>ResultWriter</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultwriter.html">ResultWriter</a>
     * in the <i>Step Functions Developer Guide</i>.</p>
     */
    inline MapRunExecutionCounts& WithResultsWritten(long long value) { SetResultsWritten(value); return *this;}


    /**
     * <p>The number of <code>FAILED</code>, <code>ABORTED</code>, or
     * <code>TIMED_OUT</code> child workflow executions that cannot be redriven because
     * their execution status is terminal. For example, if your execution event history
     * contains 25,000 entries, or the <code>toleratedFailureCount</code> or
     * <code>toleratedFailurePercentage</code> for the Distributed Map has
     * exceeded.</p>
     */
    inline long long GetFailuresNotRedrivable() const{ return m_failuresNotRedrivable; }

    /**
     * <p>The number of <code>FAILED</code>, <code>ABORTED</code>, or
     * <code>TIMED_OUT</code> child workflow executions that cannot be redriven because
     * their execution status is terminal. For example, if your execution event history
     * contains 25,000 entries, or the <code>toleratedFailureCount</code> or
     * <code>toleratedFailurePercentage</code> for the Distributed Map has
     * exceeded.</p>
     */
    inline bool FailuresNotRedrivableHasBeenSet() const { return m_failuresNotRedrivableHasBeenSet; }

    /**
     * <p>The number of <code>FAILED</code>, <code>ABORTED</code>, or
     * <code>TIMED_OUT</code> child workflow executions that cannot be redriven because
     * their execution status is terminal. For example, if your execution event history
     * contains 25,000 entries, or the <code>toleratedFailureCount</code> or
     * <code>toleratedFailurePercentage</code> for the Distributed Map has
     * exceeded.</p>
     */
    inline void SetFailuresNotRedrivable(long long value) { m_failuresNotRedrivableHasBeenSet = true; m_failuresNotRedrivable = value; }

    /**
     * <p>The number of <code>FAILED</code>, <code>ABORTED</code>, or
     * <code>TIMED_OUT</code> child workflow executions that cannot be redriven because
     * their execution status is terminal. For example, if your execution event history
     * contains 25,000 entries, or the <code>toleratedFailureCount</code> or
     * <code>toleratedFailurePercentage</code> for the Distributed Map has
     * exceeded.</p>
     */
    inline MapRunExecutionCounts& WithFailuresNotRedrivable(long long value) { SetFailuresNotRedrivable(value); return *this;}


    /**
     * <p>The number of unsuccessful child workflow executions currently waiting to be
     * redriven. The status of these child workflow executions could be
     * <code>FAILED</code>, <code>ABORTED</code>, or <code>TIMED_OUT</code> in the
     * original execution attempt or a previous redrive attempt.</p>
     */
    inline long long GetPendingRedrive() const{ return m_pendingRedrive; }

    /**
     * <p>The number of unsuccessful child workflow executions currently waiting to be
     * redriven. The status of these child workflow executions could be
     * <code>FAILED</code>, <code>ABORTED</code>, or <code>TIMED_OUT</code> in the
     * original execution attempt or a previous redrive attempt.</p>
     */
    inline bool PendingRedriveHasBeenSet() const { return m_pendingRedriveHasBeenSet; }

    /**
     * <p>The number of unsuccessful child workflow executions currently waiting to be
     * redriven. The status of these child workflow executions could be
     * <code>FAILED</code>, <code>ABORTED</code>, or <code>TIMED_OUT</code> in the
     * original execution attempt or a previous redrive attempt.</p>
     */
    inline void SetPendingRedrive(long long value) { m_pendingRedriveHasBeenSet = true; m_pendingRedrive = value; }

    /**
     * <p>The number of unsuccessful child workflow executions currently waiting to be
     * redriven. The status of these child workflow executions could be
     * <code>FAILED</code>, <code>ABORTED</code>, or <code>TIMED_OUT</code> in the
     * original execution attempt or a previous redrive attempt.</p>
     */
    inline MapRunExecutionCounts& WithPendingRedrive(long long value) { SetPendingRedrive(value); return *this;}

  private:

    long long m_pending;
    bool m_pendingHasBeenSet = false;

    long long m_running;
    bool m_runningHasBeenSet = false;

    long long m_succeeded;
    bool m_succeededHasBeenSet = false;

    long long m_failed;
    bool m_failedHasBeenSet = false;

    long long m_timedOut;
    bool m_timedOutHasBeenSet = false;

    long long m_aborted;
    bool m_abortedHasBeenSet = false;

    long long m_total;
    bool m_totalHasBeenSet = false;

    long long m_resultsWritten;
    bool m_resultsWrittenHasBeenSet = false;

    long long m_failuresNotRedrivable;
    bool m_failuresNotRedrivableHasBeenSet = false;

    long long m_pendingRedrive;
    bool m_pendingRedriveHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
