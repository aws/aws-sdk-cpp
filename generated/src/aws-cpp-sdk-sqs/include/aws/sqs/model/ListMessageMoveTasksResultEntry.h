/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
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
namespace SQS
{
namespace Model
{

  /**
   * <p>Contains the details of a message movement task. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ListMessageMoveTasksResultEntry">AWS
   * API Reference</a></p>
   */
  class ListMessageMoveTasksResultEntry
  {
  public:
    AWS_SQS_API ListMessageMoveTasksResultEntry() = default;
    AWS_SQS_API ListMessageMoveTasksResultEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SQS_API ListMessageMoveTasksResultEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SQS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier associated with a message movement task. When this field is
     * returned in the response of the <code>ListMessageMoveTasks</code> action, it is
     * only populated for tasks that are in RUNNING status.</p>
     */
    inline const Aws::String& GetTaskHandle() const { return m_taskHandle; }
    inline bool TaskHandleHasBeenSet() const { return m_taskHandleHasBeenSet; }
    template<typename TaskHandleT = Aws::String>
    void SetTaskHandle(TaskHandleT&& value) { m_taskHandleHasBeenSet = true; m_taskHandle = std::forward<TaskHandleT>(value); }
    template<typename TaskHandleT = Aws::String>
    ListMessageMoveTasksResultEntry& WithTaskHandle(TaskHandleT&& value) { SetTaskHandle(std::forward<TaskHandleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the message movement task. Possible values are: RUNNING,
     * COMPLETED, CANCELLING, CANCELLED, and FAILED.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ListMessageMoveTasksResultEntry& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the queue that contains the messages to be moved to another
     * queue.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    ListMessageMoveTasksResultEntry& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the destination queue if it has been specified in the
     * <code>StartMessageMoveTask</code> request. If a <code>DestinationArn</code> has
     * not been specified in the <code>StartMessageMoveTask</code> request, this field
     * value will be NULL.</p>
     */
    inline const Aws::String& GetDestinationArn() const { return m_destinationArn; }
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
    template<typename DestinationArnT = Aws::String>
    void SetDestinationArn(DestinationArnT&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::forward<DestinationArnT>(value); }
    template<typename DestinationArnT = Aws::String>
    ListMessageMoveTasksResultEntry& WithDestinationArn(DestinationArnT&& value) { SetDestinationArn(std::forward<DestinationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of messages to be moved per second (the message movement rate), if
     * it has been specified in the <code>StartMessageMoveTask</code> request. If a
     * <code>MaxNumberOfMessagesPerSecond</code> has not been specified in the
     * <code>StartMessageMoveTask</code> request, this field value will be NULL.</p>
     */
    inline int GetMaxNumberOfMessagesPerSecond() const { return m_maxNumberOfMessagesPerSecond; }
    inline bool MaxNumberOfMessagesPerSecondHasBeenSet() const { return m_maxNumberOfMessagesPerSecondHasBeenSet; }
    inline void SetMaxNumberOfMessagesPerSecond(int value) { m_maxNumberOfMessagesPerSecondHasBeenSet = true; m_maxNumberOfMessagesPerSecond = value; }
    inline ListMessageMoveTasksResultEntry& WithMaxNumberOfMessagesPerSecond(int value) { SetMaxNumberOfMessagesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate number of messages already moved to the destination
     * queue.</p>
     */
    inline long long GetApproximateNumberOfMessagesMoved() const { return m_approximateNumberOfMessagesMoved; }
    inline bool ApproximateNumberOfMessagesMovedHasBeenSet() const { return m_approximateNumberOfMessagesMovedHasBeenSet; }
    inline void SetApproximateNumberOfMessagesMoved(long long value) { m_approximateNumberOfMessagesMovedHasBeenSet = true; m_approximateNumberOfMessagesMoved = value; }
    inline ListMessageMoveTasksResultEntry& WithApproximateNumberOfMessagesMoved(long long value) { SetApproximateNumberOfMessagesMoved(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of messages to be moved from the source queue. This number is
     * obtained at the time of starting the message movement task and is only included
     * after the message movement task is selected to start.</p>
     */
    inline long long GetApproximateNumberOfMessagesToMove() const { return m_approximateNumberOfMessagesToMove; }
    inline bool ApproximateNumberOfMessagesToMoveHasBeenSet() const { return m_approximateNumberOfMessagesToMoveHasBeenSet; }
    inline void SetApproximateNumberOfMessagesToMove(long long value) { m_approximateNumberOfMessagesToMoveHasBeenSet = true; m_approximateNumberOfMessagesToMove = value; }
    inline ListMessageMoveTasksResultEntry& WithApproximateNumberOfMessagesToMove(long long value) { SetApproximateNumberOfMessagesToMove(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task failure reason (only included if the task status is FAILED).</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    ListMessageMoveTasksResultEntry& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of starting the message movement task.</p>
     */
    inline long long GetStartedTimestamp() const { return m_startedTimestamp; }
    inline bool StartedTimestampHasBeenSet() const { return m_startedTimestampHasBeenSet; }
    inline void SetStartedTimestamp(long long value) { m_startedTimestampHasBeenSet = true; m_startedTimestamp = value; }
    inline ListMessageMoveTasksResultEntry& WithStartedTimestamp(long long value) { SetStartedTimestamp(value); return *this;}
    ///@}
  private:

    Aws::String m_taskHandle;
    bool m_taskHandleHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    int m_maxNumberOfMessagesPerSecond{0};
    bool m_maxNumberOfMessagesPerSecondHasBeenSet = false;

    long long m_approximateNumberOfMessagesMoved{0};
    bool m_approximateNumberOfMessagesMovedHasBeenSet = false;

    long long m_approximateNumberOfMessagesToMove{0};
    bool m_approximateNumberOfMessagesToMoveHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    long long m_startedTimestamp{0};
    bool m_startedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
