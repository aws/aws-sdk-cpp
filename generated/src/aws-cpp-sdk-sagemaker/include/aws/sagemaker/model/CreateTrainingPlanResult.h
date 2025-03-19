/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateTrainingPlanResult
  {
  public:
    AWS_SAGEMAKER_API CreateTrainingPlanResult() = default;
    AWS_SAGEMAKER_API CreateTrainingPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateTrainingPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN); of the created training plan.</p>
     */
    inline const Aws::String& GetTrainingPlanArn() const { return m_trainingPlanArn; }
    template<typename TrainingPlanArnT = Aws::String>
    void SetTrainingPlanArn(TrainingPlanArnT&& value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn = std::forward<TrainingPlanArnT>(value); }
    template<typename TrainingPlanArnT = Aws::String>
    CreateTrainingPlanResult& WithTrainingPlanArn(TrainingPlanArnT&& value) { SetTrainingPlanArn(std::forward<TrainingPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTrainingPlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trainingPlanArn;
    bool m_trainingPlanArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
