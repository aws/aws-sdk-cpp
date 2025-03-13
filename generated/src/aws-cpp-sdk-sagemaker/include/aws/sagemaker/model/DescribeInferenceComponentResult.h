/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceComponentSpecificationSummary.h>
#include <aws/sagemaker/model/InferenceComponentRuntimeConfigSummary.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/InferenceComponentStatus.h>
#include <aws/sagemaker/model/InferenceComponentDeploymentConfig.h>
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
  class DescribeInferenceComponentResult
  {
  public:
    AWS_SAGEMAKER_API DescribeInferenceComponentResult() = default;
    AWS_SAGEMAKER_API DescribeInferenceComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeInferenceComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the inference component.</p>
     */
    inline const Aws::String& GetInferenceComponentName() const { return m_inferenceComponentName; }
    template<typename InferenceComponentNameT = Aws::String>
    void SetInferenceComponentName(InferenceComponentNameT&& value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName = std::forward<InferenceComponentNameT>(value); }
    template<typename InferenceComponentNameT = Aws::String>
    DescribeInferenceComponentResult& WithInferenceComponentName(InferenceComponentNameT&& value) { SetInferenceComponentName(std::forward<InferenceComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the inference component.</p>
     */
    inline const Aws::String& GetInferenceComponentArn() const { return m_inferenceComponentArn; }
    template<typename InferenceComponentArnT = Aws::String>
    void SetInferenceComponentArn(InferenceComponentArnT&& value) { m_inferenceComponentArnHasBeenSet = true; m_inferenceComponentArn = std::forward<InferenceComponentArnT>(value); }
    template<typename InferenceComponentArnT = Aws::String>
    DescribeInferenceComponentResult& WithInferenceComponentArn(InferenceComponentArnT&& value) { SetInferenceComponentArn(std::forward<InferenceComponentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the endpoint that hosts the inference component.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    DescribeInferenceComponentResult& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint that hosts the inference
     * component.</p>
     */
    inline const Aws::String& GetEndpointArn() const { return m_endpointArn; }
    template<typename EndpointArnT = Aws::String>
    void SetEndpointArn(EndpointArnT&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::forward<EndpointArnT>(value); }
    template<typename EndpointArnT = Aws::String>
    DescribeInferenceComponentResult& WithEndpointArn(EndpointArnT&& value) { SetEndpointArn(std::forward<EndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the production variant that hosts the inference component.</p>
     */
    inline const Aws::String& GetVariantName() const { return m_variantName; }
    template<typename VariantNameT = Aws::String>
    void SetVariantName(VariantNameT&& value) { m_variantNameHasBeenSet = true; m_variantName = std::forward<VariantNameT>(value); }
    template<typename VariantNameT = Aws::String>
    DescribeInferenceComponentResult& WithVariantName(VariantNameT&& value) { SetVariantName(std::forward<VariantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the inference component status is <code>Failed</code>, the reason for the
     * failure.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeInferenceComponentResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the resources that are deployed with this inference
     * component.</p>
     */
    inline const InferenceComponentSpecificationSummary& GetSpecification() const { return m_specification; }
    template<typename SpecificationT = InferenceComponentSpecificationSummary>
    void SetSpecification(SpecificationT&& value) { m_specificationHasBeenSet = true; m_specification = std::forward<SpecificationT>(value); }
    template<typename SpecificationT = InferenceComponentSpecificationSummary>
    DescribeInferenceComponentResult& WithSpecification(SpecificationT&& value) { SetSpecification(std::forward<SpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the runtime settings for the model that is deployed with the
     * inference component.</p>
     */
    inline const InferenceComponentRuntimeConfigSummary& GetRuntimeConfig() const { return m_runtimeConfig; }
    template<typename RuntimeConfigT = InferenceComponentRuntimeConfigSummary>
    void SetRuntimeConfig(RuntimeConfigT&& value) { m_runtimeConfigHasBeenSet = true; m_runtimeConfig = std::forward<RuntimeConfigT>(value); }
    template<typename RuntimeConfigT = InferenceComponentRuntimeConfigSummary>
    DescribeInferenceComponentResult& WithRuntimeConfig(RuntimeConfigT&& value) { SetRuntimeConfig(std::forward<RuntimeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the inference component was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeInferenceComponentResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the inference component was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeInferenceComponentResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the inference component.</p>
     */
    inline InferenceComponentStatus GetInferenceComponentStatus() const { return m_inferenceComponentStatus; }
    inline void SetInferenceComponentStatus(InferenceComponentStatus value) { m_inferenceComponentStatusHasBeenSet = true; m_inferenceComponentStatus = value; }
    inline DescribeInferenceComponentResult& WithInferenceComponentStatus(InferenceComponentStatus value) { SetInferenceComponentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment and rollback settings that you assigned to the inference
     * component.</p>
     */
    inline const InferenceComponentDeploymentConfig& GetLastDeploymentConfig() const { return m_lastDeploymentConfig; }
    template<typename LastDeploymentConfigT = InferenceComponentDeploymentConfig>
    void SetLastDeploymentConfig(LastDeploymentConfigT&& value) { m_lastDeploymentConfigHasBeenSet = true; m_lastDeploymentConfig = std::forward<LastDeploymentConfigT>(value); }
    template<typename LastDeploymentConfigT = InferenceComponentDeploymentConfig>
    DescribeInferenceComponentResult& WithLastDeploymentConfig(LastDeploymentConfigT&& value) { SetLastDeploymentConfig(std::forward<LastDeploymentConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeInferenceComponentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inferenceComponentName;
    bool m_inferenceComponentNameHasBeenSet = false;

    Aws::String m_inferenceComponentArn;
    bool m_inferenceComponentArnHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::String m_variantName;
    bool m_variantNameHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    InferenceComponentSpecificationSummary m_specification;
    bool m_specificationHasBeenSet = false;

    InferenceComponentRuntimeConfigSummary m_runtimeConfig;
    bool m_runtimeConfigHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    InferenceComponentStatus m_inferenceComponentStatus{InferenceComponentStatus::NOT_SET};
    bool m_inferenceComponentStatusHasBeenSet = false;

    InferenceComponentDeploymentConfig m_lastDeploymentConfig;
    bool m_lastDeploymentConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
