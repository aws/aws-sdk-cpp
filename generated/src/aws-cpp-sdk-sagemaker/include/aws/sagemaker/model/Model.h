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
   * <p>The properties of a model as returned by the <a>Search</a> API.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Model">AWS API
   * Reference</a></p>
   */
  class Model
  {
  public:
    AWS_SAGEMAKER_API Model();
    AWS_SAGEMAKER_API Model(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Model& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the model.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the model.</p>
     */
    inline Model& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline Model& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline Model& WithModelName(const char* value) { SetModelName(value); return *this;}


    
    inline const ContainerDefinition& GetPrimaryContainer() const{ return m_primaryContainer; }

    
    inline bool PrimaryContainerHasBeenSet() const { return m_primaryContainerHasBeenSet; }

    
    inline void SetPrimaryContainer(const ContainerDefinition& value) { m_primaryContainerHasBeenSet = true; m_primaryContainer = value; }

    
    inline void SetPrimaryContainer(ContainerDefinition&& value) { m_primaryContainerHasBeenSet = true; m_primaryContainer = std::move(value); }

    
    inline Model& WithPrimaryContainer(const ContainerDefinition& value) { SetPrimaryContainer(value); return *this;}

    
    inline Model& WithPrimaryContainer(ContainerDefinition&& value) { SetPrimaryContainer(std::move(value)); return *this;}


    /**
     * <p>The containers in the inference pipeline.</p>
     */
    inline const Aws::Vector<ContainerDefinition>& GetContainers() const{ return m_containers; }

    /**
     * <p>The containers in the inference pipeline.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>The containers in the inference pipeline.</p>
     */
    inline void SetContainers(const Aws::Vector<ContainerDefinition>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>The containers in the inference pipeline.</p>
     */
    inline void SetContainers(Aws::Vector<ContainerDefinition>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>The containers in the inference pipeline.</p>
     */
    inline Model& WithContainers(const Aws::Vector<ContainerDefinition>& value) { SetContainers(value); return *this;}

    /**
     * <p>The containers in the inference pipeline.</p>
     */
    inline Model& WithContainers(Aws::Vector<ContainerDefinition>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>The containers in the inference pipeline.</p>
     */
    inline Model& AddContainers(const ContainerDefinition& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }

    /**
     * <p>The containers in the inference pipeline.</p>
     */
    inline Model& AddContainers(ContainerDefinition&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }


    
    inline const InferenceExecutionConfig& GetInferenceExecutionConfig() const{ return m_inferenceExecutionConfig; }

    
    inline bool InferenceExecutionConfigHasBeenSet() const { return m_inferenceExecutionConfigHasBeenSet; }

    
    inline void SetInferenceExecutionConfig(const InferenceExecutionConfig& value) { m_inferenceExecutionConfigHasBeenSet = true; m_inferenceExecutionConfig = value; }

    
    inline void SetInferenceExecutionConfig(InferenceExecutionConfig&& value) { m_inferenceExecutionConfigHasBeenSet = true; m_inferenceExecutionConfig = std::move(value); }

    
    inline Model& WithInferenceExecutionConfig(const InferenceExecutionConfig& value) { SetInferenceExecutionConfig(value); return *this;}

    
    inline Model& WithInferenceExecutionConfig(InferenceExecutionConfig&& value) { SetInferenceExecutionConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * model.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * model.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * model.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * model.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * model.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * model.</p>
     */
    inline Model& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * model.</p>
     */
    inline Model& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * model.</p>
     */
    inline Model& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    
    inline Model& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    
    inline Model& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when the model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that indicates when the model was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the model was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that indicates when the model was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the model was created.</p>
     */
    inline Model& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the model was created.</p>
     */
    inline Model& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline Model& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline Model& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline Model& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>Isolates the model container. No inbound or outbound network calls can be
     * made to or from the model container.</p>
     */
    inline bool GetEnableNetworkIsolation() const{ return m_enableNetworkIsolation; }

    /**
     * <p>Isolates the model container. No inbound or outbound network calls can be
     * made to or from the model container.</p>
     */
    inline bool EnableNetworkIsolationHasBeenSet() const { return m_enableNetworkIsolationHasBeenSet; }

    /**
     * <p>Isolates the model container. No inbound or outbound network calls can be
     * made to or from the model container.</p>
     */
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolationHasBeenSet = true; m_enableNetworkIsolation = value; }

    /**
     * <p>Isolates the model container. No inbound or outbound network calls can be
     * made to or from the model container.</p>
     */
    inline Model& WithEnableNetworkIsolation(bool value) { SetEnableNetworkIsolation(value); return *this;}


    /**
     * <p>A list of key-value pairs associated with the model. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs associated with the model. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs associated with the model. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs associated with the model. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs associated with the model. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline Model& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs associated with the model. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline Model& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs associated with the model. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline Model& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs associated with the model. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline Model& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    bool m_enableNetworkIsolation;
    bool m_enableNetworkIsolationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
