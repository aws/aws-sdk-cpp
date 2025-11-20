/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * When using MediaConnect Router as the source of a MediaLive input there's a
 * special handoff that occurs when a router output
is created. This group of
 * settings is set on your behalf by the MediaConnect Router service using this set
 * of settings. This
setting object can only by used by that service.<p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/SpecialRouterSettings">AWS
 * API Reference</a></p>
 */
class SpecialRouterSettings {
 public:
  AWS_MEDIALIVE_API SpecialRouterSettings() = default;
  AWS_MEDIALIVE_API SpecialRouterSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API SpecialRouterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * This is the arn of the MediaConnect Router resource being associated with the
   * MediaLive Input.
   */
  inline const Aws::String& GetRouterArn() const { return m_routerArn; }
  inline bool RouterArnHasBeenSet() const { return m_routerArnHasBeenSet; }
  template <typename RouterArnT = Aws::String>
  void SetRouterArn(RouterArnT&& value) {
    m_routerArnHasBeenSet = true;
    m_routerArn = std::forward<RouterArnT>(value);
  }
  template <typename RouterArnT = Aws::String>
  SpecialRouterSettings& WithRouterArn(RouterArnT&& value) {
    SetRouterArn(std::forward<RouterArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_routerArn;
  bool m_routerArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
