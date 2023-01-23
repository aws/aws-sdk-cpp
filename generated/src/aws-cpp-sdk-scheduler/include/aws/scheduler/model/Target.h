/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/scheduler/model/DeadLetterConfig.h>
#include <aws/scheduler/model/EcsParameters.h>
#include <aws/scheduler/model/EventBridgeParameters.h>
#include <aws/scheduler/model/KinesisParameters.h>
#include <aws/scheduler/model/RetryPolicy.h>
#include <aws/scheduler/model/SageMakerPipelineParameters.h>
#include <aws/scheduler/model/SqsParameters.h>
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
namespace Scheduler
{
namespace Model
{

  /**
   * <p>The schedule's target. EventBridge Scheduler supports templated target that
   * invoke common API operations, as well as universal targets that you can
   * customize to invoke over 6,000 API operations across more than 270 services. You
   * can only specify one templated or universal target for a schedule.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/Target">AWS
   * API Reference</a></p>
   */
  class Target
  {
  public:
    AWS_SCHEDULER_API Target();
    AWS_SCHEDULER_API Target(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline Target& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline Target& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline Target& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>An object that contains information about an Amazon SQS queue that
     * EventBridge Scheduler uses as a dead-letter queue for your schedule. If
     * specified, EventBridge Scheduler delivers failed events that could not be
     * successfully delivered to a target to the queue.</p>
     */
    inline const DeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }

    /**
     * <p>An object that contains information about an Amazon SQS queue that
     * EventBridge Scheduler uses as a dead-letter queue for your schedule. If
     * specified, EventBridge Scheduler delivers failed events that could not be
     * successfully delivered to a target to the queue.</p>
     */
    inline bool DeadLetterConfigHasBeenSet() const { return m_deadLetterConfigHasBeenSet; }

    /**
     * <p>An object that contains information about an Amazon SQS queue that
     * EventBridge Scheduler uses as a dead-letter queue for your schedule. If
     * specified, EventBridge Scheduler delivers failed events that could not be
     * successfully delivered to a target to the queue.</p>
     */
    inline void SetDeadLetterConfig(const DeadLetterConfig& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = value; }

    /**
     * <p>An object that contains information about an Amazon SQS queue that
     * EventBridge Scheduler uses as a dead-letter queue for your schedule. If
     * specified, EventBridge Scheduler delivers failed events that could not be
     * successfully delivered to a target to the queue.</p>
     */
    inline void SetDeadLetterConfig(DeadLetterConfig&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::move(value); }

    /**
     * <p>An object that contains information about an Amazon SQS queue that
     * EventBridge Scheduler uses as a dead-letter queue for your schedule. If
     * specified, EventBridge Scheduler delivers failed events that could not be
     * successfully delivered to a target to the queue.</p>
     */
    inline Target& WithDeadLetterConfig(const DeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}

    /**
     * <p>An object that contains information about an Amazon SQS queue that
     * EventBridge Scheduler uses as a dead-letter queue for your schedule. If
     * specified, EventBridge Scheduler delivers failed events that could not be
     * successfully delivered to a target to the queue.</p>
     */
    inline Target& WithDeadLetterConfig(DeadLetterConfig&& value) { SetDeadLetterConfig(std::move(value)); return *this;}


    /**
     * <p>The templated target type for the Amazon ECS <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_RunTask.html">
     * <code>RunTask</code> </a> API operation.</p>
     */
    inline const EcsParameters& GetEcsParameters() const{ return m_ecsParameters; }

    /**
     * <p>The templated target type for the Amazon ECS <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_RunTask.html">
     * <code>RunTask</code> </a> API operation.</p>
     */
    inline bool EcsParametersHasBeenSet() const { return m_ecsParametersHasBeenSet; }

    /**
     * <p>The templated target type for the Amazon ECS <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_RunTask.html">
     * <code>RunTask</code> </a> API operation.</p>
     */
    inline void SetEcsParameters(const EcsParameters& value) { m_ecsParametersHasBeenSet = true; m_ecsParameters = value; }

