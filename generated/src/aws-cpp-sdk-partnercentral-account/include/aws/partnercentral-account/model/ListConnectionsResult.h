/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/ConnectionSummary.h>

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
class ListConnectionsResult {
 public:
  AWS_PARTNERCENTRALACCOUNT_API ListConnectionsResult() = default;
  AWS_PARTNERCENTRALACCOUNT_API ListConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALACCOUNT_API ListConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of connection summaries matching the specified criteria.</p>
   */
  inline const Aws::Vector<ConnectionSummary>& GetConnectionSummaries() const { return m_connectionSummaries; }
  template <typename ConnectionSummariesT = Aws::Vector<ConnectionSummary>>
  void SetConnectionSummaries(ConnectionSummariesT&& value) {
    m_connectionSummariesHasBeenSet = true;
    m_connectionSummaries = std::forward<ConnectionSummariesT>(value);
  }
  template <typename ConnectionSummariesT = Aws::Vector<ConnectionSummary>>
  ListConnectionsResult& WithConnectionSummaries(ConnectionSummariesT&& value) {
    SetConnectionSummaries(std::forward<ConnectionSummariesT>(value));
    return *this;
  }
  template <typename ConnectionSummariesT = ConnectionSummary>
  ListConnectionsResult& AddConnectionSummaries(ConnectionSummariesT&& value) {
    m_connectionSummariesHasBeenSet = true;
    m_connectionSummaries.emplace_back(std::forward<ConnectionSummariesT>(value));
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
  ListConnectionsResult& WithNextToken(NextTokenT&& value) {
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
  ListConnectionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ConnectionSummary> m_connectionSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_connectionSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
