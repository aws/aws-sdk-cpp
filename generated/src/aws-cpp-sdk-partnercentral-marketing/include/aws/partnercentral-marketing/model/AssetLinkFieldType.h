/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/CampaignAssetCategory.h>

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
 * <p>An <code>AssetLink</code> field's constraints.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/AssetLinkFieldType">AWS
 * API Reference</a></p>
 */
class AssetLinkFieldType {
 public:
  AWS_PARTNERCENTRALMARKETING_API AssetLinkFieldType() = default;
  AWS_PARTNERCENTRALMARKETING_API AssetLinkFieldType(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API AssetLinkFieldType& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The category of asset the field may name. The value must be an asset of this
   * category on the same campaign; list the candidates with
   * <code>ListCampaignAssets</code>.</p>
   */
  inline CampaignAssetCategory GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  inline void SetCategory(CampaignAssetCategory value) {
    m_categoryHasBeenSet = true;
    m_category = value;
  }
  inline AssetLinkFieldType& WithCategory(CampaignAssetCategory value) {
    SetCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text field on the same asset whose copy names the linked asset, such as
   * the &quot;Solution Brief&quot; in &quot;Your Solution Brief is ready to
   * download!&quot;. When the partner picks an asset, fill this field with the
   * picked asset's <code>LinkLabel</code>, in a preview and in the same save, unless
   * the partner has edited it. The field stays editable. The service does the same
   * when a save changes the link without setting this field and the partner has
   * never written it.</p>
   */
  inline const Aws::String& GetLabelFieldId() const { return m_labelFieldId; }
  inline bool LabelFieldIdHasBeenSet() const { return m_labelFieldIdHasBeenSet; }
  template <typename LabelFieldIdT = Aws::String>
  void SetLabelFieldId(LabelFieldIdT&& value) {
    m_labelFieldIdHasBeenSet = true;
    m_labelFieldId = std::forward<LabelFieldIdT>(value);
  }
  template <typename LabelFieldIdT = Aws::String>
  AssetLinkFieldType& WithLabelFieldId(LabelFieldIdT&& value) {
    SetLabelFieldId(std::forward<LabelFieldIdT>(value));
    return *this;
  }
  ///@}
 private:
  CampaignAssetCategory m_category{CampaignAssetCategory::NOT_SET};

  Aws::String m_labelFieldId;
  bool m_categoryHasBeenSet = false;
  bool m_labelFieldIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
