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
    AWS_SAGEMAKER_API CreateProcessingJobRequest() = default;

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
    inline const Aws::Vector<ProcessingInput>& GetProcessingInputs() const { return m_processingInputs; }
    inline bool ProcessingInputsHasBeenSet() const { return m_processingInputsHasBeenSet; }
    template<typename ProcessingInputsT = Aws::Vector<ProcessingInput>>
    void SetProcessingInputs(ProcessingInputsT&& value) { m_processingInputsHasBeenSet = true; m_processingInputs = std::forward<ProcessingInputsT>(value); }
    template<typename ProcessingInputsT = Aws::Vector<ProcessingInput>>
    CreateProcessingJobRequest& WithProcessingInputs(ProcessingInputsT&& value) { SetProcessingInputs(std::forward<ProcessingInputsT>(value)); return *this;}
    template<typename ProcessingInputsT = ProcessingInput>
    CreateProcessingJobRequest& AddProcessingInputs(ProcessingInputsT&& value) { m_processingInputsHasBeenSet = true; m_processingInputs.emplace_back(std::forward<ProcessingInputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Output configuration for the processing job.</p>
     */
    inline const ProcessingOutputConfig& GetProcessingOutputConfig() const { return m_processingOutputConfig; }
    inline bool ProcessingOutputConfigHasBeenSet() const { return m_processingOutputConfigHasBeenSet; }
    template<typename ProcessingOutputConfigT = ProcessingOutputConfig>
    void SetProcessingOutputConfig(ProcessingOutputConfigT&& value) { m_processingOutputConfigHasBeenSet = true; m_processingOutputConfig = std::forward<ProcessingOutputConfigT>(value); }
    template<typename ProcessingOutputConfigT = ProcessingOutputConfig>
    CreateProcessingJobRequest& WithProcessingOutputConfig(ProcessingOutputConfigT&& value) { SetProcessingOutputConfig(std::forward<ProcessingOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the processing job. The name must be unique within an Amazon Web
     * Services Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetProcessingJobName() const { return m_processingJobName; }
    inline bool ProcessingJobNameHasBeenSet() const { return m_processingJobNameHasBeenSet; }
    template<typename ProcessingJobNameT = Aws::String>
    void SetProcessingJobName(ProcessingJobNameT&& value) { m_processingJobNameHasBeenSet = true; m_processingJobName = std::forward<ProcessingJobNameT>(value); }
    template<typename ProcessingJobNameT = Aws::String>
    CreateProcessingJobRequest& WithProcessingJobName(ProcessingJobNameT&& value) { SetProcessingJobName(std::forward<ProcessingJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a processing job. In distributed training, you specify more than one
     * instance.</p>
     */
    inline const ProcessingResources& GetProcessingResources() const { return m_processingResources; }
    inline bool ProcessingResourcesHasBeenSet() const { return m_processingResourcesHasBeenSet; }
    template<typename ProcessingResourcesT = ProcessingResources>
    void SetProcessingResources(ProcessingResourcesT&& value) { m_processingResourcesHasBeenSet = true; m_processingResources = std::forward<ProcessingResourcesT>(value); }
    template<typename ProcessingResourcesT = ProcessingResources>
    CreateProcessingJobRequest& WithProcessingResources(ProcessingResourcesT&& value) { SetProcessingResources(std::forward<ProcessingResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time limit for how long the processing job is allowed to run.</p>
     */
    inline const ProcessingStoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    template<typename StoppingConditionT = ProcessingStoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = ProcessingStoppingCondition>
    CreateProcessingJobRequest& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the processing job to run a specified Docker container image.</p>
     */
    inline const AppSpecification& GetAppSpecification() const { return m_appSpecification; }
    inline bool AppSpecificationHasBeenSet() const { return m_appSpecificationHasBeenSet; }
    template<typename AppSpecificationT = AppSpecification>
    void SetAppSpecification(AppSpecificationT&& value) { m_appSpecificationHasBeenSet = true; m_appSpecification = std::forward<AppSpecificationT>(value); }
    template<typename AppSpecificationT = AppSpecification>
    CreateProcessingJobRequest& WithAppSpecification(AppSpecificationT&& value) { SetAppSpecification(std::forward<AppSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the Docker container. Up to 100 key and
     * values entries in the map are supported.</p>  <p>Do not include any
     * security-sensitive information including account access IDs, secrets, or tokens
     * in any environment fields. As part of the shared responsibility model, you are
     * responsible for any potential exposure, unauthorized access, or compromise of
     * your sensitive data if caused by security-sensitive information included in the
     * request environment variable or plain text fields.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    CreateProcessingJobRequest& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    CreateProcessingJobRequest& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
      m_environmentHasBeenSet = true; m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Networking options for a processing job, such as whether to allow inbound and
     * outbound network calls to and from processing containers, and the VPC subnets
     * and security groups to use for VPC-enabled processing jobs.</p>
     */
    inline const NetworkConfig& GetNetworkConfig() const { return m_networkConfig; }
    inline bool NetworkConfigHasBeenSet() const { return m_networkConfigHasBeenSet; }
    template<typename NetworkConfigT = NetworkConfig>
    void SetNetworkConfig(NetworkConfigT&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::forward<NetworkConfigT>(value); }
    template<typename NetworkConfigT = NetworkConfig>
    CreateProcessingJobRequest& WithNetworkConfig(NetworkConfigT&& value) { SetNetworkConfig(std::forward<NetworkConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateProcessingJobRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>  <p>Do not include any
     * security-sensitive information including account access IDs, secrets, or tokens
     * in any tags. As part of the shared responsibility model, you are responsible for
     * any potential exposure, unauthorized access, or compromise of your sensitive
     * data if caused by security-sensitive information included in the request tag
     * variable or plain text fields.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateProcessingJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateProcessingJobRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ExperimentConfig& GetExperimentConfig() const { return m_experimentConfig; }
    inline bool ExperimentConfigHasBeenSet() const { return m_experimentConfigHasBeenSet; }
    template<typename ExperimentConfigT = ExperimentConfig>
    void SetExperimentConfig(ExperimentConfigT&& value) { m_experimentConfigHasBeenSet = true; m_experimentConfig = std::forward<ExperimentConfigT>(value); }
    template<typename ExperimentConfigT = ExperimentConfig>
    CreateProcessingJobRequest& WithExperimentConfig(ExperimentConfigT&& value) { SetExperimentConfig(std::forward<ExperimentConfigT>(value)); return *this;}
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
