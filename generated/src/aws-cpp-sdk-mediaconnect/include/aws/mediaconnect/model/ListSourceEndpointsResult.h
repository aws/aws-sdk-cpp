/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ListedSourceEndpoint.h>

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
class ListSourceEndpointsResult {
 public:
  AWS_MEDIACONNECT_API ListSourceEndpointsResult() = default;
  AWS_MEDIACONNECT_API ListSourceEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API ListSourceEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The source endpoints that match the request.</p>
   */
  inline const Aws::Vector<ListedSourceEndpoint>& GetSourceEndpoints() const { return m_sourceEndpoints; }
  template <typename SourceEndpointsT = Aws::Vector<ListedSourceEndpoint>>
  void SetSourceEndpoints(SourceEndpointsT&& value) {
    m_sourceEndpointsHasBeenSet = true;
    m_sourceEndpoints = std::forward<SourceEndpointsT>(value);
  }
  template <typename SourceEndpointsT = Aws::Vector<ListedSourceEndpoint>>
  ListSourceEndpointsResult& WithSourceEndpoints(SourceEndpointsT&& value) {
    SetSourceEndpoints(std::forward<SourceEndpointsT>(value));
    return *this;
  }
  template <typename SourceEndpointsT = ListedSourceEndpoint>
  ListSourceEndpointsResult& AddSourceEndpoints(SourceEndpointsT&& value) {
    m_sourceEndpointsHasBeenSet = true;
    m_sourceEndpoints.emplace_back(std::forward<SourceEndpointsT>(value));
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
  ListSourceEndpointsResult& WithNextToken(NextTokenT&& value) {
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
  ListSourceEndpointsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ListedSourceEndpoint> m_sourceEndpoints;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sourceEndpointsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
