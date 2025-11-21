/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterInput.h>

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
class UpdateRouterInputResult {
 public:
  AWS_MEDIACONNECT_API UpdateRouterInputResult() = default;
  AWS_MEDIACONNECT_API UpdateRouterInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API UpdateRouterInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The updated router input.</p>
   */
  inline const RouterInput& GetRouterInput() const { return m_routerInput; }
  template <typename RouterInputT = RouterInput>
  void SetRouterInput(RouterInputT&& value) {
    m_routerInputHasBeenSet = true;
    m_routerInput = std::forward<RouterInputT>(value);
  }
  template <typename RouterInputT = RouterInput>
  UpdateRouterInputResult& WithRouterInput(RouterInputT&& value) {
    SetRouterInput(std::forward<RouterInputT>(value));
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
  UpdateRouterInputResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  RouterInput m_routerInput;
  bool m_routerInputHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
