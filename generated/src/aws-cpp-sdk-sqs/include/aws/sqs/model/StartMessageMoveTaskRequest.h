/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   */
  class StartMessageMoveTaskRequest : public SQSRequest
  {
  public:
    AWS_SQS_API StartMessageMoveTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMessageMoveTask"; }

    AWS_SQS_API Aws::String SerializePayload() const override;

    AWS_SQS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the queue that contains the messages to be moved to another queue.
     * Currently, only ARNs of dead-letter queues (DLQs) whose sources are other Amazon
     * SQS queues are accepted. DLQs whose sources are non-SQS queues, such as Lambda
     * or Amazon SNS topics, are not currently supported.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The ARN of the queue that contains the messages to be moved to another queue.
     * Currently, only ARNs of dead-letter queues (DLQs) whose sources are other Amazon
     * SQS queues are accepted. DLQs whose sources are non-SQS queues, such as Lambda
     * or Amazon SNS topics, are not currently supported.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The ARN of the queue that contains the messages to be moved to another queue.
     * Currently, only ARNs of dead-letter queues (DLQs) whose sources are other Amazon
     * SQS queues are accepted. DLQs whose sources are non-SQS queues, such as Lambda
     * or Amazon SNS topics, are not currently supported.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The ARN of the queue that contains the messages to be moved to another queue.
     * Currently, only ARNs of dead-letter queues (DLQs) whose sources are other Amazon
     * SQS queues are accepted. DLQs whose sources are non-SQS queues, such as Lambda
     * or Amazon SNS topics, are not currently supported.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The ARN of the queue that contains the messages to be moved to another queue.
     * Currently, only ARNs of dead-letter queues (DLQs) whose sources are other Amazon
     * SQS queues are accepted. DLQs whose sources are non-SQS queues, such as Lambda
     * or Amazon SNS topics, are not currently supported.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The ARN of the queue that contains the messages to be moved to another queue.
     * Currently, only ARNs of dead-letter queues (DLQs) whose sources are other Amazon
     * SQS queues are accepted. DLQs whose sources are non-SQS queues, such as Lambda
     * or Amazon SNS topics, are not currently supported.</p>
     */
    inline StartMessageMoveTaskRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The ARN of the queue that contains the messages to be moved to another queue.
     * Currently, only ARNs of dead-letter queues (DLQs) whose sources are other Amazon
     * SQS queues are accepted. DLQs whose sources are non-SQS queues, such as Lambda
     * or Amazon SNS topics, are not currently supported.</p>
     */
    inline StartMessageMoveTaskRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the queue that contains the messages to be moved to another queue.
     * Currently, only ARNs of dead-letter queues (DLQs) whose sources are other Amazon
     * SQS queues are accepted. DLQs whose sources are non-SQS queues, such as Lambda
     * or Amazon SNS topics, are not currently supported.</p>
     */
    inline StartMessageMoveTaskRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The ARN of the queue that receives the moved messages. You can use this field
     * to specify the destination queue where you would like to redrive messages. If
     * this field is left blank, the messages will be redriven back to their respective
     * original source queues.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>The ARN of the queue that receives the moved messages. You can use this field
     * to specify the destination queue where you would like to redrive messages. If
     * this field is left blank, the messages will be redriven back to their respective
     * original source queues.</p>
     */
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

    /**
     * <p>The ARN of the queue that receives the moved messages. You can use this field
     * to specify the destination queue where you would like to redrive messages. If
     * this field is left blank, the messages will be redriven back to their respective
     * original source queues.</p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>The ARN of the queue that receives the moved messages. You can use this field
     * to specify the destination queue where you would like to redrive messages. If
     * this field is left blank, the messages will be redriven back to their respective
     * original source queues.</p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>The ARN of the queue that receives the moved messages. You can use this field
     * to specify the destination queue where you would like to redrive messages. If
     * this field is left blank, the messages will be redriven back to their respective
     * original source queues.</p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>The ARN of the queue that receives the moved messages. You can use this field
     * to specify the destination queue where you would like to redrive messages. If
     * this field is left blank, the messages will be redriven back to their respective
     * original source queues.</p>
     */
    inline StartMessageMoveTaskRequest& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>The ARN of the queue that receives the moved messages. You can use this field
     * to specify the destination queue where you would like to redrive messages. If
     * this field is left blank, the messages will be redriven back to their respective
     * original source queues.</p>
     */
    inline StartMessageMoveTaskRequest& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the queue that receives the moved messages. You can use this field
     * to specify the destination queue where you would like to redrive messages. If
     * this field is left blank, the messages will be redriven back to their respective
     * original source queues.</p>
     */
    inline StartMessageMoveTaskRequest& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}


    /**
     * <p>The number of messages to be moved per second (the message movement rate).
     * You can use this field to define a fixed message movement rate. The maximum
     * value for messages per second is 500. If this field is left blank, the system
     * will optimize the rate based on the queue message backlog size, which may vary
     * throughout the duration of the message movement task.</p>
     */
    inline int GetMaxNumberOfMessagesPerSecond() const{ return m_maxNumberOfMessagesPerSecond; }

    /**
     * <p>The number of messages to be moved per second (the message movement rate).
     * You can use this field to define a fixed message movement rate. The maximum
     * value for messages per second is 500. If this field is left blank, the system
     * will optimize the rate based on the queue message backlog size, which may vary
     * throughout the duration of the message movement task.</p>
     */
    inline bool MaxNumberOfMessagesPerSecondHasBeenSet() const { return m_maxNumberOfMessagesPerSecondHasBeenSet; }

    /**
     * <p>The number of messages to be moved per second (the message movement rate).
     * You can use this field to define a fixed message movement rate. The maximum
     * value for messages per second is 500. If this field is left blank, the system
     * will optimize the rate based on the queue message backlog size, which may vary
     * throughout the duration of the message movement task.</p>
     */
    inline void SetMaxNumberOfMessagesPerSecond(int value) { m_maxNumberOfMessagesPerSecondHasBeenSet = true; m_maxNumberOfMessagesPerSecond = value; }

    /**
     * <p>The number of messages to be moved per second (the message movement rate).
     * You can use this field to define a fixed message movement rate. The maximum
     * value for messages per second is 500. If this field is left blank, the system
     * will optimize the rate based on the queue message backlog size, which may vary
     * throughout the duration of the message movement task.</p>
     */
    inline StartMessageMoveTaskRequest& WithMaxNumberOfMessagesPerSecond(int value) { SetMaxNumberOfMessagesPerSecond(value); return *this;}

  private:

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    int m_maxNumberOfMessagesPerSecond;
    bool m_maxNumberOfMessagesPerSecondHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
