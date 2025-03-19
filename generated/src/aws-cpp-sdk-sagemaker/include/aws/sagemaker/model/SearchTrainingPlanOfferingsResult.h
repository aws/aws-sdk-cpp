/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrainingPlanOffering.h>
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
  class SearchTrainingPlanOfferingsResult
  {
  public:
    AWS_SAGEMAKER_API SearchTrainingPlanOfferingsResult() = default;
    AWS_SAGEMAKER_API SearchTrainingPlanOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API SearchTrainingPlanOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of training plan offerings that match the search criteria.</p>
     */
    inline const Aws::Vector<TrainingPlanOffering>& GetTrainingPlanOfferings() const { return m_trainingPlanOfferings; }
    template<typename TrainingPlanOfferingsT = Aws::Vector<TrainingPlanOffering>>
    void SetTrainingPlanOfferings(TrainingPlanOfferingsT&& value) { m_trainingPlanOfferingsHasBeenSet = true; m_trainingPlanOfferings = std::forward<TrainingPlanOfferingsT>(value); }
    template<typename TrainingPlanOfferingsT = Aws::Vector<TrainingPlanOffering>>
    SearchTrainingPlanOfferingsResult& WithTrainingPlanOfferings(TrainingPlanOfferingsT&& value) { SetTrainingPlanOfferings(std::forward<TrainingPlanOfferingsT>(value)); return *this;}
    template<typename TrainingPlanOfferingsT = TrainingPlanOffering>
    SearchTrainingPlanOfferingsResult& AddTrainingPlanOfferings(TrainingPlanOfferingsT&& value) { m_trainingPlanOfferingsHasBeenSet = true; m_trainingPlanOfferings.emplace_back(std::forward<TrainingPlanOfferingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchTrainingPlanOfferingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrainingPlanOffering> m_trainingPlanOfferings;
    bool m_trainingPlanOfferingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
