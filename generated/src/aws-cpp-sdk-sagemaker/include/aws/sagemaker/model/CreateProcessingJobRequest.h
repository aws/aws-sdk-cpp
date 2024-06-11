/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ProcessingOutputConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProcessingResources.h>
#include <aws/sagemaker/model/ProcessingStoppingCondition.h>
#include <aws/sagemaker/model/AppSpecification.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/NetworkConfig.h>
#include <aws/sagemaker/model/ExperimentConfig.h>
#include <aws/sagemaker/model/ProcessingInput.h>
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
  class CreateProcessingJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateProcessingJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProcessingJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array of inputs configuring the data to download into the processing
     * container.</p>
     */
    inline const Aws::Vector<ProcessingInput>& GetProcessingInputs() const{ return m_processingInputs; }
    inline bool ProcessingInputsHasBeenSet() const { return m_processingInputsHasBeenSet; }
    inline void SetProcessingInputs(const Aws::Vector<ProcessingInput>& value) { m_processingInputsHasBeenSet = true; m_processingInputs = value; }
    inline void SetProcessingInputs(Aws::Vector<ProcessingInput>&& value) { m_processingInputsHasBeenSet = true; m_processingInputs = std::move(value); }
    inline CreateProcessingJobRequest& WithProcessingInputs(const Aws::Vector<ProcessingInput>& value) { SetProcessingInputs(value); return *this;}
    inline CreateProcessingJobRequest& WithProcessingInputs(Aws::Vector<ProcessingInput>&& value) { SetProcessingInputs(std::move(value)); return *this;}
    inline CreateProcessingJobRequest& AddProcessingInputs(const ProcessingInput& value) { m_processingInputsHasBeenSet = true; m_processingInputs.push_back(value); return *this; }
    inline CreateProcessingJobRequest& AddProcessingInputs(ProcessingInput&& value) { m_processingInputsHasBeenSet = true; m_processingInputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Output configuration for the processing job.</p>
     */
    inline const ProcessingOutputConfig& GetProcessingOutputConfig() const{ return m_processingOutputConfig; }
    inline bool ProcessingOutputConfigHasBeenSet() const { return m_processingOutputConfigHasBeenSet; }
    inline void SetProcessingOutputConfig(const ProcessingOutputConfig& value) { m_processingOutputConfigHasBeenSet = true; m_processingOutputConfig = value; }
    inline void SetProcessingOutputConfig(ProcessingOutputConfig&& value) { m_processingOutputConfigHasBeenSet = true; m_processingOutputConfig = std::move(value); }
    inline CreateProcessingJobRequest& WithProcessingOutputConfig(const ProcessingOutputConfig& value) { SetProcessingOutputConfig(value); return *this;}
    inline CreateProcessingJobRequest& WithProcessingOutputConfig(ProcessingOutputConfig&& value) { SetProcessingOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the processing job. The name must be unique within an Amazon Web
     * Services Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetProcessingJobName() const{ return m_processingJobName; }
    inline bool ProcessingJobNameHasBeenSet() const { return m_processingJobNameHasBeenSet; }
    inline void SetProcessingJobName(const Aws::String& value) { m_processingJobNameHasBeenSet = true; m_processingJobName = value; }
    inline void SetProcessingJobName(Aws::String&& value) { m_processingJobNameHasBeenSet = true; m_processingJobName = std::move(value); }
    inline void SetProcessingJobName(const char* value) { m_processingJobNameHasBeenSet = true; m_processingJobName.assign(value); }
    inline CreateProcessingJobRequest& WithProcessingJobName(const Aws::String& value) { SetProcessingJobName(value); return *this;}
    inline CreateProcessingJobRequest& WithProcessingJobName(Aws::String&& value) { SetProcessingJobName(std::move(value)); return *this;}
    inline CreateProcessingJobRequest& WithProcessingJobName(const char* value) { SetProcessingJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a processing job. In distributed training, you specify more than one
     * instance.</p>
     */
    inline const ProcessingResources& GetProcessingResources() const{ return m_processingResources; }
    inline bool ProcessingResourcesHasBeenSet() const { return m_processingResourcesHasBeenSet; }
    inline void SetProcessingResources(const ProcessingResources& value) { m_processingResourcesHasBeenSet = true; m_processingResources = value; }
    inline void SetProcessingResources(ProcessingResources&& value) { m_processingResourcesHasBeenSet = true; m_processingResources = std::move(value); }
    inline CreateProcessingJobRequest& WithProcessingResources(const ProcessingResources& value) { SetProcessingResources(value); return *this;}
    inline CreateProcessingJobRequest& WithProcessingResources(ProcessingResources&& value) { SetProcessingResources(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time limit for how long the processing job is allowed to run.</p>
     */
    inline const ProcessingStoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    inline void SetStoppingCondition(const ProcessingStoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }
    inline void SetStoppingCondition(ProcessingStoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }
    inline CreateProcessingJobRequest& WithStoppingCondition(const ProcessingStoppingCondition& value) { SetStoppingCondition(value); return *this;}
    inline CreateProcessingJobRequest& WithStoppingCondition(ProcessingStoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the processing job to run a specified Docker container image.</p>
     */
    inline const AppSpecification& GetAppSpecification() const{ return m_appSpecification; }
    inline bool AppSpecificationHasBeenSet() const { return m_appSpecificationHasBeenSet; }
    inline void SetAppSpecification(const AppSpecification& value) { m_appSpecificationHasBeenSet = true; m_appSpecification = value; }
    inline void SetAppSpecification(AppSpecification&& value) { m_appSpecificationHasBeenSet = true; m_appSpecification = std::move(value); }
    inline CreateProcessingJobRequest& WithAppSpecification(const AppSpecification& value) { SetAppSpecification(value); return *this;}
    inline CreateProcessingJobRequest& WithAppSpecification(AppSpecification&& value) { SetAppSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the Docker container. Up to 100 key and
     * values entries in the map are supported.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline CreateProcessingJobRequest& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}
    inline CreateProcessingJobRequest& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}
    inline CreateProcessingJobRequest& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }
    inline CreateProcessingJobRequest& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }
    inline CreateProcessingJobRequest& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }
    inline CreateProcessingJobRequest& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateProcessingJobRequest& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }
    inline CreateProcessingJobRequest& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }
    inline CreateProcessingJobRequest& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Networking options for a processing job, such as whether to allow inbound and
     * outbound network calls to and from processing containers, and the VPC subnets
     * and security groups to use for VPC-enabled processing jobs.</p>
     */
    inline const NetworkConfig& GetNetworkConfig() const{ return m_networkConfig; }
    inline bool NetworkConfigHasBeenSet() const { return m_networkConfigHasBeenSet; }
    inline void SetNetworkConfig(const NetworkConfig& value) { m_networkConfigHasBeenSet = true; m_networkConfig = value; }
    inline void SetNetworkConfig(NetworkConfig&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::move(value); }
    inline CreateProcessingJobRequest& WithNetworkConfig(const NetworkConfig& value) { SetNetworkConfig(value); return *this;}
    inline CreateProcessingJobRequest& WithNetworkConfig(NetworkConfig&& value) { SetNetworkConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateProcessingJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateProcessingJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateProcessingJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateProcessingJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateProcessingJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateProcessingJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateProcessingJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ExperimentConfig& GetExperimentConfig() const{ return m_experimentConfig; }
    inline bool ExperimentConfigHasBeenSet() const { return m_experimentConfigHasBeenSet; }
    inline void SetExperimentConfig(const ExperimentConfig& value) { m_experimentConfigHasBeenSet = true; m_experimentConfig = value; }
    inline void SetExperimentConfig(ExperimentConfig&& value) { m_experimentConfigHasBeenSet = true; m_experimentConfig = std::move(value); }
    inline CreateProcessingJobRequest& WithExperimentConfig(const ExperimentConfig& value) { SetExperimentConfig(value); return *this;}
    inline CreateProcessingJobRequest& WithExperimentConfig(ExperimentConfig&& value) { SetExperimentConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProcessingInput> m_processingInputs;
    bool m_processingInputsHasBeenSet = false;

    ProcessingOutputConfig m_processingOutputConfig;
    bool m_processingOutputConfigHasBeenSet = false;

    Aws::String m_processingJobName;
    bool m_processingJobNameHasBeenSet = false;

    ProcessingResources m_processingResources;
    bool m_processingResourcesHasBeenSet = false;

    ProcessingStoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    AppSpecification m_appSpecification;
    bool m_appSpecificationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    NetworkConfig m_networkConfig;
    bool m_networkConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ExperimentConfig m_experimentConfig;
    bool m_experimentConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
