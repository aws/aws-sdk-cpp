﻿/**
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
    AWS_SAGEMAKER_API DescribeEndpointResult();
    AWS_SAGEMAKER_API DescribeEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Name of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointName.assign(value); }
    inline DescribeEndpointResult& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline DescribeEndpointResult& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline DescribeEndpointResult& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArn = value; }
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArn = std::move(value); }
    inline void SetEndpointArn(const char* value) { m_endpointArn.assign(value); }
    inline DescribeEndpointResult& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}
    inline DescribeEndpointResult& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}
    inline DescribeEndpointResult& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the endpoint configuration associated with this endpoint.</p>
     */
    inline const Aws::String& GetEndpointConfigName() const{ return m_endpointConfigName; }
    inline void SetEndpointConfigName(const Aws::String& value) { m_endpointConfigName = value; }
    inline void SetEndpointConfigName(Aws::String&& value) { m_endpointConfigName = std::move(value); }
    inline void SetEndpointConfigName(const char* value) { m_endpointConfigName.assign(value); }
    inline DescribeEndpointResult& WithEndpointConfigName(const Aws::String& value) { SetEndpointConfigName(value); return *this;}
    inline DescribeEndpointResult& WithEndpointConfigName(Aws::String&& value) { SetEndpointConfigName(std::move(value)); return *this;}
    inline DescribeEndpointResult& WithEndpointConfigName(const char* value) { SetEndpointConfigName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ProductionVariantSummary.html">ProductionVariantSummary</a>
     * objects, one for each model hosted behind this endpoint.</p>
     */
    inline const Aws::Vector<ProductionVariantSummary>& GetProductionVariants() const{ return m_productionVariants; }
    inline void SetProductionVariants(const Aws::Vector<ProductionVariantSummary>& value) { m_productionVariants = value; }
    inline void SetProductionVariants(Aws::Vector<ProductionVariantSummary>&& value) { m_productionVariants = std::move(value); }
    inline DescribeEndpointResult& WithProductionVariants(const Aws::Vector<ProductionVariantSummary>& value) { SetProductionVariants(value); return *this;}
    inline DescribeEndpointResult& WithProductionVariants(Aws::Vector<ProductionVariantSummary>&& value) { SetProductionVariants(std::move(value)); return *this;}
    inline DescribeEndpointResult& AddProductionVariants(const ProductionVariantSummary& value) { m_productionVariants.push_back(value); return *this; }
    inline DescribeEndpointResult& AddProductionVariants(ProductionVariantSummary&& value) { m_productionVariants.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const DataCaptureConfigSummary& GetDataCaptureConfig() const{ return m_dataCaptureConfig; }
    inline void SetDataCaptureConfig(const DataCaptureConfigSummary& value) { m_dataCaptureConfig = value; }
    inline void SetDataCaptureConfig(DataCaptureConfigSummary&& value) { m_dataCaptureConfig = std::move(value); }
    inline DescribeEndpointResult& WithDataCaptureConfig(const DataCaptureConfigSummary& value) { SetDataCaptureConfig(value); return *this;}
    inline DescribeEndpointResult& WithDataCaptureConfig(DataCaptureConfigSummary&& value) { SetDataCaptureConfig(std::move(value)); return *this;}
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
    inline const EndpointStatus& GetEndpointStatus() const{ return m_endpointStatus; }
    inline void SetEndpointStatus(const EndpointStatus& value) { m_endpointStatus = value; }
    inline void SetEndpointStatus(EndpointStatus&& value) { m_endpointStatus = std::move(value); }
    inline DescribeEndpointResult& WithEndpointStatus(const EndpointStatus& value) { SetEndpointStatus(value); return *this;}
    inline DescribeEndpointResult& WithEndpointStatus(EndpointStatus&& value) { SetEndpointStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the status of the endpoint is <code>Failed</code>, the reason why it
     * failed. </p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeEndpointResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeEndpointResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeEndpointResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeEndpointResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeEndpointResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the endpoint was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeEndpointResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeEndpointResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent deployment configuration for the endpoint.</p>
     */
    inline const DeploymentConfig& GetLastDeploymentConfig() const{ return m_lastDeploymentConfig; }
    inline void SetLastDeploymentConfig(const DeploymentConfig& value) { m_lastDeploymentConfig = value; }
    inline void SetLastDeploymentConfig(DeploymentConfig&& value) { m_lastDeploymentConfig = std::move(value); }
    inline DescribeEndpointResult& WithLastDeploymentConfig(const DeploymentConfig& value) { SetLastDeploymentConfig(value); return *this;}
    inline DescribeEndpointResult& WithLastDeploymentConfig(DeploymentConfig&& value) { SetLastDeploymentConfig(std::move(value)); return *this;}
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
    inline DescribeEndpointResult& WithAsyncInferenceConfig(const AsyncInferenceConfig& value) { SetAsyncInferenceConfig(value); return *this;}
    inline DescribeEndpointResult& WithAsyncInferenceConfig(AsyncInferenceConfig&& value) { SetAsyncInferenceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the summary of an in-progress deployment. This field is only returned
     * when the endpoint is creating or updating with a new endpoint configuration.</p>
     */
    inline const PendingDeploymentSummary& GetPendingDeploymentSummary() const{ return m_pendingDeploymentSummary; }
    inline void SetPendingDeploymentSummary(const PendingDeploymentSummary& value) { m_pendingDeploymentSummary = value; }
    inline void SetPendingDeploymentSummary(PendingDeploymentSummary&& value) { m_pendingDeploymentSummary = std::move(value); }
    inline DescribeEndpointResult& WithPendingDeploymentSummary(const PendingDeploymentSummary& value) { SetPendingDeploymentSummary(value); return *this;}
    inline DescribeEndpointResult& WithPendingDeploymentSummary(PendingDeploymentSummary&& value) { SetPendingDeploymentSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration parameters for an explainer.</p>
     */
    inline const ExplainerConfig& GetExplainerConfig() const{ return m_explainerConfig; }
    inline void SetExplainerConfig(const ExplainerConfig& value) { m_explainerConfig = value; }
    inline void SetExplainerConfig(ExplainerConfig&& value) { m_explainerConfig = std::move(value); }
    inline DescribeEndpointResult& WithExplainerConfig(const ExplainerConfig& value) { SetExplainerConfig(value); return *this;}
    inline DescribeEndpointResult& WithExplainerConfig(ExplainerConfig&& value) { SetExplainerConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ProductionVariantSummary.html">ProductionVariantSummary</a>
     * objects, one for each model that you want to host at this endpoint in shadow
     * mode with production traffic replicated from the model specified on
     * <code>ProductionVariants</code>.</p>
     */
    inline const Aws::Vector<ProductionVariantSummary>& GetShadowProductionVariants() const{ return m_shadowProductionVariants; }
    inline void SetShadowProductionVariants(const Aws::Vector<ProductionVariantSummary>& value) { m_shadowProductionVariants = value; }
    inline void SetShadowProductionVariants(Aws::Vector<ProductionVariantSummary>&& value) { m_shadowProductionVariants = std::move(value); }
    inline DescribeEndpointResult& WithShadowProductionVariants(const Aws::Vector<ProductionVariantSummary>& value) { SetShadowProductionVariants(value); return *this;}
    inline DescribeEndpointResult& WithShadowProductionVariants(Aws::Vector<ProductionVariantSummary>&& value) { SetShadowProductionVariants(std::move(value)); return *this;}
    inline DescribeEndpointResult& AddShadowProductionVariants(const ProductionVariantSummary& value) { m_shadowProductionVariants.push_back(value); return *this; }
    inline DescribeEndpointResult& AddShadowProductionVariants(ProductionVariantSummary&& value) { m_shadowProductionVariants.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointName;

    Aws::String m_endpointArn;

    Aws::String m_endpointConfigName;

    Aws::Vector<ProductionVariantSummary> m_productionVariants;

    DataCaptureConfigSummary m_dataCaptureConfig;

    EndpointStatus m_endpointStatus;

    Aws::String m_failureReason;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    DeploymentConfig m_lastDeploymentConfig;

    AsyncInferenceConfig m_asyncInferenceConfig;

    PendingDeploymentSummary m_pendingDeploymentSummary;

    ExplainerConfig m_explainerConfig;

    Aws::Vector<ProductionVariantSummary> m_shadowProductionVariants;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
