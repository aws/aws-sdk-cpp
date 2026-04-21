/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIWorkloadConfigSummary.h>

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
class ListAIWorkloadConfigsResult {
 public:
  AWS_SAGEMAKER_API ListAIWorkloadConfigsResult() = default;
  AWS_SAGEMAKER_API ListAIWorkloadConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API ListAIWorkloadConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of <code>AIWorkloadConfigSummary</code> objects, one for each AI
   * workload configuration that matches the specified filters.</p>
   */
  inline const Aws::Vector<AIWorkloadConfigSummary>& GetAIWorkloadConfigs() const { return m_aIWorkloadConfigs; }
  template <typename AIWorkloadConfigsT = Aws::Vector<AIWorkloadConfigSummary>>
  void SetAIWorkloadConfigs(AIWorkloadConfigsT&& value) {
    m_aIWorkloadConfigsHasBeenSet = true;
    m_aIWorkloadConfigs = std::forward<AIWorkloadConfigsT>(value);
  }
  template <typename AIWorkloadConfigsT = Aws::Vector<AIWorkloadConfigSummary>>
  ListAIWorkloadConfigsResult& WithAIWorkloadConfigs(AIWorkloadConfigsT&& value) {
    SetAIWorkloadConfigs(std::forward<AIWorkloadConfigsT>(value));
    return *this;
  }
  template <typename AIWorkloadConfigsT = AIWorkloadConfigSummary>
  ListAIWorkloadConfigsResult& AddAIWorkloadConfigs(AIWorkloadConfigsT&& value) {
    m_aIWorkloadConfigsHasBeenSet = true;
    m_aIWorkloadConfigs.emplace_back(std::forward<AIWorkloadConfigsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the response is truncated, Amazon SageMaker AI returns this token. To
   * retrieve the next set of configurations, use it in the subsequent request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAIWorkloadConfigsResult& WithNextToken(NextTokenT&& value) {
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
  ListAIWorkloadConfigsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AIWorkloadConfigSummary> m_aIWorkloadConfigs;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_aIWorkloadConfigsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
