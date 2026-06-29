/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsCarousel.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsFileMessage.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsStandaloneCard.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsTextMessage.h>

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
 * <p>The message body of an RCS message. Exactly one content type must be
 * specified.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RcsContent">AWS
 * API Reference</a></p>
 */
class RcsContent {
 public:
  AWS_PINPOINTSMSVOICEV2_API RcsContent() = default;
  AWS_PINPOINTSMSVOICEV2_API RcsContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API RcsContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A plain text RCS message.</p>
   */
  inline const RcsTextMessage& GetTextMessage() const { return m_textMessage; }
  inline bool TextMessageHasBeenSet() const { return m_textMessageHasBeenSet; }
  template <typename TextMessageT = RcsTextMessage>
  void SetTextMessage(TextMessageT&& value) {
    m_textMessageHasBeenSet = true;
    m_textMessage = std::forward<TextMessageT>(value);
  }
  template <typename TextMessageT = RcsTextMessage>
  RcsContent& WithTextMessage(TextMessageT&& value) {
    SetTextMessage(std::forward<TextMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A file message containing a media file (image, video, audio, or PDF) with an
   * optional thumbnail.</p>
   */
  inline const RcsFileMessage& GetFileMessage() const { return m_fileMessage; }
  inline bool FileMessageHasBeenSet() const { return m_fileMessageHasBeenSet; }
  template <typename FileMessageT = RcsFileMessage>
  void SetFileMessage(FileMessageT&& value) {
    m_fileMessageHasBeenSet = true;
    m_fileMessage = std::forward<FileMessageT>(value);
  }
  template <typename FileMessageT = RcsFileMessage>
  RcsContent& WithFileMessage(FileMessageT&& value) {
    SetFileMessage(std::forward<FileMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A standalone rich card with media, title, description, and suggested
   * actions.</p>
   */
  inline const RcsStandaloneCard& GetRichCard() const { return m_richCard; }
  inline bool RichCardHasBeenSet() const { return m_richCardHasBeenSet; }
  template <typename RichCardT = RcsStandaloneCard>
  void SetRichCard(RichCardT&& value) {
    m_richCardHasBeenSet = true;
    m_richCard = std::forward<RichCardT>(value);
  }
  template <typename RichCardT = RcsStandaloneCard>
  RcsContent& WithRichCard(RichCardT&& value) {
    SetRichCard(std::forward<RichCardT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A carousel of 2 to 10 scrollable cards, each with media, title, description,
   * and suggested actions.</p>
   */
  inline const RcsCarousel& GetCarousel() const { return m_carousel; }
  inline bool CarouselHasBeenSet() const { return m_carouselHasBeenSet; }
  template <typename CarouselT = RcsCarousel>
  void SetCarousel(CarouselT&& value) {
    m_carouselHasBeenSet = true;
    m_carousel = std::forward<CarouselT>(value);
  }
  template <typename CarouselT = RcsCarousel>
  RcsContent& WithCarousel(CarouselT&& value) {
    SetCarousel(std::forward<CarouselT>(value));
    return *this;
  }
  ///@}
 private:
  RcsTextMessage m_textMessage;

  RcsFileMessage m_fileMessage;

  RcsStandaloneCard m_richCard;

  RcsCarousel m_carousel;
  bool m_textMessageHasBeenSet = false;
  bool m_fileMessageHasBeenSet = false;
  bool m_richCardHasBeenSet = false;
  bool m_carouselHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
