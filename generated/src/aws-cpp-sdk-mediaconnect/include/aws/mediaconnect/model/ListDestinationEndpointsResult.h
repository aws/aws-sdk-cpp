/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ListedDestinationEndpoint.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {
class ListDestinationEndpointsResult {
 public:
  AWS_MEDIACONNECT_API ListDestinationEndpointsResult() = default;
  AWS_MEDIACONNECT_API ListDestinationEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API ListDestinationEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The destination endpoints that match the request.</p>
   */
  inline const Aws::Vector<ListedDestinationEndpoint>& GetDestinationEndpoints() const { return m_destinationEndpoints; }
  template <typename DestinationEndpointsT = Aws::Vector<ListedDestinationEndpoint>>
  void SetDestinationEndpoints(DestinationEndpointsT&& value) {
    m_destinationEndpointsHasBeenSet = true;
    m_destinationEndpoints = std::forward<DestinationEndpointsT>(value);
  }
  template <typename DestinationEndpointsT = Aws::Vector<ListedDestinationEndpoint>>
  ListDestinationEndpointsResult& WithDestinationEndpoints(DestinationEndpointsT&& value) {
    SetDestinationEndpoints(std::forward<DestinationEndpointsT>(value));
    return *this;
  }
  template <typename DestinationEndpointsT = ListedDestinationEndpoint>
  ListDestinationEndpointsResult& AddDestinationEndpoints(DestinationEndpointsT&& value) {
    m_destinationEndpointsHasBeenSet = true;
    m_destinationEndpoints.emplace_back(std::forward<DestinationEndpointsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use in the next request to retrieve the next page of results.
   * This value is null when there are no more results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDestinationEndpointsResult& WithNextToken(NextTokenT&& value) {
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
  ListDestinationEndpointsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ListedDestinationEndpoint> m_destinationEndpoints;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_destinationEndpointsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
