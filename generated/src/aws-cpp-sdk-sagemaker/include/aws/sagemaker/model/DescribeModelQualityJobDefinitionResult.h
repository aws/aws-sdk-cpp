/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ModelQualityBaselineConfig.h>
#include <aws/sagemaker/model/ModelQualityAppSpecification.h>
#include <aws/sagemaker/model/ModelQualityJobInput.h>
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
  class DescribeModelQualityJobDefinitionResult
  {
  public:
    AWS_SAGEMAKER_API DescribeModelQualityJobDefinitionResult() = default;
    AWS_SAGEMAKER_API DescribeModelQualityJobDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeModelQualityJobDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model quality job.</p>
     */
    inline const Aws::String& GetJobDefinitionArn() const { return m_jobDefinitionArn; }
    template<typename JobDefinitionArnT = Aws::String>
    void SetJobDefinitionArn(JobDefinitionArnT&& value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn = std::forward<JobDefinitionArnT>(value); }
    template<typename JobDefinitionArnT = Aws::String>
    DescribeModelQualityJobDefinitionResult& WithJobDefinitionArn(JobDefinitionArnT&& value) { SetJobDefinitionArn(std::forward<JobDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the quality job definition. The name must be unique within an
     * Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const { return m_jobDefinitionName; }
    template<typename JobDefinitionNameT = Aws::String>
    void SetJobDefinitionName(JobDefinitionNameT&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::forward<JobDefinitionNameT>(value); }
    template<typename JobDefinitionNameT = Aws::String>
    DescribeModelQualityJobDefinitionResult& WithJobDefinitionName(JobDefinitionNameT&& value) { SetJobDefinitionName(std::forward<JobDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the model quality job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeModelQualityJobDefinitionResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The baseline configuration for a model quality job.</p>
     */
    inline const ModelQualityBaselineConfig& GetModelQualityBaselineConfig() const { return m_modelQualityBaselineConfig; }
    template<typename ModelQualityBaselineConfigT = ModelQualityBaselineConfig>
    void SetModelQualityBaselineConfig(ModelQualityBaselineConfigT&& value) { m_modelQualityBaselineConfigHasBeenSet = true; m_modelQualityBaselineConfig = std::forward<ModelQualityBaselineConfigT>(value); }
    template<typename ModelQualityBaselineConfigT = ModelQualityBaselineConfig>
    DescribeModelQualityJobDefinitionResult& WithModelQualityBaselineConfig(ModelQualityBaselineConfigT&& value) { SetModelQualityBaselineConfig(std::forward<ModelQualityBaselineConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the model quality job to run a specified Docker container
     * image.</p>
     */
    inline const ModelQualityAppSpecification& GetModelQualityAppSpecification() const { return m_modelQualityAppSpecification; }
    template<typename ModelQualityAppSpecificationT = ModelQualityAppSpecification>
    void SetModelQualityAppSpecification(ModelQualityAppSpecificationT&& value) { m_modelQualityAppSpecificationHasBeenSet = true; m_modelQualityAppSpecification = std::forward<ModelQualityAppSpecificationT>(value); }
    template<typename ModelQualityAppSpecificationT = ModelQualityAppSpecification>
    DescribeModelQualityJobDefinitionResult& WithModelQualityAppSpecification(ModelQualityAppSpecificationT&& value) { SetModelQualityAppSpecification(std::forward<ModelQualityAppSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inputs for the model quality job.</p>
     */
    inline const ModelQualityJobInput& GetModelQualityJobInput() const { return m_modelQualityJobInput; }
    template<typename ModelQualityJobInputT = ModelQualityJobInput>
    void SetModelQualityJobInput(ModelQualityJobInputT&& value) { m_modelQualityJobInputHasBeenSet = true; m_modelQualityJobInput = std::forward<ModelQualityJobInputT>(value); }
    template<typename ModelQualityJobInputT = ModelQualityJobInput>
    DescribeModelQualityJobDefinitionResult& WithModelQualityJobInput(ModelQualityJobInputT&& value) { SetModelQualityJobInput(std::forward<ModelQualityJobInputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringOutputConfig& GetModelQualityJobOutputConfig() const { return m_modelQualityJobOutputConfig; }
    template<typename ModelQualityJobOutputConfigT = MonitoringOutputConfig>
    void SetModelQualityJobOutputConfig(ModelQualityJobOutputConfigT&& value) { m_modelQualityJobOutputConfigHasBeenSet = true; m_modelQualityJobOutputConfig = std::forward<ModelQualityJobOutputConfigT>(value); }
    template<typename ModelQualityJobOutputConfigT = MonitoringOutputConfig>
    DescribeModelQualityJobDefinitionResult& WithModelQualityJobOutputConfig(ModelQualityJobOutputConfigT&& value) { SetModelQualityJobOutputConfig(std::forward<ModelQualityJobOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringResources& GetJobResources() const { return m_jobResources; }
    template<typename JobResourcesT = MonitoringResources>
    void SetJobResources(JobResourcesT&& value) { m_jobResourcesHasBeenSet = true; m_jobResources = std::forward<JobResourcesT>(value); }
    template<typename JobResourcesT = MonitoringResources>
    DescribeModelQualityJobDefinitionResult& WithJobResources(JobResourcesT&& value) { SetJobResources(std::forward<JobResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Networking options for a model quality job.</p>
     */
    inline const MonitoringNetworkConfig& GetNetworkConfig() const { return m_networkConfig; }
    template<typename NetworkConfigT = MonitoringNetworkConfig>
    void SetNetworkConfig(NetworkConfigT&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::forward<NetworkConfigT>(value); }
    template<typename NetworkConfigT = MonitoringNetworkConfig>
    DescribeModelQualityJobDefinitionResult& WithNetworkConfig(NetworkConfigT&& value) { SetNetworkConfig(std::forward<NetworkConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker AI can
     * assume to perform tasks on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeModelQualityJobDefinitionResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringStoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    template<typename StoppingConditionT = MonitoringStoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = MonitoringStoppingCondition>
    DescribeModelQualityJobDefinitionResult& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeModelQualityJobDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobDefinitionArn;
    bool m_jobDefinitionArnHasBeenSet = false;

    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    ModelQualityBaselineConfig m_modelQualityBaselineConfig;
    bool m_modelQualityBaselineConfigHasBeenSet = false;

    ModelQualityAppSpecification m_modelQualityAppSpecification;
    bool m_modelQualityAppSpecificationHasBeenSet = false;

    ModelQualityJobInput m_modelQualityJobInput;
    bool m_modelQualityJobInputHasBeenSet = false;

    MonitoringOutputConfig m_modelQualityJobOutputConfig;
    bool m_modelQualityJobOutputConfigHasBeenSet = false;

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
