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
    AWS_SAGEMAKER_API DescribeModelExplainabilityJobDefinitionResult() = default;
    AWS_SAGEMAKER_API DescribeModelExplainabilityJobDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeModelExplainabilityJobDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model explainability job.</p>
     */
    inline const Aws::String& GetJobDefinitionArn() const { return m_jobDefinitionArn; }
    template<typename JobDefinitionArnT = Aws::String>
    void SetJobDefinitionArn(JobDefinitionArnT&& value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn = std::forward<JobDefinitionArnT>(value); }
    template<typename JobDefinitionArnT = Aws::String>
    DescribeModelExplainabilityJobDefinitionResult& WithJobDefinitionArn(JobDefinitionArnT&& value) { SetJobDefinitionArn(std::forward<JobDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the explainability job definition. The name must be unique within
     * an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const { return m_jobDefinitionName; }
    template<typename JobDefinitionNameT = Aws::String>
    void SetJobDefinitionName(JobDefinitionNameT&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::forward<JobDefinitionNameT>(value); }
    template<typename JobDefinitionNameT = Aws::String>
    DescribeModelExplainabilityJobDefinitionResult& WithJobDefinitionName(JobDefinitionNameT&& value) { SetJobDefinitionName(std::forward<JobDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the model explainability job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeModelExplainabilityJobDefinitionResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The baseline configuration for a model explainability job.</p>
     */
    inline const ModelExplainabilityBaselineConfig& GetModelExplainabilityBaselineConfig() const { return m_modelExplainabilityBaselineConfig; }
    template<typename ModelExplainabilityBaselineConfigT = ModelExplainabilityBaselineConfig>
    void SetModelExplainabilityBaselineConfig(ModelExplainabilityBaselineConfigT&& value) { m_modelExplainabilityBaselineConfigHasBeenSet = true; m_modelExplainabilityBaselineConfig = std::forward<ModelExplainabilityBaselineConfigT>(value); }
    template<typename ModelExplainabilityBaselineConfigT = ModelExplainabilityBaselineConfig>
    DescribeModelExplainabilityJobDefinitionResult& WithModelExplainabilityBaselineConfig(ModelExplainabilityBaselineConfigT&& value) { SetModelExplainabilityBaselineConfig(std::forward<ModelExplainabilityBaselineConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the model explainability job to run a specified Docker container
     * image.</p>
     */
    inline const ModelExplainabilityAppSpecification& GetModelExplainabilityAppSpecification() const { return m_modelExplainabilityAppSpecification; }
    template<typename ModelExplainabilityAppSpecificationT = ModelExplainabilityAppSpecification>
    void SetModelExplainabilityAppSpecification(ModelExplainabilityAppSpecificationT&& value) { m_modelExplainabilityAppSpecificationHasBeenSet = true; m_modelExplainabilityAppSpecification = std::forward<ModelExplainabilityAppSpecificationT>(value); }
    template<typename ModelExplainabilityAppSpecificationT = ModelExplainabilityAppSpecification>
    DescribeModelExplainabilityJobDefinitionResult& WithModelExplainabilityAppSpecification(ModelExplainabilityAppSpecificationT&& value) { SetModelExplainabilityAppSpecification(std::forward<ModelExplainabilityAppSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inputs for the model explainability job.</p>
     */
    inline const ModelExplainabilityJobInput& GetModelExplainabilityJobInput() const { return m_modelExplainabilityJobInput; }
    template<typename ModelExplainabilityJobInputT = ModelExplainabilityJobInput>
    void SetModelExplainabilityJobInput(ModelExplainabilityJobInputT&& value) { m_modelExplainabilityJobInputHasBeenSet = true; m_modelExplainabilityJobInput = std::forward<ModelExplainabilityJobInputT>(value); }
    template<typename ModelExplainabilityJobInputT = ModelExplainabilityJobInput>
    DescribeModelExplainabilityJobDefinitionResult& WithModelExplainabilityJobInput(ModelExplainabilityJobInputT&& value) { SetModelExplainabilityJobInput(std::forward<ModelExplainabilityJobInputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringOutputConfig& GetModelExplainabilityJobOutputConfig() const { return m_modelExplainabilityJobOutputConfig; }
    template<typename ModelExplainabilityJobOutputConfigT = MonitoringOutputConfig>
    void SetModelExplainabilityJobOutputConfig(ModelExplainabilityJobOutputConfigT&& value) { m_modelExplainabilityJobOutputConfigHasBeenSet = true; m_modelExplainabilityJobOutputConfig = std::forward<ModelExplainabilityJobOutputConfigT>(value); }
    template<typename ModelExplainabilityJobOutputConfigT = MonitoringOutputConfig>
    DescribeModelExplainabilityJobDefinitionResult& WithModelExplainabilityJobOutputConfig(ModelExplainabilityJobOutputConfigT&& value) { SetModelExplainabilityJobOutputConfig(std::forward<ModelExplainabilityJobOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringResources& GetJobResources() const { return m_jobResources; }
    template<typename JobResourcesT = MonitoringResources>
    void SetJobResources(JobResourcesT&& value) { m_jobResourcesHasBeenSet = true; m_jobResources = std::forward<JobResourcesT>(value); }
    template<typename JobResourcesT = MonitoringResources>
    DescribeModelExplainabilityJobDefinitionResult& WithJobResources(JobResourcesT&& value) { SetJobResources(std::forward<JobResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Networking options for a model explainability job.</p>
     */
    inline const MonitoringNetworkConfig& GetNetworkConfig() const { return m_networkConfig; }
    template<typename NetworkConfigT = MonitoringNetworkConfig>
    void SetNetworkConfig(NetworkConfigT&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::forward<NetworkConfigT>(value); }
    template<typename NetworkConfigT = MonitoringNetworkConfig>
    DescribeModelExplainabilityJobDefinitionResult& WithNetworkConfig(NetworkConfigT&& value) { SetNetworkConfig(std::forward<NetworkConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has read permission to
     * the input data location and write permission to the output data location in
     * Amazon S3.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeModelExplainabilityJobDefinitionResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringStoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    template<typename StoppingConditionT = MonitoringStoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = MonitoringStoppingCondition>
    DescribeModelExplainabilityJobDefinitionResult& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeModelExplainabilityJobDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobDefinitionArn;
    bool m_jobDefinitionArnHasBeenSet = false;

    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    ModelExplainabilityBaselineConfig m_modelExplainabilityBaselineConfig;
    bool m_modelExplainabilityBaselineConfigHasBeenSet = false;

    ModelExplainabilityAppSpecification m_modelExplainabilityAppSpecification;
    bool m_modelExplainabilityAppSpecificationHasBeenSet = false;

    ModelExplainabilityJobInput m_modelExplainabilityJobInput;
    bool m_modelExplainabilityJobInputHasBeenSet = false;

    MonitoringOutputConfig m_modelExplainabilityJobOutputConfig;
    bool m_modelExplainabilityJobOutputConfigHasBeenSet = false;

    MonitoringResources m_jobResources;
    bool m_jobResourcesHasBeenSet = false;

    MonitoringNetworkConfig m_networkConfig;
    bool m_networkConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    MonitoringStoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
