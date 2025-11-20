/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterNetworkInterface.h>

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
class CreateRouterNetworkInterfaceResult {
 public:
  AWS_MEDIACONNECT_API CreateRouterNetworkInterfaceResult() = default;
  AWS_MEDIACONNECT_API CreateRouterNetworkInterfaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API CreateRouterNetworkInterfaceResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The newly-created router network interface.</p>
   */
  inline const RouterNetworkInterface& GetRouterNetworkInterface() const { return m_routerNetworkInterface; }
  template <typename RouterNetworkInterfaceT = RouterNetworkInterface>
  void SetRouterNetworkInterface(RouterNetworkInterfaceT&& value) {
    m_routerNetworkInterfaceHasBeenSet = true;
    m_routerNetworkInterface = std::forward<RouterNetworkInterfaceT>(value);
  }
  template <typename RouterNetworkInterfaceT = RouterNetworkInterface>
  CreateRouterNetworkInterfaceResult& WithRouterNetworkInterface(RouterNetworkInterfaceT&& value) {
    SetRouterNetworkInterface(std::forward<RouterNetworkInterfaceT>(value));
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
  CreateRouterNetworkInterfaceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  RouterNetworkInterface m_routerNetworkInterface;
  bool m_routerNetworkInterfaceHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
