/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/AssetLinkFieldType.h>
#include <aws/partnercentral-marketing/model/ImageFieldType.h>
#include <aws/partnercentral-marketing/model/RichTextFieldType.h>
#include <aws/partnercentral-marketing/model/TextFieldType.h>

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
 * <p>The kind of a template field, carrying that kind's constraints, placeholder
 * or default. One discriminator instead of a separate kind enum, constraints blob
 * and preset value, so kind and constraints cannot disagree. Read-only — templates
 * are AWS-authored; the service validates each partner value against it.</p> <p>A
 * URL the partner types is not a distinct kind: it is text with a URL pattern, and
 * its link role is carried by the layout placeholder. The same holds for a colour,
 * which is text with a hex-colour pattern. A link to another of the campaign's
 * assets, whose URL DG writes at activation, is
 * <code>AssetLink</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/FieldType">AWS
 * API Reference</a></p>
 */
class FieldType {
 public:
  AWS_PARTNERCENTRALMARKETING_API FieldType() = default;
  AWS_PARTNERCENTRALMARKETING_API FieldType(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API FieldType& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>A plain-text field.</p>
   */
  inline const TextFieldType& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = TextFieldType>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = TextFieldType>
  FieldType& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A field whose value is a constrained HTML fragment.</p>
   */
  inline const RichTextFieldType& GetRichText() const { return m_richText; }
  inline bool RichTextHasBeenSet() const { return m_richTextHasBeenSet; }
  template <typename RichTextT = RichTextFieldType>
  void SetRichText(RichTextT&& value) {
    m_richTextHasBeenSet = true;
    m_richText = std::forward<RichTextT>(value);
  }
  template <typename RichTextT = RichTextFieldType>
  FieldType& WithRichText(RichTextT&& value) {
    SetRichText(std::forward<RichTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An image field.</p>
   */
  inline const ImageFieldType& GetImage() const { return m_image; }
  inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
  template <typename ImageT = ImageFieldType>
  void SetImage(ImageT&& value) {
    m_imageHasBeenSet = true;
    m_image = std::forward<ImageT>(value);
  }
  template <typename ImageT = ImageFieldType>
  FieldType& WithImage(ImageT&& value) {
    SetImage(std::forward<ImageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A link to another asset on the same campaign. The partner chooses which
   * asset, by <code>LinkedAssetId</code>; at activation DG writes that asset's
   * public URL into the field. A landing page's download button is one, naming a
   * <code>DOCUMENT</code>.</p>
   */
  inline const AssetLinkFieldType& GetAssetLink() const { return m_assetLink; }
  inline bool AssetLinkHasBeenSet() const { return m_assetLinkHasBeenSet; }
  template <typename AssetLinkT = AssetLinkFieldType>
  void SetAssetLink(AssetLinkT&& value) {
    m_assetLinkHasBeenSet = true;
    m_assetLink = std::forward<AssetLinkT>(value);
  }
  template <typename AssetLinkT = AssetLinkFieldType>
  FieldType& WithAssetLink(AssetLinkT&& value) {
    SetAssetLink(std::forward<AssetLinkT>(value));
    return *this;
  }
  ///@}
 private:
  TextFieldType m_text;

  RichTextFieldType m_richText;

  ImageFieldType m_image;

  AssetLinkFieldType m_assetLink;
  bool m_textHasBeenSet = false;
  bool m_richTextHasBeenSet = false;
  bool m_imageHasBeenSet = false;
  bool m_assetLinkHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
