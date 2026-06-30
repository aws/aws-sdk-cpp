/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsCarouselCardContent.h>

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
 * <p>A carousel of 2 to 10 scrollable rich cards.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RcsCarousel">AWS
 * API Reference</a></p>
 */
class RcsCarousel {
 public:
  AWS_PINPOINTSMSVOICEV2_API RcsCarousel() = default;
  AWS_PINPOINTSMSVOICEV2_API RcsCarousel(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API RcsCarousel& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The width of cards in the carousel. Valid values are SMALL and MEDIUM.</p>
   */
  inline const Aws::String& GetCardWidth() const { return m_cardWidth; }
  inline bool CardWidthHasBeenSet() const { return m_cardWidthHasBeenSet; }
  template <typename CardWidthT = Aws::String>
  void SetCardWidth(CardWidthT&& value) {
    m_cardWidthHasBeenSet = true;
    m_cardWidth = std::forward<CardWidthT>(value);
  }
  template <typename CardWidthT = Aws::String>
  RcsCarousel& WithCardWidth(CardWidthT&& value) {
    SetCardWidth(std::forward<CardWidthT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of cards in the carousel. Minimum 2, maximum 10 cards.</p>
   */
  inline const Aws::Vector<RcsCarouselCardContent>& GetCardContents() const { return m_cardContents; }
  inline bool CardContentsHasBeenSet() const { return m_cardContentsHasBeenSet; }
  template <typename CardContentsT = Aws::Vector<RcsCarouselCardContent>>
  void SetCardContents(CardContentsT&& value) {
    m_cardContentsHasBeenSet = true;
    m_cardContents = std::forward<CardContentsT>(value);
  }
  template <typename CardContentsT = Aws::Vector<RcsCarouselCardContent>>
  RcsCarousel& WithCardContents(CardContentsT&& value) {
    SetCardContents(std::forward<CardContentsT>(value));
    return *this;
  }
  template <typename CardContentsT = RcsCarouselCardContent>
  RcsCarousel& AddCardContents(CardContentsT&& value) {
    m_cardContentsHasBeenSet = true;
    m_cardContents.emplace_back(std::forward<CardContentsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_cardWidth;

  Aws::Vector<RcsCarouselCardContent> m_cardContents;
  bool m_cardWidthHasBeenSet = false;
  bool m_cardContentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
