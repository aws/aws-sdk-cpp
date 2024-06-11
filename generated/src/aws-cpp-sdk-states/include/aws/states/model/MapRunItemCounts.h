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
   * <p>Contains details about items that were processed in all of the child workflow
   * executions that were started by a Map Run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/MapRunItemCounts">AWS
   * API Reference</a></p>
   */
  class MapRunItemCounts
  {
  public:
    AWS_SFN_API MapRunItemCounts();
    AWS_SFN_API MapRunItemCounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API MapRunItemCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of items to process in child workflow executions that
     * haven't started running yet.</p>
     */
    inline long long GetPending() const{ return m_pending; }
    inline bool PendingHasBeenSet() const { return m_pendingHasBeenSet; }
    inline void SetPending(long long value) { m_pendingHasBeenSet = true; m_pending = value; }
    inline MapRunItemCounts& WithPending(long long value) { SetPending(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of items being processed in child workflow executions that
     * are currently in-progress.</p>
     */
    inline long long GetRunning() const{ return m_running; }
    inline bool RunningHasBeenSet() const { return m_runningHasBeenSet; }
    inline void SetRunning(long long value) { m_runningHasBeenSet = true; m_running = value; }
    inline MapRunItemCounts& WithRunning(long long value) { SetRunning(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of items processed in child workflow executions that have
     * completed successfully.</p>
     */
    inline long long GetSucceeded() const{ return m_succeeded; }
    inline bool SucceededHasBeenSet() const { return m_succeededHasBeenSet; }
    inline void SetSucceeded(long long value) { m_succeededHasBeenSet = true; m_succeeded = value; }
    inline MapRunItemCounts& WithSucceeded(long long value) { SetSucceeded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of items processed in child workflow executions that have
     * failed.</p>
     */
    inline long long GetFailed() const{ return m_failed; }
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }
    inline void SetFailed(long long value) { m_failedHasBeenSet = true; m_failed = value; }
    inline MapRunItemCounts& WithFailed(long long value) { SetFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of items processed in child workflow executions that have
     * timed out.</p>
     */
    inline long long GetTimedOut() const{ return m_timedOut; }
    inline bool TimedOutHasBeenSet() const { return m_timedOutHasBeenSet; }
    inline void SetTimedOut(long long value) { m_timedOutHasBeenSet = true; m_timedOut = value; }
    inline MapRunItemCounts& WithTimedOut(long long value) { SetTimedOut(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of items processed in child workflow executions that were
     * either stopped by the user or by Step Functions, because the Map Run failed.</p>
     */
    inline long long GetAborted() const{ return m_aborted; }
    inline bool AbortedHasBeenSet() const { return m_abortedHasBeenSet; }
    inline void SetAborted(long long value) { m_abortedHasBeenSet = true; m_aborted = value; }
    inline MapRunItemCounts& WithAborted(long long value) { SetAborted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of items processed in all the child workflow executions
     * started by a Map Run.</p>
     */
    inline long long GetTotal() const{ return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    inline void SetTotal(long long value) { m_totalHasBeenSet = true; m_total = value; }
    inline MapRunItemCounts& WithTotal(long long value) { SetTotal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the count of items whose results were written by
     * <code>ResultWriter</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultwriter.html">ResultWriter</a>
     * in the <i>Step Functions Developer Guide</i>.</p>
     */
    inline long long GetResultsWritten() const{ return m_resultsWritten; }
    inline bool ResultsWrittenHasBeenSet() const { return m_resultsWrittenHasBeenSet; }
    inline void SetResultsWritten(long long value) { m_resultsWrittenHasBeenSet = true; m_resultsWritten = value; }
    inline MapRunItemCounts& WithResultsWritten(long long value) { SetResultsWritten(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of <code>FAILED</code>, <code>ABORTED</code>, or
     * <code>TIMED_OUT</code> items in child workflow executions that cannot be
     * redriven because the execution status of those child workflows is terminal. For
     * example, child workflows with an execution status of <code>FAILED</code>,
     * <code>ABORTED</code>, or <code>TIMED_OUT</code> and a <code>redriveStatus</code>
     * of <code>NOT_REDRIVABLE</code>.</p>
     */
    inline long long GetFailuresNotRedrivable() const{ return m_failuresNotRedrivable; }
    inline bool FailuresNotRedrivableHasBeenSet() const { return m_failuresNotRedrivableHasBeenSet; }
    inline void SetFailuresNotRedrivable(long long value) { m_failuresNotRedrivableHasBeenSet = true; m_failuresNotRedrivable = value; }
    inline MapRunItemCounts& WithFailuresNotRedrivable(long long value) { SetFailuresNotRedrivable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of unsuccessful items in child workflow executions currently
     * waiting to be redriven.</p>
     */
    inline long long GetPendingRedrive() const{ return m_pendingRedrive; }
    inline bool PendingRedriveHasBeenSet() const { return m_pendingRedriveHasBeenSet; }
    inline void SetPendingRedrive(long long value) { m_pendingRedriveHasBeenSet = true; m_pendingRedrive = value; }
    inline MapRunItemCounts& WithPendingRedrive(long long value) { SetPendingRedrive(value); return *this;}
    ///@}
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
