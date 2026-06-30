/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsCardMedia.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsSuggestedAction.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 * <p>The content of a rich card, including title, description, media, and
 * card-level suggested actions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RcsCardContent">AWS
 * API Reference</a></p>
 */
class RcsCardContent {
 public:
  AWS_PINPOINTSMSVOICEV2_API RcsCardContent() = default;
  AWS_PINPOINTSMSVOICEV2_API RcsCardContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API RcsCardContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The title of the card. Maximum 200 characters.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  RcsCardContent& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description text of the card. Maximum 2000 characters.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  RcsCardContent& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The media content of the card, including the file URL, optional thumbnail,
   * and display height.</p>
   */
  inline const RcsCardMedia& GetMedia() const { return m_media; }
  inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }
  template <typename MediaT = RcsCardMedia>
  void SetMedia(MediaT&& value) {
    m_mediaHasBeenSet = true;
    m_media = std::forward<MediaT>(value);
  }
  template <typename MediaT = RcsCardMedia>
  RcsCardContent& WithMedia(MediaT&& value) {
    SetMedia(std::forward<MediaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Card-level suggested actions. Maximum 4 suggestions per card.</p>
   */
  inline const Aws::Vector<RcsSuggestedAction>& GetSuggestions() const { return m_suggestions; }
  inline bool SuggestionsHasBeenSet() const { return m_suggestionsHasBeenSet; }
  template <typename SuggestionsT = Aws::Vector<RcsSuggestedAction>>
  void SetSuggestions(SuggestionsT&& value) {
    m_suggestionsHasBeenSet = true;
    m_suggestions = std::forward<SuggestionsT>(value);
  }
  template <typename SuggestionsT = Aws::Vector<RcsSuggestedAction>>
  RcsCardContent& WithSuggestions(SuggestionsT&& value) {
    SetSuggestions(std::forward<SuggestionsT>(value));
    return *this;
  }
  template <typename SuggestionsT = RcsSuggestedAction>
  RcsCardContent& AddSuggestions(SuggestionsT&& value) {
    m_suggestionsHasBeenSet = true;
    m_suggestions.emplace_back(std::forward<SuggestionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_title;

  Aws::String m_description;

  RcsCardMedia m_media;

  Aws::Vector<RcsSuggestedAction> m_suggestions;
  bool m_titleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_mediaHasBeenSet = false;
  bool m_suggestionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