    /**
     * <p>The templated target type for the Amazon ECS <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_RunTask.html">
     * <code>RunTask</code> </a> API operation.</p>
     */
    inline void SetEcsParameters(EcsParameters&& value) { m_ecsParametersHasBeenSet = true; m_ecsParameters = std::move(value); }

    /**
     * <p>The templated target type for the Amazon ECS <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_RunTask.html">
     * <code>RunTask</code> </a> API operation.</p>
     */
    inline Target& WithEcsParameters(const EcsParameters& value) { SetEcsParameters(value); return *this;}

    /**
     * <p>The templated target type for the Amazon ECS <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_RunTask.html">
     * <code>RunTask</code> </a> API operation.</p>
     */
    inline Target& WithEcsParameters(EcsParameters&& value) { SetEcsParameters(std::move(value)); return *this;}


    /**
     * <p>The templated target type for the EventBridge <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">
     * <code>PutEvents</code> </a> API operation.</p>
     */
    inline const EventBridgeParameters& GetEventBridgeParameters() const{ return m_eventBridgeParameters; }

    /**
     * <p>The templated target type for the EventBridge <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">
     * <code>PutEvents</code> </a> API operation.</p>
     */
    inline bool EventBridgeParametersHasBeenSet() const { return m_eventBridgeParametersHasBeenSet; }

    /**
     * <p>The templated target type for the EventBridge <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">
     * <code>PutEvents</code> </a> API operation.</p>
     */
    inline void SetEventBridgeParameters(const EventBridgeParameters& value) { m_eventBridgeParametersHasBeenSet = true; m_eventBridgeParameters = value; }

    /**
     * <p>The templated target type for the EventBridge <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">
     * <code>PutEvents</code> </a> API operation.</p>
     */
    inline void SetEventBridgeParameters(EventBridgeParameters&& value) { m_eventBridgeParametersHasBeenSet = true; m_eventBridgeParameters = std::move(value); }

    /**
     * <p>The templated target type for the EventBridge <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">
     * <code>PutEvents</code> </a> API operation.</p>
     */
    inline Target& WithEventBridgeParameters(const EventBridgeParameters& value) { SetEventBridgeParameters(value); return *this;}

    /**
     * <p>The templated target type for the EventBridge <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">
     * <code>PutEvents</code> </a> API operation.</p>
     */
    inline Target& WithEventBridgeParameters(EventBridgeParameters&& value) { SetEventBridgeParameters(std::move(value)); return *this;}


