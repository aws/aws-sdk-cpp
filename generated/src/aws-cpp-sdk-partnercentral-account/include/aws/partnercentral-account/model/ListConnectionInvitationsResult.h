/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/ConnectionInvitationSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {
class ListConnectionInvitationsResult {
 public:
  AWS_PARTNERCENTRALACCOUNT_API ListConnectionInvitationsResult() = default;
  AWS_PARTNERCENTRALACCOUNT_API ListConnectionInvitationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALACCOUNT_API ListConnectionInvitationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of connection invitation summaries matching the specified
   * criteria.</p>
   */
  inline const Aws::Vector<ConnectionInvitationSummary>& GetConnectionInvitationSummaries() const {
    return m_connectionInvitationSummaries;
  }
  template <typename ConnectionInvitationSummariesT = Aws::Vector<ConnectionInvitationSummary>>
  void SetConnectionInvitationSummaries(ConnectionInvitationSummariesT&& value) {
    m_connectionInvitationSummariesHasBeenSet = true;
    m_connectionInvitationSummaries = std::forward<ConnectionInvitationSummariesT>(value);
  }
  template <typename ConnectionInvitationSummariesT = Aws::Vector<ConnectionInvitationSummary>>
  ListConnectionInvitationsResult& WithConnectionInvitationSummaries(ConnectionInvitationSummariesT&& value) {
    SetConnectionInvitationSummaries(std::forward<ConnectionInvitationSummariesT>(value));
    return *this;
  }
  template <typename ConnectionInvitationSummariesT = ConnectionInvitationSummary>
  ListConnectionInvitationsResult& AddConnectionInvitationSummaries(ConnectionInvitationSummariesT&& value) {
    m_connectionInvitationSummariesHasBeenSet = true;
    m_connectionInvitationSummaries.emplace_back(std::forward<ConnectionInvitationSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for retrieving the next page of results if more results are
   * available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListConnectionInvitationsResult& WithNextToken(NextTokenT&& value) {
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
  ListConnectionInvitationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ConnectionInvitationSummary> m_connectionInvitationSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_connectionInvitationSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
