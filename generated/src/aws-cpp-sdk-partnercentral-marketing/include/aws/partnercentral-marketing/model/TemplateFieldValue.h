/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/CampaignAssetImageSource.h>

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
 * <p>The value of a template field. Exactly one variant is set, matching the
 * field's type: text and RichText fields use text, image fields use ImageReference
 * (or, on a write, CampaignAssetImage), AssetLink fields use
 * LinkedAssetId.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/TemplateFieldValue">AWS
 * API Reference</a></p>
 */
class TemplateFieldValue {
 public:
  AWS_PARTNERCENTRALMARKETING_API TemplateFieldValue() = default;
  AWS_PARTNERCENTRALMARKETING_API TemplateFieldValue(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API TemplateFieldValue& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Text value — for both text and RichText fields. A RichText value is a markup
   * fragment restricted to the field's AllowedTags.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  TemplateFieldValue& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Image reference (image fields).</p> <p>On a write, one of exactly two
   * forms:</p> <ul> <li>the <code>s3://</code> URI of a file you staged in the
   * Partner Central file staging bucket. It is scanned, then copied into this
   * asset.</li> <li>the URL Build with AI returned for a suggested image, unchanged.
   * It is copied into this asset and not scanned. Any other URL is refused with
   * <code>FILE_REFERENCE_INVALID</code>, including one a read returned: to keep the
   * current image, omit the field; to put it on another asset, use
   * <code>CampaignAssetImage</code>.</li> </ul> <p>On a read, a URL the caller can
   * fetch: an image in the asset's own storage comes back as a presigned GET that
   * expires one hour after the read, so fetch it again with
   * <code>GetCampaignAsset</code> when it returns 403; an image already on DG's
   * public CDN comes back as that stable URL. A stored reference outside this
   * asset's storage, or not a raster image, is never signed, and the value is
   * omitted. The signed URL serves the image as its image type, whatever the upload
   * declared.</p>
   */
  inline const Aws::String& GetImageReference() const { return m_imageReference; }
  inline bool ImageReferenceHasBeenSet() const { return m_imageReferenceHasBeenSet; }
  template <typename ImageReferenceT = Aws::String>
  void SetImageReference(ImageReferenceT&& value) {
    m_imageReferenceHasBeenSet = true;
    m_imageReference = std::forward<ImageReferenceT>(value);
  }
  template <typename ImageReferenceT = Aws::String>
  TemplateFieldValue& WithImageReference(ImageReferenceT&& value) {
    SetImageReference(std::forward<ImageReferenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The asset an <code>AssetLink</code> field names: the id of an asset on the
   * same campaign, of the field's category. It is a prerequisite of this asset while
   * linked, so it activates first, this asset cannot start until it is live, and it
   * cannot be deleted.</p>
   */
  inline const Aws::String& GetLinkedAssetId() const { return m_linkedAssetId; }
  inline bool LinkedAssetIdHasBeenSet() const { return m_linkedAssetIdHasBeenSet; }
  template <typename LinkedAssetIdT = Aws::String>
  void SetLinkedAssetId(LinkedAssetIdT&& value) {
    m_linkedAssetIdHasBeenSet = true;
    m_linkedAssetId = std::forward<LinkedAssetIdT>(value);
  }
  template <typename LinkedAssetIdT = Aws::String>
  TemplateFieldValue& WithLinkedAssetId(LinkedAssetIdT&& value) {
    SetLinkedAssetId(std::forward<LinkedAssetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Write only. Copies an image stored on another of your assets into this image
   * field. The image is checked against this field's constraints and not scanned
   * again. Also requires <code>partnercentral:GetCampaignAsset</code> on the source
   * campaign. Reads return the copy as <code>ImageReference</code>.</p>
   */
  inline const CampaignAssetImageSource& GetCampaignAssetImage() const { return m_campaignAssetImage; }
  inline bool CampaignAssetImageHasBeenSet() const { return m_campaignAssetImageHasBeenSet; }
  template <typename CampaignAssetImageT = CampaignAssetImageSource>
  void SetCampaignAssetImage(CampaignAssetImageT&& value) {
    m_campaignAssetImageHasBeenSet = true;
    m_campaignAssetImage = std::forward<CampaignAssetImageT>(value);
  }
  template <typename CampaignAssetImageT = CampaignAssetImageSource>
  TemplateFieldValue& WithCampaignAssetImage(CampaignAssetImageT&& value) {
    SetCampaignAssetImage(std::forward<CampaignAssetImageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_text;

  Aws::String m_imageReference;

  Aws::String m_linkedAssetId;

  CampaignAssetImageSource m_campaignAssetImage;
  bool m_textHasBeenSet = false;
  bool m_imageReferenceHasBeenSet = false;
  bool m_linkedAssetIdHasBeenSet = false;
  bool m_campaignAssetImageHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
