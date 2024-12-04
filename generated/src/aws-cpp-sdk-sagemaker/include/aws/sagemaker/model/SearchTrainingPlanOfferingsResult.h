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
    AWS_SAGEMAKER_API SearchTrainingPlanOfferingsResult();
    AWS_SAGEMAKER_API SearchTrainingPlanOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API SearchTrainingPlanOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of training plan offerings that match the search criteria.</p>
     */
    inline const Aws::Vector<TrainingPlanOffering>& GetTrainingPlanOfferings() const{ return m_trainingPlanOfferings; }
    inline void SetTrainingPlanOfferings(const Aws::Vector<TrainingPlanOffering>& value) { m_trainingPlanOfferings = value; }
    inline void SetTrainingPlanOfferings(Aws::Vector<TrainingPlanOffering>&& value) { m_trainingPlanOfferings = std::move(value); }
    inline SearchTrainingPlanOfferingsResult& WithTrainingPlanOfferings(const Aws::Vector<TrainingPlanOffering>& value) { SetTrainingPlanOfferings(value); return *this;}
    inline SearchTrainingPlanOfferingsResult& WithTrainingPlanOfferings(Aws::Vector<TrainingPlanOffering>&& value) { SetTrainingPlanOfferings(std::move(value)); return *this;}
    inline SearchTrainingPlanOfferingsResult& AddTrainingPlanOfferings(const TrainingPlanOffering& value) { m_trainingPlanOfferings.push_back(value); return *this; }
    inline SearchTrainingPlanOfferingsResult& AddTrainingPlanOfferings(TrainingPlanOffering&& value) { m_trainingPlanOfferings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchTrainingPlanOfferingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchTrainingPlanOfferingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchTrainingPlanOfferingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TrainingPlanOffering> m_trainingPlanOfferings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
