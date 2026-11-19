/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/CampaignAssetTemplateField.h>
#include <aws/partnercentral-marketing/model/CampaignAssetTemplateType.h>
#include <aws/partnercentral-marketing/model/LayoutPreview.h>
#include <aws/partnercentral-marketing/model/Platform.h>

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
 * <p>One asset blueprint inside a campaign template. The id is template-local — an
 * asset template is not a standalone resource and has no ARN.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/CampaignAssetTemplate">AWS
 * API Reference</a></p>
 */
class CampaignAssetTemplate {
 public:
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetTemplate() = default;
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetTemplate(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetTemplate& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The template-local asset template identifier.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CampaignAssetTemplate& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The kind of asset this blueprint instantiates as.</p>
   */
  inline CampaignAssetTemplateType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(CampaignAssetTemplateType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CampaignAssetTemplate& WithType(CampaignAssetTemplateType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Display label; becomes the instantiated asset's name.</p>
   */
  inline const Aws::String& GetLabel() const { return m_label; }
  inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
  template <typename LabelT = Aws::String>
  void SetLabel(LabelT&& value) {
    m_labelHasBeenSet = true;
    m_label = std::forward<LabelT>(value);
  }
  template <typename LabelT = Aws::String>
  CampaignAssetTemplate& WithLabel(LabelT&& value) {
    SetLabel(std::forward<LabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Ordering for preview and instantiation.</p>
   */
  inline int64_t GetDisplayOrder() const { return m_displayOrder; }
  inline bool DisplayOrderHasBeenSet() const { return m_displayOrderHasBeenSet; }
  inline void SetDisplayOrder(int64_t value) {
    m_displayOrderHasBeenSet = true;
    m_displayOrder = value;
  }
  inline CampaignAssetTemplate& WithDisplayOrder(int64_t value) {
    SetDisplayOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The editable-field schema, copied and pinned onto each campaign asset at
   * create. Fields the service fills itself are not listed.</p>
   */
  inline const Aws::Vector<CampaignAssetTemplateField>& GetFields() const { return m_fields; }
  inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
  template <typename FieldsT = Aws::Vector<CampaignAssetTemplateField>>
  void SetFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields = std::forward<FieldsT>(value);
  }
  template <typename FieldsT = Aws::Vector<CampaignAssetTemplateField>>
  CampaignAssetTemplate& WithFields(FieldsT&& value) {
    SetFields(std::forward<FieldsT>(value));
    return *this;
  }
  template <typename FieldsT = CampaignAssetTemplateField>
  CampaignAssetTemplate& AddFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields.emplace_back(std::forward<FieldsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Previews of the AWS-authored layout skeleton.</p>
   */
  inline const Aws::Vector<LayoutPreview>& GetLayoutPreviews() const { return m_layoutPreviews; }
  inline bool LayoutPreviewsHasBeenSet() const { return m_layoutPreviewsHasBeenSet; }
  template <typename LayoutPreviewsT = Aws::Vector<LayoutPreview>>
  void SetLayoutPreviews(LayoutPreviewsT&& value) {
    m_layoutPreviewsHasBeenSet = true;
    m_layoutPreviews = std::forward<LayoutPreviewsT>(value);
  }
  template <typename LayoutPreviewsT = Aws::Vector<LayoutPreview>>
  CampaignAssetTemplate& WithLayoutPreviews(LayoutPreviewsT&& value) {
    SetLayoutPreviews(std::forward<LayoutPreviewsT>(value));
    return *this;
  }
  template <typename LayoutPreviewsT = LayoutPreview>
  CampaignAssetTemplate& AddLayoutPreviews(LayoutPreviewsT&& value) {
    m_layoutPreviewsHasBeenSet = true;
    m_layoutPreviews.emplace_back(std::forward<LayoutPreviewsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The asset templates this one embeds output from, such as an email's landing
   * page. Each must be in the same <code>BatchCreateCampaignAsset</code> request or
   * already an asset on the campaign, else the create is refused
   * <code>PREREQUISITE_ASSET_MISSING</code>; include them when the partner picks
   * this one. Absent when there are none. A link the partner chooses, such as a
   * landing page's download button, is not listed here: it is an
   * <code>AssetLink</code> field and needs nothing at create.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPrerequisiteAssetTemplateIds() const { return m_prerequisiteAssetTemplateIds; }
  inline bool PrerequisiteAssetTemplateIdsHasBeenSet() const { return m_prerequisiteAssetTemplateIdsHasBeenSet; }
  template <typename PrerequisiteAssetTemplateIdsT = Aws::Vector<Aws::String>>
  void SetPrerequisiteAssetTemplateIds(PrerequisiteAssetTemplateIdsT&& value) {
    m_prerequisiteAssetTemplateIdsHasBeenSet = true;
    m_prerequisiteAssetTemplateIds = std::forward<PrerequisiteAssetTemplateIdsT>(value);
  }
  template <typename PrerequisiteAssetTemplateIdsT = Aws::Vector<Aws::String>>
  CampaignAssetTemplate& WithPrerequisiteAssetTemplateIds(PrerequisiteAssetTemplateIdsT&& value) {
    SetPrerequisiteAssetTemplateIds(std::forward<PrerequisiteAssetTemplateIdsT>(value));
    return *this;
  }
  template <typename PrerequisiteAssetTemplateIdsT = Aws::String>
  CampaignAssetTemplate& AddPrerequisiteAssetTemplateIds(PrerequisiteAssetTemplateIdsT&& value) {
    m_prerequisiteAssetTemplateIdsHasBeenSet = true;
    m_prerequisiteAssetTemplateIds.emplace_back(std::forward<PrerequisiteAssetTemplateIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>SOCIAL_POST only: the platform an asset made from this blueprint posts to,
   * which the asset reports as <code>SocialPlatform</code>. Fixed by the template,
   * so a client can show which social connection the post needs before it is
   * created. Absent for every other type.</p>
   */
  inline Platform GetSocialPlatform() const { return m_socialPlatform; }
  inline bool SocialPlatformHasBeenSet() const { return m_socialPlatformHasBeenSet; }
  inline void SetSocialPlatform(Platform value) {
    m_socialPlatformHasBeenSet = true;
    m_socialPlatform = value;
  }
  inline CampaignAssetTemplate& WithSocialPlatform(Platform value) {
    SetSocialPlatform(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  CampaignAssetTemplateType m_type{CampaignAssetTemplateType::NOT_SET};

  Aws::String m_label;

  int64_t m_displayOrder{0};

  Aws::Vector<CampaignAssetTemplateField> m_fields;

  Aws::Vector<LayoutPreview> m_layoutPreviews;

  Aws::Vector<Aws::String> m_prerequisiteAssetTemplateIds;

  Platform m_socialPlatform{Platform::NOT_SET};
  bool m_idHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_labelHasBeenSet = false;
  bool m_displayOrderHasBeenSet = false;
  bool m_fieldsHasBeenSet = false;
  bool m_layoutPreviewsHasBeenSet = false;
  bool m_prerequisiteAssetTemplateIdsHasBeenSet = false;
  bool m_socialPlatformHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
