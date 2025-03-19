/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelQualityBaselineConfig.h>
#include <aws/sagemaker/model/ModelQualityAppSpecification.h>
#include <aws/sagemaker/model/ModelQualityJobInput.h>
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
  class CreateModelQualityJobDefinitionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateModelQualityJobDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelQualityJobDefinition"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the monitoring job definition.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const { return m_jobDefinitionName; }
    inline bool JobDefinitionNameHasBeenSet() const { return m_jobDefinitionNameHasBeenSet; }
    template<typename JobDefinitionNameT = Aws::String>
    void SetJobDefinitionName(JobDefinitionNameT&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::forward<JobDefinitionNameT>(value); }
    template<typename JobDefinitionNameT = Aws::String>
    CreateModelQualityJobDefinitionRequest& WithJobDefinitionName(JobDefinitionNameT&& value) { SetJobDefinitionName(std::forward<JobDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the constraints and baselines for the monitoring job.</p>
     */
    inline const ModelQualityBaselineConfig& GetModelQualityBaselineConfig() const { return m_modelQualityBaselineConfig; }
    inline bool ModelQualityBaselineConfigHasBeenSet() const { return m_modelQualityBaselineConfigHasBeenSet; }
    template<typename ModelQualityBaselineConfigT = ModelQualityBaselineConfig>
    void SetModelQualityBaselineConfig(ModelQualityBaselineConfigT&& value) { m_modelQualityBaselineConfigHasBeenSet = true; m_modelQualityBaselineConfig = std::forward<ModelQualityBaselineConfigT>(value); }
    template<typename ModelQualityBaselineConfigT = ModelQualityBaselineConfig>
    CreateModelQualityJobDefinitionRequest& WithModelQualityBaselineConfig(ModelQualityBaselineConfigT&& value) { SetModelQualityBaselineConfig(std::forward<ModelQualityBaselineConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container that runs the monitoring job.</p>
     */
    inline const ModelQualityAppSpecification& GetModelQualityAppSpecification() const { return m_modelQualityAppSpecification; }
    inline bool ModelQualityAppSpecificationHasBeenSet() const { return m_modelQualityAppSpecificationHasBeenSet; }
    template<typename ModelQualityAppSpecificationT = ModelQualityAppSpecification>
    void SetModelQualityAppSpecification(ModelQualityAppSpecificationT&& value) { m_modelQualityAppSpecificationHasBeenSet = true; m_modelQualityAppSpecification = std::forward<ModelQualityAppSpecificationT>(value); }
    template<typename ModelQualityAppSpecificationT = ModelQualityAppSpecification>
    CreateModelQualityJobDefinitionRequest& WithModelQualityAppSpecification(ModelQualityAppSpecificationT&& value) { SetModelQualityAppSpecification(std::forward<ModelQualityAppSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the inputs that are monitored. Currently endpoints are
     * supported.</p>
     */
    inline const ModelQualityJobInput& GetModelQualityJobInput() const { return m_modelQualityJobInput; }
    inline bool ModelQualityJobInputHasBeenSet() const { return m_modelQualityJobInputHasBeenSet; }
    template<typename ModelQualityJobInputT = ModelQualityJobInput>
    void SetModelQualityJobInput(ModelQualityJobInputT&& value) { m_modelQualityJobInputHasBeenSet = true; m_modelQualityJobInput = std::forward<ModelQualityJobInputT>(value); }
    template<typename ModelQualityJobInputT = ModelQualityJobInput>
    CreateModelQualityJobDefinitionRequest& WithModelQualityJobInput(ModelQualityJobInputT&& value) { SetModelQualityJobInput(std::forward<ModelQualityJobInputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringOutputConfig& GetModelQualityJobOutputConfig() const { return m_modelQualityJobOutputConfig; }
    inline bool ModelQualityJobOutputConfigHasBeenSet() const { return m_modelQualityJobOutputConfigHasBeenSet; }
    template<typename ModelQualityJobOutputConfigT = MonitoringOutputConfig>
    void SetModelQualityJobOutputConfig(ModelQualityJobOutputConfigT&& value) { m_modelQualityJobOutputConfigHasBeenSet = true; m_modelQualityJobOutputConfig = std::forward<ModelQualityJobOutputConfigT>(value); }
    template<typename ModelQualityJobOutputConfigT = MonitoringOutputConfig>
    CreateModelQualityJobDefinitionRequest& WithModelQualityJobOutputConfig(ModelQualityJobOutputConfigT&& value) { SetModelQualityJobOutputConfig(std::forward<ModelQualityJobOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringResources& GetJobResources() const { return m_jobResources; }
    inline bool JobResourcesHasBeenSet() const { return m_jobResourcesHasBeenSet; }
    template<typename JobResourcesT = MonitoringResources>
    void SetJobResources(JobResourcesT&& value) { m_jobResourcesHasBeenSet = true; m_jobResources = std::forward<JobResourcesT>(value); }
    template<typename JobResourcesT = MonitoringResources>
    CreateModelQualityJobDefinitionRequest& WithJobResources(JobResourcesT&& value) { SetJobResources(std::forward<JobResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the network configuration for the monitoring job.</p>
     */
    inline const MonitoringNetworkConfig& GetNetworkConfig() const { return m_networkConfig; }
    inline bool NetworkConfigHasBeenSet() const { return m_networkConfigHasBeenSet; }
    template<typename NetworkConfigT = MonitoringNetworkConfig>
    void SetNetworkConfig(NetworkConfigT&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::forward<NetworkConfigT>(value); }
    template<typename NetworkConfigT = MonitoringNetworkConfig>
    CreateModelQualityJobDefinitionRequest& WithNetworkConfig(NetworkConfigT&& value) { SetNetworkConfig(std::forward<NetworkConfigT>(value)); return *this;}
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
    CreateModelQualityJobDefinitionRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringStoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    template<typename StoppingConditionT = MonitoringStoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = MonitoringStoppingCondition>
    CreateModelQualityJobDefinitionRequest& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
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
    CreateModelQualityJobDefinitionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateModelQualityJobDefinitionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
