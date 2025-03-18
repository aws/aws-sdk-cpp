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
    AWS_SAGEMAKER_API DescribeEndpointConfigResult() = default;
    AWS_SAGEMAKER_API DescribeEndpointConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeEndpointConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Name of the SageMaker endpoint configuration.</p>
     */
    inline const Aws::String& GetEndpointConfigName() const { return m_endpointConfigName; }
    template<typename EndpointConfigNameT = Aws::String>
    void SetEndpointConfigName(EndpointConfigNameT&& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = std::forward<EndpointConfigNameT>(value); }
    template<typename EndpointConfigNameT = Aws::String>
    DescribeEndpointConfigResult& WithEndpointConfigName(EndpointConfigNameT&& value) { SetEndpointConfigName(std::forward<EndpointConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration.</p>
     */
    inline const Aws::String& GetEndpointConfigArn() const { return m_endpointConfigArn; }
    template<typename EndpointConfigArnT = Aws::String>
    void SetEndpointConfigArn(EndpointConfigArnT&& value) { m_endpointConfigArnHasBeenSet = true; m_endpointConfigArn = std::forward<EndpointConfigArnT>(value); }
    template<typename EndpointConfigArnT = Aws::String>
    DescribeEndpointConfigResult& WithEndpointConfigArn(EndpointConfigArnT&& value) { SetEndpointConfigArn(std::forward<EndpointConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint.</p>
     */
    inline const Aws::Vector<ProductionVariant>& GetProductionVariants() const { return m_productionVariants; }
    template<typename ProductionVariantsT = Aws::Vector<ProductionVariant>>
    void SetProductionVariants(ProductionVariantsT&& value) { m_productionVariantsHasBeenSet = true; m_productionVariants = std::forward<ProductionVariantsT>(value); }
    template<typename ProductionVariantsT = Aws::Vector<ProductionVariant>>
    DescribeEndpointConfigResult& WithProductionVariants(ProductionVariantsT&& value) { SetProductionVariants(std::forward<ProductionVariantsT>(value)); return *this;}
    template<typename ProductionVariantsT = ProductionVariant>
    DescribeEndpointConfigResult& AddProductionVariants(ProductionVariantsT&& value) { m_productionVariantsHasBeenSet = true; m_productionVariants.emplace_back(std::forward<ProductionVariantsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const DataCaptureConfig& GetDataCaptureConfig() const { return m_dataCaptureConfig; }
    template<typename DataCaptureConfigT = DataCaptureConfig>
    void SetDataCaptureConfig(DataCaptureConfigT&& value) { m_dataCaptureConfigHasBeenSet = true; m_dataCaptureConfig = std::forward<DataCaptureConfigT>(value); }
    template<typename DataCaptureConfigT = DataCaptureConfig>
    DescribeEndpointConfigResult& WithDataCaptureConfig(DataCaptureConfigT&& value) { SetDataCaptureConfig(std::forward<DataCaptureConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services KMS key ID Amazon SageMaker uses to encrypt data when
     * storing it on the ML storage volume attached to the instance.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    DescribeEndpointConfigResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the endpoint configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeEndpointConfigResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the description of an endpoint configuration created using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpointConfig.html">
     * <code>CreateEndpointConfig</code> </a> API.</p>
     */
    inline const AsyncInferenceConfig& GetAsyncInferenceConfig() const { return m_asyncInferenceConfig; }
    template<typename AsyncInferenceConfigT = AsyncInferenceConfig>
    void SetAsyncInferenceConfig(AsyncInferenceConfigT&& value) { m_asyncInferenceConfigHasBeenSet = true; m_asyncInferenceConfig = std::forward<AsyncInferenceConfigT>(value); }
    template<typename AsyncInferenceConfigT = AsyncInferenceConfig>
    DescribeEndpointConfigResult& WithAsyncInferenceConfig(AsyncInferenceConfigT&& value) { SetAsyncInferenceConfig(std::forward<AsyncInferenceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration parameters for an explainer.</p>
     */
    inline const ExplainerConfig& GetExplainerConfig() const { return m_explainerConfig; }
    template<typename ExplainerConfigT = ExplainerConfig>
    void SetExplainerConfig(ExplainerConfigT&& value) { m_explainerConfigHasBeenSet = true; m_explainerConfig = std::forward<ExplainerConfigT>(value); }
    template<typename ExplainerConfigT = ExplainerConfig>
    DescribeEndpointConfigResult& WithExplainerConfig(ExplainerConfigT&& value) { SetExplainerConfig(std::forward<ExplainerConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProductionVariant</code> objects, one for each model that
     * you want to host at this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code>.</p>
     */
    inline const Aws::Vector<ProductionVariant>& GetShadowProductionVariants() const { return m_shadowProductionVariants; }
    template<typename ShadowProductionVariantsT = Aws::Vector<ProductionVariant>>
    void SetShadowProductionVariants(ShadowProductionVariantsT&& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants = std::forward<ShadowProductionVariantsT>(value); }
    template<typename ShadowProductionVariantsT = Aws::Vector<ProductionVariant>>
    DescribeEndpointConfigResult& WithShadowProductionVariants(ShadowProductionVariantsT&& value) { SetShadowProductionVariants(std::forward<ShadowProductionVariantsT>(value)); return *this;}
    template<typename ShadowProductionVariantsT = ProductionVariant>
    DescribeEndpointConfigResult& AddShadowProductionVariants(ShadowProductionVariantsT&& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants.emplace_back(std::forward<ShadowProductionVariantsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you assigned to the
     * endpoint configuration.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    DescribeEndpointConfigResult& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    DescribeEndpointConfigResult& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether all model containers deployed to the endpoint are isolated.
     * If they are, no inbound or outbound network calls can be made to or from the
     * model containers.</p>
     */
    inline bool GetEnableNetworkIsolation() const { return m_enableNetworkIsolation; }
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolationHasBeenSet = true; m_enableNetworkIsolation = value; }
    inline DescribeEndpointConfigResult& WithEnableNetworkIsolation(bool value) { SetEnableNetworkIsolation(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEndpointConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointConfigName;
    bool m_endpointConfigNameHasBeenSet = false;

    Aws::String m_endpointConfigArn;
    bool m_endpointConfigArnHasBeenSet = false;

    Aws::Vector<ProductionVariant> m_productionVariants;
    bool m_productionVariantsHasBeenSet = false;

    DataCaptureConfig m_dataCaptureConfig;
    bool m_dataCaptureConfigHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

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

    bool m_enableNetworkIsolation{false};
    bool m_enableNetworkIsolationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
