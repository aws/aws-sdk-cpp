/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterOutputRoutedState.h>

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
class TakeRouterInputResult {
 public:
  AWS_MEDIACONNECT_API TakeRouterInputResult() = default;
  AWS_MEDIACONNECT_API TakeRouterInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API TakeRouterInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The state of the association between the router input and output.</p>
   */
  inline RouterOutputRoutedState GetRoutedState() const { return m_routedState; }
  inline void SetRoutedState(RouterOutputRoutedState value) {
    m_routedStateHasBeenSet = true;
    m_routedState = value;
  }
  inline TakeRouterInputResult& WithRoutedState(RouterOutputRoutedState value) {
    SetRoutedState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the associated router output.</p>
   */
  inline const Aws::String& GetRouterOutputArn() const { return m_routerOutputArn; }
  template <typename RouterOutputArnT = Aws::String>
  void SetRouterOutputArn(RouterOutputArnT&& value) {
    m_routerOutputArnHasBeenSet = true;
    m_routerOutputArn = std::forward<RouterOutputArnT>(value);
  }
  template <typename RouterOutputArnT = Aws::String>
  TakeRouterInputResult& WithRouterOutputArn(RouterOutputArnT&& value) {
    SetRouterOutputArn(std::forward<RouterOutputArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the associated router output.</p>
   */
  inline const Aws::String& GetRouterOutputName() const { return m_routerOutputName; }
  template <typename RouterOutputNameT = Aws::String>
  void SetRouterOutputName(RouterOutputNameT&& value) {
    m_routerOutputNameHasBeenSet = true;
    m_routerOutputName = std::forward<RouterOutputNameT>(value);
  }
  template <typename RouterOutputNameT = Aws::String>
  TakeRouterInputResult& WithRouterOutputName(RouterOutputNameT&& value) {
    SetRouterOutputName(std::forward<RouterOutputNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the associated router input.</p>
   */
  inline const Aws::String& GetRouterInputArn() const { return m_routerInputArn; }
  template <typename RouterInputArnT = Aws::String>
  void SetRouterInputArn(RouterInputArnT&& value) {
    m_routerInputArnHasBeenSet = true;
    m_routerInputArn = std::forward<RouterInputArnT>(value);
  }
  template <typename RouterInputArnT = Aws::String>
  TakeRouterInputResult& WithRouterInputArn(RouterInputArnT&& value) {
    SetRouterInputArn(std::forward<RouterInputArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the associated router input.</p>
   */
  inline const Aws::String& GetRouterInputName() const { return m_routerInputName; }
  template <typename RouterInputNameT = Aws::String>
  void SetRouterInputName(RouterInputNameT&& value) {
    m_routerInputNameHasBeenSet = true;
    m_routerInputName = std::forward<RouterInputNameT>(value);
  }
  template <typename RouterInputNameT = Aws::String>
  TakeRouterInputResult& WithRouterInputName(RouterInputNameT&& value) {
    SetRouterInputName(std::forward<RouterInputNameT>(value));
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
  TakeRouterInputResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  RouterOutputRoutedState m_routedState{RouterOutputRoutedState::NOT_SET};

  Aws::String m_routerOutputArn;

  Aws::String m_routerOutputName;

  Aws::String m_routerInputArn;

  Aws::String m_routerInputName;

  Aws::String m_requestId;
  bool m_routedStateHasBeenSet = false;
  bool m_routerOutputArnHasBeenSet = false;
  bool m_routerOutputNameHasBeenSet = false;
  bool m_routerInputArnHasBeenSet = false;
  bool m_routerInputNameHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
