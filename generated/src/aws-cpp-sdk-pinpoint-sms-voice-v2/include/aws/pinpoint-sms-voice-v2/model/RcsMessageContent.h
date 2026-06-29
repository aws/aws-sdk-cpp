/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsContent.h>
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
 * <p>The content of an RCS message, containing the message body (text, file, rich
 * card, or carousel) and optional message-level suggested actions.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RcsMessageContent">AWS
 * API Reference</a></p>
 */
class RcsMessageContent {
 public:
  AWS_PINPOINTSMSVOICEV2_API RcsMessageContent() = default;
  AWS_PINPOINTSMSVOICEV2_API RcsMessageContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API RcsMessageContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The content of the RCS message. Exactly one content type must be specified:
   * TextMessage, FileMessage, RichCard, or Carousel.</p>
   */
  inline const RcsContent& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = RcsContent>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = RcsContent>
  RcsMessageContent& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Message-level suggested actions displayed to the recipient. Maximum 11
   * suggestions per message.</p>
   */
  inline const Aws::Vector<RcsSuggestedAction>& GetSuggestions() const { return m_suggestions; }
  inline bool SuggestionsHasBeenSet() const { return m_suggestionsHasBeenSet; }
  template <typename SuggestionsT = Aws::Vector<RcsSuggestedAction>>
  void SetSuggestions(SuggestionsT&& value) {
    m_suggestionsHasBeenSet = true;
    m_suggestions = std::forward<SuggestionsT>(value);
  }
  template <typename SuggestionsT = Aws::Vector<RcsSuggestedAction>>
  RcsMessageContent& WithSuggestions(SuggestionsT&& value) {
    SetSuggestions(std::forward<SuggestionsT>(value));
    return *this;
  }
  template <typename SuggestionsT = RcsSuggestedAction>
  RcsMessageContent& AddSuggestions(SuggestionsT&& value) {
    m_suggestionsHasBeenSet = true;
    m_suggestions.emplace_back(std::forward<SuggestionsT>(value));
    return *this;
  }
  ///@}
 private:
  RcsContent m_content;

  Aws::Vector<RcsSuggestedAction> m_suggestions;
  bool m_contentHasBeenSet = false;
  bool m_suggestionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
