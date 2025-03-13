/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/FlowDefinitionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/HumanLoopRequestSource.h>
#include <aws/sagemaker/model/HumanLoopActivationConfig.h>
#include <aws/sagemaker/model/HumanLoopConfig.h>
#include <aws/sagemaker/model/FlowDefinitionOutputConfig.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeFlowDefinitionResult
  {
  public:
    AWS_SAGEMAKER_API DescribeFlowDefinitionResult() = default;
    AWS_SAGEMAKER_API DescribeFlowDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeFlowDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow defintion.</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const { return m_flowDefinitionArn; }
    template<typename FlowDefinitionArnT = Aws::String>
    void SetFlowDefinitionArn(FlowDefinitionArnT&& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = std::forward<FlowDefinitionArnT>(value); }
    template<typename FlowDefinitionArnT = Aws::String>
    DescribeFlowDefinitionResult& WithFlowDefinitionArn(FlowDefinitionArnT&& value) { SetFlowDefinitionArn(std::forward<FlowDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline const Aws::String& GetFlowDefinitionName() const { return m_flowDefinitionName; }
    template<typename FlowDefinitionNameT = Aws::String>
    void SetFlowDefinitionName(FlowDefinitionNameT&& value) { m_flowDefinitionNameHasBeenSet = true; m_flowDefinitionName = std::forward<FlowDefinitionNameT>(value); }
    template<typename FlowDefinitionNameT = Aws::String>
    DescribeFlowDefinitionResult& WithFlowDefinitionName(FlowDefinitionNameT&& value) { SetFlowDefinitionName(std::forward<FlowDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the flow definition. Valid values are listed below.</p>
     */
    inline FlowDefinitionStatus GetFlowDefinitionStatus() const { return m_flowDefinitionStatus; }
    inline void SetFlowDefinitionStatus(FlowDefinitionStatus value) { m_flowDefinitionStatusHasBeenSet = true; m_flowDefinitionStatus = value; }
    inline DescribeFlowDefinitionResult& WithFlowDefinitionStatus(FlowDefinitionStatus value) { SetFlowDefinitionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the flow definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeFlowDefinitionResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for configuring the source of human task requests. Used to specify
     * if Amazon Rekognition or Amazon Textract is used as an integration source.</p>
     */
    inline const HumanLoopRequestSource& GetHumanLoopRequestSource() const { return m_humanLoopRequestSource; }
    template<typename HumanLoopRequestSourceT = HumanLoopRequestSource>
    void SetHumanLoopRequestSource(HumanLoopRequestSourceT&& value) { m_humanLoopRequestSourceHasBeenSet = true; m_humanLoopRequestSource = std::forward<HumanLoopRequestSourceT>(value); }
    template<typename HumanLoopRequestSourceT = HumanLoopRequestSource>
    DescribeFlowDefinitionResult& WithHumanLoopRequestSource(HumanLoopRequestSourceT&& value) { SetHumanLoopRequestSource(std::forward<HumanLoopRequestSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about what triggers a human review
     * workflow.</p>
     */
    inline const HumanLoopActivationConfig& GetHumanLoopActivationConfig() const { return m_humanLoopActivationConfig; }
    template<typename HumanLoopActivationConfigT = HumanLoopActivationConfig>
    void SetHumanLoopActivationConfig(HumanLoopActivationConfigT&& value) { m_humanLoopActivationConfigHasBeenSet = true; m_humanLoopActivationConfig = std::forward<HumanLoopActivationConfigT>(value); }
    template<typename HumanLoopActivationConfigT = HumanLoopActivationConfig>
    DescribeFlowDefinitionResult& WithHumanLoopActivationConfig(HumanLoopActivationConfigT&& value) { SetHumanLoopActivationConfig(std::forward<HumanLoopActivationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about who works on the task, the workforce
     * task price, and other task details.</p>
     */
    inline const HumanLoopConfig& GetHumanLoopConfig() const { return m_humanLoopConfig; }
    template<typename HumanLoopConfigT = HumanLoopConfig>
    void SetHumanLoopConfig(HumanLoopConfigT&& value) { m_humanLoopConfigHasBeenSet = true; m_humanLoopConfig = std::forward<HumanLoopConfigT>(value); }
    template<typename HumanLoopConfigT = HumanLoopConfig>
    DescribeFlowDefinitionResult& WithHumanLoopConfig(HumanLoopConfigT&& value) { SetHumanLoopConfig(std::forward<HumanLoopConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the output file.</p>
     */
    inline const FlowDefinitionOutputConfig& GetOutputConfig() const { return m_outputConfig; }
    template<typename OutputConfigT = FlowDefinitionOutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = FlowDefinitionOutputConfig>
    DescribeFlowDefinitionResult& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) execution role for the flow definition.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeFlowDefinitionResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason your flow definition failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeFlowDefinitionResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFlowDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowDefinitionArn;
    bool m_flowDefinitionArnHasBeenSet = false;

    Aws::String m_flowDefinitionName;
    bool m_flowDefinitionNameHasBeenSet = false;

    FlowDefinitionStatus m_flowDefinitionStatus{FlowDefinitionStatus::NOT_SET};
    bool m_flowDefinitionStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    HumanLoopRequestSource m_humanLoopRequestSource;
    bool m_humanLoopRequestSourceHasBeenSet = false;

    HumanLoopActivationConfig m_humanLoopActivationConfig;
    bool m_humanLoopActivationConfigHasBeenSet = false;

    HumanLoopConfig m_humanLoopConfig;
    bool m_humanLoopConfigHasBeenSet = false;

    FlowDefinitionOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
