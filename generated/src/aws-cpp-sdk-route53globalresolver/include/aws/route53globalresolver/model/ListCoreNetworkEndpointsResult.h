/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/CoreNetworkEndpointsItem.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Route53GlobalResolver {
namespace Model {
class ListCoreNetworkEndpointsResult {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API ListCoreNetworkEndpointsResult() = default;
  AWS_ROUTE53GLOBALRESOLVER_API ListCoreNetworkEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53GLOBALRESOLVER_API ListCoreNetworkEndpointsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A pagination token used for large sets of results that can't be returned in a
   * single response. Provide this token in the next call to get the results not
   * returned in this call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListCoreNetworkEndpointsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of information about the core network endpoints.</p>
   */
  inline const Aws::Vector<CoreNetworkEndpointsItem>& GetCoreNetworkEndpoints() const { return m_coreNetworkEndpoints; }
  template <typename CoreNetworkEndpointsT = Aws::Vector<CoreNetworkEndpointsItem>>
  void SetCoreNetworkEndpoints(CoreNetworkEndpointsT&& value) {
    m_coreNetworkEndpointsHasBeenSet = true;
    m_coreNetworkEndpoints = std::forward<CoreNetworkEndpointsT>(value);
  }
  template <typename CoreNetworkEndpointsT = Aws::Vector<CoreNetworkEndpointsItem>>
  ListCoreNetworkEndpointsResult& WithCoreNetworkEndpoints(CoreNetworkEndpointsT&& value) {
    SetCoreNetworkEndpoints(std::forward<CoreNetworkEndpointsT>(value));
    return *this;
  }
  template <typename CoreNetworkEndpointsT = CoreNetworkEndpointsItem>
  ListCoreNetworkEndpointsResult& AddCoreNetworkEndpoints(CoreNetworkEndpointsT&& value) {
    m_coreNetworkEndpointsHasBeenSet = true;
    m_coreNetworkEndpoints.emplace_back(std::forward<CoreNetworkEndpointsT>(value));
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
  ListCoreNetworkEndpointsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<CoreNetworkEndpointsItem> m_coreNetworkEndpoints;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_coreNetworkEndpointsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
