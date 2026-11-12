/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ImmediateFabricSwitchingConfiguration.h>
#include <aws/mediaconnect/model/KeyFrameFabricSwitchingConfiguration.h>

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
 * <p>The configuration settings for switching between router inputs.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/FabricSwitchingConfiguration">AWS
 * API Reference</a></p>
 */
class FabricSwitchingConfiguration {
 public:
  AWS_MEDIACONNECT_API FabricSwitchingConfiguration() = default;
  AWS_MEDIACONNECT_API FabricSwitchingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API FabricSwitchingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The switching configuration where the router output switches to the new
   * router input immediately.</p>
   */
  inline const ImmediateFabricSwitchingConfiguration& GetImmediate() const { return m_immediate; }
  inline bool ImmediateHasBeenSet() const { return m_immediateHasBeenSet; }
  template <typename ImmediateT = ImmediateFabricSwitchingConfiguration>
  void SetImmediate(ImmediateT&& value) {
    m_immediateHasBeenSet = true;
    m_immediate = std::forward<ImmediateT>(value);
  }
  template <typename ImmediateT = ImmediateFabricSwitchingConfiguration>
  FabricSwitchingConfiguration& WithImmediate(ImmediateT&& value) {
    SetImmediate(std::forward<ImmediateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The switching configuration where the router output waits for a key frame on
   * the new router input before it switches.</p>
   */
  inline const KeyFrameFabricSwitchingConfiguration& GetKeyFrame() const { return m_keyFrame; }
  inline bool KeyFrameHasBeenSet() const { return m_keyFrameHasBeenSet; }
  template <typename KeyFrameT = KeyFrameFabricSwitchingConfiguration>
  void SetKeyFrame(KeyFrameT&& value) {
    m_keyFrameHasBeenSet = true;
    m_keyFrame = std::forward<KeyFrameT>(value);
  }
  template <typename KeyFrameT = KeyFrameFabricSwitchingConfiguration>
  FabricSwitchingConfiguration& WithKeyFrame(KeyFrameT&& value) {
    SetKeyFrame(std::forward<KeyFrameT>(value));
    return *this;
  }
  ///@}
 private:
  ImmediateFabricSwitchingConfiguration m_immediate;

  KeyFrameFabricSwitchingConfiguration m_keyFrame;
  bool m_immediateHasBeenSet = false;
  bool m_keyFrameHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
