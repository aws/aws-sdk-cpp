/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterInputDestinationEndpointConfiguration.h>
#include <aws/mediaconnect/model/StandardDestinationEndpointConfiguration.h>

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
 * <p>The configuration settings for a destination endpoint. This is a union type,
 * so exactly one of its members is set, depending on the type of the destination
 * endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DestinationEndpointConfiguration">AWS
 * API Reference</a></p>
 */
class DestinationEndpointConfiguration {
 public:
  AWS_MEDIACONNECT_API DestinationEndpointConfiguration() = default;
  AWS_MEDIACONNECT_API DestinationEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API DestinationEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration settings for a standard destination endpoint, which
   * represents an external destination.</p>
   */
  inline const StandardDestinationEndpointConfiguration& GetStandard() const { return m_standard; }
  inline bool StandardHasBeenSet() const { return m_standardHasBeenSet; }
  template <typename StandardT = StandardDestinationEndpointConfiguration>
  void SetStandard(StandardT&& value) {
    m_standardHasBeenSet = true;
    m_standard = std::forward<StandardT>(value);
  }
  template <typename StandardT = StandardDestinationEndpointConfiguration>
  DestinationEndpointConfiguration& WithStandard(StandardT&& value) {
    SetStandard(std::forward<StandardT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for a destination endpoint that represents a
   * router input.</p>
   */
  inline const RouterInputDestinationEndpointConfiguration& GetRouterInput() const { return m_routerInput; }
  inline bool RouterInputHasBeenSet() const { return m_routerInputHasBeenSet; }
  template <typename RouterInputT = RouterInputDestinationEndpointConfiguration>
  void SetRouterInput(RouterInputT&& value) {
    m_routerInputHasBeenSet = true;
    m_routerInput = std::forward<RouterInputT>(value);
  }
  template <typename RouterInputT = RouterInputDestinationEndpointConfiguration>
  DestinationEndpointConfiguration& WithRouterInput(RouterInputT&& value) {
    SetRouterInput(std::forward<RouterInputT>(value));
    return *this;
  }
  ///@}
 private:
  StandardDestinationEndpointConfiguration m_standard;

  RouterInputDestinationEndpointConfiguration m_routerInput;
  bool m_standardHasBeenSet = false;
  bool m_routerInputHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
