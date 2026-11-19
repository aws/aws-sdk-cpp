/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/CampaignAssetTemplateField.h>
#include <aws/partnercentral-marketing/model/TemplateFieldValue.h>

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
 * <p>One template field on an asset: the schema snapshot taken at instantiation
 * plus the current value. The value is absent while the field is unfilled.</p>
 * <p>Schema and value are one shape rather than two lists because a client
 * rendering an edit form needs both together, and because the pin (design section
 * 3.1) is what an update validates against — separating them would let values
 * outlive the schema they were checked against.</p> <p>Addressed by the
 * <strong>DG</strong> FieldId throughout. The delivery platform's own
 * field-definition ids stay on the template record and are joined in at
 * activation, so a vendor identifier never reaches an asset row or a response
 * (DG-025 containment).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/CampaignAssetFieldValue">AWS
 * API Reference</a></p>
 */
class CampaignAssetFieldValue {
 public:
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetFieldValue() = default;
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetFieldValue(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetFieldValue& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The field schema (snapshot from the template).</p>
   */
  inline const CampaignAssetTemplateField& GetField() const { return m_field; }
  inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
  template <typename FieldT = CampaignAssetTemplateField>
  void SetField(FieldT&& value) {
    m_fieldHasBeenSet = true;
    m_field = std::forward<FieldT>(value);
  }
  template <typename FieldT = CampaignAssetTemplateField>
  CampaignAssetFieldValue& WithField(FieldT&& value) {
    SetField(std::forward<FieldT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field's current value; the variant matches the field's type.</p>
   */
  inline const TemplateFieldValue& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = TemplateFieldValue>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = TemplateFieldValue>
  CampaignAssetFieldValue& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  CampaignAssetTemplateField m_field;

  TemplateFieldValue m_value;
  bool m_fieldHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
