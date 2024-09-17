/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/TrainingSpecification.h>
#include <aws/sagemaker/model/InferenceSpecification.h>
#include <aws/sagemaker/model/AlgorithmValidationSpecification.h>
#include <aws/sagemaker/model/AlgorithmStatus.h>
#include <aws/sagemaker/model/AlgorithmStatusDetails.h>
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
  class DescribeAlgorithmResult
  {
  public:
    AWS_SAGEMAKER_API DescribeAlgorithmResult();
    AWS_SAGEMAKER_API DescribeAlgorithmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeAlgorithmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the algorithm being described.</p>
     */
    inline const Aws::String& GetAlgorithmName() const{ return m_algorithmName; }
    inline void SetAlgorithmName(const Aws::String& value) { m_algorithmName = value; }
    inline void SetAlgorithmName(Aws::String&& value) { m_algorithmName = std::move(value); }
    inline void SetAlgorithmName(const char* value) { m_algorithmName.assign(value); }
    inline DescribeAlgorithmResult& WithAlgorithmName(const Aws::String& value) { SetAlgorithmName(value); return *this;}
    inline DescribeAlgorithmResult& WithAlgorithmName(Aws::String&& value) { SetAlgorithmName(std::move(value)); return *this;}
    inline DescribeAlgorithmResult& WithAlgorithmName(const char* value) { SetAlgorithmName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const{ return m_algorithmArn; }
    inline void SetAlgorithmArn(const Aws::String& value) { m_algorithmArn = value; }
    inline void SetAlgorithmArn(Aws::String&& value) { m_algorithmArn = std::move(value); }
    inline void SetAlgorithmArn(const char* value) { m_algorithmArn.assign(value); }
    inline DescribeAlgorithmResult& WithAlgorithmArn(const Aws::String& value) { SetAlgorithmArn(value); return *this;}
    inline DescribeAlgorithmResult& WithAlgorithmArn(Aws::String&& value) { SetAlgorithmArn(std::move(value)); return *this;}
    inline DescribeAlgorithmResult& WithAlgorithmArn(const char* value) { SetAlgorithmArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief summary about the algorithm.</p>
     */
    inline const Aws::String& GetAlgorithmDescription() const{ return m_algorithmDescription; }
    inline void SetAlgorithmDescription(const Aws::String& value) { m_algorithmDescription = value; }
    inline void SetAlgorithmDescription(Aws::String&& value) { m_algorithmDescription = std::move(value); }
    inline void SetAlgorithmDescription(const char* value) { m_algorithmDescription.assign(value); }
    inline DescribeAlgorithmResult& WithAlgorithmDescription(const Aws::String& value) { SetAlgorithmDescription(value); return *this;}
    inline DescribeAlgorithmResult& WithAlgorithmDescription(Aws::String&& value) { SetAlgorithmDescription(std::move(value)); return *this;}
    inline DescribeAlgorithmResult& WithAlgorithmDescription(const char* value) { SetAlgorithmDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp specifying when the algorithm was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeAlgorithmResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeAlgorithmResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about training jobs run by this algorithm.</p>
     */
    inline const TrainingSpecification& GetTrainingSpecification() const{ return m_trainingSpecification; }
    inline void SetTrainingSpecification(const TrainingSpecification& value) { m_trainingSpecification = value; }
    inline void SetTrainingSpecification(TrainingSpecification&& value) { m_trainingSpecification = std::move(value); }
    inline DescribeAlgorithmResult& WithTrainingSpecification(const TrainingSpecification& value) { SetTrainingSpecification(value); return *this;}
    inline DescribeAlgorithmResult& WithTrainingSpecification(TrainingSpecification&& value) { SetTrainingSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about inference jobs that the algorithm runs.</p>
     */
    inline const InferenceSpecification& GetInferenceSpecification() const{ return m_inferenceSpecification; }
    inline void SetInferenceSpecification(const InferenceSpecification& value) { m_inferenceSpecification = value; }
    inline void SetInferenceSpecification(InferenceSpecification&& value) { m_inferenceSpecification = std::move(value); }
    inline DescribeAlgorithmResult& WithInferenceSpecification(const InferenceSpecification& value) { SetInferenceSpecification(value); return *this;}
    inline DescribeAlgorithmResult& WithInferenceSpecification(InferenceSpecification&& value) { SetInferenceSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about configurations for one or more training jobs that SageMaker
     * runs to test the algorithm.</p>
     */
    inline const AlgorithmValidationSpecification& GetValidationSpecification() const{ return m_validationSpecification; }
    inline void SetValidationSpecification(const AlgorithmValidationSpecification& value) { m_validationSpecification = value; }
    inline void SetValidationSpecification(AlgorithmValidationSpecification&& value) { m_validationSpecification = std::move(value); }
    inline DescribeAlgorithmResult& WithValidationSpecification(const AlgorithmValidationSpecification& value) { SetValidationSpecification(value); return *this;}
    inline DescribeAlgorithmResult& WithValidationSpecification(AlgorithmValidationSpecification&& value) { SetValidationSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the algorithm.</p>
     */
    inline const AlgorithmStatus& GetAlgorithmStatus() const{ return m_algorithmStatus; }
    inline void SetAlgorithmStatus(const AlgorithmStatus& value) { m_algorithmStatus = value; }
    inline void SetAlgorithmStatus(AlgorithmStatus&& value) { m_algorithmStatus = std::move(value); }
    inline DescribeAlgorithmResult& WithAlgorithmStatus(const AlgorithmStatus& value) { SetAlgorithmStatus(value); return *this;}
    inline DescribeAlgorithmResult& WithAlgorithmStatus(AlgorithmStatus&& value) { SetAlgorithmStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the current status of the algorithm.</p>
     */
    inline const AlgorithmStatusDetails& GetAlgorithmStatusDetails() const{ return m_algorithmStatusDetails; }
    inline void SetAlgorithmStatusDetails(const AlgorithmStatusDetails& value) { m_algorithmStatusDetails = value; }
    inline void SetAlgorithmStatusDetails(AlgorithmStatusDetails&& value) { m_algorithmStatusDetails = std::move(value); }
    inline DescribeAlgorithmResult& WithAlgorithmStatusDetails(const AlgorithmStatusDetails& value) { SetAlgorithmStatusDetails(value); return *this;}
    inline DescribeAlgorithmResult& WithAlgorithmStatusDetails(AlgorithmStatusDetails&& value) { SetAlgorithmStatusDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier of the algorithm.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }
    inline void SetProductId(const Aws::String& value) { m_productId = value; }
    inline void SetProductId(Aws::String&& value) { m_productId = std::move(value); }
    inline void SetProductId(const char* value) { m_productId.assign(value); }
    inline DescribeAlgorithmResult& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}
    inline DescribeAlgorithmResult& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}
    inline DescribeAlgorithmResult& WithProductId(const char* value) { SetProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the algorithm is certified to be listed in Amazon Web Services
     * Marketplace.</p>
     */
    inline bool GetCertifyForMarketplace() const{ return m_certifyForMarketplace; }
    inline void SetCertifyForMarketplace(bool value) { m_certifyForMarketplace = value; }
    inline DescribeAlgorithmResult& WithCertifyForMarketplace(bool value) { SetCertifyForMarketplace(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAlgorithmResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAlgorithmResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAlgorithmResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_algorithmName;

    Aws::String m_algorithmArn;

    Aws::String m_algorithmDescription;

    Aws::Utils::DateTime m_creationTime;

    TrainingSpecification m_trainingSpecification;

    InferenceSpecification m_inferenceSpecification;

    AlgorithmValidationSpecification m_validationSpecification;

    AlgorithmStatus m_algorithmStatus;

    AlgorithmStatusDetails m_algorithmStatusDetails;

    Aws::String m_productId;

    bool m_certifyForMarketplace;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
