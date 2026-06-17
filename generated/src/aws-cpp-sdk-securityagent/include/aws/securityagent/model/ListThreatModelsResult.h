/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/ThreatModelSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {
/**
 * <p>Output for the ListThreatModels operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListThreatModelsOutput">AWS
 * API Reference</a></p>
 */
class ListThreatModelsResult {
 public:
  AWS_SECURITYAGENT_API ListThreatModelsResult() = default;
  AWS_SECURITYAGENT_API ListThreatModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API ListThreatModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of threat model summaries.</p>
   */
  inline const Aws::Vector<ThreatModelSummary>& GetThreatModelSummaries() const { return m_threatModelSummaries; }
  template <typename ThreatModelSummariesT = Aws::Vector<ThreatModelSummary>>
  void SetThreatModelSummaries(ThreatModelSummariesT&& value) {
    m_threatModelSummariesHasBeenSet = true;
    m_threatModelSummaries = std::forward<ThreatModelSummariesT>(value);
  }
  template <typename ThreatModelSummariesT = Aws::Vector<ThreatModelSummary>>
  ListThreatModelsResult& WithThreatModelSummaries(ThreatModelSummariesT&& value) {
    SetThreatModelSummaries(std::forward<ThreatModelSummariesT>(value));
    return *this;
  }
  template <typename ThreatModelSummariesT = ThreatModelSummary>
  ListThreatModelsResult& AddThreatModelSummaries(ThreatModelSummariesT&& value) {
    m_threatModelSummariesHasBeenSet = true;
    m_threatModelSummaries.emplace_back(std::forward<ThreatModelSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to use for paginating results that are returned in the response.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListThreatModelsResult& WithNextToken(NextTokenT&& value) {
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
  ListThreatModelsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ThreatModelSummary> m_threatModelSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_threatModelSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
