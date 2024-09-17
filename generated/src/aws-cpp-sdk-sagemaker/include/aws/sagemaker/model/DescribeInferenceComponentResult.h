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
    AWS_SAGEMAKER_API DescribeInferenceComponentResult();
    AWS_SAGEMAKER_API DescribeInferenceComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeInferenceComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the inference component.</p>
     */
    inline const Aws::String& GetInferenceComponentName() const{ return m_inferenceComponentName; }
    inline void SetInferenceComponentName(const Aws::String& value) { m_inferenceComponentName = value; }
    inline void SetInferenceComponentName(Aws::String&& value) { m_inferenceComponentName = std::move(value); }
    inline void SetInferenceComponentName(const char* value) { m_inferenceComponentName.assign(value); }
    inline DescribeInferenceComponentResult& WithInferenceComponentName(const Aws::String& value) { SetInferenceComponentName(value); return *this;}
    inline DescribeInferenceComponentResult& WithInferenceComponentName(Aws::String&& value) { SetInferenceComponentName(std::move(value)); return *this;}
    inline DescribeInferenceComponentResult& WithInferenceComponentName(const char* value) { SetInferenceComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the inference component.</p>
     */
    inline const Aws::String& GetInferenceComponentArn() const{ return m_inferenceComponentArn; }
    inline void SetInferenceComponentArn(const Aws::String& value) { m_inferenceComponentArn = value; }
    inline void SetInferenceComponentArn(Aws::String&& value) { m_inferenceComponentArn = std::move(value); }
    inline void SetInferenceComponentArn(const char* value) { m_inferenceComponentArn.assign(value); }
    inline DescribeInferenceComponentResult& WithInferenceComponentArn(const Aws::String& value) { SetInferenceComponentArn(value); return *this;}
    inline DescribeInferenceComponentResult& WithInferenceComponentArn(Aws::String&& value) { SetInferenceComponentArn(std::move(value)); return *this;}
    inline DescribeInferenceComponentResult& WithInferenceComponentArn(const char* value) { SetInferenceComponentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the endpoint that hosts the inference component.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointName.assign(value); }
    inline DescribeInferenceComponentResult& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline DescribeInferenceComponentResult& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline DescribeInferenceComponentResult& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint that hosts the inference
     * component.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArn = value; }
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArn = std::move(value); }
    inline void SetEndpointArn(const char* value) { m_endpointArn.assign(value); }
    inline DescribeInferenceComponentResult& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}
    inline DescribeInferenceComponentResult& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}
    inline DescribeInferenceComponentResult& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the production variant that hosts the inference component.</p>
     */
    inline const Aws::String& GetVariantName() const{ return m_variantName; }
    inline void SetVariantName(const Aws::String& value) { m_variantName = value; }
    inline void SetVariantName(Aws::String&& value) { m_variantName = std::move(value); }
    inline void SetVariantName(const char* value) { m_variantName.assign(value); }
    inline DescribeInferenceComponentResult& WithVariantName(const Aws::String& value) { SetVariantName(value); return *this;}
    inline DescribeInferenceComponentResult& WithVariantName(Aws::String&& value) { SetVariantName(std::move(value)); return *this;}
    inline DescribeInferenceComponentResult& WithVariantName(const char* value) { SetVariantName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the inference component status is <code>Failed</code>, the reason for the
     * failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeInferenceComponentResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeInferenceComponentResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeInferenceComponentResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the resources that are deployed with this inference
     * component.</p>
     */
    inline const InferenceComponentSpecificationSummary& GetSpecification() const{ return m_specification; }
    inline void SetSpecification(const InferenceComponentSpecificationSummary& value) { m_specification = value; }
    inline void SetSpecification(InferenceComponentSpecificationSummary&& value) { m_specification = std::move(value); }
    inline DescribeInferenceComponentResult& WithSpecification(const InferenceComponentSpecificationSummary& value) { SetSpecification(value); return *this;}
    inline DescribeInferenceComponentResult& WithSpecification(InferenceComponentSpecificationSummary&& value) { SetSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the runtime settings for the model that is deployed with the
     * inference component.</p>
     */
    inline const InferenceComponentRuntimeConfigSummary& GetRuntimeConfig() const{ return m_runtimeConfig; }
    inline void SetRuntimeConfig(const InferenceComponentRuntimeConfigSummary& value) { m_runtimeConfig = value; }
    inline void SetRuntimeConfig(InferenceComponentRuntimeConfigSummary&& value) { m_runtimeConfig = std::move(value); }
    inline DescribeInferenceComponentResult& WithRuntimeConfig(const InferenceComponentRuntimeConfigSummary& value) { SetRuntimeConfig(value); return *this;}
    inline DescribeInferenceComponentResult& WithRuntimeConfig(InferenceComponentRuntimeConfigSummary&& value) { SetRuntimeConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the inference component was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeInferenceComponentResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeInferenceComponentResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the inference component was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeInferenceComponentResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeInferenceComponentResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the inference component.</p>
     */
    inline const InferenceComponentStatus& GetInferenceComponentStatus() const{ return m_inferenceComponentStatus; }
    inline void SetInferenceComponentStatus(const InferenceComponentStatus& value) { m_inferenceComponentStatus = value; }
    inline void SetInferenceComponentStatus(InferenceComponentStatus&& value) { m_inferenceComponentStatus = std::move(value); }
    inline DescribeInferenceComponentResult& WithInferenceComponentStatus(const InferenceComponentStatus& value) { SetInferenceComponentStatus(value); return *this;}
    inline DescribeInferenceComponentResult& WithInferenceComponentStatus(InferenceComponentStatus&& value) { SetInferenceComponentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeInferenceComponentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeInferenceComponentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeInferenceComponentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_inferenceComponentName;

    Aws::String m_inferenceComponentArn;

    Aws::String m_endpointName;

    Aws::String m_endpointArn;

    Aws::String m_variantName;

    Aws::String m_failureReason;

    InferenceComponentSpecificationSummary m_specification;

    InferenceComponentRuntimeConfigSummary m_runtimeConfig;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    InferenceComponentStatus m_inferenceComponentStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
