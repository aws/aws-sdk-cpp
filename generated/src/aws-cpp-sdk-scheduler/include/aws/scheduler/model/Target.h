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
    AWS_SCHEDULER_API Target() = default;
    AWS_SCHEDULER_API Target(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Target& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about an Amazon SQS queue that
     * EventBridge Scheduler uses as a dead-letter queue for your schedule. If
     * specified, EventBridge Scheduler delivers failed events that could not be
     * successfully delivered to a target to the queue.</p>
     */
    inline const DeadLetterConfig& GetDeadLetterConfig() const { return m_deadLetterConfig; }
    inline bool DeadLetterConfigHasBeenSet() const { return m_deadLetterConfigHasBeenSet; }
    template<typename DeadLetterConfigT = DeadLetterConfig>
    void SetDeadLetterConfig(DeadLetterConfigT&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::forward<DeadLetterConfigT>(value); }
    template<typename DeadLetterConfigT = DeadLetterConfig>
    Target& WithDeadLetterConfig(DeadLetterConfigT&& value) { SetDeadLetterConfig(std::forward<DeadLetterConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The templated target type for the Amazon ECS <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_RunTask.html">
     * <code>RunTask</code> </a> API operation.</p>
     */
    inline const EcsParameters& GetEcsParameters() const { return m_ecsParameters; }
    inline bool EcsParametersHasBeenSet() const { return m_ecsParametersHasBeenSet; }
    template<typename EcsParametersT = EcsParameters>
    void SetEcsParameters(EcsParametersT&& value) { m_ecsParametersHasBeenSet = true; m_ecsParameters = std::forward<EcsParametersT>(value); }
    template<typename EcsParametersT = EcsParameters>
    Target& WithEcsParameters(EcsParametersT&& value) { SetEcsParameters(std::forward<EcsParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The templated target type for the EventBridge <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">
     * <code>PutEvents</code> </a> API operation.</p>
     */
    inline const EventBridgeParameters& GetEventBridgeParameters() const { return m_eventBridgeParameters; }
    inline bool EventBridgeParametersHasBeenSet() const { return m_eventBridgeParametersHasBeenSet; }
    template<typename EventBridgeParametersT = EventBridgeParameters>
    void SetEventBridgeParameters(EventBridgeParametersT&& value) { m_eventBridgeParametersHasBeenSet = true; m_eventBridgeParameters = std::forward<EventBridgeParametersT>(value); }
    template<typename EventBridgeParametersT = EventBridgeParameters>
    Target& WithEventBridgeParameters(EventBridgeParametersT&& value) { SetEventBridgeParameters(std::forward<EventBridgeParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text, or well-formed JSON, passed to the target. If you are configuring a
     * templated Lambda, AWS Step Functions, or Amazon EventBridge target, the input
     * must be a well-formed JSON. For all other target types, a JSON is not required.
     * If you do not specify anything for this field, EventBridge Scheduler delivers a
     * default notification to the target.</p>
     */
    inline const Aws::String& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = Aws::String>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Aws::String>
    Target& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The templated target type for the Amazon Kinesis <a
     * href="kinesis/latest/APIReference/API_PutRecord.html"> <code>PutRecord</code>
     * </a> API operation.</p>
     */
    inline const KinesisParameters& GetKinesisParameters() const { return m_kinesisParameters; }
    inline bool KinesisParametersHasBeenSet() const { return m_kinesisParametersHasBeenSet; }
    template<typename KinesisParametersT = KinesisParameters>
    void SetKinesisParameters(KinesisParametersT&& value) { m_kinesisParametersHasBeenSet = true; m_kinesisParameters = std::forward<KinesisParametersT>(value); }
    template<typename KinesisParametersT = KinesisParameters>
    Target& WithKinesisParameters(KinesisParametersT&& value) { SetKinesisParameters(std::forward<KinesisParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>RetryPolicy</code> object that includes information about the retry
     * policy settings, including the maximum age of an event, and the maximum number
     * of times EventBridge Scheduler will try to deliver the event to a target.</p>
     */
    inline const RetryPolicy& GetRetryPolicy() const { return m_retryPolicy; }
    inline bool RetryPolicyHasBeenSet() const { return m_retryPolicyHasBeenSet; }
    template<typename RetryPolicyT = RetryPolicy>
    void SetRetryPolicy(RetryPolicyT&& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = std::forward<RetryPolicyT>(value); }
    template<typename RetryPolicyT = RetryPolicy>
    Target& WithRetryPolicy(RetryPolicyT&& value) { SetRetryPolicy(std::forward<RetryPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that EventBridge Scheduler
     * will use for this target when the schedule is invoked.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    Target& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The templated target type for the Amazon SageMaker <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_StartPipelineExecution.html">
     * <code>StartPipelineExecution</code> </a> API operation.</p>
     */
    inline const SageMakerPipelineParameters& GetSageMakerPipelineParameters() const { return m_sageMakerPipelineParameters; }
    inline bool SageMakerPipelineParametersHasBeenSet() const { return m_sageMakerPipelineParametersHasBeenSet; }
    template<typename SageMakerPipelineParametersT = SageMakerPipelineParameters>
    void SetSageMakerPipelineParameters(SageMakerPipelineParametersT&& value) { m_sageMakerPipelineParametersHasBeenSet = true; m_sageMakerPipelineParameters = std::forward<SageMakerPipelineParametersT>(value); }
    template<typename SageMakerPipelineParametersT = SageMakerPipelineParameters>
    Target& WithSageMakerPipelineParameters(SageMakerPipelineParametersT&& value) { SetSageMakerPipelineParameters(std::forward<SageMakerPipelineParametersT>(value)); return *this;}
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
    inline const SqsParameters& GetSqsParameters() const { return m_sqsParameters; }
    inline bool SqsParametersHasBeenSet() const { return m_sqsParametersHasBeenSet; }
    template<typename SqsParametersT = SqsParameters>
    void SetSqsParameters(SqsParametersT&& value) { m_sqsParametersHasBeenSet = true; m_sqsParameters = std::forward<SqsParametersT>(value); }
    template<typename SqsParametersT = SqsParameters>
    Target& WithSqsParameters(SqsParametersT&& value) { SetSqsParameters(std::forward<SqsParametersT>(value)); return *this;}
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
