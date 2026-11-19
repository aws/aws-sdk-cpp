/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingRequest.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/Catalog.h>

#include <utility>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {

/**
 * <p>Input for GetCampaignAssetExportTask.</p> <p>Takes the catalog, the owning
 * campaign, and the export task identifier. The campaign identifier is required so
 * the operation can be authorized on the task's owning campaign/{CampaignId}: the
 * task is addressable by its id within the caller's partition, but the campaign is
 * not derivable from the task id alone at authorization time.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/GetCampaignAssetExportTaskRequest">AWS
 * API Reference</a></p>
 */
class GetCampaignAssetExportTaskRequest : public PartnerCentralMarketingRequest {
 public:
  AWS_PARTNERCENTRALMARKETING_API GetCampaignAssetExportTaskRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetCampaignAssetExportTask"; }

  AWS_PARTNERCENTRALMARKETING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALMARKETING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog (AWS or Sandbox).</p>
   */
  inline Catalog GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  inline void SetCatalog(Catalog value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline GetCampaignAssetExportTaskRequest& WithCatalog(Catalog value) {
    SetCatalog(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The campaign that owns the export task. Accepts the campaign id or ARN.
   * Required so the read is authorized on campaign/{CampaignId}; the task must
   * belong to this campaign or the request resolves to not-found.</p>
   */
  inline const Aws::String& GetCampaignIdentifier() const { return m_campaignIdentifier; }
  inline bool CampaignIdentifierHasBeenSet() const { return m_campaignIdentifierHasBeenSet; }
  template <typename CampaignIdentifierT = Aws::String>
  void SetCampaignIdentifier(CampaignIdentifierT&& value) {
    m_campaignIdentifierHasBeenSet = true;
    m_campaignIdentifier = std::forward<CampaignIdentifierT>(value);
  }
  template <typename CampaignIdentifierT = Aws::String>
  GetCampaignAssetExportTaskRequest& WithCampaignIdentifier(CampaignIdentifierT&& value) {
    SetCampaignIdentifier(std::forward<CampaignIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The export task to retrieve: the <code>Id</code> StartCampaignAssetExportTask
   * returned (<code>etsk-…</code>).</p> <p>An id only. An export task has no ARN:
   * none is returned, recorded or authorized on (the read authorizes on its
   * campaign), so there is no ARN to accept (DG-063 D-35).</p>
   */
  inline const Aws::String& GetCampaignAssetExportTaskIdentifier() const { return m_campaignAssetExportTaskIdentifier; }
  inline bool CampaignAssetExportTaskIdentifierHasBeenSet() const { return m_campaignAssetExportTaskIdentifierHasBeenSet; }
  template <typename CampaignAssetExportTaskIdentifierT = Aws::String>
  void SetCampaignAssetExportTaskIdentifier(CampaignAssetExportTaskIdentifierT&& value) {
    m_campaignAssetExportTaskIdentifierHasBeenSet = true;
    m_campaignAssetExportTaskIdentifier = std::forward<CampaignAssetExportTaskIdentifierT>(value);
  }
  template <typename CampaignAssetExportTaskIdentifierT = Aws::String>
  GetCampaignAssetExportTaskRequest& WithCampaignAssetExportTaskIdentifier(CampaignAssetExportTaskIdentifierT&& value) {
    SetCampaignAssetExportTaskIdentifier(std::forward<CampaignAssetExportTaskIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Catalog m_catalog{Catalog::NOT_SET};

  Aws::String m_campaignIdentifier;

  Aws::String m_campaignAssetExportTaskIdentifier;
  bool m_catalogHasBeenSet = false;
  bool m_campaignIdentifierHasBeenSet = false;
  bool m_campaignAssetExportTaskIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
