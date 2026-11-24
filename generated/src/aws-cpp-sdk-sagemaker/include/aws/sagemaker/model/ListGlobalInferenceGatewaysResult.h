/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/GlobalInferenceGatewaySummary.h>

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
class ListGlobalInferenceGatewaysResult {
 public:
  AWS_SAGEMAKER_API ListGlobalInferenceGatewaysResult() = default;
  AWS_SAGEMAKER_API ListGlobalInferenceGatewaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API ListGlobalInferenceGatewaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The summaries of the global inference gateways.</p>
   */
  inline const Aws::Vector<GlobalInferenceGatewaySummary>& GetGlobalInferenceGatewaySummaries() const {
    return m_globalInferenceGatewaySummaries;
  }
  template <typename GlobalInferenceGatewaySummariesT = Aws::Vector<GlobalInferenceGatewaySummary>>
  void SetGlobalInferenceGatewaySummaries(GlobalInferenceGatewaySummariesT&& value) {
    m_globalInferenceGatewaySummariesHasBeenSet = true;
    m_globalInferenceGatewaySummaries = std::forward<GlobalInferenceGatewaySummariesT>(value);
  }
  template <typename GlobalInferenceGatewaySummariesT = Aws::Vector<GlobalInferenceGatewaySummary>>
  ListGlobalInferenceGatewaysResult& WithGlobalInferenceGatewaySummaries(GlobalInferenceGatewaySummariesT&& value) {
    SetGlobalInferenceGatewaySummaries(std::forward<GlobalInferenceGatewaySummariesT>(value));
    return *this;
  }
  template <typename GlobalInferenceGatewaySummariesT = GlobalInferenceGatewaySummary>
  ListGlobalInferenceGatewaysResult& AddGlobalInferenceGatewaySummaries(GlobalInferenceGatewaySummariesT&& value) {
    m_globalInferenceGatewaySummariesHasBeenSet = true;
    m_globalInferenceGatewaySummaries.emplace_back(std::forward<GlobalInferenceGatewaySummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the result of the previous <code>ListGlobalInferenceGateways</code>
   * request was truncated, the response includes a <code>NextToken</code>. To
   * retrieve the next set of global inference gateways, use the token in the next
   * request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListGlobalInferenceGatewaysResult& WithNextToken(NextTokenT&& value) {
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
  ListGlobalInferenceGatewaysResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<GlobalInferenceGatewaySummary> m_globalInferenceGatewaySummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_globalInferenceGatewaySummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
