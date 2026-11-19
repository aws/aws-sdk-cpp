/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
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
 * <p>One layout a multi-layout asset offers.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/CampaignAssetLayoutOption">AWS
 * API Reference</a></p>
 */
class CampaignAssetLayoutOption {
 public:
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetLayoutOption() = default;
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetLayoutOption(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetLayoutOption& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The value that selects this option.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  CampaignAssetLayoutOption& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Display label.</p>
   */
  inline const Aws::String& GetLabel() const { return m_label; }
  inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
  template <typename LabelT = Aws::String>
  void SetLabel(LabelT&& value) {
    m_labelHasBeenSet = true;
    m_label = std::forward<LabelT>(value);
  }
  template <typename LabelT = Aws::String>
  CampaignAssetLayoutOption& WithLabel(LabelT&& value) {
    SetLabel(std::forward<LabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fields this option uses: the FieldValues that stay in scope when it is
   * selected. Lets a client show an option's form before selecting it.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFieldIds() const { return m_fieldIds; }
  inline bool FieldIdsHasBeenSet() const { return m_fieldIdsHasBeenSet; }
  template <typename FieldIdsT = Aws::Vector<Aws::String>>
  void SetFieldIds(FieldIdsT&& value) {
    m_fieldIdsHasBeenSet = true;
    m_fieldIds = std::forward<FieldIdsT>(value);
  }
  template <typename FieldIdsT = Aws::Vector<Aws::String>>
  CampaignAssetLayoutOption& WithFieldIds(FieldIdsT&& value) {
    SetFieldIds(std::forward<FieldIdsT>(value));
    return *this;
  }
  template <typename FieldIdsT = Aws::String>
  CampaignAssetLayoutOption& AddFieldIds(FieldIdsT&& value) {
    m_fieldIdsHasBeenSet = true;
    m_fieldIds.emplace_back(std::forward<FieldIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This option's pages, in page order.</p>
   */
  inline const Aws::Vector<LayoutPreview>& GetLayoutPreviews() const { return m_layoutPreviews; }
  inline bool LayoutPreviewsHasBeenSet() const { return m_layoutPreviewsHasBeenSet; }
  template <typename LayoutPreviewsT = Aws::Vector<LayoutPreview>>
  void SetLayoutPreviews(LayoutPreviewsT&& value) {
    m_layoutPreviewsHasBeenSet = true;
    m_layoutPreviews = std::forward<LayoutPreviewsT>(value);
  }
  template <typename LayoutPreviewsT = Aws::Vector<LayoutPreview>>
  CampaignAssetLayoutOption& WithLayoutPreviews(LayoutPreviewsT&& value) {
    SetLayoutPreviews(std::forward<LayoutPreviewsT>(value));
    return *this;
  }
  template <typename LayoutPreviewsT = LayoutPreview>
  CampaignAssetLayoutOption& AddLayoutPreviews(LayoutPreviewsT&& value) {
    m_layoutPreviewsHasBeenSet = true;
    m_layoutPreviews.emplace_back(std::forward<LayoutPreviewsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_value;

  Aws::String m_label;

  Aws::Vector<Aws::String> m_fieldIds;

  Aws::Vector<LayoutPreview> m_layoutPreviews;
  bool m_valueHasBeenSet = false;
  bool m_labelHasBeenSet = false;
  bool m_fieldIdsHasBeenSet = false;
  bool m_layoutPreviewsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
