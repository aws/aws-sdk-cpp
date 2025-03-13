/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ContainerDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/InferenceExecutionConfig.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/DeploymentRecommendation.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The properties of a model as returned by the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Search.html">Search</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Model">AWS API
   * Reference</a></p>
   */
  class Model
  {
  public:
    AWS_SAGEMAKER_API Model() = default;
    AWS_SAGEMAKER_API Model(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Model& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    Model& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ContainerDefinition& GetPrimaryContainer() const { return m_primaryContainer; }
    inline bool PrimaryContainerHasBeenSet() const { return m_primaryContainerHasBeenSet; }
    template<typename PrimaryContainerT = ContainerDefinition>
    void SetPrimaryContainer(PrimaryContainerT&& value) { m_primaryContainerHasBeenSet = true; m_primaryContainer = std::forward<PrimaryContainerT>(value); }
    template<typename PrimaryContainerT = ContainerDefinition>
    Model& WithPrimaryContainer(PrimaryContainerT&& value) { SetPrimaryContainer(std::forward<PrimaryContainerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The containers in the inference pipeline.</p>
     */
    inline const Aws::Vector<ContainerDefinition>& GetContainers() const { return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    template<typename ContainersT = Aws::Vector<ContainerDefinition>>
    void SetContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers = std::forward<ContainersT>(value); }
    template<typename ContainersT = Aws::Vector<ContainerDefinition>>
    Model& WithContainers(ContainersT&& value) { SetContainers(std::forward<ContainersT>(value)); return *this;}
    template<typename ContainersT = ContainerDefinition>
    Model& AddContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers.emplace_back(std::forward<ContainersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const InferenceExecutionConfig& GetInferenceExecutionConfig() const { return m_inferenceExecutionConfig; }
    inline bool InferenceExecutionConfigHasBeenSet() const { return m_inferenceExecutionConfigHasBeenSet; }
    template<typename InferenceExecutionConfigT = InferenceExecutionConfig>
    void SetInferenceExecutionConfig(InferenceExecutionConfigT&& value) { m_inferenceExecutionConfigHasBeenSet = true; m_inferenceExecutionConfig = std::forward<InferenceExecutionConfigT>(value); }
    template<typename InferenceExecutionConfigT = InferenceExecutionConfig>
    Model& WithInferenceExecutionConfig(InferenceExecutionConfigT&& value) { SetInferenceExecutionConfig(std::forward<InferenceExecutionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * model.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    Model& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    Model& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Model& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    Model& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Isolates the model container. No inbound or outbound network calls can be
     * made to or from the model container.</p>
     */
    inline bool GetEnableNetworkIsolation() const { return m_enableNetworkIsolation; }
    inline bool EnableNetworkIsolationHasBeenSet() const { return m_enableNetworkIsolationHasBeenSet; }
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolationHasBeenSet = true; m_enableNetworkIsolation = value; }
    inline Model& WithEnableNetworkIsolation(bool value) { SetEnableNetworkIsolation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs associated with the model. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Model& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Model& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A set of recommended deployment configurations for the model.</p>
     */
    inline const DeploymentRecommendation& GetDeploymentRecommendation() const { return m_deploymentRecommendation; }
    inline bool DeploymentRecommendationHasBeenSet() const { return m_deploymentRecommendationHasBeenSet; }
    template<typename DeploymentRecommendationT = DeploymentRecommendation>
    void SetDeploymentRecommendation(DeploymentRecommendationT&& value) { m_deploymentRecommendationHasBeenSet = true; m_deploymentRecommendation = std::forward<DeploymentRecommendationT>(value); }
    template<typename DeploymentRecommendationT = DeploymentRecommendation>
    Model& WithDeploymentRecommendation(DeploymentRecommendationT&& value) { SetDeploymentRecommendation(std::forward<DeploymentRecommendationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    ContainerDefinition m_primaryContainer;
    bool m_primaryContainerHasBeenSet = false;

    Aws::Vector<ContainerDefinition> m_containers;
    bool m_containersHasBeenSet = false;

    InferenceExecutionConfig m_inferenceExecutionConfig;
    bool m_inferenceExecutionConfigHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    bool m_enableNetworkIsolation{false};
    bool m_enableNetworkIsolationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    DeploymentRecommendation m_deploymentRecommendation;
    bool m_deploymentRecommendationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
