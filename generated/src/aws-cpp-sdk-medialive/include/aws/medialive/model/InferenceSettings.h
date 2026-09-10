/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AudioFeedInput.h>
#include <aws/medialive/model/EnrichmentMethod.h>

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
 * Configures Elemental Inference features in a channel.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InferenceSettings">AWS
 * API Reference</a></p>
 */
class InferenceSettings {
 public:
  AWS_MEDIALIVE_API InferenceSettings() = default;
  AWS_MEDIALIVE_API InferenceSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API InferenceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * The ARN of the feed resource that is associated with this channel. The feed is a
   * resource in the Elemental Inference service.
   */
  inline const Aws::String& GetFeedArn() const { return m_feedArn; }
  inline bool FeedArnHasBeenSet() const { return m_feedArnHasBeenSet; }
  template <typename FeedArnT = Aws::String>
  void SetFeedArn(FeedArnT&& value) {
    m_feedArnHasBeenSet = true;
    m_feedArn = std::forward<FeedArnT>(value);
  }
  template <typename FeedArnT = Aws::String>
  InferenceSettings& WithFeedArn(FeedArnT&& value) {
    SetFeedArn(std::forward<FeedArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * A list of audio feed inputs that map audio selectors in the channel to feed
   * inputs on the associated Elemental Inference feed.
   */
  inline const Aws::Vector<AudioFeedInput>& GetAudioFeedInputs() const { return m_audioFeedInputs; }
  inline bool AudioFeedInputsHasBeenSet() const { return m_audioFeedInputsHasBeenSet; }
  template <typename AudioFeedInputsT = Aws::Vector<AudioFeedInput>>
  void SetAudioFeedInputs(AudioFeedInputsT&& value) {
    m_audioFeedInputsHasBeenSet = true;
    m_audioFeedInputs = std::forward<AudioFeedInputsT>(value);
  }
  template <typename AudioFeedInputsT = Aws::Vector<AudioFeedInput>>
  InferenceSettings& WithAudioFeedInputs(AudioFeedInputsT&& value) {
    SetAudioFeedInputs(std::forward<AudioFeedInputsT>(value));
    return *this;
  }
  template <typename AudioFeedInputsT = AudioFeedInput>
  InferenceSettings& AddAudioFeedInputs(AudioFeedInputsT&& value) {
    m_audioFeedInputsHasBeenSet = true;
    m_audioFeedInputs.emplace_back(std::forward<AudioFeedInputsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * The set of Contextual Metadata Enrichment methods enabled for this channel. Each
   * method represents a specific way the channel will use the inference feed to
   * augment its output with contextual metadata. An empty array (or omitting the
   * field) disables enrichment. Order is not significant; duplicate values are not
   * permitted.
   */
  inline const Aws::Vector<EnrichmentMethod>& GetEnrichmentMethods() const { return m_enrichmentMethods; }
  inline bool EnrichmentMethodsHasBeenSet() const { return m_enrichmentMethodsHasBeenSet; }
  template <typename EnrichmentMethodsT = Aws::Vector<EnrichmentMethod>>
  void SetEnrichmentMethods(EnrichmentMethodsT&& value) {
    m_enrichmentMethodsHasBeenSet = true;
    m_enrichmentMethods = std::forward<EnrichmentMethodsT>(value);
  }
  template <typename EnrichmentMethodsT = Aws::Vector<EnrichmentMethod>>
  InferenceSettings& WithEnrichmentMethods(EnrichmentMethodsT&& value) {
    SetEnrichmentMethods(std::forward<EnrichmentMethodsT>(value));
    return *this;
  }
  inline InferenceSettings& AddEnrichmentMethods(EnrichmentMethod value) {
    m_enrichmentMethodsHasBeenSet = true;
    m_enrichmentMethods.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_feedArn;

  Aws::Vector<AudioFeedInput> m_audioFeedInputs;

  Aws::Vector<EnrichmentMethod> m_enrichmentMethods;
  bool m_feedArnHasBeenSet = false;
  bool m_audioFeedInputsHasBeenSet = false;
  bool m_enrichmentMethodsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
