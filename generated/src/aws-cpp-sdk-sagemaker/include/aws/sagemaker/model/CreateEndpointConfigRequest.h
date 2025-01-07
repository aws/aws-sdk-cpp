/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/DataCaptureConfig.h>
#include <aws/sagemaker/model/AsyncInferenceConfig.h>
#include <aws/sagemaker/model/ExplainerConfig.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/sagemaker/model/ProductionVariant.h>
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
  class CreateEndpointConfigRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateEndpointConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEndpointConfig"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the endpoint configuration. You specify this name in a <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpoint.html">CreateEndpoint</a>
     * request. </p>
     */
    inline const Aws::String& GetEndpointConfigName() const{ return m_endpointConfigName; }
    inline bool EndpointConfigNameHasBeenSet() const { return m_endpointConfigNameHasBeenSet; }
    inline void SetEndpointConfigName(const Aws::String& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = value; }
    inline void SetEndpointConfigName(Aws::String&& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = std::move(value); }
    inline void SetEndpointConfigName(const char* value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName.assign(value); }
    inline CreateEndpointConfigRequest& WithEndpointConfigName(const Aws::String& value) { SetEndpointConfigName(value); return *this;}
    inline CreateEndpointConfigRequest& WithEndpointConfigName(Aws::String&& value) { SetEndpointConfigName(std::move(value)); return *this;}
    inline CreateEndpointConfigRequest& WithEndpointConfigName(const char* value) { SetEndpointConfigName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline const Aws::Vector<ProductionVariant>& GetProductionVariants() const{ return m_productionVariants; }
    inline bool ProductionVariantsHasBeenSet() const { return m_productionVariantsHasBeenSet; }
    inline void SetProductionVariants(const Aws::Vector<ProductionVariant>& value) { m_productionVariantsHasBeenSet = true; m_productionVariants = value; }
    inline void SetProductionVariants(Aws::Vector<ProductionVariant>&& value) { m_productionVariantsHasBeenSet = true; m_productionVariants = std::move(value); }
    inline CreateEndpointConfigRequest& WithProductionVariants(const Aws::Vector<ProductionVariant>& value) { SetProductionVariants(value); return *this;}
    inline CreateEndpointConfigRequest& WithProductionVariants(Aws::Vector<ProductionVariant>&& value) { SetProductionVariants(std::move(value)); return *this;}
    inline CreateEndpointConfigRequest& AddProductionVariants(const ProductionVariant& value) { m_productionVariantsHasBeenSet = true; m_productionVariants.push_back(value); return *this; }
    inline CreateEndpointConfigRequest& AddProductionVariants(ProductionVariant&& value) { m_productionVariantsHasBeenSet = true; m_productionVariants.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const DataCaptureConfig& GetDataCaptureConfig() const{ return m_dataCaptureConfig; }
    inline bool DataCaptureConfigHasBeenSet() const { return m_dataCaptureConfigHasBeenSet; }
    inline void SetDataCaptureConfig(const DataCaptureConfig& value) { m_dataCaptureConfigHasBeenSet = true; m_dataCaptureConfig = value; }
    inline void SetDataCaptureConfig(DataCaptureConfig&& value) { m_dataCaptureConfigHasBeenSet = true; m_dataCaptureConfig = std::move(value); }
    inline CreateEndpointConfigRequest& WithDataCaptureConfig(const DataCaptureConfig& value) { SetDataCaptureConfig(value); return *this;}
    inline CreateEndpointConfigRequest& WithDataCaptureConfig(DataCaptureConfig&& value) { SetDataCaptureConfig(std::move(value)); return *this;}
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
    inline CreateEndpointConfigRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateEndpointConfigRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateEndpointConfigRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateEndpointConfigRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that SageMaker uses to encrypt data on the storage volume attached
     * to the ML compute instance that hosts the endpoint.</p> <p>The KmsKeyId can be
     * any of the following formats: </p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateEndpoint</code>, <code>UpdateEndpoint</code>
     * requests. For more information, refer to the Amazon Web Services Key Management
     * Service section<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">
     * Using Key Policies in Amazon Web Services KMS </a> </p>  <p>Certain
     * Nitro-based instances include local storage, dependent on the instance type.
     * Local storage volumes are encrypted using a hardware module on the instance. You
     * can't request a <code>KmsKeyId</code> when using an instance type with local
     * storage. If any of the models that you specify in the
     * <code>ProductionVariants</code> parameter use nitro-based instances with local
     * storage, do not specify a value for the <code>KmsKeyId</code> parameter. If you
     * specify a value for <code>KmsKeyId</code> when using any nitro-based instances
     * with local storage, the call to <code>CreateEndpointConfig</code> fails.</p>
     * <p>For a list of instance types that support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p> 
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline CreateEndpointConfigRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CreateEndpointConfigRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CreateEndpointConfigRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configuration for how an endpoint performs asynchronous inference.
     * This is a required field in order for your Endpoint to be invoked using <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_runtime_InvokeEndpointAsync.html">InvokeEndpointAsync</a>.</p>
     */
    inline const AsyncInferenceConfig& GetAsyncInferenceConfig() const{ return m_asyncInferenceConfig; }
    inline bool AsyncInferenceConfigHasBeenSet() const { return m_asyncInferenceConfigHasBeenSet; }
    inline void SetAsyncInferenceConfig(const AsyncInferenceConfig& value) { m_asyncInferenceConfigHasBeenSet = true; m_asyncInferenceConfig = value; }
    inline void SetAsyncInferenceConfig(AsyncInferenceConfig&& value) { m_asyncInferenceConfigHasBeenSet = true; m_asyncInferenceConfig = std::move(value); }
    inline CreateEndpointConfigRequest& WithAsyncInferenceConfig(const AsyncInferenceConfig& value) { SetAsyncInferenceConfig(value); return *this;}
    inline CreateEndpointConfigRequest& WithAsyncInferenceConfig(AsyncInferenceConfig&& value) { SetAsyncInferenceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A member of <code>CreateEndpointConfig</code> that enables explainers.</p>
     */
    inline const ExplainerConfig& GetExplainerConfig() const{ return m_explainerConfig; }
    inline bool ExplainerConfigHasBeenSet() const { return m_explainerConfigHasBeenSet; }
    inline void SetExplainerConfig(const ExplainerConfig& value) { m_explainerConfigHasBeenSet = true; m_explainerConfig = value; }
    inline void SetExplainerConfig(ExplainerConfig&& value) { m_explainerConfigHasBeenSet = true; m_explainerConfig = std::move(value); }
    inline CreateEndpointConfigRequest& WithExplainerConfig(const ExplainerConfig& value) { SetExplainerConfig(value); return *this;}
    inline CreateEndpointConfigRequest& WithExplainerConfig(ExplainerConfig&& value) { SetExplainerConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code>. If you
     * use this field, you can only specify one variant for
     * <code>ProductionVariants</code> and one variant for
     * <code>ShadowProductionVariants</code>.</p>
     */
    inline const Aws::Vector<ProductionVariant>& GetShadowProductionVariants() const{ return m_shadowProductionVariants; }
    inline bool ShadowProductionVariantsHasBeenSet() const { return m_shadowProductionVariantsHasBeenSet; }
    inline void SetShadowProductionVariants(const Aws::Vector<ProductionVariant>& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants = value; }
    inline void SetShadowProductionVariants(Aws::Vector<ProductionVariant>&& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants = std::move(value); }
    inline CreateEndpointConfigRequest& WithShadowProductionVariants(const Aws::Vector<ProductionVariant>& value) { SetShadowProductionVariants(value); return *this;}
    inline CreateEndpointConfigRequest& WithShadowProductionVariants(Aws::Vector<ProductionVariant>&& value) { SetShadowProductionVariants(std::move(value)); return *this;}
    inline CreateEndpointConfigRequest& AddShadowProductionVariants(const ProductionVariant& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants.push_back(value); return *this; }
    inline CreateEndpointConfigRequest& AddShadowProductionVariants(ProductionVariant&& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker AI can
     * assume to perform actions on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">SageMaker
     * AI Roles</a>. </p>  <p>To be able to pass this role to Amazon SageMaker
     * AI, the caller of this action must have the <code>iam:PassRole</code>
     * permission.</p> 
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }
    inline CreateEndpointConfigRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline CreateEndpointConfigRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline CreateEndpointConfigRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline CreateEndpointConfigRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline CreateEndpointConfigRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets whether all model containers deployed to the endpoint are isolated. If
     * they are, no inbound or outbound network calls can be made to or from the model
     * containers.</p>
     */
    inline bool GetEnableNetworkIsolation() const{ return m_enableNetworkIsolation; }
    inline bool EnableNetworkIsolationHasBeenSet() const { return m_enableNetworkIsolationHasBeenSet; }
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolationHasBeenSet = true; m_enableNetworkIsolation = value; }
    inline CreateEndpointConfigRequest& WithEnableNetworkIsolation(bool value) { SetEnableNetworkIsolation(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointConfigName;
    bool m_endpointConfigNameHasBeenSet = false;

    Aws::Vector<ProductionVariant> m_productionVariants;
    bool m_productionVariantsHasBeenSet = false;

    DataCaptureConfig m_dataCaptureConfig;
    bool m_dataCaptureConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    AsyncInferenceConfig m_asyncInferenceConfig;
    bool m_asyncInferenceConfigHasBeenSet = false;

    ExplainerConfig m_explainerConfig;
    bool m_explainerConfigHasBeenSet = false;

    Aws::Vector<ProductionVariant> m_shadowProductionVariants;
    bool m_shadowProductionVariantsHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    bool m_enableNetworkIsolation;
    bool m_enableNetworkIsolationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
