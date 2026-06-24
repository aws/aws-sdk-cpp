/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/BlackFramesConfiguration.h>
#include <aws/mediaconnect/model/FrozenFramesConfiguration.h>
#include <aws/mediaconnect/model/SilentAudioConfiguration.h>

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
 * <p>Configures the content quality analysis features for the router
 * input.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ContentQualityAnalysisFeatureConfiguration">AWS
 * API Reference</a></p>
 */
class ContentQualityAnalysisFeatureConfiguration {
 public:
  AWS_MEDIACONNECT_API ContentQualityAnalysisFeatureConfiguration() = default;
  AWS_MEDIACONNECT_API ContentQualityAnalysisFeatureConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API ContentQualityAnalysisFeatureConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Settings for black frames detection.</p>
   */
  inline const BlackFramesConfiguration& GetBlackFrames() const { return m_blackFrames; }
  inline bool BlackFramesHasBeenSet() const { return m_blackFramesHasBeenSet; }
  template <typename BlackFramesT = BlackFramesConfiguration>
  void SetBlackFrames(BlackFramesT&& value) {
    m_blackFramesHasBeenSet = true;
    m_blackFrames = std::forward<BlackFramesT>(value);
  }
  template <typename BlackFramesT = BlackFramesConfiguration>
  ContentQualityAnalysisFeatureConfiguration& WithBlackFrames(BlackFramesT&& value) {
    SetBlackFrames(std::forward<BlackFramesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Settings for frozen frames detection.</p>
   */
  inline const FrozenFramesConfiguration& GetFrozenFrames() const { return m_frozenFrames; }
  inline bool FrozenFramesHasBeenSet() const { return m_frozenFramesHasBeenSet; }
  template <typename FrozenFramesT = FrozenFramesConfiguration>
  void SetFrozenFrames(FrozenFramesT&& value) {
    m_frozenFramesHasBeenSet = true;
    m_frozenFrames = std::forward<FrozenFramesT>(value);
  }
  template <typename FrozenFramesT = FrozenFramesConfiguration>
  ContentQualityAnalysisFeatureConfiguration& WithFrozenFrames(FrozenFramesT&& value) {
    SetFrozenFrames(std::forward<FrozenFramesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Settings for silent audio detection.</p>
   */
  inline const SilentAudioConfiguration& GetSilentAudio() const { return m_silentAudio; }
  inline bool SilentAudioHasBeenSet() const { return m_silentAudioHasBeenSet; }
  template <typename SilentAudioT = SilentAudioConfiguration>
  void SetSilentAudio(SilentAudioT&& value) {
    m_silentAudioHasBeenSet = true;
    m_silentAudio = std::forward<SilentAudioT>(value);
  }
  template <typename SilentAudioT = SilentAudioConfiguration>
  ContentQualityAnalysisFeatureConfiguration& WithSilentAudio(SilentAudioT&& value) {
    SetSilentAudio(std::forward<SilentAudioT>(value));
    return *this;
  }
  ///@}
 private:
  BlackFramesConfiguration m_blackFrames;

  FrozenFramesConfiguration m_frozenFrames;

  SilentAudioConfiguration m_silentAudio;
  bool m_blackFramesHasBeenSet = false;
  bool m_frozenFramesHasBeenSet = false;
  bool m_silentAudioHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
