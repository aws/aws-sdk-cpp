/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/SecurityRequirementPackSummary.h>

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
class ListSecurityRequirementPacksResult {
 public:
  AWS_SECURITYAGENT_API ListSecurityRequirementPacksResult() = default;
  AWS_SECURITYAGENT_API ListSecurityRequirementPacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API ListSecurityRequirementPacksResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of security requirement pack summaries.</p>
   */
  inline const Aws::Vector<SecurityRequirementPackSummary>& GetSecurityRequirementPackSummaries() const {
    return m_securityRequirementPackSummaries;
  }
  template <typename SecurityRequirementPackSummariesT = Aws::Vector<SecurityRequirementPackSummary>>
  void SetSecurityRequirementPackSummaries(SecurityRequirementPackSummariesT&& value) {
    m_securityRequirementPackSummariesHasBeenSet = true;
    m_securityRequirementPackSummaries = std::forward<SecurityRequirementPackSummariesT>(value);
  }
  template <typename SecurityRequirementPackSummariesT = Aws::Vector<SecurityRequirementPackSummary>>
  ListSecurityRequirementPacksResult& WithSecurityRequirementPackSummaries(SecurityRequirementPackSummariesT&& value) {
    SetSecurityRequirementPackSummaries(std::forward<SecurityRequirementPackSummariesT>(value));
    return *this;
  }
  template <typename SecurityRequirementPackSummariesT = SecurityRequirementPackSummary>
  ListSecurityRequirementPacksResult& AddSecurityRequirementPackSummaries(SecurityRequirementPackSummariesT&& value) {
    m_securityRequirementPackSummariesHasBeenSet = true;
    m_securityRequirementPackSummaries.emplace_back(std::forward<SecurityRequirementPackSummariesT>(value));
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
  ListSecurityRequirementPacksResult& WithNextToken(NextTokenT&& value) {
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
  ListSecurityRequirementPacksResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SecurityRequirementPackSummary> m_securityRequirementPackSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_securityRequirementPackSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
