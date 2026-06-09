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
 * Maps an audio selector in the channel to a feed input on the associated
 * Elemental Inference feed.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioFeedInput">AWS
 * API Reference</a></p>
 */
class AudioFeedInput {
 public:
  AWS_MEDIALIVE_API AudioFeedInput() = default;
  AWS_MEDIALIVE_API AudioFeedInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API AudioFeedInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * The name of the audio selector in the channel that will be sent to the Elemental
   * Inference feed input.
   */
  inline const Aws::String& GetAudioSelectorName() const { return m_audioSelectorName; }
  inline bool AudioSelectorNameHasBeenSet() const { return m_audioSelectorNameHasBeenSet; }
  template <typename AudioSelectorNameT = Aws::String>
  void SetAudioSelectorName(AudioSelectorNameT&& value) {
    m_audioSelectorNameHasBeenSet = true;
    m_audioSelectorName = std::forward<AudioSelectorNameT>(value);
  }
  template <typename AudioSelectorNameT = Aws::String>
  AudioFeedInput& WithAudioSelectorName(AudioSelectorNameT&& value) {
    SetAudioSelectorName(std::forward<AudioSelectorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * The name of the feed input on the Elemental Inference feed that will receive the
   * audio from the specified audio selector.
   */
  inline const Aws::String& GetFeedInput() const { return m_feedInput; }
  inline bool FeedInputHasBeenSet() const { return m_feedInputHasBeenSet; }
  template <typename FeedInputT = Aws::String>
  void SetFeedInput(FeedInputT&& value) {
    m_feedInputHasBeenSet = true;
    m_feedInput = std::forward<FeedInputT>(value);
  }
  template <typename FeedInputT = Aws::String>
  AudioFeedInput& WithFeedInput(FeedInputT&& value) {
    SetFeedInput(std::forward<FeedInputT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_audioSelectorName;

  Aws::String m_feedInput;
  bool m_audioSelectorNameHasBeenSet = false;
  bool m_feedInputHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
