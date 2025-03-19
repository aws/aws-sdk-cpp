/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceComponentSummary.h>
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
  class ListInferenceComponentsResult
  {
  public:
    AWS_SAGEMAKER_API ListInferenceComponentsResult() = default;
    AWS_SAGEMAKER_API ListInferenceComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListInferenceComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of inference components and their properties that matches any of the
     * filters you specified in the request.</p>
     */
    inline const Aws::Vector<InferenceComponentSummary>& GetInferenceComponents() const { return m_inferenceComponents; }
    template<typename InferenceComponentsT = Aws::Vector<InferenceComponentSummary>>
    void SetInferenceComponents(InferenceComponentsT&& value) { m_inferenceComponentsHasBeenSet = true; m_inferenceComponents = std::forward<InferenceComponentsT>(value); }
    template<typename InferenceComponentsT = Aws::Vector<InferenceComponentSummary>>
    ListInferenceComponentsResult& WithInferenceComponents(InferenceComponentsT&& value) { SetInferenceComponents(std::forward<InferenceComponentsT>(value)); return *this;}
    template<typename InferenceComponentsT = InferenceComponentSummary>
    ListInferenceComponentsResult& AddInferenceComponents(InferenceComponentsT&& value) { m_inferenceComponentsHasBeenSet = true; m_inferenceComponents.emplace_back(std::forward<InferenceComponentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use in a subsequent request to get the next set of results
     * following a truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInferenceComponentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInferenceComponentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InferenceComponentSummary> m_inferenceComponents;
    bool m_inferenceComponentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
