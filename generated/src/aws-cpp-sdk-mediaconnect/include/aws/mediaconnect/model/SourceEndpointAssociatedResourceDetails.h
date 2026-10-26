/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterOutputSourceEndpointAssociatedResourceDetails.h>
#include <aws/mediaconnect/model/StandardSourceEndpointAssociatedResourceDetails.h>

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
 * <p>The details of the resource that is associated with a source endpoint. This
 * is a union type, so exactly one of its members is set, depending on the type of
 * the source endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SourceEndpointAssociatedResourceDetails">AWS
 * API Reference</a></p>
 */
class SourceEndpointAssociatedResourceDetails {
 public:
  AWS_MEDIACONNECT_API SourceEndpointAssociatedResourceDetails() = default;
  AWS_MEDIACONNECT_API SourceEndpointAssociatedResourceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API SourceEndpointAssociatedResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The associated resource details for a standard source endpoint.</p>
   */
  inline const StandardSourceEndpointAssociatedResourceDetails& GetStandard() const { return m_standard; }
  inline bool StandardHasBeenSet() const { return m_standardHasBeenSet; }
  template <typename StandardT = StandardSourceEndpointAssociatedResourceDetails>
  void SetStandard(StandardT&& value) {
    m_standardHasBeenSet = true;
    m_standard = std::forward<StandardT>(value);
  }
  template <typename StandardT = StandardSourceEndpointAssociatedResourceDetails>
  SourceEndpointAssociatedResourceDetails& WithStandard(StandardT&& value) {
    SetStandard(std::forward<StandardT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The associated resource details for a source endpoint that represents a
   * router output.</p>
   */
  inline const RouterOutputSourceEndpointAssociatedResourceDetails& GetRouterOutput() const { return m_routerOutput; }
  inline bool RouterOutputHasBeenSet() const { return m_routerOutputHasBeenSet; }
  template <typename RouterOutputT = RouterOutputSourceEndpointAssociatedResourceDetails>
  void SetRouterOutput(RouterOutputT&& value) {
    m_routerOutputHasBeenSet = true;
    m_routerOutput = std::forward<RouterOutputT>(value);
  }
  template <typename RouterOutputT = RouterOutputSourceEndpointAssociatedResourceDetails>
  SourceEndpointAssociatedResourceDetails& WithRouterOutput(RouterOutputT&& value) {
    SetRouterOutput(std::forward<RouterOutputT>(value));
    return *this;
  }
  ///@}
 private:
  StandardSourceEndpointAssociatedResourceDetails m_standard;

  RouterOutputSourceEndpointAssociatedResourceDetails m_routerOutput;
  bool m_standardHasBeenSet = false;
  bool m_routerOutputHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
