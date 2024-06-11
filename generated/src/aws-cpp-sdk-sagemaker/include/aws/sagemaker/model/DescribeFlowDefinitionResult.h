﻿/**
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
    AWS_SAGEMAKER_API DescribeFlowDefinitionResult();
    AWS_SAGEMAKER_API DescribeFlowDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeFlowDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow defintion.</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const{ return m_flowDefinitionArn; }
    inline void SetFlowDefinitionArn(const Aws::String& value) { m_flowDefinitionArn = value; }
    inline void SetFlowDefinitionArn(Aws::String&& value) { m_flowDefinitionArn = std::move(value); }
    inline void SetFlowDefinitionArn(const char* value) { m_flowDefinitionArn.assign(value); }
    inline DescribeFlowDefinitionResult& WithFlowDefinitionArn(const Aws::String& value) { SetFlowDefinitionArn(value); return *this;}
    inline DescribeFlowDefinitionResult& WithFlowDefinitionArn(Aws::String&& value) { SetFlowDefinitionArn(std::move(value)); return *this;}
    inline DescribeFlowDefinitionResult& WithFlowDefinitionArn(const char* value) { SetFlowDefinitionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline const Aws::String& GetFlowDefinitionName() const{ return m_flowDefinitionName; }
    inline void SetFlowDefinitionName(const Aws::String& value) { m_flowDefinitionName = value; }
    inline void SetFlowDefinitionName(Aws::String&& value) { m_flowDefinitionName = std::move(value); }
    inline void SetFlowDefinitionName(const char* value) { m_flowDefinitionName.assign(value); }
    inline DescribeFlowDefinitionResult& WithFlowDefinitionName(const Aws::String& value) { SetFlowDefinitionName(value); return *this;}
    inline DescribeFlowDefinitionResult& WithFlowDefinitionName(Aws::String&& value) { SetFlowDefinitionName(std::move(value)); return *this;}
    inline DescribeFlowDefinitionResult& WithFlowDefinitionName(const char* value) { SetFlowDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the flow definition. Valid values are listed below.</p>
     */
    inline const FlowDefinitionStatus& GetFlowDefinitionStatus() const{ return m_flowDefinitionStatus; }
    inline void SetFlowDefinitionStatus(const FlowDefinitionStatus& value) { m_flowDefinitionStatus = value; }
    inline void SetFlowDefinitionStatus(FlowDefinitionStatus&& value) { m_flowDefinitionStatus = std::move(value); }
    inline DescribeFlowDefinitionResult& WithFlowDefinitionStatus(const FlowDefinitionStatus& value) { SetFlowDefinitionStatus(value); return *this;}
    inline DescribeFlowDefinitionResult& WithFlowDefinitionStatus(FlowDefinitionStatus&& value) { SetFlowDefinitionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the flow definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeFlowDefinitionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeFlowDefinitionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for configuring the source of human task requests. Used to specify
     * if Amazon Rekognition or Amazon Textract is used as an integration source.</p>
     */
    inline const HumanLoopRequestSource& GetHumanLoopRequestSource() const{ return m_humanLoopRequestSource; }
    inline void SetHumanLoopRequestSource(const HumanLoopRequestSource& value) { m_humanLoopRequestSource = value; }
    inline void SetHumanLoopRequestSource(HumanLoopRequestSource&& value) { m_humanLoopRequestSource = std::move(value); }
    inline DescribeFlowDefinitionResult& WithHumanLoopRequestSource(const HumanLoopRequestSource& value) { SetHumanLoopRequestSource(value); return *this;}
    inline DescribeFlowDefinitionResult& WithHumanLoopRequestSource(HumanLoopRequestSource&& value) { SetHumanLoopRequestSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about what triggers a human review
     * workflow.</p>
     */
    inline const HumanLoopActivationConfig& GetHumanLoopActivationConfig() const{ return m_humanLoopActivationConfig; }
    inline void SetHumanLoopActivationConfig(const HumanLoopActivationConfig& value) { m_humanLoopActivationConfig = value; }
    inline void SetHumanLoopActivationConfig(HumanLoopActivationConfig&& value) { m_humanLoopActivationConfig = std::move(value); }
    inline DescribeFlowDefinitionResult& WithHumanLoopActivationConfig(const HumanLoopActivationConfig& value) { SetHumanLoopActivationConfig(value); return *this;}
    inline DescribeFlowDefinitionResult& WithHumanLoopActivationConfig(HumanLoopActivationConfig&& value) { SetHumanLoopActivationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about who works on the task, the workforce
     * task price, and other task details.</p>
     */
    inline const HumanLoopConfig& GetHumanLoopConfig() const{ return m_humanLoopConfig; }
    inline void SetHumanLoopConfig(const HumanLoopConfig& value) { m_humanLoopConfig = value; }
    inline void SetHumanLoopConfig(HumanLoopConfig&& value) { m_humanLoopConfig = std::move(value); }
    inline DescribeFlowDefinitionResult& WithHumanLoopConfig(const HumanLoopConfig& value) { SetHumanLoopConfig(value); return *this;}
    inline DescribeFlowDefinitionResult& WithHumanLoopConfig(HumanLoopConfig&& value) { SetHumanLoopConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the output file.</p>
     */
    inline const FlowDefinitionOutputConfig& GetOutputConfig() const{ return m_outputConfig; }
    inline void SetOutputConfig(const FlowDefinitionOutputConfig& value) { m_outputConfig = value; }
    inline void SetOutputConfig(FlowDefinitionOutputConfig&& value) { m_outputConfig = std::move(value); }
    inline DescribeFlowDefinitionResult& WithOutputConfig(const FlowDefinitionOutputConfig& value) { SetOutputConfig(value); return *this;}
    inline DescribeFlowDefinitionResult& WithOutputConfig(FlowDefinitionOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) execution role for the flow definition.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeFlowDefinitionResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeFlowDefinitionResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeFlowDefinitionResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason your flow definition failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeFlowDefinitionResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeFlowDefinitionResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeFlowDefinitionResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFlowDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFlowDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFlowDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_flowDefinitionArn;

    Aws::String m_flowDefinitionName;

    FlowDefinitionStatus m_flowDefinitionStatus;

    Aws::Utils::DateTime m_creationTime;

    HumanLoopRequestSource m_humanLoopRequestSource;

    HumanLoopActivationConfig m_humanLoopActivationConfig;

    HumanLoopConfig m_humanLoopConfig;

    FlowDefinitionOutputConfig m_outputConfig;

    Aws::String m_roleArn;

    Aws::String m_failureReason;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
