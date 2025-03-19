/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ModelBiasBaselineConfig.h>
#include <aws/sagemaker/model/ModelBiasAppSpecification.h>
#include <aws/sagemaker/model/ModelBiasJobInput.h>
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
  class DescribeModelBiasJobDefinitionResult
  {
  public:
    AWS_SAGEMAKER_API DescribeModelBiasJobDefinitionResult() = default;
    AWS_SAGEMAKER_API DescribeModelBiasJobDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeModelBiasJobDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model bias job.</p>
     */
    inline const Aws::String& GetJobDefinitionArn() const { return m_jobDefinitionArn; }
    template<typename JobDefinitionArnT = Aws::String>
    void SetJobDefinitionArn(JobDefinitionArnT&& value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn = std::forward<JobDefinitionArnT>(value); }
    template<typename JobDefinitionArnT = Aws::String>
    DescribeModelBiasJobDefinitionResult& WithJobDefinitionArn(JobDefinitionArnT&& value) { SetJobDefinitionArn(std::forward<JobDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bias job definition. The name must be unique within an Amazon
     * Web Services Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const { return m_jobDefinitionName; }
    template<typename JobDefinitionNameT = Aws::String>
    void SetJobDefinitionName(JobDefinitionNameT&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::forward<JobDefinitionNameT>(value); }
    template<typename JobDefinitionNameT = Aws::String>
    DescribeModelBiasJobDefinitionResult& WithJobDefinitionName(JobDefinitionNameT&& value) { SetJobDefinitionName(std::forward<JobDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the model bias job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeModelBiasJobDefinitionResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The baseline configuration for a model bias job.</p>
     */
    inline const ModelBiasBaselineConfig& GetModelBiasBaselineConfig() const { return m_modelBiasBaselineConfig; }
    template<typename ModelBiasBaselineConfigT = ModelBiasBaselineConfig>
    void SetModelBiasBaselineConfig(ModelBiasBaselineConfigT&& value) { m_modelBiasBaselineConfigHasBeenSet = true; m_modelBiasBaselineConfig = std::forward<ModelBiasBaselineConfigT>(value); }
    template<typename ModelBiasBaselineConfigT = ModelBiasBaselineConfig>
    DescribeModelBiasJobDefinitionResult& WithModelBiasBaselineConfig(ModelBiasBaselineConfigT&& value) { SetModelBiasBaselineConfig(std::forward<ModelBiasBaselineConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the model bias job to run a specified Docker container image.</p>
     */
    inline const ModelBiasAppSpecification& GetModelBiasAppSpecification() const { return m_modelBiasAppSpecification; }
    template<typename ModelBiasAppSpecificationT = ModelBiasAppSpecification>
    void SetModelBiasAppSpecification(ModelBiasAppSpecificationT&& value) { m_modelBiasAppSpecificationHasBeenSet = true; m_modelBiasAppSpecification = std::forward<ModelBiasAppSpecificationT>(value); }
    template<typename ModelBiasAppSpecificationT = ModelBiasAppSpecification>
    DescribeModelBiasJobDefinitionResult& WithModelBiasAppSpecification(ModelBiasAppSpecificationT&& value) { SetModelBiasAppSpecification(std::forward<ModelBiasAppSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inputs for the model bias job.</p>
     */
    inline const ModelBiasJobInput& GetModelBiasJobInput() const { return m_modelBiasJobInput; }
    template<typename ModelBiasJobInputT = ModelBiasJobInput>
    void SetModelBiasJobInput(ModelBiasJobInputT&& value) { m_modelBiasJobInputHasBeenSet = true; m_modelBiasJobInput = std::forward<ModelBiasJobInputT>(value); }
    template<typename ModelBiasJobInputT = ModelBiasJobInput>
    DescribeModelBiasJobDefinitionResult& WithModelBiasJobInput(ModelBiasJobInputT&& value) { SetModelBiasJobInput(std::forward<ModelBiasJobInputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringOutputConfig& GetModelBiasJobOutputConfig() const { return m_modelBiasJobOutputConfig; }
    template<typename ModelBiasJobOutputConfigT = MonitoringOutputConfig>
    void SetModelBiasJobOutputConfig(ModelBiasJobOutputConfigT&& value) { m_modelBiasJobOutputConfigHasBeenSet = true; m_modelBiasJobOutputConfig = std::forward<ModelBiasJobOutputConfigT>(value); }
    template<typename ModelBiasJobOutputConfigT = MonitoringOutputConfig>
    DescribeModelBiasJobDefinitionResult& WithModelBiasJobOutputConfig(ModelBiasJobOutputConfigT&& value) { SetModelBiasJobOutputConfig(std::forward<ModelBiasJobOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringResources& GetJobResources() const { return m_jobResources; }
    template<typename JobResourcesT = MonitoringResources>
    void SetJobResources(JobResourcesT&& value) { m_jobResourcesHasBeenSet = true; m_jobResources = std::forward<JobResourcesT>(value); }
    template<typename JobResourcesT = MonitoringResources>
    DescribeModelBiasJobDefinitionResult& WithJobResources(JobResourcesT&& value) { SetJobResources(std::forward<JobResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Networking options for a model bias job.</p>
     */
    inline const MonitoringNetworkConfig& GetNetworkConfig() const { return m_networkConfig; }
    template<typename NetworkConfigT = MonitoringNetworkConfig>
    void SetNetworkConfig(NetworkConfigT&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::forward<NetworkConfigT>(value); }
    template<typename NetworkConfigT = MonitoringNetworkConfig>
    DescribeModelBiasJobDefinitionResult& WithNetworkConfig(NetworkConfigT&& value) { SetNetworkConfig(std::forward<NetworkConfigT>(value)); return *this;}
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
    DescribeModelBiasJobDefinitionResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringStoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    template<typename StoppingConditionT = MonitoringStoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = MonitoringStoppingCondition>
    DescribeModelBiasJobDefinitionResult& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeModelBiasJobDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobDefinitionArn;
    bool m_jobDefinitionArnHasBeenSet = false;

    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    ModelBiasBaselineConfig m_modelBiasBaselineConfig;
    bool m_modelBiasBaselineConfigHasBeenSet = false;

    ModelBiasAppSpecification m_modelBiasAppSpecification;
    bool m_modelBiasAppSpecificationHasBeenSet = false;

    ModelBiasJobInput m_modelBiasJobInput;
    bool m_modelBiasJobInputHasBeenSet = false;

    MonitoringOutputConfig m_modelBiasJobOutputConfig;
    bool m_modelBiasJobOutputConfigHasBeenSet = false;

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
