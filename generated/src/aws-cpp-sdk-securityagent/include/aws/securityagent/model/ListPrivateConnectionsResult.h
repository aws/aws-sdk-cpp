/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/PrivateConnectionSummary.h>

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
class ListPrivateConnectionsResult {
 public:
  AWS_SECURITYAGENT_API ListPrivateConnectionsResult() = default;
  AWS_SECURITYAGENT_API ListPrivateConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API ListPrivateConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of private connections.</p>
   */
  inline const Aws::Vector<PrivateConnectionSummary>& GetPrivateConnections() const { return m_privateConnections; }
  template <typename PrivateConnectionsT = Aws::Vector<PrivateConnectionSummary>>
  void SetPrivateConnections(PrivateConnectionsT&& value) {
    m_privateConnectionsHasBeenSet = true;
    m_privateConnections = std::forward<PrivateConnectionsT>(value);
  }
  template <typename PrivateConnectionsT = Aws::Vector<PrivateConnectionSummary>>
  ListPrivateConnectionsResult& WithPrivateConnections(PrivateConnectionsT&& value) {
    SetPrivateConnections(std::forward<PrivateConnectionsT>(value));
    return *this;
  }
  template <typename PrivateConnectionsT = PrivateConnectionSummary>
  ListPrivateConnectionsResult& AddPrivateConnections(PrivateConnectionsT&& value) {
    m_privateConnectionsHasBeenSet = true;
    m_privateConnections.emplace_back(std::forward<PrivateConnectionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use to retrieve the next page of results, if more results are
   * available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPrivateConnectionsResult& WithNextToken(NextTokenT&& value) {
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
  ListPrivateConnectionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<PrivateConnectionSummary> m_privateConnections;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_privateConnectionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
