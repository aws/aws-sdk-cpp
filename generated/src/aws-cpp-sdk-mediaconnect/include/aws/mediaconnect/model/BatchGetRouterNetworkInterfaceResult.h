/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/BatchGetRouterNetworkInterfaceError.h>
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
class BatchGetRouterNetworkInterfaceResult {
 public:
  AWS_MEDIACONNECT_API BatchGetRouterNetworkInterfaceResult() = default;
  AWS_MEDIACONNECT_API BatchGetRouterNetworkInterfaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API BatchGetRouterNetworkInterfaceResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of router network interfaces that were successfully retrieved.</p>
   */
  inline const Aws::Vector<RouterNetworkInterface>& GetRouterNetworkInterfaces() const { return m_routerNetworkInterfaces; }
  template <typename RouterNetworkInterfacesT = Aws::Vector<RouterNetworkInterface>>
  void SetRouterNetworkInterfaces(RouterNetworkInterfacesT&& value) {
    m_routerNetworkInterfacesHasBeenSet = true;
    m_routerNetworkInterfaces = std::forward<RouterNetworkInterfacesT>(value);
  }
  template <typename RouterNetworkInterfacesT = Aws::Vector<RouterNetworkInterface>>
  BatchGetRouterNetworkInterfaceResult& WithRouterNetworkInterfaces(RouterNetworkInterfacesT&& value) {
    SetRouterNetworkInterfaces(std::forward<RouterNetworkInterfacesT>(value));
    return *this;
  }
  template <typename RouterNetworkInterfacesT = RouterNetworkInterface>
  BatchGetRouterNetworkInterfaceResult& AddRouterNetworkInterfaces(RouterNetworkInterfacesT&& value) {
    m_routerNetworkInterfacesHasBeenSet = true;
    m_routerNetworkInterfaces.emplace_back(std::forward<RouterNetworkInterfacesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of errors that occurred when retrieving the requested router network
   * interfaces.</p>
   */
  inline const Aws::Vector<BatchGetRouterNetworkInterfaceError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchGetRouterNetworkInterfaceError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchGetRouterNetworkInterfaceError>>
  BatchGetRouterNetworkInterfaceResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchGetRouterNetworkInterfaceError>
  BatchGetRouterNetworkInterfaceResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
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
  BatchGetRouterNetworkInterfaceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RouterNetworkInterface> m_routerNetworkInterfaces;

  Aws::Vector<BatchGetRouterNetworkInterfaceError> m_errors;

  Aws::String m_requestId;
  bool m_routerNetworkInterfacesHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
