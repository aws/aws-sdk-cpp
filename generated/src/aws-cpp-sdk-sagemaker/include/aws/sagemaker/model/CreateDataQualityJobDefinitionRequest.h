/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DataQualityBaselineConfig.h>
#include <aws/sagemaker/model/DataQualityAppSpecification.h>
#include <aws/sagemaker/model/DataQualityJobInput.h>
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
  class CreateDataQualityJobDefinitionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateDataQualityJobDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataQualityJobDefinition"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the monitoring job definition.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const { return m_jobDefinitionName; }
    inline bool JobDefinitionNameHasBeenSet() const { return m_jobDefinitionNameHasBeenSet; }
    template<typename JobDefinitionNameT = Aws::String>
    void SetJobDefinitionName(JobDefinitionNameT&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::forward<JobDefinitionNameT>(value); }
    template<typename JobDefinitionNameT = Aws::String>
    CreateDataQualityJobDefinitionRequest& WithJobDefinitionName(JobDefinitionNameT&& value) { SetJobDefinitionName(std::forward<JobDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the constraints and baselines for the monitoring job.</p>
     */
    inline const DataQualityBaselineConfig& GetDataQualityBaselineConfig() const { return m_dataQualityBaselineConfig; }
    inline bool DataQualityBaselineConfigHasBeenSet() const { return m_dataQualityBaselineConfigHasBeenSet; }
    template<typename DataQualityBaselineConfigT = DataQualityBaselineConfig>
    void SetDataQualityBaselineConfig(DataQualityBaselineConfigT&& value) { m_dataQualityBaselineConfigHasBeenSet = true; m_dataQualityBaselineConfig = std::forward<DataQualityBaselineConfigT>(value); }
    template<typename DataQualityBaselineConfigT = DataQualityBaselineConfig>
    CreateDataQualityJobDefinitionRequest& WithDataQualityBaselineConfig(DataQualityBaselineConfigT&& value) { SetDataQualityBaselineConfig(std::forward<DataQualityBaselineConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the container that runs the monitoring job.</p>
     */
    inline const DataQualityAppSpecification& GetDataQualityAppSpecification() const { return m_dataQualityAppSpecification; }
    inline bool DataQualityAppSpecificationHasBeenSet() const { return m_dataQualityAppSpecificationHasBeenSet; }
    template<typename DataQualityAppSpecificationT = DataQualityAppSpecification>
    void SetDataQualityAppSpecification(DataQualityAppSpecificationT&& value) { m_dataQualityAppSpecificationHasBeenSet = true; m_dataQualityAppSpecification = std::forward<DataQualityAppSpecificationT>(value); }
    template<typename DataQualityAppSpecificationT = DataQualityAppSpecification>
    CreateDataQualityJobDefinitionRequest& WithDataQualityAppSpecification(DataQualityAppSpecificationT&& value) { SetDataQualityAppSpecification(std::forward<DataQualityAppSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of inputs for the monitoring job. Currently endpoints are supported as
     * monitoring inputs.</p>
     */
    inline const DataQualityJobInput& GetDataQualityJobInput() const { return m_dataQualityJobInput; }
    inline bool DataQualityJobInputHasBeenSet() const { return m_dataQualityJobInputHasBeenSet; }
    template<typename DataQualityJobInputT = DataQualityJobInput>
    void SetDataQualityJobInput(DataQualityJobInputT&& value) { m_dataQualityJobInputHasBeenSet = true; m_dataQualityJobInput = std::forward<DataQualityJobInputT>(value); }
    template<typename DataQualityJobInputT = DataQualityJobInput>
    CreateDataQualityJobDefinitionRequest& WithDataQualityJobInput(DataQualityJobInputT&& value) { SetDataQualityJobInput(std::forward<DataQualityJobInputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringOutputConfig& GetDataQualityJobOutputConfig() const { return m_dataQualityJobOutputConfig; }
    inline bool DataQualityJobOutputConfigHasBeenSet() const { return m_dataQualityJobOutputConfigHasBeenSet; }
    template<typename DataQualityJobOutputConfigT = MonitoringOutputConfig>
    void SetDataQualityJobOutputConfig(DataQualityJobOutputConfigT&& value) { m_dataQualityJobOutputConfigHasBeenSet = true; m_dataQualityJobOutputConfig = std::forward<DataQualityJobOutputConfigT>(value); }
    template<typename DataQualityJobOutputConfigT = MonitoringOutputConfig>
    CreateDataQualityJobDefinitionRequest& WithDataQualityJobOutputConfig(DataQualityJobOutputConfigT&& value) { SetDataQualityJobOutputConfig(std::forward<DataQualityJobOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringResources& GetJobResources() const { return m_jobResources; }
    inline bool JobResourcesHasBeenSet() const { return m_jobResourcesHasBeenSet; }
    template<typename JobResourcesT = MonitoringResources>
    void SetJobResources(JobResourcesT&& value) { m_jobResourcesHasBeenSet = true; m_jobResources = std::forward<JobResourcesT>(value); }
    template<typename JobResourcesT = MonitoringResources>
    CreateDataQualityJobDefinitionRequest& WithJobResources(JobResourcesT&& value) { SetJobResources(std::forward<JobResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies networking configuration for the monitoring job.</p>
     */
    inline const MonitoringNetworkConfig& GetNetworkConfig() const { return m_networkConfig; }
    inline bool NetworkConfigHasBeenSet() const { return m_networkConfigHasBeenSet; }
    template<typename NetworkConfigT = MonitoringNetworkConfig>
    void SetNetworkConfig(NetworkConfigT&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::forward<NetworkConfigT>(value); }
    template<typename NetworkConfigT = MonitoringNetworkConfig>
    CreateDataQualityJobDefinitionRequest& WithNetworkConfig(NetworkConfigT&& value) { SetNetworkConfig(std::forward<NetworkConfigT>(value)); return *this;}
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
    CreateDataQualityJobDefinitionRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringStoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    template<typename StoppingConditionT = MonitoringStoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = MonitoringStoppingCondition>
    CreateDataQualityJobDefinitionRequest& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
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
    CreateDataQualityJobDefinitionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDataQualityJobDefinitionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet = false;

    DataQualityBaselineConfig m_dataQualityBaselineConfig;
    bool m_dataQualityBaselineConfigHasBeenSet = false;

    DataQualityAppSpecification m_dataQualityAppSpecification;
    bool m_dataQualityAppSpecificationHasBeenSet = false;

    DataQualityJobInput m_dataQualityJobInput;
    bool m_dataQualityJobInputHasBeenSet = false;

    MonitoringOutputConfig m_dataQualityJobOutputConfig;
    bool m_dataQualityJobOutputConfigHasBeenSet = false;

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
