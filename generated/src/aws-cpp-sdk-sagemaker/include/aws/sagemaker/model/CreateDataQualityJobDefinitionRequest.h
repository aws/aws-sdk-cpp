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
    AWS_SAGEMAKER_API CreateDataQualityJobDefinitionRequest();

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
    inline const Aws::String& GetJobDefinitionName() const{ return m_jobDefinitionName; }
    inline bool JobDefinitionNameHasBeenSet() const { return m_jobDefinitionNameHasBeenSet; }
    inline void SetJobDefinitionName(const Aws::String& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = value; }
    inline void SetJobDefinitionName(Aws::String&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::move(value); }
    inline void SetJobDefinitionName(const char* value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName.assign(value); }
    inline CreateDataQualityJobDefinitionRequest& WithJobDefinitionName(const Aws::String& value) { SetJobDefinitionName(value); return *this;}
    inline CreateDataQualityJobDefinitionRequest& WithJobDefinitionName(Aws::String&& value) { SetJobDefinitionName(std::move(value)); return *this;}
    inline CreateDataQualityJobDefinitionRequest& WithJobDefinitionName(const char* value) { SetJobDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the constraints and baselines for the monitoring job.</p>
     */
    inline const DataQualityBaselineConfig& GetDataQualityBaselineConfig() const{ return m_dataQualityBaselineConfig; }
    inline bool DataQualityBaselineConfigHasBeenSet() const { return m_dataQualityBaselineConfigHasBeenSet; }
    inline void SetDataQualityBaselineConfig(const DataQualityBaselineConfig& value) { m_dataQualityBaselineConfigHasBeenSet = true; m_dataQualityBaselineConfig = value; }
    inline void SetDataQualityBaselineConfig(DataQualityBaselineConfig&& value) { m_dataQualityBaselineConfigHasBeenSet = true; m_dataQualityBaselineConfig = std::move(value); }
    inline CreateDataQualityJobDefinitionRequest& WithDataQualityBaselineConfig(const DataQualityBaselineConfig& value) { SetDataQualityBaselineConfig(value); return *this;}
    inline CreateDataQualityJobDefinitionRequest& WithDataQualityBaselineConfig(DataQualityBaselineConfig&& value) { SetDataQualityBaselineConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the container that runs the monitoring job.</p>
     */
    inline const DataQualityAppSpecification& GetDataQualityAppSpecification() const{ return m_dataQualityAppSpecification; }
    inline bool DataQualityAppSpecificationHasBeenSet() const { return m_dataQualityAppSpecificationHasBeenSet; }
    inline void SetDataQualityAppSpecification(const DataQualityAppSpecification& value) { m_dataQualityAppSpecificationHasBeenSet = true; m_dataQualityAppSpecification = value; }
    inline void SetDataQualityAppSpecification(DataQualityAppSpecification&& value) { m_dataQualityAppSpecificationHasBeenSet = true; m_dataQualityAppSpecification = std::move(value); }
    inline CreateDataQualityJobDefinitionRequest& WithDataQualityAppSpecification(const DataQualityAppSpecification& value) { SetDataQualityAppSpecification(value); return *this;}
    inline CreateDataQualityJobDefinitionRequest& WithDataQualityAppSpecification(DataQualityAppSpecification&& value) { SetDataQualityAppSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of inputs for the monitoring job. Currently endpoints are supported as
     * monitoring inputs.</p>
     */
    inline const DataQualityJobInput& GetDataQualityJobInput() const{ return m_dataQualityJobInput; }
    inline bool DataQualityJobInputHasBeenSet() const { return m_dataQualityJobInputHasBeenSet; }
    inline void SetDataQualityJobInput(const DataQualityJobInput& value) { m_dataQualityJobInputHasBeenSet = true; m_dataQualityJobInput = value; }
    inline void SetDataQualityJobInput(DataQualityJobInput&& value) { m_dataQualityJobInputHasBeenSet = true; m_dataQualityJobInput = std::move(value); }
    inline CreateDataQualityJobDefinitionRequest& WithDataQualityJobInput(const DataQualityJobInput& value) { SetDataQualityJobInput(value); return *this;}
    inline CreateDataQualityJobDefinitionRequest& WithDataQualityJobInput(DataQualityJobInput&& value) { SetDataQualityJobInput(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringOutputConfig& GetDataQualityJobOutputConfig() const{ return m_dataQualityJobOutputConfig; }
    inline bool DataQualityJobOutputConfigHasBeenSet() const { return m_dataQualityJobOutputConfigHasBeenSet; }
    inline void SetDataQualityJobOutputConfig(const MonitoringOutputConfig& value) { m_dataQualityJobOutputConfigHasBeenSet = true; m_dataQualityJobOutputConfig = value; }
    inline void SetDataQualityJobOutputConfig(MonitoringOutputConfig&& value) { m_dataQualityJobOutputConfigHasBeenSet = true; m_dataQualityJobOutputConfig = std::move(value); }
    inline CreateDataQualityJobDefinitionRequest& WithDataQualityJobOutputConfig(const MonitoringOutputConfig& value) { SetDataQualityJobOutputConfig(value); return *this;}
    inline CreateDataQualityJobDefinitionRequest& WithDataQualityJobOutputConfig(MonitoringOutputConfig&& value) { SetDataQualityJobOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringResources& GetJobResources() const{ return m_jobResources; }
    inline bool JobResourcesHasBeenSet() const { return m_jobResourcesHasBeenSet; }
    inline void SetJobResources(const MonitoringResources& value) { m_jobResourcesHasBeenSet = true; m_jobResources = value; }
    inline void SetJobResources(MonitoringResources&& value) { m_jobResourcesHasBeenSet = true; m_jobResources = std::move(value); }
    inline CreateDataQualityJobDefinitionRequest& WithJobResources(const MonitoringResources& value) { SetJobResources(value); return *this;}
    inline CreateDataQualityJobDefinitionRequest& WithJobResources(MonitoringResources&& value) { SetJobResources(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies networking configuration for the monitoring job.</p>
     */
    inline const MonitoringNetworkConfig& GetNetworkConfig() const{ return m_networkConfig; }
    inline bool NetworkConfigHasBeenSet() const { return m_networkConfigHasBeenSet; }
    inline void SetNetworkConfig(const MonitoringNetworkConfig& value) { m_networkConfigHasBeenSet = true; m_networkConfig = value; }
    inline void SetNetworkConfig(MonitoringNetworkConfig&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::move(value); }
    inline CreateDataQualityJobDefinitionRequest& WithNetworkConfig(const MonitoringNetworkConfig& value) { SetNetworkConfig(value); return *this;}
    inline CreateDataQualityJobDefinitionRequest& WithNetworkConfig(MonitoringNetworkConfig&& value) { SetNetworkConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker AI can
     * assume to perform tasks on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateDataQualityJobDefinitionRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateDataQualityJobDefinitionRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateDataQualityJobDefinitionRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringStoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    inline void SetStoppingCondition(const MonitoringStoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }
    inline void SetStoppingCondition(MonitoringStoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }
    inline CreateDataQualityJobDefinitionRequest& WithStoppingCondition(const MonitoringStoppingCondition& value) { SetStoppingCondition(value); return *this;}
    inline CreateDataQualityJobDefinitionRequest& WithStoppingCondition(MonitoringStoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">
     * Using Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDataQualityJobDefinitionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateDataQualityJobDefinitionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDataQualityJobDefinitionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateDataQualityJobDefinitionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
