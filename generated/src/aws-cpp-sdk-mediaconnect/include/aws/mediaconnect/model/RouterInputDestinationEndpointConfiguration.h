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
 * <p>The configuration settings for a destination endpoint that represents a
 * router input.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterInputDestinationEndpointConfiguration">AWS
 * API Reference</a></p>
 */
class RouterInputDestinationEndpointConfiguration {
 public:
  AWS_MEDIACONNECT_API RouterInputDestinationEndpointConfiguration() = default;
  AWS_MEDIACONNECT_API RouterInputDestinationEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterInputDestinationEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the router input that the destination
   * endpoint represents.</p>
   */
  inline const Aws::String& GetRouterInputArn() const { return m_routerInputArn; }
  inline bool RouterInputArnHasBeenSet() const { return m_routerInputArnHasBeenSet; }
  template <typename RouterInputArnT = Aws::String>
  void SetRouterInputArn(RouterInputArnT&& value) {
    m_routerInputArnHasBeenSet = true;
    m_routerInputArn = std::forward<RouterInputArnT>(value);
  }
  template <typename RouterInputArnT = Aws::String>
  RouterInputDestinationEndpointConfiguration& WithRouterInputArn(RouterInputArnT&& value) {
    SetRouterInputArn(std::forward<RouterInputArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_routerInputArn;
  bool m_routerInputArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
