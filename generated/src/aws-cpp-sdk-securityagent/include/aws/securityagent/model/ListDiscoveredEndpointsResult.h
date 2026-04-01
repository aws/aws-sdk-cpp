/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/DiscoveredEndpoint.h>

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
 * <p>Output for the ListDiscoveredEndpoints operation</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListDiscoveredEndpointsOutput">AWS
 * API Reference</a></p>
 */
class ListDiscoveredEndpointsResult {
 public:
  AWS_SECURITYAGENT_API ListDiscoveredEndpointsResult() = default;
  AWS_SECURITYAGENT_API ListDiscoveredEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API ListDiscoveredEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of discovered endpoints for the pentest job</p>
   */
  inline const Aws::Vector<DiscoveredEndpoint>& GetDiscoveredEndpoints() const { return m_discoveredEndpoints; }
  template <typename DiscoveredEndpointsT = Aws::Vector<DiscoveredEndpoint>>
  void SetDiscoveredEndpoints(DiscoveredEndpointsT&& value) {
    m_discoveredEndpointsHasBeenSet = true;
    m_discoveredEndpoints = std::forward<DiscoveredEndpointsT>(value);
  }
  template <typename DiscoveredEndpointsT = Aws::Vector<DiscoveredEndpoint>>
  ListDiscoveredEndpointsResult& WithDiscoveredEndpoints(DiscoveredEndpointsT&& value) {
    SetDiscoveredEndpoints(std::forward<DiscoveredEndpointsT>(value));
    return *this;
  }
  template <typename DiscoveredEndpointsT = DiscoveredEndpoint>
  ListDiscoveredEndpointsResult& AddDiscoveredEndpoints(DiscoveredEndpointsT&& value) {
    m_discoveredEndpointsHasBeenSet = true;
    m_discoveredEndpoints.emplace_back(std::forward<DiscoveredEndpointsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for pagination to retrieve the next set of results</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDiscoveredEndpointsResult& WithNextToken(NextTokenT&& value) {
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
  ListDiscoveredEndpointsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DiscoveredEndpoint> m_discoveredEndpoints;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_discoveredEndpointsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
