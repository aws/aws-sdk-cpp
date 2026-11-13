/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

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
 * <p>The switching configuration where the router output waits for a key frame on
 * the new router input before it switches.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/KeyFrameFabricSwitchingConfiguration">AWS
 * API Reference</a></p>
 */
class KeyFrameFabricSwitchingConfiguration {
 public:
  AWS_MEDIACONNECT_API KeyFrameFabricSwitchingConfiguration() = default;
  AWS_MEDIACONNECT_API KeyFrameFabricSwitchingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API KeyFrameFabricSwitchingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum time, in milliseconds, that the router output waits for a key
   * frame on the new input before it switches. Set this value to at least the GOP
   * (Group of Pictures) duration of your content, which your upstream encoder
   * determines. If the wait time is shorter than the GOP duration, MediaConnect
   * makes a best effort to switch without a key frame. The default is 3000.</p>
   */
  inline long long GetKeyFrameWaitMilliseconds() const { return m_keyFrameWaitMilliseconds; }
  inline bool KeyFrameWaitMillisecondsHasBeenSet() const { return m_keyFrameWaitMillisecondsHasBeenSet; }
  inline void SetKeyFrameWaitMilliseconds(long long value) {
    m_keyFrameWaitMillisecondsHasBeenSet = true;
    m_keyFrameWaitMilliseconds = value;
  }
  inline KeyFrameFabricSwitchingConfiguration& WithKeyFrameWaitMilliseconds(long long value) {
    SetKeyFrameWaitMilliseconds(value);
    return *this;
  }
  ///@}
 private:
  long long m_keyFrameWaitMilliseconds{0};
  bool m_keyFrameWaitMillisecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
