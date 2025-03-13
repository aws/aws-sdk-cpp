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
    AWS_SAGEMAKER_API DescribeAlgorithmResult() = default;
    AWS_SAGEMAKER_API DescribeAlgorithmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeAlgorithmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the algorithm being described.</p>
     */
    inline const Aws::String& GetAlgorithmName() const { return m_algorithmName; }
    template<typename AlgorithmNameT = Aws::String>
    void SetAlgorithmName(AlgorithmNameT&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::forward<AlgorithmNameT>(value); }
    template<typename AlgorithmNameT = Aws::String>
    DescribeAlgorithmResult& WithAlgorithmName(AlgorithmNameT&& value) { SetAlgorithmName(std::forward<AlgorithmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const { return m_algorithmArn; }
    template<typename AlgorithmArnT = Aws::String>
    void SetAlgorithmArn(AlgorithmArnT&& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = std::forward<AlgorithmArnT>(value); }
    template<typename AlgorithmArnT = Aws::String>
    DescribeAlgorithmResult& WithAlgorithmArn(AlgorithmArnT&& value) { SetAlgorithmArn(std::forward<AlgorithmArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief summary about the algorithm.</p>
     */
    inline const Aws::String& GetAlgorithmDescription() const { return m_algorithmDescription; }
    template<typename AlgorithmDescriptionT = Aws::String>
    void SetAlgorithmDescription(AlgorithmDescriptionT&& value) { m_algorithmDescriptionHasBeenSet = true; m_algorithmDescription = std::forward<AlgorithmDescriptionT>(value); }
    template<typename AlgorithmDescriptionT = Aws::String>
    DescribeAlgorithmResult& WithAlgorithmDescription(AlgorithmDescriptionT&& value) { SetAlgorithmDescription(std::forward<AlgorithmDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp specifying when the algorithm was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeAlgorithmResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about training jobs run by this algorithm.</p>
     */
    inline const TrainingSpecification& GetTrainingSpecification() const { return m_trainingSpecification; }
    template<typename TrainingSpecificationT = TrainingSpecification>
    void SetTrainingSpecification(TrainingSpecificationT&& value) { m_trainingSpecificationHasBeenSet = true; m_trainingSpecification = std::forward<TrainingSpecificationT>(value); }
    template<typename TrainingSpecificationT = TrainingSpecification>
    DescribeAlgorithmResult& WithTrainingSpecification(TrainingSpecificationT&& value) { SetTrainingSpecification(std::forward<TrainingSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about inference jobs that the algorithm runs.</p>
     */
    inline const InferenceSpecification& GetInferenceSpecification() const { return m_inferenceSpecification; }
    template<typename InferenceSpecificationT = InferenceSpecification>
    void SetInferenceSpecification(InferenceSpecificationT&& value) { m_inferenceSpecificationHasBeenSet = true; m_inferenceSpecification = std::forward<InferenceSpecificationT>(value); }
    template<typename InferenceSpecificationT = InferenceSpecification>
    DescribeAlgorithmResult& WithInferenceSpecification(InferenceSpecificationT&& value) { SetInferenceSpecification(std::forward<InferenceSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about configurations for one or more training jobs that SageMaker
     * runs to test the algorithm.</p>
     */
    inline const AlgorithmValidationSpecification& GetValidationSpecification() const { return m_validationSpecification; }
    template<typename ValidationSpecificationT = AlgorithmValidationSpecification>
    void SetValidationSpecification(ValidationSpecificationT&& value) { m_validationSpecificationHasBeenSet = true; m_validationSpecification = std::forward<ValidationSpecificationT>(value); }
    template<typename ValidationSpecificationT = AlgorithmValidationSpecification>
    DescribeAlgorithmResult& WithValidationSpecification(ValidationSpecificationT&& value) { SetValidationSpecification(std::forward<ValidationSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the algorithm.</p>
     */
    inline AlgorithmStatus GetAlgorithmStatus() const { return m_algorithmStatus; }
    inline void SetAlgorithmStatus(AlgorithmStatus value) { m_algorithmStatusHasBeenSet = true; m_algorithmStatus = value; }
    inline DescribeAlgorithmResult& WithAlgorithmStatus(AlgorithmStatus value) { SetAlgorithmStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the current status of the algorithm.</p>
     */
    inline const AlgorithmStatusDetails& GetAlgorithmStatusDetails() const { return m_algorithmStatusDetails; }
    template<typename AlgorithmStatusDetailsT = AlgorithmStatusDetails>
    void SetAlgorithmStatusDetails(AlgorithmStatusDetailsT&& value) { m_algorithmStatusDetailsHasBeenSet = true; m_algorithmStatusDetails = std::forward<AlgorithmStatusDetailsT>(value); }
    template<typename AlgorithmStatusDetailsT = AlgorithmStatusDetails>
    DescribeAlgorithmResult& WithAlgorithmStatusDetails(AlgorithmStatusDetailsT&& value) { SetAlgorithmStatusDetails(std::forward<AlgorithmStatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier of the algorithm.</p>
     */
    inline const Aws::String& GetProductId() const { return m_productId; }
    template<typename ProductIdT = Aws::String>
    void SetProductId(ProductIdT&& value) { m_productIdHasBeenSet = true; m_productId = std::forward<ProductIdT>(value); }
    template<typename ProductIdT = Aws::String>
    DescribeAlgorithmResult& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the algorithm is certified to be listed in Amazon Web Services
     * Marketplace.</p>
     */
    inline bool GetCertifyForMarketplace() const { return m_certifyForMarketplace; }
    inline void SetCertifyForMarketplace(bool value) { m_certifyForMarketplaceHasBeenSet = true; m_certifyForMarketplace = value; }
    inline DescribeAlgorithmResult& WithCertifyForMarketplace(bool value) { SetCertifyForMarketplace(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAlgorithmResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_algorithmName;
    bool m_algorithmNameHasBeenSet = false;

    Aws::String m_algorithmArn;
    bool m_algorithmArnHasBeenSet = false;

    Aws::String m_algorithmDescription;
    bool m_algorithmDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    TrainingSpecification m_trainingSpecification;
    bool m_trainingSpecificationHasBeenSet = false;

    InferenceSpecification m_inferenceSpecification;
    bool m_inferenceSpecificationHasBeenSet = false;

    AlgorithmValidationSpecification m_validationSpecification;
    bool m_validationSpecificationHasBeenSet = false;

    AlgorithmStatus m_algorithmStatus{AlgorithmStatus::NOT_SET};
    bool m_algorithmStatusHasBeenSet = false;

    AlgorithmStatusDetails m_algorithmStatusDetails;
    bool m_algorithmStatusDetailsHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    bool m_certifyForMarketplace{false};
    bool m_certifyForMarketplaceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
