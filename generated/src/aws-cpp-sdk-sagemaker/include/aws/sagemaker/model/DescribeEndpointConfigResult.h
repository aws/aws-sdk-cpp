/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/DataCaptureConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/AsyncInferenceConfig.h>
#include <aws/sagemaker/model/ExplainerConfig.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/sagemaker/model/ProductionVariant.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeEndpointConfigResult
  {
  public:
    AWS_SAGEMAKER_API DescribeEndpointConfigResult();
    AWS_SAGEMAKER_API DescribeEndpointConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeEndpointConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Name of the SageMaker endpoint configuration.</p>
     */
    inline const Aws::String& GetEndpointConfigName() const{ return m_endpointConfigName; }
    inline void SetEndpointConfigName(const Aws::String& value) { m_endpointConfigName = value; }
    inline void SetEndpointConfigName(Aws::String&& value) { m_endpointConfigName = std::move(value); }
    inline void SetEndpointConfigName(const char* value) { m_endpointConfigName.assign(value); }
    inline DescribeEndpointConfigResult& WithEndpointConfigName(const Aws::String& value) { SetEndpointConfigName(value); return *this;}
    inline DescribeEndpointConfigResult& WithEndpointConfigName(Aws::String&& value) { SetEndpointConfigName(std::move(value)); return *this;}
    inline DescribeEndpointConfigResult& WithEndpointConfigName(const char* value) { SetEndpointConfigName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration.</p>
     */
    inline const Aws::String& GetEndpointConfigArn() const{ return m_endpointConfigArn; }
    inline void SetEndpointConfigArn(const Aws::String& value) { m_endpointConfigArn = value; }
    inline void SetEndpointConfigArn(Aws::String&& value) { m_endpointConfigArn = std::move(value); }
    inline void SetEndpointConfigArn(const char* value) { m_endpointConfigArn.assign(value); }
    inline DescribeEndpointConfigResult& WithEndpointConfigArn(const Aws::String& value) { SetEndpointConfigArn(value); return *this;}
    inline DescribeEndpointConfigResult& WithEndpointConfigArn(Aws::String&& value) { SetEndpointConfigArn(std::move(value)); return *this;}
    inline DescribeEndpointConfigResult& WithEndpointConfigArn(const char* value) { SetEndpointConfigArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline const Aws::Vector<ProductionVariant>& GetProductionVariants() const{ return m_productionVariants; }
    inline void SetProductionVariants(const Aws::Vector<ProductionVariant>& value) { m_productionVariants = value; }
    inline void SetProductionVariants(Aws::Vector<ProductionVariant>&& value) { m_productionVariants = std::move(value); }
    inline DescribeEndpointConfigResult& WithProductionVariants(const Aws::Vector<ProductionVariant>& value) { SetProductionVariants(value); return *this;}
    inline DescribeEndpointConfigResult& WithProductionVariants(Aws::Vector<ProductionVariant>&& value) { SetProductionVariants(std::move(value)); return *this;}
    inline DescribeEndpointConfigResult& AddProductionVariants(const ProductionVariant& value) { m_productionVariants.push_back(value); return *this; }
    inline DescribeEndpointConfigResult& AddProductionVariants(ProductionVariant&& value) { m_productionVariants.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const DataCaptureConfig& GetDataCaptureConfig() const{ return m_dataCaptureConfig; }
    inline void SetDataCaptureConfig(const DataCaptureConfig& value) { m_dataCaptureConfig = value; }
    inline void SetDataCaptureConfig(DataCaptureConfig&& value) { m_dataCaptureConfig = std::move(value); }
    inline DescribeEndpointConfigResult& WithDataCaptureConfig(const DataCaptureConfig& value) { SetDataCaptureConfig(value); return *this;}
    inline DescribeEndpointConfigResult& WithDataCaptureConfig(DataCaptureConfig&& value) { SetDataCaptureConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services KMS key ID Amazon SageMaker uses to encrypt data when
     * storing it on the ML storage volume attached to the instance.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline DescribeEndpointConfigResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline DescribeEndpointConfigResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline DescribeEndpointConfigResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the endpoint configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeEndpointConfigResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeEndpointConfigResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the description of an endpoint configuration created using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpointConfig.html">
     * <code>CreateEndpointConfig</code> </a> API.</p>
     */
    inline const AsyncInferenceConfig& GetAsyncInferenceConfig() const{ return m_asyncInferenceConfig; }
    inline void SetAsyncInferenceConfig(const AsyncInferenceConfig& value) { m_asyncInferenceConfig = value; }
    inline void SetAsyncInferenceConfig(AsyncInferenceConfig&& value) { m_asyncInferenceConfig = std::move(value); }
    inline DescribeEndpointConfigResult& WithAsyncInferenceConfig(const AsyncInferenceConfig& value) { SetAsyncInferenceConfig(value); return *this;}
    inline DescribeEndpointConfigResult& WithAsyncInferenceConfig(AsyncInferenceConfig&& value) { SetAsyncInferenceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration parameters for an explainer.</p>
     */
    inline const ExplainerConfig& GetExplainerConfig() const{ return m_explainerConfig; }
    inline void SetExplainerConfig(const ExplainerConfig& value) { m_explainerConfig = value; }
    inline void SetExplainerConfig(ExplainerConfig&& value) { m_explainerConfig = std::move(value); }
    inline DescribeEndpointConfigResult& WithExplainerConfig(const ExplainerConfig& value) { SetExplainerConfig(value); return *this;}
    inline DescribeEndpointConfigResult& WithExplainerConfig(ExplainerConfig&& value) { SetExplainerConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code>.</p>
     */
    inline const Aws::Vector<ProductionVariant>& GetShadowProductionVariants() const{ return m_shadowProductionVariants; }
    inline void SetShadowProductionVariants(const Aws::Vector<ProductionVariant>& value) { m_shadowProductionVariants = value; }
    inline void SetShadowProductionVariants(Aws::Vector<ProductionVariant>&& value) { m_shadowProductionVariants = std::move(value); }
    inline DescribeEndpointConfigResult& WithShadowProductionVariants(const Aws::Vector<ProductionVariant>& value) { SetShadowProductionVariants(value); return *this;}
    inline DescribeEndpointConfigResult& WithShadowProductionVariants(Aws::Vector<ProductionVariant>&& value) { SetShadowProductionVariants(std::move(value)); return *this;}
    inline DescribeEndpointConfigResult& AddShadowProductionVariants(const ProductionVariant& value) { m_shadowProductionVariants.push_back(value); return *this; }
    inline DescribeEndpointConfigResult& AddShadowProductionVariants(ProductionVariant&& value) { m_shadowProductionVariants.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you assigned to the
     * endpoint configuration.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArn.assign(value); }
    inline DescribeEndpointConfigResult& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline DescribeEndpointConfigResult& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline DescribeEndpointConfigResult& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfig = std::move(value); }
    inline DescribeEndpointConfigResult& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline DescribeEndpointConfigResult& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether all model containers deployed to the endpoint are isolated.
     * If they are, no inbound or outbound network calls can be made to or from the
     * model containers.</p>
     */
    inline bool GetEnableNetworkIsolation() const{ return m_enableNetworkIsolation; }
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolation = value; }
    inline DescribeEndpointConfigResult& WithEnableNetworkIsolation(bool value) { SetEnableNetworkIsolation(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeEndpointConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeEndpointConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeEndpointConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointConfigName;

    Aws::String m_endpointConfigArn;

    Aws::Vector<ProductionVariant> m_productionVariants;

    DataCaptureConfig m_dataCaptureConfig;

    Aws::String m_kmsKeyId;

    Aws::Utils::DateTime m_creationTime;

    AsyncInferenceConfig m_asyncInferenceConfig;

    ExplainerConfig m_explainerConfig;

    Aws::Vector<ProductionVariant> m_shadowProductionVariants;

    Aws::String m_executionRoleArn;

    VpcConfig m_vpcConfig;

    bool m_enableNetworkIsolation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
