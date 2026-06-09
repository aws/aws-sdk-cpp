/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/CaptionSynchronizationMode.h>

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
 * Smart Subtitle Source Settings<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/SmartSubtitleSourceSettings">AWS
 * API Reference</a></p>
 */
class SmartSubtitleSourceSettings {
 public:
  AWS_MEDIALIVE_API SmartSubtitleSourceSettings() = default;
  AWS_MEDIALIVE_API SmartSubtitleSourceSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API SmartSubtitleSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Controls whether MediaLive delays video to synchronize captions with audio and
   * video output.
   */
  inline CaptionSynchronizationMode GetCaptionSynchronizationMode() const { return m_captionSynchronizationMode; }
  inline bool CaptionSynchronizationModeHasBeenSet() const { return m_captionSynchronizationModeHasBeenSet; }
  inline void SetCaptionSynchronizationMode(CaptionSynchronizationMode value) {
    m_captionSynchronizationModeHasBeenSet = true;
    m_captionSynchronizationMode = value;
  }
  inline SmartSubtitleSourceSettings& WithCaptionSynchronizationMode(CaptionSynchronizationMode value) {
    SetCaptionSynchronizationMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The name of the Elemental Inference feed output that supplies subtitle input
   * into this caption selector.
   */
  inline const Aws::String& GetInferenceFeedOutput() const { return m_inferenceFeedOutput; }
  inline bool InferenceFeedOutputHasBeenSet() const { return m_inferenceFeedOutputHasBeenSet; }
  template <typename InferenceFeedOutputT = Aws::String>
  void SetInferenceFeedOutput(InferenceFeedOutputT&& value) {
    m_inferenceFeedOutputHasBeenSet = true;
    m_inferenceFeedOutput = std::forward<InferenceFeedOutputT>(value);
  }
  template <typename InferenceFeedOutputT = Aws::String>
  SmartSubtitleSourceSettings& WithInferenceFeedOutput(InferenceFeedOutputT&& value) {
    SetInferenceFeedOutput(std::forward<InferenceFeedOutputT>(value));
    return *this;
  }
  ///@}
 private:
  CaptionSynchronizationMode m_captionSynchronizationMode{CaptionSynchronizationMode::NOT_SET};

  Aws::String m_inferenceFeedOutput;
  bool m_captionSynchronizationModeHasBeenSet = false;
  bool m_inferenceFeedOutputHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
