/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/PipeTargetLambdaFunctionParameters.h>
#include <aws/pipes/model/PipeTargetStateMachineParameters.h>
#include <aws/pipes/model/PipeTargetKinesisStreamParameters.h>
#include <aws/pipes/model/PipeTargetEcsTaskParameters.h>
#include <aws/pipes/model/PipeTargetBatchJobParameters.h>
#include <aws/pipes/model/PipeTargetSqsQueueParameters.h>
#include <aws/pipes/model/PipeTargetHttpParameters.h>
#include <aws/pipes/model/PipeTargetRedshiftDataParameters.h>
#include <aws/pipes/model/PipeTargetSageMakerPipelineParameters.h>
#include <aws/pipes/model/PipeTargetEventBridgeEventBusParameters.h>
#include <aws/pipes/model/PipeTargetCloudWatchLogsParameters.h>
#include <aws/pipes/model/PipeTargetTimestreamParameters.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The parameters required to set up a target for your pipe.</p> <p>For more
   * information about pipe target parameters, including how to use dynamic path
   * parameters, see <a
   * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes-event-target.html">Target
   * parameters</a> in the <i>Amazon EventBridge User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeTargetParameters">AWS
   * API Reference</a></p>
   */
  class PipeTargetParameters
  {
  public:
    AWS_PIPES_API PipeTargetParameters() = default;
    AWS_PIPES_API PipeTargetParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p> <p>To remove an input template, specify
     * an empty string.</p>
     */
    inline const Aws::String& GetInputTemplate() const { return m_inputTemplate; }
    inline bool InputTemplateHasBeenSet() const { return m_inputTemplateHasBeenSet; }
    template<typename InputTemplateT = Aws::String>
    void SetInputTemplate(InputTemplateT&& value) { m_inputTemplateHasBeenSet = true; m_inputTemplate = std::forward<InputTemplateT>(value); }
    template<typename InputTemplateT = Aws::String>
    PipeTargetParameters& WithInputTemplate(InputTemplateT&& value) { SetInputTemplate(std::forward<InputTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for using a Lambda function as a target.</p>
     */
    inline const PipeTargetLambdaFunctionParameters& GetLambdaFunctionParameters() const { return m_lambdaFunctionParameters; }
    inline bool LambdaFunctionParametersHasBeenSet() const { return m_lambdaFunctionParametersHasBeenSet; }
    template<typename LambdaFunctionParametersT = PipeTargetLambdaFunctionParameters>
    void SetLambdaFunctionParameters(LambdaFunctionParametersT&& value) { m_lambdaFunctionParametersHasBeenSet = true; m_lambdaFunctionParameters = std::forward<LambdaFunctionParametersT>(value); }
    template<typename LambdaFunctionParametersT = PipeTargetLambdaFunctionParameters>
    PipeTargetParameters& WithLambdaFunctionParameters(LambdaFunctionParametersT&& value) { SetLambdaFunctionParameters(std::forward<LambdaFunctionParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for using a Step Functions state machine as a target.</p>
     */
    inline const PipeTargetStateMachineParameters& GetStepFunctionStateMachineParameters() const { return m_stepFunctionStateMachineParameters; }
    inline bool StepFunctionStateMachineParametersHasBeenSet() const { return m_stepFunctionStateMachineParametersHasBeenSet; }
    template<typename StepFunctionStateMachineParametersT = PipeTargetStateMachineParameters>
    void SetStepFunctionStateMachineParameters(StepFunctionStateMachineParametersT&& value) { m_stepFunctionStateMachineParametersHasBeenSet = true; m_stepFunctionStateMachineParameters = std::forward<StepFunctionStateMachineParametersT>(value); }
    template<typename StepFunctionStateMachineParametersT = PipeTargetStateMachineParameters>
    PipeTargetParameters& WithStepFunctionStateMachineParameters(StepFunctionStateMachineParametersT&& value) { SetStepFunctionStateMachineParameters(std::forward<StepFunctionStateMachineParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for using a Kinesis stream as a target.</p>
     */
    inline const PipeTargetKinesisStreamParameters& GetKinesisStreamParameters() const { return m_kinesisStreamParameters; }
    inline bool KinesisStreamParametersHasBeenSet() const { return m_kinesisStreamParametersHasBeenSet; }
    template<typename KinesisStreamParametersT = PipeTargetKinesisStreamParameters>
    void SetKinesisStreamParameters(KinesisStreamParametersT&& value) { m_kinesisStreamParametersHasBeenSet = true; m_kinesisStreamParameters = std::forward<KinesisStreamParametersT>(value); }
    template<typename KinesisStreamParametersT = PipeTargetKinesisStreamParameters>
    PipeTargetParameters& WithKinesisStreamParameters(KinesisStreamParametersT&& value) { SetKinesisStreamParameters(std::forward<KinesisStreamParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for using an Amazon ECS task as a target.</p>
     */
    inline const PipeTargetEcsTaskParameters& GetEcsTaskParameters() const { return m_ecsTaskParameters; }
    inline bool EcsTaskParametersHasBeenSet() const { return m_ecsTaskParametersHasBeenSet; }
    template<typename EcsTaskParametersT = PipeTargetEcsTaskParameters>
    void SetEcsTaskParameters(EcsTaskParametersT&& value) { m_ecsTaskParametersHasBeenSet = true; m_ecsTaskParameters = std::forward<EcsTaskParametersT>(value); }
    template<typename EcsTaskParametersT = PipeTargetEcsTaskParameters>
    PipeTargetParameters& WithEcsTaskParameters(EcsTaskParametersT&& value) { SetEcsTaskParameters(std::forward<EcsTaskParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for using an Batch job as a target.</p>
     */
    inline const PipeTargetBatchJobParameters& GetBatchJobParameters() const { return m_batchJobParameters; }
    inline bool BatchJobParametersHasBeenSet() const { return m_batchJobParametersHasBeenSet; }
    template<typename BatchJobParametersT = PipeTargetBatchJobParameters>
    void SetBatchJobParameters(BatchJobParametersT&& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters = std::forward<BatchJobParametersT>(value); }
    template<typename BatchJobParametersT = PipeTargetBatchJobParameters>
    PipeTargetParameters& WithBatchJobParameters(BatchJobParametersT&& value) { SetBatchJobParameters(std::forward<BatchJobParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for using a Amazon SQS stream as a target.</p>
     */
    inline const PipeTargetSqsQueueParameters& GetSqsQueueParameters() const { return m_sqsQueueParameters; }
    inline bool SqsQueueParametersHasBeenSet() const { return m_sqsQueueParametersHasBeenSet; }
    template<typename SqsQueueParametersT = PipeTargetSqsQueueParameters>
    void SetSqsQueueParameters(SqsQueueParametersT&& value) { m_sqsQueueParametersHasBeenSet = true; m_sqsQueueParameters = std::forward<SqsQueueParametersT>(value); }
    template<typename SqsQueueParametersT = PipeTargetSqsQueueParameters>
    PipeTargetParameters& WithSqsQueueParameters(SqsQueueParametersT&& value) { SetSqsQueueParameters(std::forward<SqsQueueParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are custom parameter to be used when the target is an API Gateway REST
     * APIs or EventBridge ApiDestinations.</p>
     */
    inline const PipeTargetHttpParameters& GetHttpParameters() const { return m_httpParameters; }
    inline bool HttpParametersHasBeenSet() const { return m_httpParametersHasBeenSet; }
    template<typename HttpParametersT = PipeTargetHttpParameters>
    void SetHttpParameters(HttpParametersT&& value) { m_httpParametersHasBeenSet = true; m_httpParameters = std::forward<HttpParametersT>(value); }
    template<typename HttpParametersT = PipeTargetHttpParameters>
    PipeTargetParameters& WithHttpParameters(HttpParametersT&& value) { SetHttpParameters(std::forward<HttpParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are custom parameters to be used when the target is a Amazon Redshift
     * cluster to invoke the Amazon Redshift Data API BatchExecuteStatement.</p>
     */
    inline const PipeTargetRedshiftDataParameters& GetRedshiftDataParameters() const { return m_redshiftDataParameters; }
    inline bool RedshiftDataParametersHasBeenSet() const { return m_redshiftDataParametersHasBeenSet; }
    template<typename RedshiftDataParametersT = PipeTargetRedshiftDataParameters>
    void SetRedshiftDataParameters(RedshiftDataParametersT&& value) { m_redshiftDataParametersHasBeenSet = true; m_redshiftDataParameters = std::forward<RedshiftDataParametersT>(value); }
    template<typename RedshiftDataParametersT = PipeTargetRedshiftDataParameters>
    PipeTargetParameters& WithRedshiftDataParameters(RedshiftDataParametersT&& value) { SetRedshiftDataParameters(std::forward<RedshiftDataParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for using a SageMaker pipeline as a target.</p>
     */
    inline const PipeTargetSageMakerPipelineParameters& GetSageMakerPipelineParameters() const { return m_sageMakerPipelineParameters; }
    inline bool SageMakerPipelineParametersHasBeenSet() const { return m_sageMakerPipelineParametersHasBeenSet; }
    template<typename SageMakerPipelineParametersT = PipeTargetSageMakerPipelineParameters>
    void SetSageMakerPipelineParameters(SageMakerPipelineParametersT&& value) { m_sageMakerPipelineParametersHasBeenSet = true; m_sageMakerPipelineParameters = std::forward<SageMakerPipelineParametersT>(value); }
    template<typename SageMakerPipelineParametersT = PipeTargetSageMakerPipelineParameters>
    PipeTargetParameters& WithSageMakerPipelineParameters(SageMakerPipelineParametersT&& value) { SetSageMakerPipelineParameters(std::forward<SageMakerPipelineParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for using an EventBridge event bus as a target.</p>
     */
    inline const PipeTargetEventBridgeEventBusParameters& GetEventBridgeEventBusParameters() const { return m_eventBridgeEventBusParameters; }
    inline bool EventBridgeEventBusParametersHasBeenSet() const { return m_eventBridgeEventBusParametersHasBeenSet; }
    template<typename EventBridgeEventBusParametersT = PipeTargetEventBridgeEventBusParameters>
    void SetEventBridgeEventBusParameters(EventBridgeEventBusParametersT&& value) { m_eventBridgeEventBusParametersHasBeenSet = true; m_eventBridgeEventBusParameters = std::forward<EventBridgeEventBusParametersT>(value); }
    template<typename EventBridgeEventBusParametersT = PipeTargetEventBridgeEventBusParameters>
    PipeTargetParameters& WithEventBridgeEventBusParameters(EventBridgeEventBusParametersT&& value) { SetEventBridgeEventBusParameters(std::forward<EventBridgeEventBusParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for using an CloudWatch Logs log stream as a target.</p>
     */
    inline const PipeTargetCloudWatchLogsParameters& GetCloudWatchLogsParameters() const { return m_cloudWatchLogsParameters; }
    inline bool CloudWatchLogsParametersHasBeenSet() const { return m_cloudWatchLogsParametersHasBeenSet; }
    template<typename CloudWatchLogsParametersT = PipeTargetCloudWatchLogsParameters>
    void SetCloudWatchLogsParameters(CloudWatchLogsParametersT&& value) { m_cloudWatchLogsParametersHasBeenSet = true; m_cloudWatchLogsParameters = std::forward<CloudWatchLogsParametersT>(value); }
    template<typename CloudWatchLogsParametersT = PipeTargetCloudWatchLogsParameters>
    PipeTargetParameters& WithCloudWatchLogsParameters(CloudWatchLogsParametersT&& value) { SetCloudWatchLogsParameters(std::forward<CloudWatchLogsParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for using a Timestream for LiveAnalytics table as a
     * target.</p>
     */
    inline const PipeTargetTimestreamParameters& GetTimestreamParameters() const { return m_timestreamParameters; }
    inline bool TimestreamParametersHasBeenSet() const { return m_timestreamParametersHasBeenSet; }
    template<typename TimestreamParametersT = PipeTargetTimestreamParameters>
    void SetTimestreamParameters(TimestreamParametersT&& value) { m_timestreamParametersHasBeenSet = true; m_timestreamParameters = std::forward<TimestreamParametersT>(value); }
    template<typename TimestreamParametersT = PipeTargetTimestreamParameters>
    PipeTargetParameters& WithTimestreamParameters(TimestreamParametersT&& value) { SetTimestreamParameters(std::forward<TimestreamParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputTemplate;
    bool m_inputTemplateHasBeenSet = false;

    PipeTargetLambdaFunctionParameters m_lambdaFunctionParameters;
    bool m_lambdaFunctionParametersHasBeenSet = false;

    PipeTargetStateMachineParameters m_stepFunctionStateMachineParameters;
    bool m_stepFunctionStateMachineParametersHasBeenSet = false;

    PipeTargetKinesisStreamParameters m_kinesisStreamParameters;
    bool m_kinesisStreamParametersHasBeenSet = false;

    PipeTargetEcsTaskParameters m_ecsTaskParameters;
    bool m_ecsTaskParametersHasBeenSet = false;

    PipeTargetBatchJobParameters m_batchJobParameters;
    bool m_batchJobParametersHasBeenSet = false;

    PipeTargetSqsQueueParameters m_sqsQueueParameters;
    bool m_sqsQueueParametersHasBeenSet = false;

    PipeTargetHttpParameters m_httpParameters;
    bool m_httpParametersHasBeenSet = false;

    PipeTargetRedshiftDataParameters m_redshiftDataParameters;
    bool m_redshiftDataParametersHasBeenSet = false;

    PipeTargetSageMakerPipelineParameters m_sageMakerPipelineParameters;
    bool m_sageMakerPipelineParametersHasBeenSet = false;

    PipeTargetEventBridgeEventBusParameters m_eventBridgeEventBusParameters;
    bool m_eventBridgeEventBusParametersHasBeenSet = false;

    PipeTargetCloudWatchLogsParameters m_cloudWatchLogsParameters;
    bool m_cloudWatchLogsParametersHasBeenSet = false;

    PipeTargetTimestreamParameters m_timestreamParameters;
    bool m_timestreamParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
