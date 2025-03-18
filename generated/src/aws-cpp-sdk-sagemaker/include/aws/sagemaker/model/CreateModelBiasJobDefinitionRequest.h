/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelBiasBaselineConfig.h>
#include <aws/sagemaker/model/ModelBiasAppSpecification.h>
#include <aws/sagemaker/model/ModelBiasJobInput.h>
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
  class CreateModelBiasJobDefinitionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateModelBiasJobDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelBiasJobDefinition"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the bias job definition. The name must be unique within an Amazon
     * Web Services Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const { return m_jobDefinitionName; }
    inline bool JobDefinitionNameHasBeenSet() const { return m_jobDefinitionNameHasBeenSet; }
    template<typename JobDefinitionNameT = Aws::String>
    void SetJobDefinitionName(JobDefinitionNameT&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::forward<JobDefinitionNameT>(value); }
    template<typename JobDefinitionNameT = Aws::String>
    CreateModelBiasJobDefinitionRequest& WithJobDefinitionName(JobDefinitionNameT&& value) { SetJobDefinitionName(std::forward<JobDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The baseline configuration for a model bias job.</p>
     */
    inline const ModelBiasBaselineConfig& GetModelBiasBaselineConfig() const { return m_modelBiasBaselineConfig; }
    inline bool ModelBiasBaselineConfigHasBeenSet() const { return m_modelBiasBaselineConfigHasBeenSet; }
    template<typename ModelBiasBaselineConfigT = ModelBiasBaselineConfig>
    void SetModelBiasBaselineConfig(ModelBiasBaselineConfigT&& value) { m_modelBiasBaselineConfigHasBeenSet = true; m_modelBiasBaselineConfig = std::forward<ModelBiasBaselineConfigT>(value); }
    template<typename ModelBiasBaselineConfigT = ModelBiasBaselineConfig>
    CreateModelBiasJobDefinitionRequest& WithModelBiasBaselineConfig(ModelBiasBaselineConfigT&& value) { SetModelBiasBaselineConfig(std::forward<ModelBiasBaselineConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the model bias job to run a specified Docker container image.</p>
     */
    inline const ModelBiasAppSpecification& GetModelBiasAppSpecification() const { return m_modelBiasAppSpecification; }
    inline bool ModelBiasAppSpecificationHasBeenSet() const { return m_modelBiasAppSpecificationHasBeenSet; }
    template<typename ModelBiasAppSpecificationT = ModelBiasAppSpecification>
    void SetModelBiasAppSpecification(ModelBiasAppSpecificationT&& value) { m_modelBiasAppSpecificationHasBeenSet = true; m_modelBiasAppSpecification = std::forward<ModelBiasAppSpecificationT>(value); }
    template<typename ModelBiasAppSpecificationT = ModelBiasAppSpecification>
    CreateModelBiasJobDefinitionRequest& WithModelBiasAppSpecification(ModelBiasAppSpecificationT&& value) { SetModelBiasAppSpecification(std::forward<ModelBiasAppSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inputs for the model bias job.</p>
     */
    inline const ModelBiasJobInput& GetModelBiasJobInput() const { return m_modelBiasJobInput; }
    inline bool ModelBiasJobInputHasBeenSet() const { return m_modelBiasJobInputHasBeenSet; }
    template<typename ModelBiasJobInputT = ModelBiasJobInput>
    void SetModelBiasJobInput(ModelBiasJobInputT&& value) { m_modelBiasJobInputHasBeenSet = true; m_modelBiasJobInput = std::forward<ModelBiasJobInputT>(value); }
    template<typename ModelBiasJobInputT = ModelBiasJobInput>
    CreateModelBiasJobDefinitionRequest& WithModelBiasJobInput(ModelBiasJobInputT&& value) { SetModelBiasJobInput(std::forward<ModelBiasJobInputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringOutputConfig& GetModelBiasJobOutputConfig() const { return m_modelBiasJobOutputConfig; }
    inline bool ModelBiasJobOutputConfigHasBeenSet() const { return m_modelBiasJobOutputConfigHasBeenSet; }
    template<typename ModelBiasJobOutputConfigT = MonitoringOutputConfig>
    void SetModelBiasJobOutputConfig(ModelBiasJobOutputConfigT&& value) { m_modelBiasJobOutputConfigHasBeenSet = true; m_modelBiasJobOutputConfig = std::forward<ModelBiasJobOutputConfigT>(value); }
    template<typename ModelBiasJobOutputConfigT = MonitoringOutputConfig>
    CreateModelBiasJobDefinitionRequest& WithModelBiasJobOutputConfig(ModelBiasJobOutputConfigT&& value) { SetModelBiasJobOutputConfig(std::forward<ModelBiasJobOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringResources& GetJobResources() const { return m_jobResources; }
    inline bool JobResourcesHasBeenSet() const { return m_jobResourcesHasBeenSet; }
    template<typename JobResourcesT = MonitoringResources>
    void SetJobResources(JobResourcesT&& value) { m_jobResourcesHasBeenSet = true; m_jobResources = std::forward<JobResourcesT>(value); }
    template<typename JobResourcesT = MonitoringResources>
    CreateModelBiasJobDefinitionRequest& WithJobResources(JobResourcesT&& value) { SetJobResources(std::forward<JobResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Networking options for a model bias job.</p>
     */
    inline const MonitoringNetworkConfig& GetNetworkConfig() const { return m_networkConfig; }
    inline bool NetworkConfigHasBeenSet() const { return m_networkConfigHasBeenSet; }
    template<typename NetworkConfigT = MonitoringNetworkConfig>
    void SetNetworkConfig(NetworkConfigT&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::forward<NetworkConfigT>(value); }
    template<typename NetworkConfigT = MonitoringNetworkConfig>
    CreateModelBiasJobDefinitionRequest& WithNetworkConfig(NetworkConfigT&& value) { SetNetworkConfig(std::forward<NetworkConfigT>(value)); return *this;}
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
    CreateModelBiasJobDefinitionRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringStoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    template<typename StoppingConditionT = MonitoringStoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = MonitoringStoppingCondition>
    CreateModelBiasJobDefinitionRequest& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
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
    CreateModelBiasJobDefinitionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateModelBiasJobDefinitionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
