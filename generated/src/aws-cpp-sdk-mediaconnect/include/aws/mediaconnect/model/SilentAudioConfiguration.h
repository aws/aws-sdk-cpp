/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ContentQualityAnalysisState.h>

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
 * <p>Detects silent audio in the router input's source content and reports it
 * through a CloudWatch metric, an EventBridge event, and a router input
 * message.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SilentAudioConfiguration">AWS
 * API Reference</a></p>
 */
class SilentAudioConfiguration {
 public:
  AWS_MEDIACONNECT_API SilentAudioConfiguration() = default;
  AWS_MEDIACONNECT_API SilentAudioConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API SilentAudioConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates whether silent audio detection is enabled or disabled.</p>
   */
  inline ContentQualityAnalysisState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ContentQualityAnalysisState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline SilentAudioConfiguration& WithState(ContentQualityAnalysisState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of consecutive seconds of silence that MediaConnect must detect
   * before it reports an issue.</p>
   */
  inline int GetThresholdSeconds() const { return m_thresholdSeconds; }
  inline bool ThresholdSecondsHasBeenSet() const { return m_thresholdSecondsHasBeenSet; }
  inline void SetThresholdSeconds(int value) {
    m_thresholdSecondsHasBeenSet = true;
    m_thresholdSeconds = value;
  }
  inline SilentAudioConfiguration& WithThresholdSeconds(int value) {
    SetThresholdSeconds(value);
    return *this;
  }
  ///@}
 private:
  ContentQualityAnalysisState m_state{ContentQualityAnalysisState::NOT_SET};

  int m_thresholdSeconds{0};
  bool m_stateHasBeenSet = false;
  bool m_thresholdSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
