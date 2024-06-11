/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ModelExplainabilityBaselineConfig.h>
#include <aws/sagemaker/model/ModelExplainabilityAppSpecification.h>
#include <aws/sagemaker/model/ModelExplainabilityJobInput.h>
#include <aws/sagemaker/model/MonitoringOutputConfig.h>
#include <aws/sagemaker/model/MonitoringResources.h>
#include <aws/sagemaker/model/MonitoringNetworkConfig.h>
#include <aws/sagemaker/model/MonitoringStoppingCondition.h>
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
  class DescribeModelExplainabilityJobDefinitionResult
  {
  public:
    AWS_SAGEMAKER_API DescribeModelExplainabilityJobDefinitionResult();
    AWS_SAGEMAKER_API DescribeModelExplainabilityJobDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeModelExplainabilityJobDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model explainability job.</p>
     */
    inline const Aws::String& GetJobDefinitionArn() const{ return m_jobDefinitionArn; }
    inline void SetJobDefinitionArn(const Aws::String& value) { m_jobDefinitionArn = value; }
    inline void SetJobDefinitionArn(Aws::String&& value) { m_jobDefinitionArn = std::move(value); }
    inline void SetJobDefinitionArn(const char* value) { m_jobDefinitionArn.assign(value); }
    inline DescribeModelExplainabilityJobDefinitionResult& WithJobDefinitionArn(const Aws::String& value) { SetJobDefinitionArn(value); return *this;}
    inline DescribeModelExplainabilityJobDefinitionResult& WithJobDefinitionArn(Aws::String&& value) { SetJobDefinitionArn(std::move(value)); return *this;}
    inline DescribeModelExplainabilityJobDefinitionResult& WithJobDefinitionArn(const char* value) { SetJobDefinitionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the explainability job definition. The name must be unique within
     * an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const{ return m_jobDefinitionName; }
    inline void SetJobDefinitionName(const Aws::String& value) { m_jobDefinitionName = value; }
    inline void SetJobDefinitionName(Aws::String&& value) { m_jobDefinitionName = std::move(value); }
    inline void SetJobDefinitionName(const char* value) { m_jobDefinitionName.assign(value); }
    inline DescribeModelExplainabilityJobDefinitionResult& WithJobDefinitionName(const Aws::String& value) { SetJobDefinitionName(value); return *this;}
    inline DescribeModelExplainabilityJobDefinitionResult& WithJobDefinitionName(Aws::String&& value) { SetJobDefinitionName(std::move(value)); return *this;}
    inline DescribeModelExplainabilityJobDefinitionResult& WithJobDefinitionName(const char* value) { SetJobDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the model explainability job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeModelExplainabilityJobDefinitionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeModelExplainabilityJobDefinitionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The baseline configuration for a model explainability job.</p>
     */
    inline const ModelExplainabilityBaselineConfig& GetModelExplainabilityBaselineConfig() const{ return m_modelExplainabilityBaselineConfig; }
    inline void SetModelExplainabilityBaselineConfig(const ModelExplainabilityBaselineConfig& value) { m_modelExplainabilityBaselineConfig = value; }
    inline void SetModelExplainabilityBaselineConfig(ModelExplainabilityBaselineConfig&& value) { m_modelExplainabilityBaselineConfig = std::move(value); }
    inline DescribeModelExplainabilityJobDefinitionResult& WithModelExplainabilityBaselineConfig(const ModelExplainabilityBaselineConfig& value) { SetModelExplainabilityBaselineConfig(value); return *this;}
    inline DescribeModelExplainabilityJobDefinitionResult& WithModelExplainabilityBaselineConfig(ModelExplainabilityBaselineConfig&& value) { SetModelExplainabilityBaselineConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the model explainability job to run a specified Docker container
     * image.</p>
     */
    inline const ModelExplainabilityAppSpecification& GetModelExplainabilityAppSpecification() const{ return m_modelExplainabilityAppSpecification; }
    inline void SetModelExplainabilityAppSpecification(const ModelExplainabilityAppSpecification& value) { m_modelExplainabilityAppSpecification = value; }
    inline void SetModelExplainabilityAppSpecification(ModelExplainabilityAppSpecification&& value) { m_modelExplainabilityAppSpecification = std::move(value); }
    inline DescribeModelExplainabilityJobDefinitionResult& WithModelExplainabilityAppSpecification(const ModelExplainabilityAppSpecification& value) { SetModelExplainabilityAppSpecification(value); return *this;}
    inline DescribeModelExplainabilityJobDefinitionResult& WithModelExplainabilityAppSpecification(ModelExplainabilityAppSpecification&& value) { SetModelExplainabilityAppSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inputs for the model explainability job.</p>
     */
    inline const ModelExplainabilityJobInput& GetModelExplainabilityJobInput() const{ return m_modelExplainabilityJobInput; }
    inline void SetModelExplainabilityJobInput(const ModelExplainabilityJobInput& value) { m_modelExplainabilityJobInput = value; }
    inline void SetModelExplainabilityJobInput(ModelExplainabilityJobInput&& value) { m_modelExplainabilityJobInput = std::move(value); }
    inline DescribeModelExplainabilityJobDefinitionResult& WithModelExplainabilityJobInput(const ModelExplainabilityJobInput& value) { SetModelExplainabilityJobInput(value); return *this;}
    inline DescribeModelExplainabilityJobDefinitionResult& WithModelExplainabilityJobInput(ModelExplainabilityJobInput&& value) { SetModelExplainabilityJobInput(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringOutputConfig& GetModelExplainabilityJobOutputConfig() const{ return m_modelExplainabilityJobOutputConfig; }
    inline void SetModelExplainabilityJobOutputConfig(const MonitoringOutputConfig& value) { m_modelExplainabilityJobOutputConfig = value; }
    inline void SetModelExplainabilityJobOutputConfig(MonitoringOutputConfig&& value) { m_modelExplainabilityJobOutputConfig = std::move(value); }
    inline DescribeModelExplainabilityJobDefinitionResult& WithModelExplainabilityJobOutputConfig(const MonitoringOutputConfig& value) { SetModelExplainabilityJobOutputConfig(value); return *this;}
    inline DescribeModelExplainabilityJobDefinitionResult& WithModelExplainabilityJobOutputConfig(MonitoringOutputConfig&& value) { SetModelExplainabilityJobOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringResources& GetJobResources() const{ return m_jobResources; }
    inline void SetJobResources(const MonitoringResources& value) { m_jobResources = value; }
    inline void SetJobResources(MonitoringResources&& value) { m_jobResources = std::move(value); }
    inline DescribeModelExplainabilityJobDefinitionResult& WithJobResources(const MonitoringResources& value) { SetJobResources(value); return *this;}
    inline DescribeModelExplainabilityJobDefinitionResult& WithJobResources(MonitoringResources&& value) { SetJobResources(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Networking options for a model explainability job.</p>
     */
    inline const MonitoringNetworkConfig& GetNetworkConfig() const{ return m_networkConfig; }
    inline void SetNetworkConfig(const MonitoringNetworkConfig& value) { m_networkConfig = value; }
    inline void SetNetworkConfig(MonitoringNetworkConfig&& value) { m_networkConfig = std::move(value); }
    inline DescribeModelExplainabilityJobDefinitionResult& WithNetworkConfig(const MonitoringNetworkConfig& value) { SetNetworkConfig(value); return *this;}
    inline DescribeModelExplainabilityJobDefinitionResult& WithNetworkConfig(MonitoringNetworkConfig&& value) { SetNetworkConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has read permission to
     * the input data location and write permission to the output data location in
     * Amazon S3.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeModelExplainabilityJobDefinitionResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeModelExplainabilityJobDefinitionResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeModelExplainabilityJobDefinitionResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringStoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }
    inline void SetStoppingCondition(const MonitoringStoppingCondition& value) { m_stoppingCondition = value; }
    inline void SetStoppingCondition(MonitoringStoppingCondition&& value) { m_stoppingCondition = std::move(value); }
    inline DescribeModelExplainabilityJobDefinitionResult& WithStoppingCondition(const MonitoringStoppingCondition& value) { SetStoppingCondition(value); return *this;}
    inline DescribeModelExplainabilityJobDefinitionResult& WithStoppingCondition(MonitoringStoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeModelExplainabilityJobDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeModelExplainabilityJobDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeModelExplainabilityJobDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobDefinitionArn;

    Aws::String m_jobDefinitionName;

    Aws::Utils::DateTime m_creationTime;

    ModelExplainabilityBaselineConfig m_modelExplainabilityBaselineConfig;

    ModelExplainabilityAppSpecification m_modelExplainabilityAppSpecification;

    ModelExplainabilityJobInput m_modelExplainabilityJobInput;

    MonitoringOutputConfig m_modelExplainabilityJobOutputConfig;

    MonitoringResources m_jobResources;

    MonitoringNetworkConfig m_networkConfig;

    Aws::String m_roleArn;

    MonitoringStoppingCondition m_stoppingCondition;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
