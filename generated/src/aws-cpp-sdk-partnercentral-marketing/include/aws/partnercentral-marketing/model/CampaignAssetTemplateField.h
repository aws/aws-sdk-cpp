/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/CampaignSetting.h>
#include <aws/partnercentral-marketing/model/FieldType.h>
#include <aws/partnercentral-marketing/model/PartnerProfileField.h>
#include <aws/partnercentral-marketing/model/TemplateFieldSection.h>

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
 * <p>One slot in an asset template's layout: addressing key, placement, and the
 * field kind carrying its own constraints, placeholder or default.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/CampaignAssetTemplateField">AWS
 * API Reference</a></p>
 */
class CampaignAssetTemplateField {
 public:
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetTemplateField() = default;
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetTemplateField(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetTemplateField& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The field identifier; matches a {{fieldId}} slot in the layout.</p>
   */
  inline const Aws::String& GetFieldId() const { return m_fieldId; }
  inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
  template <typename FieldIdT = Aws::String>
  void SetFieldId(FieldIdT&& value) {
    m_fieldIdHasBeenSet = true;
    m_fieldId = std::forward<FieldIdT>(value);
  }
  template <typename FieldIdT = Aws::String>
  CampaignAssetTemplateField& WithFieldId(FieldIdT&& value) {
    SetFieldId(std::forward<FieldIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable name for the field, for display. Authored in the template
   * policy, never derived from the field id or the source layout's field name: the
   * id is a slug (<code>Page_2_Title</code>) and is not meant to be shown to a
   * partner. Absent on fields imported before labels existed.</p>
   */
  inline const Aws::String& GetLabel() const { return m_label; }
  inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
  template <typename LabelT = Aws::String>
  void SetLabel(LabelT&& value) {
    m_labelHasBeenSet = true;
    m_label = std::forward<LabelT>(value);
  }
  template <typename LabelT = Aws::String>
  CampaignAssetTemplateField& WithLabel(LabelT&& value) {
    SetLabel(std::forward<LabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>What belongs in this field, in English: its role in the asset and what good
   * content for it is (for example &quot;Headline that names the customer and leads
   * with a source-backed statistic&quot;). AWS-authored with the template; never
   * written by a partner. Absent when the template carries none, never empty. Pinned
   * onto the asset with the field, so a corrected description reaches assets created
   * after the correction.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CampaignAssetTemplateField& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Layout section the field belongs to.</p>
   */
  inline TemplateFieldSection GetSection() const { return m_section; }
  inline bool SectionHasBeenSet() const { return m_sectionHasBeenSet; }
  inline void SetSection(TemplateFieldSection value) {
    m_sectionHasBeenSet = true;
    m_section = value;
  }
  inline CampaignAssetTemplateField& WithSection(TemplateFieldSection value) {
    SetSection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One-based page number, for paginated layouts (print documents).</p>
   */
  inline int64_t GetPage() const { return m_page; }
  inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }
  inline void SetPage(int64_t value) {
    m_pageHasBeenSet = true;
    m_page = value;
  }
  inline CampaignAssetTemplateField& WithPage(int64_t value) {
    SetPage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the field must be filled before the asset can be activated. Derived
   * from DG policy — never inherited from an upstream authoring system.</p>
   * <p>Required for activation, not for saving: <code>UpdateCampaignAsset</code>
   * accepts partial content and may clear a required field. An unfilled required
   * field appears in the asset's <code>ActivationIssues</code> as
   * <code>REQUIRED_FIELD_MISSING</code>, and activation refuses the asset with the
   * same code.</p> <p>A text field is filled only by a non-blank value, and a
   * rich-text field only by a value with non-blank text; a <code>Placeholder</code>
   * never fills one. An image field is filled by the partner's image or by the
   * template's <code>DefaultValue</code>. A field the campaign fills
   * (<code>CampaignSetting</code>) or the partner's profile fills
   * (<code>PartnerProfileField</code>) is never unfilled on the asset.</p>
   */
  inline bool GetRequired() const { return m_required; }
  inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
  inline void SetRequired(bool value) {
    m_requiredHasBeenSet = true;
    m_required = value;
  }
  inline CampaignAssetTemplateField& WithRequired(bool value) {
    SetRequired(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field kind, with that kind's constraints, placeholder or default.</p>
   */
  inline const FieldType& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = FieldType>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = FieldType>
  CampaignAssetTemplateField& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The campaign setting this field shows, when it shows one: the partner sets it
   * once on the campaign and every asset displays it. Present only on such
   * fields.</p> <p>A client shows the field as &quot;Set on the campaign&quot;,
   * linking to the campaign, rather than as an input.
   * <code>UpdateCampaignAsset</code> refuses a value for it with
   * <code>FIELD_SET_ON_CAMPAIGN</code>, and on an asset the field carries no value:
   * read it from the named member of <code>GetCampaign</code>'s
   * <code>Campaign</code>.</p>
   */
  inline CampaignSetting GetCampaignSetting() const { return m_campaignSetting; }
  inline bool CampaignSettingHasBeenSet() const { return m_campaignSettingHasBeenSet; }
  inline void SetCampaignSetting(CampaignSetting value) {
    m_campaignSettingHasBeenSet = true;
    m_campaignSetting = value;
  }
  inline CampaignAssetTemplateField& WithCampaignSetting(CampaignSetting value) {
    SetCampaignSetting(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The partner-profile value this field shows, when it shows one: the partner's
   * AWS Partner Central profile supplies it, and every asset of every campaign
   * displays it. Present only on such fields.</p> <p>A client shows the field as
   * &quot;From your Partner Central profile&quot; rather than as an input.
   * <code>UpdateCampaignAsset</code> refuses a value for it with
   * <code>FIELD_FROM_PARTNER_PROFILE</code>. On a read the field carries the
   * partner's resolved value — the logo as its URL, the name and website as text —
   * so a slot renders from this list alone; <code>GetCampaign</code>'s
   * <code>Campaign$PartnerProfile</code> carries the same three values.</p>
   */
  inline PartnerProfileField GetPartnerProfileField() const { return m_partnerProfileField; }
  inline bool PartnerProfileFieldHasBeenSet() const { return m_partnerProfileFieldHasBeenSet; }
  inline void SetPartnerProfileField(PartnerProfileField value) {
    m_partnerProfileFieldHasBeenSet = true;
    m_partnerProfileField = value;
  }
  inline CampaignAssetTemplateField& WithPartnerProfileField(PartnerProfileField value) {
    SetPartnerProfileField(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_fieldId;

  Aws::String m_label;

  Aws::String m_description;

  TemplateFieldSection m_section{TemplateFieldSection::NOT_SET};

  int64_t m_page{0};

  bool m_required{false};

  FieldType m_type;

  CampaignSetting m_campaignSetting{CampaignSetting::NOT_SET};

  PartnerProfileField m_partnerProfileField{PartnerProfileField::NOT_SET};
  bool m_fieldIdHasBeenSet = false;
  bool m_labelHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_sectionHasBeenSet = false;
  bool m_pageHasBeenSet = false;
  bool m_requiredHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_campaignSettingHasBeenSet = false;
  bool m_partnerProfileFieldHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
