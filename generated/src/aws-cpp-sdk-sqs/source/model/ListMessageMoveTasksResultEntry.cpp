/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/ListMessageMoveTasksResultEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SQS
{
namespace Model
{

ListMessageMoveTasksResultEntry::ListMessageMoveTasksResultEntry() : 
    m_taskHandleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_maxNumberOfMessagesPerSecond(0),
    m_maxNumberOfMessagesPerSecondHasBeenSet(false),
    m_approximateNumberOfMessagesMoved(0),
    m_approximateNumberOfMessagesMovedHasBeenSet(false),
    m_approximateNumberOfMessagesToMove(0),
    m_approximateNumberOfMessagesToMoveHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_startedTimestamp(0),
    m_startedTimestampHasBeenSet(false)
{
}

ListMessageMoveTasksResultEntry::ListMessageMoveTasksResultEntry(JsonView jsonValue) : 
    m_taskHandleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_maxNumberOfMessagesPerSecond(0),
    m_maxNumberOfMessagesPerSecondHasBeenSet(false),
    m_approximateNumberOfMessagesMoved(0),
    m_approximateNumberOfMessagesMovedHasBeenSet(false),
    m_approximateNumberOfMessagesToMove(0),
    m_approximateNumberOfMessagesToMoveHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_startedTimestamp(0),
    m_startedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

ListMessageMoveTasksResultEntry& ListMessageMoveTasksResultEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TaskHandle"))
  {
    m_taskHandle = jsonValue.GetString("TaskHandle");

    m_taskHandleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceArn"))
  {
    m_sourceArn = jsonValue.GetString("SourceArn");

    m_sourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationArn"))
  {
    m_destinationArn = jsonValue.GetString("DestinationArn");

    m_destinationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxNumberOfMessagesPerSecond"))
  {
    m_maxNumberOfMessagesPerSecond = jsonValue.GetInteger("MaxNumberOfMessagesPerSecond");

    m_maxNumberOfMessagesPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApproximateNumberOfMessagesMoved"))
  {
    m_approximateNumberOfMessagesMoved = jsonValue.GetInt64("ApproximateNumberOfMessagesMoved");

    m_approximateNumberOfMessagesMovedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApproximateNumberOfMessagesToMove"))
  {
    m_approximateNumberOfMessagesToMove = jsonValue.GetInt64("ApproximateNumberOfMessagesToMove");

    m_approximateNumberOfMessagesToMoveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartedTimestamp"))
  {
    m_startedTimestamp = jsonValue.GetInt64("StartedTimestamp");

    m_startedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue ListMessageMoveTasksResultEntry::Jsonize() const
{
  JsonValue payload;

  if(m_taskHandleHasBeenSet)
  {
   payload.WithString("TaskHandle", m_taskHandle);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  if(m_destinationArnHasBeenSet)
  {
   payload.WithString("DestinationArn", m_destinationArn);

  }

  if(m_maxNumberOfMessagesPerSecondHasBeenSet)
  {
   payload.WithInteger("MaxNumberOfMessagesPerSecond", m_maxNumberOfMessagesPerSecond);

  }

  if(m_approximateNumberOfMessagesMovedHasBeenSet)
  {
   payload.WithInt64("ApproximateNumberOfMessagesMoved", m_approximateNumberOfMessagesMoved);

  }

  if(m_approximateNumberOfMessagesToMoveHasBeenSet)
  {
   payload.WithInt64("ApproximateNumberOfMessagesToMove", m_approximateNumberOfMessagesToMove);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_startedTimestampHasBeenSet)
  {
   payload.WithInt64("StartedTimestamp", m_startedTimestamp);

  }

  return payload;
}

} // namespace Model
} // namespace SQS
} // namespace Aws
