/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace MediaConnect {
namespace Model {

/**
 */
class TakeRouterInputRequest : public MediaConnectRequest {
 public:
  AWS_MEDIACONNECT_API TakeRouterInputRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "TakeRouterInput"; }

  AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the router output that you want to
   * associate with a router input.</p>
   */
  inline const Aws::String& GetRouterOutputArn() const { return m_routerOutputArn; }
  inline bool RouterOutputArnHasBeenSet() const { return m_routerOutputArnHasBeenSet; }
  template <typename RouterOutputArnT = Aws::String>
  void SetRouterOutputArn(RouterOutputArnT&& value) {
    m_routerOutputArnHasBeenSet = true;
    m_routerOutputArn = std::forward<RouterOutputArnT>(value);
  }
  template <typename RouterOutputArnT = Aws::String>
  TakeRouterInputRequest& WithRouterOutputArn(RouterOutputArnT&& value) {
    SetRouterOutputArn(std::forward<RouterOutputArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the router input that you want to associate
   * with a router output.</p>
   */
  inline const Aws::String& GetRouterInputArn() const { return m_routerInputArn; }
  inline bool RouterInputArnHasBeenSet() const { return m_routerInputArnHasBeenSet; }
  template <typename RouterInputArnT = Aws::String>
  void SetRouterInputArn(RouterInputArnT&& value) {
    m_routerInputArnHasBeenSet = true;
    m_routerInputArn = std::forward<RouterInputArnT>(value);
  }
  template <typename RouterInputArnT = Aws::String>
  TakeRouterInputRequest& WithRouterInputArn(RouterInputArnT&& value) {
    SetRouterInputArn(std::forward<RouterInputArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_routerOutputArn;
  bool m_routerOutputArnHasBeenSet = false;

  Aws::String m_routerInputArn;
  bool m_routerInputArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
