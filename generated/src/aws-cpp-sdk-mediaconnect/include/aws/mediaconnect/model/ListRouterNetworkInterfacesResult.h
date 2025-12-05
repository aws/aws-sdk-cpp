/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ListedRouterNetworkInterface.h>

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
class ListRouterNetworkInterfacesResult {
 public:
  AWS_MEDIACONNECT_API ListRouterNetworkInterfacesResult() = default;
  AWS_MEDIACONNECT_API ListRouterNetworkInterfacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API ListRouterNetworkInterfacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The summary information for the retrieved router network interfaces.</p>
   */
  inline const Aws::Vector<ListedRouterNetworkInterface>& GetRouterNetworkInterfaces() const { return m_routerNetworkInterfaces; }
  template <typename RouterNetworkInterfacesT = Aws::Vector<ListedRouterNetworkInterface>>
  void SetRouterNetworkInterfaces(RouterNetworkInterfacesT&& value) {
    m_routerNetworkInterfacesHasBeenSet = true;
    m_routerNetworkInterfaces = std::forward<RouterNetworkInterfacesT>(value);
  }
  template <typename RouterNetworkInterfacesT = Aws::Vector<ListedRouterNetworkInterface>>
  ListRouterNetworkInterfacesResult& WithRouterNetworkInterfaces(RouterNetworkInterfacesT&& value) {
    SetRouterNetworkInterfaces(std::forward<RouterNetworkInterfacesT>(value));
    return *this;
  }
  template <typename RouterNetworkInterfacesT = ListedRouterNetworkInterface>
  ListRouterNetworkInterfacesResult& AddRouterNetworkInterfaces(RouterNetworkInterfacesT&& value) {
    m_routerNetworkInterfacesHasBeenSet = true;
    m_routerNetworkInterfaces.emplace_back(std::forward<RouterNetworkInterfacesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRouterNetworkInterfacesResult& WithNextToken(NextTokenT&& value) {
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
  ListRouterNetworkInterfacesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ListedRouterNetworkInterface> m_routerNetworkInterfaces;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_routerNetworkInterfacesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
