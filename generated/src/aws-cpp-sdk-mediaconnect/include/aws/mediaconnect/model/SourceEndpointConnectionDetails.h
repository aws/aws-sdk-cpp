/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterOutputSourceEndpointConnectionDetails.h>
#include <aws/mediaconnect/model/StandardSourceEndpointConnectionDetails.h>

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
 * <p>The connection details for a source endpoint. After the source endpoint
 * connects to a destination endpoint, MediaConnect populates these details to
 * describe the connected destination and how the source delivers content to it.
 * This is a union type, so exactly one of its members is set, depending on the
 * source endpoint type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SourceEndpointConnectionDetails">AWS
 * API Reference</a></p>
 */
class SourceEndpointConnectionDetails {
 public:
  AWS_MEDIACONNECT_API SourceEndpointConnectionDetails() = default;
  AWS_MEDIACONNECT_API SourceEndpointConnectionDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API SourceEndpointConnectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The connection details for a standard source endpoint.</p>
   */
  inline const StandardSourceEndpointConnectionDetails& GetStandard() const { return m_standard; }
  inline bool StandardHasBeenSet() const { return m_standardHasBeenSet; }
  template <typename StandardT = StandardSourceEndpointConnectionDetails>
  void SetStandard(StandardT&& value) {
    m_standardHasBeenSet = true;
    m_standard = std::forward<StandardT>(value);
  }
  template <typename StandardT = StandardSourceEndpointConnectionDetails>
  SourceEndpointConnectionDetails& WithStandard(StandardT&& value) {
    SetStandard(std::forward<StandardT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection details for a source endpoint that represents a router
   * output.</p>
   */
  inline const RouterOutputSourceEndpointConnectionDetails& GetRouterOutput() const { return m_routerOutput; }
  inline bool RouterOutputHasBeenSet() const { return m_routerOutputHasBeenSet; }
  template <typename RouterOutputT = RouterOutputSourceEndpointConnectionDetails>
  void SetRouterOutput(RouterOutputT&& value) {
    m_routerOutputHasBeenSet = true;
    m_routerOutput = std::forward<RouterOutputT>(value);
  }
  template <typename RouterOutputT = RouterOutputSourceEndpointConnectionDetails>
  SourceEndpointConnectionDetails& WithRouterOutput(RouterOutputT&& value) {
    SetRouterOutput(std::forward<RouterOutputT>(value));
    return *this;
  }
  ///@}
 private:
  StandardSourceEndpointConnectionDetails m_standard;

  RouterOutputSourceEndpointConnectionDetails m_routerOutput;
  bool m_standardHasBeenSet = false;
  bool m_routerOutputHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
