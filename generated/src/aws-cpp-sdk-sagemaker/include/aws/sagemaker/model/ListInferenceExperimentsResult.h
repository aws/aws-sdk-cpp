/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceExperimentSummary.h>
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
  class ListInferenceExperimentsResult
  {
  public:
    AWS_SAGEMAKER_API ListInferenceExperimentsResult() = default;
    AWS_SAGEMAKER_API ListInferenceExperimentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListInferenceExperimentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of inference experiments.</p>
     */
    inline const Aws::Vector<InferenceExperimentSummary>& GetInferenceExperiments() const { return m_inferenceExperiments; }
    template<typename InferenceExperimentsT = Aws::Vector<InferenceExperimentSummary>>
    void SetInferenceExperiments(InferenceExperimentsT&& value) { m_inferenceExperimentsHasBeenSet = true; m_inferenceExperiments = std::forward<InferenceExperimentsT>(value); }
    template<typename InferenceExperimentsT = Aws::Vector<InferenceExperimentSummary>>
    ListInferenceExperimentsResult& WithInferenceExperiments(InferenceExperimentsT&& value) { SetInferenceExperiments(std::forward<InferenceExperimentsT>(value)); return *this;}
    template<typename InferenceExperimentsT = InferenceExperimentSummary>
    ListInferenceExperimentsResult& AddInferenceExperiments(InferenceExperimentsT&& value) { m_inferenceExperimentsHasBeenSet = true; m_inferenceExperiments.emplace_back(std::forward<InferenceExperimentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when calling the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInferenceExperimentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInferenceExperimentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InferenceExperimentSummary> m_inferenceExperiments;
    bool m_inferenceExperimentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
