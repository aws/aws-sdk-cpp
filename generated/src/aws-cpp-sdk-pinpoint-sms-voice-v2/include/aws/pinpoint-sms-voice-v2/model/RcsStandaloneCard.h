/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsCardContent.h>

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
 * <p>A standalone rich card with media, title, description, and suggested
 * actions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RcsStandaloneCard">AWS
 * API Reference</a></p>
 */
class RcsStandaloneCard {
 public:
  AWS_PINPOINTSMSVOICEV2_API RcsStandaloneCard() = default;
  AWS_PINPOINTSMSVOICEV2_API RcsStandaloneCard(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API RcsStandaloneCard& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The orientation of the rich card. Valid values are HORIZONTAL and
   * VERTICAL.</p>
   */
  inline const Aws::String& GetCardOrientation() const { return m_cardOrientation; }
  inline bool CardOrientationHasBeenSet() const { return m_cardOrientationHasBeenSet; }
  template <typename CardOrientationT = Aws::String>
  void SetCardOrientation(CardOrientationT&& value) {
    m_cardOrientationHasBeenSet = true;
    m_cardOrientation = std::forward<CardOrientationT>(value);
  }
  template <typename CardOrientationT = Aws::String>
  RcsStandaloneCard& WithCardOrientation(CardOrientationT&& value) {
    SetCardOrientation(std::forward<CardOrientationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The alignment of the thumbnail image in a horizontal card. Valid values are
   * LEFT and RIGHT. Only applicable when CardOrientation is HORIZONTAL.</p>
   */
  inline const Aws::String& GetThumbnailImageAlignment() const { return m_thumbnailImageAlignment; }
  inline bool ThumbnailImageAlignmentHasBeenSet() const { return m_thumbnailImageAlignmentHasBeenSet; }
  template <typename ThumbnailImageAlignmentT = Aws::String>
  void SetThumbnailImageAlignment(ThumbnailImageAlignmentT&& value) {
    m_thumbnailImageAlignmentHasBeenSet = true;
    m_thumbnailImageAlignment = std::forward<ThumbnailImageAlignmentT>(value);
  }
  template <typename ThumbnailImageAlignmentT = Aws::String>
  RcsStandaloneCard& WithThumbnailImageAlignment(ThumbnailImageAlignmentT&& value) {
    SetThumbnailImageAlignment(std::forward<ThumbnailImageAlignmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content of the rich card, including title, description, media, and
   * card-level suggested actions.</p>
   */
  inline const RcsCardContent& GetCardContent() const { return m_cardContent; }
  inline bool CardContentHasBeenSet() const { return m_cardContentHasBeenSet; }
  template <typename CardContentT = RcsCardContent>
  void SetCardContent(CardContentT&& value) {
    m_cardContentHasBeenSet = true;
    m_cardContent = std::forward<CardContentT>(value);
  }
  template <typename CardContentT = RcsCardContent>
  RcsStandaloneCard& WithCardContent(CardContentT&& value) {
    SetCardContent(std::forward<CardContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_cardOrientation;

  Aws::String m_thumbnailImageAlignment;

  RcsCardContent m_cardContent;
  bool m_cardOrientationHasBeenSet = false;
  bool m_thumbnailImageAlignmentHasBeenSet = false;
  bool m_cardContentHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
