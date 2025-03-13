/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelExplainabilityBaselineConfig.h>
#include <aws/sagemaker/model/ModelExplainabilityAppSpecification.h>
#include <aws/sagemaker/model/ModelExplainabilityJobInput.h>
#include <aws/sagemaker/model/MonitoringOutputConfig.h>
#include <aws/sagemaker/model/MonitoringResources.h>
#include <aws/sagemaker/model/MonitoringNetworkConfig.h>
#include <aws/sagemaker/model/MonitoringStoppingCondition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateModelExplainabilityJobDefinitionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateModelExplainabilityJobDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelExplainabilityJobDefinition"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name of the model explainability job definition. The name must be unique
     * within an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const { return m_jobDefinitionName; }
    inline bool JobDefinitionNameHasBeenSet() const { return m_jobDefinitionNameHasBeenSet; }
    template<typename JobDefinitionNameT = Aws::String>
    void SetJobDefinitionName(JobDefinitionNameT&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::forward<JobDefinitionNameT>(value); }
    template<typename JobDefinitionNameT = Aws::String>
    CreateModelExplainabilityJobDefinitionRequest& WithJobDefinitionName(JobDefinitionNameT&& value) { SetJobDefinitionName(std::forward<JobDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The baseline configuration for a model explainability job.</p>
     */
    inline const ModelExplainabilityBaselineConfig& GetModelExplainabilityBaselineConfig() const { return m_modelExplainabilityBaselineConfig; }
    inline bool ModelExplainabilityBaselineConfigHasBeenSet() const { return m_modelExplainabilityBaselineConfigHasBeenSet; }
    template<typename ModelExplainabilityBaselineConfigT = ModelExplainabilityBaselineConfig>
    void SetModelExplainabilityBaselineConfig(ModelExplainabilityBaselineConfigT&& value) { m_modelExplainabilityBaselineConfigHasBeenSet = true; m_modelExplainabilityBaselineConfig = std::forward<ModelExplainabilityBaselineConfigT>(value); }
    template<typename ModelExplainabilityBaselineConfigT = ModelExplainabilityBaselineConfig>
    CreateModelExplainabilityJobDefinitionRequest& WithModelExplainabilityBaselineConfig(ModelExplainabilityBaselineConfigT&& value) { SetModelExplainabilityBaselineConfig(std::forward<ModelExplainabilityBaselineConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the model explainability job to run a specified Docker container
     * image.</p>
     */
    inline const ModelExplainabilityAppSpecification& GetModelExplainabilityAppSpecification() const { return m_modelExplainabilityAppSpecification; }
    inline bool ModelExplainabilityAppSpecificationHasBeenSet() const { return m_modelExplainabilityAppSpecificationHasBeenSet; }
    template<typename ModelExplainabilityAppSpecificationT = ModelExplainabilityAppSpecification>
    void SetModelExplainabilityAppSpecification(ModelExplainabilityAppSpecificationT&& value) { m_modelExplainabilityAppSpecificationHasBeenSet = true; m_modelExplainabilityAppSpecification = std::forward<ModelExplainabilityAppSpecificationT>(value); }
    template<typename ModelExplainabilityAppSpecificationT = ModelExplainabilityAppSpecification>
    CreateModelExplainabilityJobDefinitionRequest& WithModelExplainabilityAppSpecification(ModelExplainabilityAppSpecificationT&& value) { SetModelExplainabilityAppSpecification(std::forward<ModelExplainabilityAppSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inputs for the model explainability job.</p>
     */
    inline const ModelExplainabilityJobInput& GetModelExplainabilityJobInput() const { return m_modelExplainabilityJobInput; }
    inline bool ModelExplainabilityJobInputHasBeenSet() const { return m_modelExplainabilityJobInputHasBeenSet; }
    template<typename ModelExplainabilityJobInputT = ModelExplainabilityJobInput>
    void SetModelExplainabilityJobInput(ModelExplainabilityJobInputT&& value) { m_modelExplainabilityJobInputHasBeenSet = true; m_modelExplainabilityJobInput = std::forward<ModelExplainabilityJobInputT>(value); }
    template<typename ModelExplainabilityJobInputT = ModelExplainabilityJobInput>
    CreateModelExplainabilityJobDefinitionRequest& WithModelExplainabilityJobInput(ModelExplainabilityJobInputT&& value) { SetModelExplainabilityJobInput(std::forward<ModelExplainabilityJobInputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringOutputConfig& GetModelExplainabilityJobOutputConfig() const { return m_modelExplainabilityJobOutputConfig; }
    inline bool ModelExplainabilityJobOutputConfigHasBeenSet() const { return m_modelExplainabilityJobOutputConfigHasBeenSet; }
    template<typename ModelExplainabilityJobOutputConfigT = MonitoringOutputConfig>
    void SetModelExplainabilityJobOutputConfig(ModelExplainabilityJobOutputConfigT&& value) { m_modelExplainabilityJobOutputConfigHasBeenSet = true; m_modelExplainabilityJobOutputConfig = std::forward<ModelExplainabilityJobOutputConfigT>(value); }
    template<typename ModelExplainabilityJobOutputConfigT = MonitoringOutputConfig>
    CreateModelExplainabilityJobDefinitionRequest& WithModelExplainabilityJobOutputConfig(ModelExplainabilityJobOutputConfigT&& value) { SetModelExplainabilityJobOutputConfig(std::forward<ModelExplainabilityJobOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringResources& GetJobResources() const { return m_jobResources; }
    inline bool JobResourcesHasBeenSet() const { return m_jobResourcesHasBeenSet; }
    template<typename JobResourcesT = MonitoringResources>
    void SetJobResources(JobResourcesT&& value) { m_jobResourcesHasBeenSet = true; m_jobResources = std::forward<JobResourcesT>(value); }
    template<typename JobResourcesT = MonitoringResources>
    CreateModelExplainabilityJobDefinitionRequest& WithJobResources(JobResourcesT&& value) { SetJobResources(std::forward<JobResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Networking options for a model explainability job.</p>
     */
    inline const MonitoringNetworkConfig& GetNetworkConfig() const { return m_networkConfig; }
    inline bool NetworkConfigHasBeenSet() const { return m_networkConfigHasBeenSet; }
    template<typename NetworkConfigT = MonitoringNetworkConfig>
    void SetNetworkConfig(NetworkConfigT&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::forward<NetworkConfigT>(value); }
    template<typename NetworkConfigT = MonitoringNetworkConfig>
    CreateModelExplainabilityJobDefinitionRequest& WithNetworkConfig(NetworkConfigT&& value) { SetNetworkConfig(std::forward<NetworkConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker AI can
     * assume to perform tasks on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateModelExplainabilityJobDefinitionRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringStoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    template<typename StoppingConditionT = MonitoringStoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = MonitoringStoppingCondition>
    CreateModelExplainabilityJobDefinitionRequest& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">
     * Using Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateModelExplainabilityJobDefinitionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateModelExplainabilityJobDefinitionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
