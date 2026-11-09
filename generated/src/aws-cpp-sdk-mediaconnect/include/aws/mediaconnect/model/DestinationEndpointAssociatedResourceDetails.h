/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterInputDestinationEndpointAssociatedResourceDetails.h>
#include <aws/mediaconnect/model/StandardDestinationEndpointAssociatedResourceDetails.h>

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
 * <p>The details of the resource that is associated with a destination endpoint.
 * This is a union type, so exactly one of its members is set, depending on the
 * type of the destination endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DestinationEndpointAssociatedResourceDetails">AWS
 * API Reference</a></p>
 */
class DestinationEndpointAssociatedResourceDetails {
 public:
  AWS_MEDIACONNECT_API DestinationEndpointAssociatedResourceDetails() = default;
  AWS_MEDIACONNECT_API DestinationEndpointAssociatedResourceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API DestinationEndpointAssociatedResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The associated resource details for a standard destination endpoint.</p>
   */
  inline const StandardDestinationEndpointAssociatedResourceDetails& GetStandard() const { return m_standard; }
  inline bool StandardHasBeenSet() const { return m_standardHasBeenSet; }
  template <typename StandardT = StandardDestinationEndpointAssociatedResourceDetails>
  void SetStandard(StandardT&& value) {
    m_standardHasBeenSet = true;
    m_standard = std::forward<StandardT>(value);
  }
  template <typename StandardT = StandardDestinationEndpointAssociatedResourceDetails>
  DestinationEndpointAssociatedResourceDetails& WithStandard(StandardT&& value) {
    SetStandard(std::forward<StandardT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The associated resource details for a destination endpoint that represents a
   * router input.</p>
   */
  inline const RouterInputDestinationEndpointAssociatedResourceDetails& GetRouterInput() const { return m_routerInput; }
  inline bool RouterInputHasBeenSet() const { return m_routerInputHasBeenSet; }
  template <typename RouterInputT = RouterInputDestinationEndpointAssociatedResourceDetails>
  void SetRouterInput(RouterInputT&& value) {
    m_routerInputHasBeenSet = true;
    m_routerInput = std::forward<RouterInputT>(value);
  }
  template <typename RouterInputT = RouterInputDestinationEndpointAssociatedResourceDetails>
  DestinationEndpointAssociatedResourceDetails& WithRouterInput(RouterInputT&& value) {
    SetRouterInput(std::forward<RouterInputT>(value));
    return *this;
  }
  ///@}
 private:
  StandardDestinationEndpointAssociatedResourceDetails m_standard;

  RouterInputDestinationEndpointAssociatedResourceDetails m_routerInput;
  bool m_standardHasBeenSet = false;
  bool m_routerInputHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
