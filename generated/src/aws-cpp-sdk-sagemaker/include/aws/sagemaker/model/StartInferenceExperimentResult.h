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
  class StartInferenceExperimentResult
  {
  public:
    AWS_SAGEMAKER_API StartInferenceExperimentResult() = default;
    AWS_SAGEMAKER_API StartInferenceExperimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API StartInferenceExperimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the started inference experiment to start.</p>
     */
    inline const Aws::String& GetInferenceExperimentArn() const { return m_inferenceExperimentArn; }
    template<typename InferenceExperimentArnT = Aws::String>
    void SetInferenceExperimentArn(InferenceExperimentArnT&& value) { m_inferenceExperimentArnHasBeenSet = true; m_inferenceExperimentArn = std::forward<InferenceExperimentArnT>(value); }
    template<typename InferenceExperimentArnT = Aws::String>
    StartInferenceExperimentResult& WithInferenceExperimentArn(InferenceExperimentArnT&& value) { SetInferenceExperimentArn(std::forward<InferenceExperimentArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartInferenceExperimentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inferenceExperimentArn;
    bool m_inferenceExperimentArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
