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
    AWS_SAGEMAKER_API CreateModelBiasJobDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelBiasJobDefinition"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the bias job definition. The name must be unique within an Amazon
     * Web Services Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const{ return m_jobDefinitionName; }

    /**
     * <p>The name of the bias job definition. The name must be unique within an Amazon
     * Web Services Region in the Amazon Web Services account.</p>
     */
    inline bool JobDefinitionNameHasBeenSet() const { return m_jobDefinitionNameHasBeenSet; }

    /**
     * <p>The name of the bias job definition. The name must be unique within an Amazon
     * Web Services Region in the Amazon Web Services account.</p>
     */
    inline void SetJobDefinitionName(const Aws::String& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = value; }

    /**
     * <p>The name of the bias job definition. The name must be unique within an Amazon
     * Web Services Region in the Amazon Web Services account.</p>
     */
    inline void SetJobDefinitionName(Aws::String&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::move(value); }

    /**
     * <p>The name of the bias job definition. The name must be unique within an Amazon
     * Web Services Region in the Amazon Web Services account.</p>
     */
    inline void SetJobDefinitionName(const char* value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName.assign(value); }

    /**
     * <p>The name of the bias job definition. The name must be unique within an Amazon
     * Web Services Region in the Amazon Web Services account.</p>
     */
    inline CreateModelBiasJobDefinitionRequest& WithJobDefinitionName(const Aws::String& value) { SetJobDefinitionName(value); return *this;}

    /**
     * <p>The name of the bias job definition. The name must be unique within an Amazon
     * Web Services Region in the Amazon Web Services account.</p>
     */
    inline CreateModelBiasJobDefinitionRequest& WithJobDefinitionName(Aws::String&& value) { SetJobDefinitionName(std::move(value)); return *this;}

    /**
     * <p>The name of the bias job definition. The name must be unique within an Amazon
     * Web Services Region in the Amazon Web Services account.</p>
     */
    inline CreateModelBiasJobDefinitionRequest& WithJobDefinitionName(const char* value) { SetJobDefinitionName(value); return *this;}


    /**
     * <p>The baseline configuration for a model bias job.</p>
     */
    inline const ModelBiasBaselineConfig& GetModelBiasBaselineConfig() const{ return m_modelBiasBaselineConfig; }

    /**
     * <p>The baseline configuration for a model bias job.</p>
     */
    inline bool ModelBiasBaselineConfigHasBeenSet() const { return m_modelBiasBaselineConfigHasBeenSet; }

    /**
     * <p>The baseline configuration for a model bias job.</p>
     */
    inline void SetModelBiasBaselineConfig(const ModelBiasBaselineConfig& value) { m_modelBiasBaselineConfigHasBeenSet = true; m_modelBiasBaselineConfig = value; }

    /**
     * <p>The baseline configuration for a model bias job.</p>
     */
    inline void SetModelBiasBaselineConfig(ModelBiasBaselineConfig&& value) { m_modelBiasBaselineConfigHasBeenSet = true; m_modelBiasBaselineConfig = std::move(value); }

    /**
     * <p>The baseline configuration for a model bias job.</p>
     */
    inline CreateModelBiasJobDefinitionRequest& WithModelBiasBaselineConfig(const ModelBiasBaselineConfig& value) { SetModelBiasBaselineConfig(value); return *this;}

    /**
     * <p>The baseline configuration for a model bias job.</p>
     */
    inline CreateModelBiasJobDefinitionRequest& WithModelBiasBaselineConfig(ModelBiasBaselineConfig&& value) { SetModelBiasBaselineConfig(std::move(value)); return *this;}


    /**
     * <p>Configures the model bias job to run a specified Docker container image.</p>
     */
    inline const ModelBiasAppSpecification& GetModelBiasAppSpecification() const{ return m_modelBiasAppSpecification; }

    /**
     * <p>Configures the model bias job to run a specified Docker container image.</p>
     */
    inline bool ModelBiasAppSpecificationHasBeenSet() const { return m_modelBiasAppSpecificationHasBeenSet; }

    /**
     * <p>Configures the model bias job to run a specified Docker container image.</p>
     */
    inline void SetModelBiasAppSpecification(const ModelBiasAppSpecification& value) { m_modelBiasAppSpecificationHasBeenSet = true; m_modelBiasAppSpecification = value; }

    /**
     * <p>Configures the model bias job to run a specified Docker container image.</p>
     */
    inline void SetModelBiasAppSpecification(ModelBiasAppSpecification&& value) { m_modelBiasAppSpecificationHasBeenSet = true; m_modelBiasAppSpecification = std::move(value); }

    /**
     * <p>Configures the model bias job to run a specified Docker container image.</p>
     */
    inline CreateModelBiasJobDefinitionRequest& WithModelBiasAppSpecification(const ModelBiasAppSpecification& value) { SetModelBiasAppSpecification(value); return *this;}

    /**
     * <p>Configures the model bias job to run a specified Docker container image.</p>
     */
    inline CreateModelBiasJobDefinitionRequest& WithModelBiasAppSpecification(ModelBiasAppSpecification&& value) { SetModelBiasAppSpecification(std::move(value)); return *this;}


    /**
     * <p>Inputs for the model bias job.</p>
     */
    inline const ModelBiasJobInput& GetModelBiasJobInput() const{ return m_modelBiasJobInput; }

    /**
     * <p>Inputs for the model bias job.</p>
     */
    inline bool ModelBiasJobInputHasBeenSet() const { return m_modelBiasJobInputHasBeenSet; }

    /**
     * <p>Inputs for the model bias job.</p>
     */
    inline void SetModelBiasJobInput(const ModelBiasJobInput& value) { m_modelBiasJobInputHasBeenSet = true; m_modelBiasJobInput = value; }

    /**
     * <p>Inputs for the model bias job.</p>
     */
    inline void SetModelBiasJobInput(ModelBiasJobInput&& value) { m_modelBiasJobInputHasBeenSet = true; m_modelBiasJobInput = std::move(value); }

    /**
     * <p>Inputs for the model bias job.</p>
     */
    inline CreateModelBiasJobDefinitionRequest& WithModelBiasJobInput(const ModelBiasJobInput& value) { SetModelBiasJobInput(value); return *this;}

    /**
     * <p>Inputs for the model bias job.</p>
     */
    inline CreateModelBiasJobDefinitionRequest& WithModelBiasJobInput(ModelBiasJobInput&& value) { SetModelBiasJobInput(std::move(value)); return *this;}


    
    inline const MonitoringOutputConfig& GetModelBiasJobOutputConfig() const{ return m_modelBiasJobOutputConfig; }

    
    inline bool ModelBiasJobOutputConfigHasBeenSet() const { return m_modelBiasJobOutputConfigHasBeenSet; }

    
    inline void SetModelBiasJobOutputConfig(const MonitoringOutputConfig& value) { m_modelBiasJobOutputConfigHasBeenSet = true; m_modelBiasJobOutputConfig = value; }

    
    inline void SetModelBiasJobOutputConfig(MonitoringOutputConfig&& value) { m_modelBiasJobOutputConfigHasBeenSet = true; m_modelBiasJobOutputConfig = std::move(value); }

    
    inline CreateModelBiasJobDefinitionRequest& WithModelBiasJobOutputConfig(const MonitoringOutputConfig& value) { SetModelBiasJobOutputConfig(value); return *this;}

    
    inline CreateModelBiasJobDefinitionRequest& WithModelBiasJobOutputConfig(MonitoringOutputConfig&& value) { SetModelBiasJobOutputConfig(std::move(value)); return *this;}


    
    inline const MonitoringResources& GetJobResources() const{ return m_jobResources; }

    
    inline bool JobResourcesHasBeenSet() const { return m_jobResourcesHasBeenSet; }

    
    inline void SetJobResources(const MonitoringResources& value) { m_jobResourcesHasBeenSet = true; m_jobResources = value; }

    
    inline void SetJobResources(MonitoringResources&& value) { m_jobResourcesHasBeenSet = true; m_jobResources = std::move(value); }

    
    inline CreateModelBiasJobDefinitionRequest& WithJobResources(const MonitoringResources& value) { SetJobResources(value); return *this;}

    
    inline CreateModelBiasJobDefinitionRequest& WithJobResources(MonitoringResources&& value) { SetJobResources(std::move(value)); return *this;}


    /**
     * <p>Networking options for a model bias job.</p>
     */
    inline const MonitoringNetworkConfig& GetNetworkConfig() const{ return m_networkConfig; }

    /**
     * <p>Networking options for a model bias job.</p>
     */
    inline bool NetworkConfigHasBeenSet() const { return m_networkConfigHasBeenSet; }

    /**
     * <p>Networking options for a model bias job.</p>
     */
    inline void SetNetworkConfig(const MonitoringNetworkConfig& value) { m_networkConfigHasBeenSet = true; m_networkConfig = value; }

    /**
     * <p>Networking options for a model bias job.</p>
     */
    inline void SetNetworkConfig(MonitoringNetworkConfig&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::move(value); }

    /**
     * <p>Networking options for a model bias job.</p>
     */
    inline CreateModelBiasJobDefinitionRequest& WithNetworkConfig(const MonitoringNetworkConfig& value) { SetNetworkConfig(value); return *this;}

    /**
     * <p>Networking options for a model bias job.</p>
     */
    inline CreateModelBiasJobDefinitionRequest& WithNetworkConfig(MonitoringNetworkConfig&& value) { SetNetworkConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline CreateModelBiasJobDefinitionRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline CreateModelBiasJobDefinitionRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline CreateModelBiasJobDefinitionRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    
    inline const MonitoringStoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }

    
    inline void SetStoppingCondition(const MonitoringStoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }

    
    inline void SetStoppingCondition(MonitoringStoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }

    
    inline CreateModelBiasJobDefinitionRequest& WithStoppingCondition(const MonitoringStoppingCondition& value) { SetStoppingCondition(value); return *this;}

    
    inline CreateModelBiasJobDefinitionRequest& WithStoppingCondition(MonitoringStoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}


    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateModelBiasJobDefinitionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateModelBiasJobDefinitionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateModelBiasJobDefinitionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateModelBiasJobDefinitionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
