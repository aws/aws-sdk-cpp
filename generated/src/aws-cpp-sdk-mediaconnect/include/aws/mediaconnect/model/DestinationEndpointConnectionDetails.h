/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterInputDestinationEndpointConnectionDetails.h>
#include <aws/mediaconnect/model/StandardDestinationEndpointConnectionDetails.h>

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
 * <p>The connection details for a destination endpoint. After the destination
 * endpoint connects to a source endpoint, MediaConnect populates these details to
 * describe the connected source. This is a union type, so exactly one of its
 * members is set, depending on the destination endpoint type.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DestinationEndpointConnectionDetails">AWS
 * API Reference</a></p>
 */
class DestinationEndpointConnectionDetails {
 public:
  AWS_MEDIACONNECT_API DestinationEndpointConnectionDetails() = default;
  AWS_MEDIACONNECT_API DestinationEndpointConnectionDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API DestinationEndpointConnectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The connection details for a standard destination endpoint.</p>
   */
  inline const StandardDestinationEndpointConnectionDetails& GetStandard() const { return m_standard; }
  inline bool StandardHasBeenSet() const { return m_standardHasBeenSet; }
  template <typename StandardT = StandardDestinationEndpointConnectionDetails>
  void SetStandard(StandardT&& value) {
    m_standardHasBeenSet = true;
    m_standard = std::forward<StandardT>(value);
  }
  template <typename StandardT = StandardDestinationEndpointConnectionDetails>
  DestinationEndpointConnectionDetails& WithStandard(StandardT&& value) {
    SetStandard(std::forward<StandardT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection details for a destination endpoint that represents a router
   * input.</p>
   */
  inline const RouterInputDestinationEndpointConnectionDetails& GetRouterInput() const { return m_routerInput; }
  inline bool RouterInputHasBeenSet() const { return m_routerInputHasBeenSet; }
  template <typename RouterInputT = RouterInputDestinationEndpointConnectionDetails>
  void SetRouterInput(RouterInputT&& value) {
    m_routerInputHasBeenSet = true;
    m_routerInput = std::forward<RouterInputT>(value);
  }
  template <typename RouterInputT = RouterInputDestinationEndpointConnectionDetails>
  DestinationEndpointConnectionDetails& WithRouterInput(RouterInputT&& value) {
    SetRouterInput(std::forward<RouterInputT>(value));
    return *this;
  }
  ///@}
 private:
  StandardDestinationEndpointConnectionDetails m_standard;

  RouterInputDestinationEndpointConnectionDetails m_routerInput;
  bool m_standardHasBeenSet = false;
  bool m_routerInputHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
