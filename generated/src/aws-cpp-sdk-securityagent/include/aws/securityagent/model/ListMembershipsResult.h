/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/MembershipSummary.h>

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
 * <p>Response structure for listing members associated to an agent
 * space</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListMembershipsResponse">AWS
 * API Reference</a></p>
 */
class ListMembershipsResult {
 public:
  AWS_SECURITYAGENT_API ListMembershipsResult() = default;
  AWS_SECURITYAGENT_API ListMembershipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API ListMembershipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of membership summaries</p>
   */
  inline const Aws::Vector<MembershipSummary>& GetMembershipSummaries() const { return m_membershipSummaries; }
  template <typename MembershipSummariesT = Aws::Vector<MembershipSummary>>
  void SetMembershipSummaries(MembershipSummariesT&& value) {
    m_membershipSummariesHasBeenSet = true;
    m_membershipSummaries = std::forward<MembershipSummariesT>(value);
  }
  template <typename MembershipSummariesT = Aws::Vector<MembershipSummary>>
  ListMembershipsResult& WithMembershipSummaries(MembershipSummariesT&& value) {
    SetMembershipSummaries(std::forward<MembershipSummariesT>(value));
    return *this;
  }
  template <typename MembershipSummariesT = MembershipSummary>
  ListMembershipsResult& AddMembershipSummaries(MembershipSummariesT&& value) {
    m_membershipSummariesHasBeenSet = true;
    m_membershipSummaries.emplace_back(std::forward<MembershipSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for next page of results</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListMembershipsResult& WithNextToken(NextTokenT&& value) {
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
  ListMembershipsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<MembershipSummary> m_membershipSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_membershipSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