    /**
     * <p>The text, or well-formed JSON, passed to the target. If you are configuring a
     * templated Lambda, AWS Step Functions, or Amazon EventBridge target, the input
     * must be a well-formed JSON. For all other target types, a JSON is not required.
     * If you do not specify anything for this field, EventBridge Scheduler delivers a
     * default notification to the target.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The text, or well-formed JSON, passed to the target. If you are configuring a
     * templated Lambda, AWS Step Functions, or Amazon EventBridge target, the input
     * must be a well-formed JSON. For all other target types, a JSON is not required.
     * If you do not specify anything for this field, EventBridge Scheduler delivers a
     * default notification to the target.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The text, or well-formed JSON, passed to the target. If you are configuring a
     * templated Lambda, AWS Step Functions, or Amazon EventBridge target, the input
     * must be a well-formed JSON. For all other target types, a JSON is not required.
     * If you do not specify anything for this field, EventBridge Scheduler delivers a
     * default notification to the target.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The text, or well-formed JSON, passed to the target. If you are configuring a
     * templated Lambda, AWS Step Functions, or Amazon EventBridge target, the input
     * must be a well-formed JSON. For all other target types, a JSON is not required.
     * If you do not specify anything for this field, EventBridge Scheduler delivers a
     * default notification to the target.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The text, or well-formed JSON, passed to the target. If you are configuring a
     * templated Lambda, AWS Step Functions, or Amazon EventBridge target, the input
     * must be a well-formed JSON. For all other target types, a JSON is not required.
     * If you do not specify anything for this field, EventBridge Scheduler delivers a
     * default notification to the target.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The text, or well-formed JSON, passed to the target. If you are configuring a
     * templated Lambda, AWS Step Functions, or Amazon EventBridge target, the input
     * must be a well-formed JSON. For all other target types, a JSON is not required.
     * If you do not specify anything for this field, EventBridge Scheduler delivers a
     * default notification to the target.</p>
     */
    inline Target& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The text, or well-formed JSON, passed to the target. If you are configuring a
     * templated Lambda, AWS Step Functions, or Amazon EventBridge target, the input
     * must be a well-formed JSON. For all other target types, a JSON is not required.
     * If you do not specify anything for this field, EventBridge Scheduler delivers a
     * default notification to the target.</p>
     */
    inline Target& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The text, or well-formed JSON, passed to the target. If you are configuring a
     * templated Lambda, AWS Step Functions, or Amazon EventBridge target, the input
     * must be a well-formed JSON. For all other target types, a JSON is not required.
     * If you do not specify anything for this field, EventBridge Scheduler delivers a
     * default notification to the target.</p>
     */
    inline Target& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * <p>The templated target type for the Amazon Kinesis <a
     * href="kinesis/latest/APIReference/API_PutRecord.html"> <code>PutRecord</code>
     * </a> API operation.</p>
     */
    inline const KinesisParameters& GetKinesisParameters() const{ return m_kinesisParameters; }

    /**
     * <p>The templated target type for the Amazon Kinesis <a
     * href="kinesis/latest/APIReference/API_PutRecord.html"> <code>PutRecord</code>
     * </a> API operation.</p>
     */
    inline bool KinesisParametersHasBeenSet() const { return m_kinesisParametersHasBeenSet; }

    /**
     * <p>The templated target type for the Amazon Kinesis <a
     * href="kinesis/latest/APIReference/API_PutRecord.html"> <code>PutRecord</code>
     * </a> API operation.</p>
     */
    inline void SetKinesisParameters(const KinesisParameters& value) { m_kinesisParametersHasBeenSet = true; m_kinesisParameters = value; }

    /**
     * <p>The templated target type for the Amazon Kinesis <a
     * href="kinesis/latest/APIReference/API_PutRecord.html"> <code>PutRecord</code>
     * </a> API operation.</p>
     */
    inline void SetKinesisParameters(KinesisParameters&& value) { m_kinesisParametersHasBeenSet = true; m_kinesisParameters = std::move(value); }

    /**
     * <p>The templated target type for the Amazon Kinesis <a
     * href="kinesis/latest/APIReference/API_PutRecord.html"> <code>PutRecord</code>
     * </a> API operation.</p>
     */
    inline Target& WithKinesisParameters(const KinesisParameters& value) { SetKinesisParameters(value); return *this;}

    /**
     * <p>The templated target type for the Amazon Kinesis <a
     * href="kinesis/latest/APIReference/API_PutRecord.html"> <code>PutRecord</code>
     * </a> API operation.</p>
     */
    inline Target& WithKinesisParameters(KinesisParameters&& value) { SetKinesisParameters(std::move(value)); return *this;}


    /**
     * <p>A <code>RetryPolicy</code> object that includes information about the retry
     * policy settings, including the maximum age of an event, and the maximum number
     * of times EventBridge Scheduler will try to deliver the event to a target.</p>
     */
    inline const RetryPolicy& GetRetryPolicy() const{ return m_retryPolicy; }

    /**
     * <p>A <code>RetryPolicy</code> object that includes information about the retry
     * policy settings, including the maximum age of an event, and the maximum number
     * of times EventBridge Scheduler will try to deliver the event to a target.</p>
     */
    inline bool RetryPolicyHasBeenSet() const { return m_retryPolicyHasBeenSet; }

