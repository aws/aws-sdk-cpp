/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/AutonomousDatabasePeerSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {
class ListAutonomousDatabasePeersResult {
 public:
  AWS_ODB_API ListAutonomousDatabasePeersResult() = default;
  AWS_ODB_API ListAutonomousDatabasePeersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ODB_API ListAutonomousDatabasePeersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The token to include in another request to get the next page of items. This
   * value is <code>null</code> when there are no more items to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAutonomousDatabasePeersResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of peer databases for the Autonomous Database.</p>
   */
  inline const Aws::Vector<AutonomousDatabasePeerSummary>& GetAutonomousDatabasePeers() const { return m_autonomousDatabasePeers; }
  template <typename AutonomousDatabasePeersT = Aws::Vector<AutonomousDatabasePeerSummary>>
  void SetAutonomousDatabasePeers(AutonomousDatabasePeersT&& value) {
    m_autonomousDatabasePeersHasBeenSet = true;
    m_autonomousDatabasePeers = std::forward<AutonomousDatabasePeersT>(value);
  }
  template <typename AutonomousDatabasePeersT = Aws::Vector<AutonomousDatabasePeerSummary>>
  ListAutonomousDatabasePeersResult& WithAutonomousDatabasePeers(AutonomousDatabasePeersT&& value) {
    SetAutonomousDatabasePeers(std::forward<AutonomousDatabasePeersT>(value));
    return *this;
  }
  template <typename AutonomousDatabasePeersT = AutonomousDatabasePeerSummary>
  ListAutonomousDatabasePeersResult& AddAutonomousDatabasePeers(AutonomousDatabasePeersT&& value) {
    m_autonomousDatabasePeersHasBeenSet = true;
    m_autonomousDatabasePeers.emplace_back(std::forward<AutonomousDatabasePeersT>(value));
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
  ListAutonomousDatabasePeersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<AutonomousDatabasePeerSummary> m_autonomousDatabasePeers;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_autonomousDatabasePeersHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
