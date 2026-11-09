/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterOutputSourceEndpointConfiguration.h>
#include <aws/mediaconnect/model/StandardSourceEndpointConfiguration.h>

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
 * <p>The configuration settings for a source endpoint. This is a union type, so
 * exactly one of its members is set, depending on the type of the source
 * endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SourceEndpointConfiguration">AWS
 * API Reference</a></p>
 */
class SourceEndpointConfiguration {
 public:
  AWS_MEDIACONNECT_API SourceEndpointConfiguration() = default;
  AWS_MEDIACONNECT_API SourceEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API SourceEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration settings for a standard source endpoint, which represents
   * an external source.</p>
   */
  inline const StandardSourceEndpointConfiguration& GetStandard() const { return m_standard; }
  inline bool StandardHasBeenSet() const { return m_standardHasBeenSet; }
  template <typename StandardT = StandardSourceEndpointConfiguration>
  void SetStandard(StandardT&& value) {
    m_standardHasBeenSet = true;
    m_standard = std::forward<StandardT>(value);
  }
  template <typename StandardT = StandardSourceEndpointConfiguration>
  SourceEndpointConfiguration& WithStandard(StandardT&& value) {
    SetStandard(std::forward<StandardT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for a source endpoint that represents a router
   * output.</p>
   */
  inline const RouterOutputSourceEndpointConfiguration& GetRouterOutput() const { return m_routerOutput; }
  inline bool RouterOutputHasBeenSet() const { return m_routerOutputHasBeenSet; }
  template <typename RouterOutputT = RouterOutputSourceEndpointConfiguration>
  void SetRouterOutput(RouterOutputT&& value) {
    m_routerOutputHasBeenSet = true;
    m_routerOutput = std::forward<RouterOutputT>(value);
  }
  template <typename RouterOutputT = RouterOutputSourceEndpointConfiguration>
  SourceEndpointConfiguration& WithRouterOutput(RouterOutputT&& value) {
    SetRouterOutput(std::forward<RouterOutputT>(value));
    return *this;
  }
  ///@}
 private:
  StandardSourceEndpointConfiguration m_standard;

  RouterOutputSourceEndpointConfiguration m_routerOutput;
  bool m_standardHasBeenSet = false;
  bool m_routerOutputHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
