/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/InferenceRouterSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {
class ListInferenceRoutersResult {
 public:
  AWS_SAGEMAKER_API ListInferenceRoutersResult() = default;
  AWS_SAGEMAKER_API ListInferenceRoutersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API ListInferenceRoutersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of summaries of the inference routers.</p>
   */
  inline const Aws::Vector<InferenceRouterSummary>& GetInferenceRouters() const { return m_inferenceRouters; }
  template <typename InferenceRoutersT = Aws::Vector<InferenceRouterSummary>>
  void SetInferenceRouters(InferenceRoutersT&& value) {
    m_inferenceRoutersHasBeenSet = true;
    m_inferenceRouters = std::forward<InferenceRoutersT>(value);
  }
  template <typename InferenceRoutersT = Aws::Vector<InferenceRouterSummary>>
  ListInferenceRoutersResult& WithInferenceRouters(InferenceRoutersT&& value) {
    SetInferenceRouters(std::forward<InferenceRoutersT>(value));
    return *this;
  }
  template <typename InferenceRoutersT = InferenceRouterSummary>
  ListInferenceRoutersResult& AddInferenceRouters(InferenceRoutersT&& value) {
    m_inferenceRoutersHasBeenSet = true;
    m_inferenceRouters.emplace_back(std::forward<InferenceRoutersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the response is truncated, SageMaker AI returns this token. To get the
   * next set of inference routers, use it in your next request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListInferenceRoutersResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListInferenceRoutersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<InferenceRouterSummary> m_inferenceRouters;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_inferenceRoutersHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
