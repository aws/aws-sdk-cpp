/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayMemberSummary.h>

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
class ListInferenceGatewaysResult {
 public:
  AWS_SAGEMAKER_API ListInferenceGatewaysResult() = default;
  AWS_SAGEMAKER_API ListInferenceGatewaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API ListInferenceGatewaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The summaries of the in-cluster inference gateways, in the order that they
   * were added.</p>
   */
  inline const Aws::Vector<GlobalInferenceGatewayMemberSummary>& GetInferenceGatewaySummaries() const {
    return m_inferenceGatewaySummaries;
  }
  template <typename InferenceGatewaySummariesT = Aws::Vector<GlobalInferenceGatewayMemberSummary>>
  void SetInferenceGatewaySummaries(InferenceGatewaySummariesT&& value) {
    m_inferenceGatewaySummariesHasBeenSet = true;
    m_inferenceGatewaySummaries = std::forward<InferenceGatewaySummariesT>(value);
  }
  template <typename InferenceGatewaySummariesT = Aws::Vector<GlobalInferenceGatewayMemberSummary>>
  ListInferenceGatewaysResult& WithInferenceGatewaySummaries(InferenceGatewaySummariesT&& value) {
    SetInferenceGatewaySummaries(std::forward<InferenceGatewaySummariesT>(value));
    return *this;
  }
  template <typename InferenceGatewaySummariesT = GlobalInferenceGatewayMemberSummary>
  ListInferenceGatewaysResult& AddInferenceGatewaySummaries(InferenceGatewaySummariesT&& value) {
    m_inferenceGatewaySummariesHasBeenSet = true;
    m_inferenceGatewaySummaries.emplace_back(std::forward<InferenceGatewaySummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the result of the previous <code>ListInferenceGateways</code> request was
   * truncated, the response includes a <code>NextToken</code>. To retrieve the next
   * set of in-cluster inference gateways, use the token in the next request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListInferenceGatewaysResult& WithNextToken(NextTokenT&& value) {
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
  ListInferenceGatewaysResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<GlobalInferenceGatewayMemberSummary> m_inferenceGatewaySummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_inferenceGatewaySummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
