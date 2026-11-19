/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/ImageFormat.h>
#include <aws/partnercentral-marketing/model/LayoutPreview.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralMarketing {
namespace Model {

/**
 * <p>An image field's constraints and default.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/ImageFieldType">AWS
 * API Reference</a></p>
 */
class ImageFieldType {
 public:
  AWS_PARTNERCENTRALMARKETING_API ImageFieldType() = default;
  AWS_PARTNERCENTRALMARKETING_API ImageFieldType(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API ImageFieldType& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Maximum accepted file size in bytes.</p>
   */
  inline long long GetMaxSizeBytes() const { return m_maxSizeBytes; }
  inline bool MaxSizeBytesHasBeenSet() const { return m_maxSizeBytesHasBeenSet; }
  inline void SetMaxSizeBytes(long long value) {
    m_maxSizeBytesHasBeenSet = true;
    m_maxSizeBytes = value;
  }
  inline ImageFieldType& WithMaxSizeBytes(long long value) {
    SetMaxSizeBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Accepted image formats.</p>
   */
  inline const Aws::Vector<ImageFormat>& GetAllowedFormats() const { return m_allowedFormats; }
  inline bool AllowedFormatsHasBeenSet() const { return m_allowedFormatsHasBeenSet; }
  template <typename AllowedFormatsT = Aws::Vector<ImageFormat>>
  void SetAllowedFormats(AllowedFormatsT&& value) {
    m_allowedFormatsHasBeenSet = true;
    m_allowedFormats = std::forward<AllowedFormatsT>(value);
  }
  template <typename AllowedFormatsT = Aws::Vector<ImageFormat>>
  ImageFieldType& WithAllowedFormats(AllowedFormatsT&& value) {
    SetAllowedFormats(std::forward<AllowedFormatsT>(value));
    return *this;
  }
  inline ImageFieldType& AddAllowedFormats(ImageFormat value) {
    m_allowedFormatsHasBeenSet = true;
    m_allowedFormats.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS-authored image the asset uses until the partner sets one: shown in
   * previews and published in an empty slot of an email, landing page, banner ad or
   * social post. It fills a required image field. A document leaves an empty image
   * slot blank.</p>
   */
  inline const LayoutPreview& GetDefaultValue() const { return m_defaultValue; }
  inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
  template <typename DefaultValueT = LayoutPreview>
  void SetDefaultValue(DefaultValueT&& value) {
    m_defaultValueHasBeenSet = true;
    m_defaultValue = std::forward<DefaultValueT>(value);
  }
  template <typename DefaultValueT = LayoutPreview>
  ImageFieldType& WithDefaultValue(DefaultValueT&& value) {
    SetDefaultValue(std::forward<DefaultValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image size, in pixels, that fills this slot and prints sharply, for
   * example 1920 x 301 for a full-width header. Shown to the partner as
   * &quot;Recommended: W x H px&quot;.</p> <p>Present, together with
   * <code>RecommendedHeightPixels</code>, on document (PDF) image slots only, where
   * the slot is a fixed rectangle. Such a slot is always filled: the image is scaled
   * to cover it, centred, and clipped to it, the same as CSS <code>object-fit:
   * cover</code>. An image whose shape is too far from W:H is refused with
   * <code>IMAGE_ASPECT_RATIO_MISMATCH</code>; one narrower than W is accepted. A
   * slot showing the partner's logo or badge, and a slot without the two members
   * (every slot from before sizes existed), fits the image inside instead
   * (<code>object-fit: contain</code>): a logo or a badge is never cropped. Email
   * and landing-page image slots are laid out by HTML and carry neither.</p>
   */
  inline int64_t GetRecommendedWidthPixels() const { return m_recommendedWidthPixels; }
  inline bool RecommendedWidthPixelsHasBeenSet() const { return m_recommendedWidthPixelsHasBeenSet; }
  inline void SetRecommendedWidthPixels(int64_t value) {
    m_recommendedWidthPixelsHasBeenSet = true;
    m_recommendedWidthPixels = value;
  }
  inline ImageFieldType& WithRecommendedWidthPixels(int64_t value) {
    SetRecommendedWidthPixels(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image height, in pixels, that fills this slot. Present exactly when
   * <code>RecommendedWidthPixels</code> is.</p>
   */
  inline int64_t GetRecommendedHeightPixels() const { return m_recommendedHeightPixels; }
  inline bool RecommendedHeightPixelsHasBeenSet() const { return m_recommendedHeightPixelsHasBeenSet; }
  inline void SetRecommendedHeightPixels(int64_t value) {
    m_recommendedHeightPixelsHasBeenSet = true;
    m_recommendedHeightPixels = value;
  }
  inline ImageFieldType& WithRecommendedHeightPixels(int64_t value) {
    SetRecommendedHeightPixels(value);
    return *this;
  }
  ///@}
 private:
  long long m_maxSizeBytes{0};

  Aws::Vector<ImageFormat> m_allowedFormats;

  LayoutPreview m_defaultValue;

  int64_t m_recommendedWidthPixels{0};

  int64_t m_recommendedHeightPixels{0};
  bool m_maxSizeBytesHasBeenSet = false;
  bool m_allowedFormatsHasBeenSet = false;
  bool m_defaultValueHasBeenSet = false;
  bool m_recommendedWidthPixelsHasBeenSet = false;
  bool m_recommendedHeightPixelsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
