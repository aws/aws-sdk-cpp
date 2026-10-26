/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>The configuration settings for a source endpoint that represents a router
 * output.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterOutputSourceEndpointConfiguration">AWS
 * API Reference</a></p>
 */
class RouterOutputSourceEndpointConfiguration {
 public:
  AWS_MEDIACONNECT_API RouterOutputSourceEndpointConfiguration() = default;
  AWS_MEDIACONNECT_API RouterOutputSourceEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterOutputSourceEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the router output that the source endpoint
   * represents.</p>
   */
  inline const Aws::String& GetRouterOutputArn() const { return m_routerOutputArn; }
  inline bool RouterOutputArnHasBeenSet() const { return m_routerOutputArnHasBeenSet; }
  template <typename RouterOutputArnT = Aws::String>
  void SetRouterOutputArn(RouterOutputArnT&& value) {
    m_routerOutputArnHasBeenSet = true;
    m_routerOutputArn = std::forward<RouterOutputArnT>(value);
  }
  template <typename RouterOutputArnT = Aws::String>
  RouterOutputSourceEndpointConfiguration& WithRouterOutputArn(RouterOutputArnT&& value) {
    SetRouterOutputArn(std::forward<RouterOutputArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_routerOutputArn;
  bool m_routerOutputArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
