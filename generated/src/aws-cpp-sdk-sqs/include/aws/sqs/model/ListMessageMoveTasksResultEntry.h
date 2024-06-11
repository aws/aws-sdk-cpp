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
    AWS_SQS_API ListMessageMoveTasksResultEntry();
    AWS_SQS_API ListMessageMoveTasksResultEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SQS_API ListMessageMoveTasksResultEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SQS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier associated with a message movement task. When this field is
     * returned in the response of the <code>ListMessageMoveTasks</code> action, it is
     * only populated for tasks that are in RUNNING status.</p>
     */
    inline const Aws::String& GetTaskHandle() const{ return m_taskHandle; }
    inline bool TaskHandleHasBeenSet() const { return m_taskHandleHasBeenSet; }
    inline void SetTaskHandle(const Aws::String& value) { m_taskHandleHasBeenSet = true; m_taskHandle = value; }
    inline void SetTaskHandle(Aws::String&& value) { m_taskHandleHasBeenSet = true; m_taskHandle = std::move(value); }
    inline void SetTaskHandle(const char* value) { m_taskHandleHasBeenSet = true; m_taskHandle.assign(value); }
    inline ListMessageMoveTasksResultEntry& WithTaskHandle(const Aws::String& value) { SetTaskHandle(value); return *this;}
    inline ListMessageMoveTasksResultEntry& WithTaskHandle(Aws::String&& value) { SetTaskHandle(std::move(value)); return *this;}
    inline ListMessageMoveTasksResultEntry& WithTaskHandle(const char* value) { SetTaskHandle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the message movement task. Possible values are: RUNNING,
     * COMPLETED, CANCELLING, CANCELLED, and FAILED.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline ListMessageMoveTasksResultEntry& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline ListMessageMoveTasksResultEntry& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline ListMessageMoveTasksResultEntry& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the queue that contains the messages to be moved to another
     * queue.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }
    inline ListMessageMoveTasksResultEntry& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline ListMessageMoveTasksResultEntry& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline ListMessageMoveTasksResultEntry& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the destination queue if it has been specified in the
     * <code>StartMessageMoveTask</code> request. If a <code>DestinationArn</code> has
     * not been specified in the <code>StartMessageMoveTask</code> request, this field
     * value will be NULL.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }
    inline ListMessageMoveTasksResultEntry& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}
    inline ListMessageMoveTasksResultEntry& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}
    inline ListMessageMoveTasksResultEntry& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of messages to be moved per second (the message movement rate), if
     * it has been specified in the <code>StartMessageMoveTask</code> request. If a
     * <code>MaxNumberOfMessagesPerSecond</code> has not been specified in the
     * <code>StartMessageMoveTask</code> request, this field value will be NULL.</p>
     */
    inline int GetMaxNumberOfMessagesPerSecond() const{ return m_maxNumberOfMessagesPerSecond; }
    inline bool MaxNumberOfMessagesPerSecondHasBeenSet() const { return m_maxNumberOfMessagesPerSecondHasBeenSet; }
    inline void SetMaxNumberOfMessagesPerSecond(int value) { m_maxNumberOfMessagesPerSecondHasBeenSet = true; m_maxNumberOfMessagesPerSecond = value; }
    inline ListMessageMoveTasksResultEntry& WithMaxNumberOfMessagesPerSecond(int value) { SetMaxNumberOfMessagesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate number of messages already moved to the destination
     * queue.</p>
     */
    inline long long GetApproximateNumberOfMessagesMoved() const{ return m_approximateNumberOfMessagesMoved; }
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
    inline long long GetApproximateNumberOfMessagesToMove() const{ return m_approximateNumberOfMessagesToMove; }
    inline bool ApproximateNumberOfMessagesToMoveHasBeenSet() const { return m_approximateNumberOfMessagesToMoveHasBeenSet; }
    inline void SetApproximateNumberOfMessagesToMove(long long value) { m_approximateNumberOfMessagesToMoveHasBeenSet = true; m_approximateNumberOfMessagesToMove = value; }
    inline ListMessageMoveTasksResultEntry& WithApproximateNumberOfMessagesToMove(long long value) { SetApproximateNumberOfMessagesToMove(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task failure reason (only included if the task status is FAILED).</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline ListMessageMoveTasksResultEntry& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline ListMessageMoveTasksResultEntry& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline ListMessageMoveTasksResultEntry& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of starting the message movement task.</p>
     */
    inline long long GetStartedTimestamp() const{ return m_startedTimestamp; }
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

    int m_maxNumberOfMessagesPerSecond;
    bool m_maxNumberOfMessagesPerSecondHasBeenSet = false;

    long long m_approximateNumberOfMessagesMoved;
    bool m_approximateNumberOfMessagesMovedHasBeenSet = false;

    long long m_approximateNumberOfMessagesToMove;
    bool m_approximateNumberOfMessagesToMoveHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    long long m_startedTimestamp;
    bool m_startedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
