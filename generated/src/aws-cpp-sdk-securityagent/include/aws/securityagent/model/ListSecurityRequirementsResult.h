/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/SecurityRequirementSummary.h>

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
class ListSecurityRequirementsResult {
 public:
  AWS_SECURITYAGENT_API ListSecurityRequirementsResult() = default;
  AWS_SECURITYAGENT_API ListSecurityRequirementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API ListSecurityRequirementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of security requirement summaries.</p>
   */
  inline const Aws::Vector<SecurityRequirementSummary>& GetSecurityRequirementSummaries() const { return m_securityRequirementSummaries; }
  template <typename SecurityRequirementSummariesT = Aws::Vector<SecurityRequirementSummary>>
  void SetSecurityRequirementSummaries(SecurityRequirementSummariesT&& value) {
    m_securityRequirementSummariesHasBeenSet = true;
    m_securityRequirementSummaries = std::forward<SecurityRequirementSummariesT>(value);
  }
  template <typename SecurityRequirementSummariesT = Aws::Vector<SecurityRequirementSummary>>
  ListSecurityRequirementsResult& WithSecurityRequirementSummaries(SecurityRequirementSummariesT&& value) {
    SetSecurityRequirementSummaries(std::forward<SecurityRequirementSummariesT>(value));
    return *this;
  }
  template <typename SecurityRequirementSummariesT = SecurityRequirementSummary>
  ListSecurityRequirementsResult& AddSecurityRequirementSummaries(SecurityRequirementSummariesT&& value) {
    m_securityRequirementSummariesHasBeenSet = true;
    m_securityRequirementSummaries.emplace_back(std::forward<SecurityRequirementSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to use in a subsequent request to retrieve the next page
   * of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSecurityRequirementsResult& WithNextToken(NextTokenT&& value) {
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
  ListSecurityRequirementsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SecurityRequirementSummary> m_securityRequirementSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_securityRequirementSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
