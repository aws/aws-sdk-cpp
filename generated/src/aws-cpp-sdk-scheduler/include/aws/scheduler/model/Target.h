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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Target& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Target& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Target& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about an Amazon SQS queue that
     * EventBridge Scheduler uses as a dead-letter queue for your schedule. If
     * specified, EventBridge Scheduler delivers failed events that could not be
     * successfully delivered to a target to the queue.</p>
     */
    inline const DeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }
    inline bool DeadLetterConfigHasBeenSet() const { return m_deadLetterConfigHasBeenSet; }
    inline void SetDeadLetterConfig(const DeadLetterConfig& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = value; }
    inline void SetDeadLetterConfig(DeadLetterConfig&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::move(value); }
    inline Target& WithDeadLetterConfig(const DeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}
    inline Target& WithDeadLetterConfig(DeadLetterConfig&& value) { SetDeadLetterConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The templated target type for the Amazon ECS <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_RunTask.html">
     * <code>RunTask</code> </a> API operation.</p>
     */
    inline const EcsParameters& GetEcsParameters() const{ return m_ecsParameters; }
    inline bool EcsParametersHasBeenSet() const { return m_ecsParametersHasBeenSet; }
    inline void SetEcsParameters(const EcsParameters& value) { m_ecsParametersHasBeenSet = true; m_ecsParameters = value; }
    inline void SetEcsParameters(EcsParameters&& value) { m_ecsParametersHasBeenSet = true; m_ecsParameters = std::move(value); }
    inline Target& WithEcsParameters(const EcsParameters& value) { SetEcsParameters(value); return *this;}
    inline Target& WithEcsParameters(EcsParameters&& value) { SetEcsParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The templated target type for the EventBridge <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">
     * <code>PutEvents</code> </a> API operation.</p>
     */
    inline const EventBridgeParameters& GetEventBridgeParameters() const{ return m_eventBridgeParameters; }
    inline bool EventBridgeParametersHasBeenSet() const { return m_eventBridgeParametersHasBeenSet; }
    inline void SetEventBridgeParameters(const EventBridgeParameters& value) { m_eventBridgeParametersHasBeenSet = true; m_eventBridgeParameters = value; }
    inline void SetEventBridgeParameters(EventBridgeParameters&& value) { m_eventBridgeParametersHasBeenSet = true; m_eventBridgeParameters = std::move(value); }
    inline Target& WithEventBridgeParameters(const EventBridgeParameters& value) { SetEventBridgeParameters(value); return *this;}
    inline Target& WithEventBridgeParameters(EventBridgeParameters&& value) { SetEventBridgeParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text, or well-formed JSON, passed to the target. If you are configuring a
     * templated Lambda, AWS Step Functions, or Amazon EventBridge target, the input
     * must be a well-formed JSON. For all other target types, a JSON is not required.
     * If you do not specify anything for this field, EventBridge Scheduler delivers a
     * default notification to the target.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }
    inline Target& WithInput(const Aws::String& value) { SetInput(value); return *this;}
    inline Target& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}
    inline Target& WithInput(const char* value) { SetInput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The templated target type for the Amazon Kinesis <a
     * href="kinesis/latest/APIReference/API_PutRecord.html"> <code>PutRecord</code>
     * </a> API operation.</p>
     */
    inline const KinesisParameters& GetKinesisParameters() const{ return m_kinesisParameters; }
    inline bool KinesisParametersHasBeenSet() const { return m_kinesisParametersHasBeenSet; }
    inline void SetKinesisParameters(const KinesisParameters& value) { m_kinesisParametersHasBeenSet = true; m_kinesisParameters = value; }
    inline void SetKinesisParameters(KinesisParameters&& value) { m_kinesisParametersHasBeenSet = true; m_kinesisParameters = std::move(value); }
    inline Target& WithKinesisParameters(const KinesisParameters& value) { SetKinesisParameters(value); return *this;}
    inline Target& WithKinesisParameters(KinesisParameters&& value) { SetKinesisParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>RetryPolicy</code> object that includes information about the retry
     * policy settings, including the maximum age of an event, and the maximum number
     * of times EventBridge Scheduler will try to deliver the event to a target.</p>
     */
    inline const RetryPolicy& GetRetryPolicy() const{ return m_retryPolicy; }
    inline bool RetryPolicyHasBeenSet() const { return m_retryPolicyHasBeenSet; }
    inline void SetRetryPolicy(const RetryPolicy& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = value; }
    inline void SetRetryPolicy(RetryPolicy&& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = std::move(value); }
    inline Target& WithRetryPolicy(const RetryPolicy& value) { SetRetryPolicy(value); return *this;}
    inline Target& WithRetryPolicy(RetryPolicy&& value) { SetRetryPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that EventBridge Scheduler
     * will use for this target when the schedule is invoked.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline Target& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline Target& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline Target& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The templated target type for the Amazon SageMaker <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_StartPipelineExecution.html">
     * <code>StartPipelineExecution</code> </a> API operation.</p>
     */
    inline const SageMakerPipelineParameters& GetSageMakerPipelineParameters() const{ return m_sageMakerPipelineParameters; }
    inline bool SageMakerPipelineParametersHasBeenSet() const { return m_sageMakerPipelineParametersHasBeenSet; }
    inline void SetSageMakerPipelineParameters(const SageMakerPipelineParameters& value) { m_sageMakerPipelineParametersHasBeenSet = true; m_sageMakerPipelineParameters = value; }
    inline void SetSageMakerPipelineParameters(SageMakerPipelineParameters&& value) { m_sageMakerPipelineParametersHasBeenSet = true; m_sageMakerPipelineParameters = std::move(value); }
    inline Target& WithSageMakerPipelineParameters(const SageMakerPipelineParameters& value) { SetSageMakerPipelineParameters(value); return *this;}
    inline Target& WithSageMakerPipelineParameters(SageMakerPipelineParameters&& value) { SetSageMakerPipelineParameters(std::move(value)); return *this;}
    ///@}

    ///@{
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
    inline bool SqsParametersHasBeenSet() const { return m_sqsParametersHasBeenSet; }
    inline void SetSqsParameters(const SqsParameters& value) { m_sqsParametersHasBeenSet = true; m_sqsParameters = value; }
    inline void SetSqsParameters(SqsParameters&& value) { m_sqsParametersHasBeenSet = true; m_sqsParameters = std::move(value); }
    inline Target& WithSqsParameters(const SqsParameters& value) { SetSqsParameters(value); return *this;}
    inline Target& WithSqsParameters(SqsParameters&& value) { SetSqsParameters(std::move(value)); return *this;}
    ///@}
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