    /**
     * <p>A <code>RetryPolicy</code> object that includes information about the retry
     * policy settings, including the maximum age of an event, and the maximum number
     * of times EventBridge Scheduler will try to deliver the event to a target.</p>
     */
    inline void SetRetryPolicy(const RetryPolicy& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = value; }

    /**
     * <p>A <code>RetryPolicy</code> object that includes information about the retry
     * policy settings, including the maximum age of an event, and the maximum number
     * of times EventBridge Scheduler will try to deliver the event to a target.</p>
     */
    inline void SetRetryPolicy(RetryPolicy&& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = std::move(value); }

    /**
     * <p>A <code>RetryPolicy</code> object that includes information about the retry
     * policy settings, including the maximum age of an event, and the maximum number
     * of times EventBridge Scheduler will try to deliver the event to a target.</p>
     */
    inline Target& WithRetryPolicy(const RetryPolicy& value) { SetRetryPolicy(value); return *this;}

    /**
     * <p>A <code>RetryPolicy</code> object that includes information about the retry
     * policy settings, including the maximum age of an event, and the maximum number
     * of times EventBridge Scheduler will try to deliver the event to a target.</p>
     */
    inline Target& WithRetryPolicy(RetryPolicy&& value) { SetRetryPolicy(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that EventBridge Scheduler
     * will use for this target when the schedule is invoked.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that EventBridge Scheduler
     * will use for this target when the schedule is invoked.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that EventBridge Scheduler
     * will use for this target when the schedule is invoked.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that EventBridge Scheduler
     * will use for this target when the schedule is invoked.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that EventBridge Scheduler
     * will use for this target when the schedule is invoked.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that EventBridge Scheduler
     * will use for this target when the schedule is invoked.</p>
     */
    inline Target& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that EventBridge Scheduler
     * will use for this target when the schedule is invoked.</p>
     */
    inline Target& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that EventBridge Scheduler
     * will use for this target when the schedule is invoked.</p>
     */
    inline Target& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The templated target type for the Amazon SageMaker <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_StartPipelineExecution.html">
     * <code>StartPipelineExecution</code> </a> API operation.</p>
     */
    inline const SageMakerPipelineParameters& GetSageMakerPipelineParameters() const{ return m_sageMakerPipelineParameters; }

    /**
     * <p>The templated target type for the Amazon SageMaker <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_StartPipelineExecution.html">
     * <code>StartPipelineExecution</code> </a> API operation.</p>
     */
    inline bool SageMakerPipelineParametersHasBeenSet() const { return m_sageMakerPipelineParametersHasBeenSet; }

    /**
     * <p>The templated target type for the Amazon SageMaker <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_StartPipelineExecution.html">
     * <code>StartPipelineExecution</code> </a> API operation.</p>
     */
    inline void SetSageMakerPipelineParameters(const SageMakerPipelineParameters& value) { m_sageMakerPipelineParametersHasBeenSet = true; m_sageMakerPipelineParameters = value; }

    /**
     * <p>The templated target type for the Amazon SageMaker <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_StartPipelineExecution.html">
     * <code>StartPipelineExecution</code> </a> API operation.</p>
     */
    inline void SetSageMakerPipelineParameters(SageMakerPipelineParameters&& value) { m_sageMakerPipelineParametersHasBeenSet = true; m_sageMakerPipelineParameters = std::move(value); }

    /**
     * <p>The templated target type for the Amazon SageMaker <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_StartPipelineExecution.html">
     * <code>StartPipelineExecution</code> </a> API operation.</p>
     */
    inline Target& WithSageMakerPipelineParameters(const SageMakerPipelineParameters& value) { SetSageMakerPipelineParameters(value); return *this;}

    /**
     * <p>The templated target type for the Amazon SageMaker <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_StartPipelineExecution.html">
     * <code>StartPipelineExecution</code> </a> API operation.</p>
     */
    inline Target& WithSageMakerPipelineParameters(SageMakerPipelineParameters&& value) { SetSageMakerPipelineParameters(std::move(value)); return *this;}


    /**
     * <p>The templated target type for the Amazon SQS <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_SendMessage.html">
     * <code>SendMessage</code> </a> API operation. Contains the message group ID to
     * use when the target is a FIFO queue. If you specify an Amazon SQS FIFO queue as
     * a target, the queue must have content-based deduplication enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/using-messagededuplicationid-property.html">Using
     * the Amazon SQS message deduplication ID</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p>
     */
    inline const SqsParameters& GetSqsParameters() const{ return m_sqsParameters; }

    /**
     * <p>The templated target type for the Amazon SQS <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_SendMessage.html">
     * <code>SendMessage</code> </a> API operation. Contains the message group ID to
     * use when the target is a FIFO queue. If you specify an Amazon SQS FIFO queue as
     * a target, the queue must have content-based deduplication enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/using-messagededuplicationid-property.html">Using
     * the Amazon SQS message deduplication ID</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p>
     */
    inline bool SqsParametersHasBeenSet() const { return m_sqsParametersHasBeenSet; }

    /**
     * <p>The templated target type for the Amazon SQS <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_SendMessage.html">
     * <code>SendMessage</code> </a> API operation. Contains the message group ID to
     * use when the target is a FIFO queue. If you specify an Amazon SQS FIFO queue as
     * a target, the queue must have content-based deduplication enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/using-messagededuplicationid-property.html">Using
     * the Amazon SQS message deduplication ID</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p>
     */
    inline void SetSqsParameters(const SqsParameters& value) { m_sqsParametersHasBeenSet = true; m_sqsParameters = value; }

    /**
     * <p>The templated target type for the Amazon SQS <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_SendMessage.html">
     * <code>SendMessage</code> </a> API operation. Contains the message group ID to
     * use when the target is a FIFO queue. If you specify an Amazon SQS FIFO queue as
     * a target, the queue must have content-based deduplication enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/using-messagededuplicationid-property.html">Using
     * the Amazon SQS message deduplication ID</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p>
     */
    inline void SetSqsParameters(SqsParameters&& value) { m_sqsParametersHasBeenSet = true; m_sqsParameters = std::move(value); }

    /**
     * <p>The templated target type for the Amazon SQS <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_SendMessage.html">
     * <code>SendMessage</code> </a> API operation. Contains the message group ID to
     * use when the target is a FIFO queue. If you specify an Amazon SQS FIFO queue as
     * a target, the queue must have content-based deduplication enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/using-messagededuplicationid-property.html">Using
     * the Amazon SQS message deduplication ID</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p>
     */
    inline Target& WithSqsParameters(const SqsParameters& value) { SetSqsParameters(value); return *this;}

    /**
     * <p>The templated target type for the Amazon SQS <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_SendMessage.html">
     * <code>SendMessage</code> </a> API operation. Contains the message group ID to
     * use when the target is a FIFO queue. If you specify an Amazon SQS FIFO queue as
     * a target, the queue must have content-based deduplication enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/using-messagededuplicationid-property.html">Using
     * the Amazon SQS message deduplication ID</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p>
     */
    inline Target& WithSqsParameters(SqsParameters&& value) { SetSqsParameters(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    DeadLetterConfig m_deadLetterConfig;
    bool m_deadLetterConfigHasBeenSet = false;

    EcsParameters m_ecsParameters;
    bool m_ecsParametersHasBeenSet = false;

    EventBridgeParameters m_eventBridgeParameters;
    bool m_eventBridgeParametersHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    KinesisParameters m_kinesisParameters;
    bool m_kinesisParametersHasBeenSet = false;

    RetryPolicy m_retryPolicy;
    bool m_retryPolicyHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    SageMakerPipelineParameters m_sageMakerPipelineParameters;
    bool m_sageMakerPipelineParametersHasBeenSet = false;

    SqsParameters m_sqsParameters;
    bool m_sqsParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
