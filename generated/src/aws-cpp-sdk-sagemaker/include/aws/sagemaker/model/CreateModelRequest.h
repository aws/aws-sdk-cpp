/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ContainerDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/InferenceExecutionConfig.h>
#include <aws/sagemaker/model/VpcConfig.h>
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
  class CreateModelRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModel"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the new model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }
    inline CreateModelRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline CreateModelRequest& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline CreateModelRequest& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the primary docker image containing inference code,
     * associated artifacts, and custom environment map that the inference code uses
     * when the model is deployed for predictions. </p>
     */
    inline const ContainerDefinition& GetPrimaryContainer() const{ return m_primaryContainer; }
    inline bool PrimaryContainerHasBeenSet() const { return m_primaryContainerHasBeenSet; }
    inline void SetPrimaryContainer(const ContainerDefinition& value) { m_primaryContainerHasBeenSet = true; m_primaryContainer = value; }
    inline void SetPrimaryContainer(ContainerDefinition&& value) { m_primaryContainerHasBeenSet = true; m_primaryContainer = std::move(value); }
    inline CreateModelRequest& WithPrimaryContainer(const ContainerDefinition& value) { SetPrimaryContainer(value); return *this;}
    inline CreateModelRequest& WithPrimaryContainer(ContainerDefinition&& value) { SetPrimaryContainer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the containers in the inference pipeline.</p>
     */
    inline const Aws::Vector<ContainerDefinition>& GetContainers() const{ return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    inline void SetContainers(const Aws::Vector<ContainerDefinition>& value) { m_containersHasBeenSet = true; m_containers = value; }
    inline void SetContainers(Aws::Vector<ContainerDefinition>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }
    inline CreateModelRequest& WithContainers(const Aws::Vector<ContainerDefinition>& value) { SetContainers(value); return *this;}
    inline CreateModelRequest& WithContainers(Aws::Vector<ContainerDefinition>&& value) { SetContainers(std::move(value)); return *this;}
    inline CreateModelRequest& AddContainers(const ContainerDefinition& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }
    inline CreateModelRequest& AddContainers(ContainerDefinition&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies details of how containers in a multi-container endpoint are
     * called.</p>
     */
    inline const InferenceExecutionConfig& GetInferenceExecutionConfig() const{ return m_inferenceExecutionConfig; }
    inline bool InferenceExecutionConfigHasBeenSet() const { return m_inferenceExecutionConfigHasBeenSet; }
    inline void SetInferenceExecutionConfig(const InferenceExecutionConfig& value) { m_inferenceExecutionConfigHasBeenSet = true; m_inferenceExecutionConfig = value; }
    inline void SetInferenceExecutionConfig(InferenceExecutionConfig&& value) { m_inferenceExecutionConfigHasBeenSet = true; m_inferenceExecutionConfig = std::move(value); }
    inline CreateModelRequest& WithInferenceExecutionConfig(const InferenceExecutionConfig& value) { SetInferenceExecutionConfig(value); return *this;}
    inline CreateModelRequest& WithInferenceExecutionConfig(InferenceExecutionConfig&& value) { SetInferenceExecutionConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that SageMaker can assume to
     * access model artifacts and docker image for deployment on ML compute instances
     * or for batch transform jobs. Deploying on ML compute instances is part of model
     * hosting. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">SageMaker
     * Roles</a>. </p>  <p>To be able to pass this role to SageMaker, the caller
     * of this API must have the <code>iam:PassRole</code> permission.</p> 
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }
    inline CreateModelRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline CreateModelRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline CreateModelRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateModelRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateModelRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateModelRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateModelRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_VpcConfig.html">VpcConfig</a>
     * object that specifies the VPC that you want your model to connect to. Control
     * access to and from your model container by configuring the VPC.
     * <code>VpcConfig</code> is used in hosting services and in batch transform. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/host-vpc.html">Protect
     * Endpoints by Using an Amazon Virtual Private Cloud</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-vpc.html">Protect
     * Data in Batch Transform Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline CreateModelRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline CreateModelRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Isolates the model container. No inbound or outbound network calls can be
     * made to or from the model container.</p>
     */
    inline bool GetEnableNetworkIsolation() const{ return m_enableNetworkIsolation; }
    inline bool EnableNetworkIsolationHasBeenSet() const { return m_enableNetworkIsolationHasBeenSet; }
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolationHasBeenSet = true; m_enableNetworkIsolation = value; }
    inline CreateModelRequest& WithEnableNetworkIsolation(bool value) { SetEnableNetworkIsolation(value); return *this;}
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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    bool m_enableNetworkIsolation;
    bool m_enableNetworkIsolationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
