/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/CampaignAssetLayout.h>

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
 * <p>One asset that exists as a result of this call.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/BatchCreateCampaignAssetResult">AWS
 * API Reference</a></p>
 */
class BatchCreateCampaignAssetResult {
 public:
  AWS_PARTNERCENTRALMARKETING_API BatchCreateCampaignAssetResult() = default;
  AWS_PARTNERCENTRALMARKETING_API BatchCreateCampaignAssetResult(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API BatchCreateCampaignAssetResult& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The entry's request identifier.</p>
   */
  inline const Aws::String& GetSourceAssetTemplateId() const { return m_sourceAssetTemplateId; }
  inline bool SourceAssetTemplateIdHasBeenSet() const { return m_sourceAssetTemplateIdHasBeenSet; }
  template <typename SourceAssetTemplateIdT = Aws::String>
  void SetSourceAssetTemplateId(SourceAssetTemplateIdT&& value) {
    m_sourceAssetTemplateIdHasBeenSet = true;
    m_sourceAssetTemplateId = std::forward<SourceAssetTemplateIdT>(value);
  }
  template <typename SourceAssetTemplateIdT = Aws::String>
  BatchCreateCampaignAssetResult& WithSourceAssetTemplateId(SourceAssetTemplateIdT&& value) {
    SetSourceAssetTemplateId(std::forward<SourceAssetTemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The asset's identifier, derived from (CampaignId, SourceAssetTemplateId)
   * rather than minted, so the same entry always resolves to the same id.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  BatchCreateCampaignAssetResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For a multi-layout blueprint, the asset's layout options, so a client can
   * render the first layout picker without reading each asset back. Nothing is
   * selected at creation. Absent for a single-layout blueprint.</p>
   */
  inline const CampaignAssetLayout& GetLayout() const { return m_layout; }
  inline bool LayoutHasBeenSet() const { return m_layoutHasBeenSet; }
  template <typename LayoutT = CampaignAssetLayout>
  void SetLayout(LayoutT&& value) {
    m_layoutHasBeenSet = true;
    m_layout = std::forward<LayoutT>(value);
  }
  template <typename LayoutT = CampaignAssetLayout>
  BatchCreateCampaignAssetResult& WithLayout(LayoutT&& value) {
    SetLayout(std::forward<LayoutT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceAssetTemplateId;

  Aws::String m_id;

  CampaignAssetLayout m_layout;
  bool m_sourceAssetTemplateIdHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_layoutHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
