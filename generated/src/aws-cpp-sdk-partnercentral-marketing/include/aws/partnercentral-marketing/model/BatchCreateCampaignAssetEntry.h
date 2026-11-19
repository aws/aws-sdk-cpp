/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

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
 * <p>One blueprint to instantiate.</p> <p>Carries nothing but the blueprint's
 * identity, and that is the point rather than a saving: category, name, FileFormat
 * and platform are all derived from the named blueprint, so no caller has a member
 * with which to contradict the pinned schema (asset design section 3.1).</p>
 * <p>There is deliberately no per-entry ClientToken. AWS Batch Operations requires
 * a <em>request identifier</em> per entry -- &quot;a request identifier CAN either
 * be a resource identifier or a client idempotency token&quot; -- and
 * SourceAssetTemplateIdentifier is a resource identifier, unique across entries
 * and echoed in this entry's error. Idempotency is structural rather than
 * token-based: an asset id is derived from (CampaignId, SourceAssetTemplateId), so
 * a replayed entry resolves to the same asset (I-16).</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/BatchCreateCampaignAssetEntry">AWS
 * API Reference</a></p>
 */
class BatchCreateCampaignAssetEntry {
 public:
  AWS_PARTNERCENTRALMARKETING_API BatchCreateCampaignAssetEntry() = default;
  AWS_PARTNERCENTRALMARKETING_API BatchCreateCampaignAssetEntry(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API BatchCreateCampaignAssetEntry& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The asset template to instantiate, as returned by GetCampaignTemplate in
   * CampaignTemplate.AssetTemplates[].id.</p> <p>Must belong to the campaign's own
   * campaign template. An asset's editable field schema is copied from this
   * blueprint at creation and pinned, so an asset without one could be neither
   * validated on update nor made live.</p> <p>Also this entry's request identifier:
   * it MUST be unique across the request's entries, since a campaign holds at most
   * one asset per blueprint (I-15) and two entries naming the same blueprint could
   * not both succeed.</p>
   */
  inline const Aws::String& GetSourceAssetTemplateIdentifier() const { return m_sourceAssetTemplateIdentifier; }
  inline bool SourceAssetTemplateIdentifierHasBeenSet() const { return m_sourceAssetTemplateIdentifierHasBeenSet; }
  template <typename SourceAssetTemplateIdentifierT = Aws::String>
  void SetSourceAssetTemplateIdentifier(SourceAssetTemplateIdentifierT&& value) {
    m_sourceAssetTemplateIdentifierHasBeenSet = true;
    m_sourceAssetTemplateIdentifier = std::forward<SourceAssetTemplateIdentifierT>(value);
  }
  template <typename SourceAssetTemplateIdentifierT = Aws::String>
  BatchCreateCampaignAssetEntry& WithSourceAssetTemplateIdentifier(SourceAssetTemplateIdentifierT&& value) {
    SetSourceAssetTemplateIdentifier(std::forward<SourceAssetTemplateIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceAssetTemplateIdentifier;
  bool m_sourceAssetTemplateIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
