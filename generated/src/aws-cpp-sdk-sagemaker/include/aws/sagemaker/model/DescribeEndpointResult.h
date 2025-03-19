/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/DataCaptureConfigSummary.h>
#include <aws/sagemaker/model/EndpointStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/DeploymentConfig.h>
#include <aws/sagemaker/model/AsyncInferenceConfig.h>
#include <aws/sagemaker/model/PendingDeploymentSummary.h>
#include <aws/sagemaker/model/ExplainerConfig.h>
#include <aws/sagemaker/model/ProductionVariantSummary.h>
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
  class DescribeEndpointResult
  {
  public:
    AWS_SAGEMAKER_API DescribeEndpointResult() = default;
    AWS_SAGEMAKER_API DescribeEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Name of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    DescribeEndpointResult& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const { return m_endpointArn; }
    template<typename EndpointArnT = Aws::String>
    void SetEndpointArn(EndpointArnT&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::forward<EndpointArnT>(value); }
    template<typename EndpointArnT = Aws::String>
    DescribeEndpointResult& WithEndpointArn(EndpointArnT&& value) { SetEndpointArn(std::forward<EndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the endpoint configuration associated with this endpoint.</p>
     */
    inline const Aws::String& GetEndpointConfigName() const { return m_endpointConfigName; }
    template<typename EndpointConfigNameT = Aws::String>
    void SetEndpointConfigName(EndpointConfigNameT&& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = std::forward<EndpointConfigNameT>(value); }
    template<typename EndpointConfigNameT = Aws::String>
    DescribeEndpointResult& WithEndpointConfigName(EndpointConfigNameT&& value) { SetEndpointConfigName(std::forward<EndpointConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ProductionVariantSummary.html">ProductionVariantSummary</a>
     * objects, one for each model hosted behind this endpoint.</p>
     */
    inline const Aws::Vector<ProductionVariantSummary>& GetProductionVariants() const { return m_productionVariants; }
    template<typename ProductionVariantsT = Aws::Vector<ProductionVariantSummary>>
    void SetProductionVariants(ProductionVariantsT&& value) { m_productionVariantsHasBeenSet = true; m_productionVariants = std::forward<ProductionVariantsT>(value); }
    template<typename ProductionVariantsT = Aws::Vector<ProductionVariantSummary>>
    DescribeEndpointResult& WithProductionVariants(ProductionVariantsT&& value) { SetProductionVariants(std::forward<ProductionVariantsT>(value)); return *this;}
    template<typename ProductionVariantsT = ProductionVariantSummary>
    DescribeEndpointResult& AddProductionVariants(ProductionVariantsT&& value) { m_productionVariantsHasBeenSet = true; m_productionVariants.emplace_back(std::forward<ProductionVariantsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const DataCaptureConfigSummary& GetDataCaptureConfig() const { return m_dataCaptureConfig; }
    template<typename DataCaptureConfigT = DataCaptureConfigSummary>
    void SetDataCaptureConfig(DataCaptureConfigT&& value) { m_dataCaptureConfigHasBeenSet = true; m_dataCaptureConfig = std::forward<DataCaptureConfigT>(value); }
    template<typename DataCaptureConfigT = DataCaptureConfigSummary>
    DescribeEndpointResult& WithDataCaptureConfig(DataCaptureConfigT&& value) { SetDataCaptureConfig(std::forward<DataCaptureConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the endpoint.</p> <ul> <li> <p> <code>OutOfService</code>:
     * Endpoint is not available to take incoming requests.</p> </li> <li> <p>
     * <code>Creating</code>: <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpoint.html">CreateEndpoint</a>
     * is executing.</p> </li> <li> <p> <code>Updating</code>: <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UpdateEndpoint.html">UpdateEndpoint</a>
     * or <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UpdateEndpointWeightsAndCapacities.html">UpdateEndpointWeightsAndCapacities</a>
     * is executing.</p> </li> <li> <p> <code>SystemUpdating</code>: Endpoint is
     * undergoing maintenance and cannot be updated or deleted or re-scaled until it
     * has completed. This maintenance operation does not change any customer-specified
     * values such as VPC config, KMS encryption, model, instance type, or instance
     * count.</p> </li> <li> <p> <code>RollingBack</code>: Endpoint fails to scale up
     * or down or change its variant weight and is in the process of rolling back to
     * its previous configuration. Once the rollback completes, endpoint returns to an
     * <code>InService</code> status. This transitional status only applies to an
     * endpoint that has autoscaling enabled and is undergoing variant weight or
     * capacity changes as part of an <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UpdateEndpointWeightsAndCapacities.html">UpdateEndpointWeightsAndCapacities</a>
     * call or when the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UpdateEndpointWeightsAndCapacities.html">UpdateEndpointWeightsAndCapacities</a>
     * operation is called explicitly.</p> </li> <li> <p> <code>InService</code>:
     * Endpoint is available to process incoming requests.</p> </li> <li> <p>
     * <code>Deleting</code>: <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DeleteEndpoint.html">DeleteEndpoint</a>
     * is executing.</p> </li> <li> <p> <code>Failed</code>: Endpoint could not be
     * created, updated, or re-scaled. Use the <code>FailureReason</code> value
     * returned by <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeEndpoint.html">DescribeEndpoint</a>
     * for information about the failure. <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DeleteEndpoint.html">DeleteEndpoint</a>
     * is the only operation that can be performed on a failed endpoint.</p> </li> <li>
     * <p> <code>UpdateRollbackFailed</code>: Both the rolling deployment and
     * auto-rollback failed. Your endpoint is in service with a mix of the old and new
     * endpoint configurations. For information about how to remedy this issue and
     * restore the endpoint's status to <code>InService</code>, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/deployment-guardrails-rolling.html">Rolling
     * Deployments</a>.</p> </li> </ul>
     */
    inline EndpointStatus GetEndpointStatus() const { return m_endpointStatus; }
    inline void SetEndpointStatus(EndpointStatus value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = value; }
    inline DescribeEndpointResult& WithEndpointStatus(EndpointStatus value) { SetEndpointStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the status of the endpoint is <code>Failed</code>, the reason why it
     * failed. </p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeEndpointResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeEndpointResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the endpoint was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeEndpointResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent deployment configuration for the endpoint.</p>
     */
    inline const DeploymentConfig& GetLastDeploymentConfig() const { return m_lastDeploymentConfig; }
    template<typename LastDeploymentConfigT = DeploymentConfig>
    void SetLastDeploymentConfig(LastDeploymentConfigT&& value) { m_lastDeploymentConfigHasBeenSet = true; m_lastDeploymentConfig = std::forward<LastDeploymentConfigT>(value); }
    template<typename LastDeploymentConfigT = DeploymentConfig>
    DescribeEndpointResult& WithLastDeploymentConfig(LastDeploymentConfigT&& value) { SetLastDeploymentConfig(std::forward<LastDeploymentConfigT>(value)); return *this;}
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
    DescribeEndpointResult& WithAsyncInferenceConfig(AsyncInferenceConfigT&& value) { SetAsyncInferenceConfig(std::forward<AsyncInferenceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the summary of an in-progress deployment. This field is only returned
     * when the endpoint is creating or updating with a new endpoint configuration.</p>
     */
    inline const PendingDeploymentSummary& GetPendingDeploymentSummary() const { return m_pendingDeploymentSummary; }
    template<typename PendingDeploymentSummaryT = PendingDeploymentSummary>
    void SetPendingDeploymentSummary(PendingDeploymentSummaryT&& value) { m_pendingDeploymentSummaryHasBeenSet = true; m_pendingDeploymentSummary = std::forward<PendingDeploymentSummaryT>(value); }
    template<typename PendingDeploymentSummaryT = PendingDeploymentSummary>
    DescribeEndpointResult& WithPendingDeploymentSummary(PendingDeploymentSummaryT&& value) { SetPendingDeploymentSummary(std::forward<PendingDeploymentSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration parameters for an explainer.</p>
     */
    inline const ExplainerConfig& GetExplainerConfig() const { return m_explainerConfig; }
    template<typename ExplainerConfigT = ExplainerConfig>
    void SetExplainerConfig(ExplainerConfigT&& value) { m_explainerConfigHasBeenSet = true; m_explainerConfig = std::forward<ExplainerConfigT>(value); }
    template<typename ExplainerConfigT = ExplainerConfig>
    DescribeEndpointResult& WithExplainerConfig(ExplainerConfigT&& value) { SetExplainerConfig(std::forward<ExplainerConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ProductionVariantSummary.html">ProductionVariantSummary</a>
     * objects, one for each model that you want to host at this endpoint in shadow
     * mode with production traffic replicated from the model specified on
     * <code>ProductionVariants</code>.</p>
     */
    inline const Aws::Vector<ProductionVariantSummary>& GetShadowProductionVariants() const { return m_shadowProductionVariants; }
    template<typename ShadowProductionVariantsT = Aws::Vector<ProductionVariantSummary>>
    void SetShadowProductionVariants(ShadowProductionVariantsT&& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants = std::forward<ShadowProductionVariantsT>(value); }
    template<typename ShadowProductionVariantsT = Aws::Vector<ProductionVariantSummary>>
    DescribeEndpointResult& WithShadowProductionVariants(ShadowProductionVariantsT&& value) { SetShadowProductionVariants(std::forward<ShadowProductionVariantsT>(value)); return *this;}
    template<typename ShadowProductionVariantsT = ProductionVariantSummary>
    DescribeEndpointResult& AddShadowProductionVariants(ShadowProductionVariantsT&& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants.emplace_back(std::forward<ShadowProductionVariantsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::String m_endpointConfigName;
    bool m_endpointConfigNameHasBeenSet = false;

    Aws::Vector<ProductionVariantSummary> m_productionVariants;
    bool m_productionVariantsHasBeenSet = false;

    DataCaptureConfigSummary m_dataCaptureConfig;
    bool m_dataCaptureConfigHasBeenSet = false;

    EndpointStatus m_endpointStatus{EndpointStatus::NOT_SET};
    bool m_endpointStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    DeploymentConfig m_lastDeploymentConfig;
    bool m_lastDeploymentConfigHasBeenSet = false;

    AsyncInferenceConfig m_asyncInferenceConfig;
    bool m_asyncInferenceConfigHasBeenSet = false;

    PendingDeploymentSummary m_pendingDeploymentSummary;
    bool m_pendingDeploymentSummaryHasBeenSet = false;

    ExplainerConfig m_explainerConfig;
    bool m_explainerConfigHasBeenSet = false;

    Aws::Vector<ProductionVariantSummary> m_shadowProductionVariants;
    bool m_shadowProductionVariantsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
