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
 * <p>Input for GetCampaignAsset operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/GetCampaignAssetRequest">AWS
 * API Reference</a></p>
 */
class GetCampaignAssetRequest : public PartnerCentralMarketingRequest {
 public:
  AWS_PARTNERCENTRALMARKETING_API GetCampaignAssetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetCampaignAsset"; }

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
  inline GetCampaignAssetRequest& WithCatalog(Catalog value) {
    SetCatalog(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The campaign identifier.</p>
   */
  inline const Aws::String& GetCampaignIdentifier() const { return m_campaignIdentifier; }
  inline bool CampaignIdentifierHasBeenSet() const { return m_campaignIdentifierHasBeenSet; }
  template <typename CampaignIdentifierT = Aws::String>
  void SetCampaignIdentifier(CampaignIdentifierT&& value) {
    m_campaignIdentifierHasBeenSet = true;
    m_campaignIdentifier = std::forward<CampaignIdentifierT>(value);
  }
  template <typename CampaignIdentifierT = Aws::String>
  GetCampaignAssetRequest& WithCampaignIdentifier(CampaignIdentifierT&& value) {
    SetCampaignIdentifier(std::forward<CampaignIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The asset identifier.</p>
   */
  inline const Aws::String& GetCampaignAssetIdentifier() const { return m_campaignAssetIdentifier; }
  inline bool CampaignAssetIdentifierHasBeenSet() const { return m_campaignAssetIdentifierHasBeenSet; }
  template <typename CampaignAssetIdentifierT = Aws::String>
  void SetCampaignAssetIdentifier(CampaignAssetIdentifierT&& value) {
    m_campaignAssetIdentifierHasBeenSet = true;
    m_campaignAssetIdentifier = std::forward<CampaignAssetIdentifierT>(value);
  }
  template <typename CampaignAssetIdentifierT = Aws::String>
  GetCampaignAssetRequest& WithCampaignAssetIdentifier(CampaignAssetIdentifierT&& value) {
    SetCampaignAssetIdentifier(std::forward<CampaignAssetIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Catalog m_catalog{Catalog::NOT_SET};

  Aws::String m_campaignIdentifier;

  Aws::String m_campaignAssetIdentifier;
  bool m_catalogHasBeenSet = false;
  bool m_campaignIdentifierHasBeenSet = false;
  bool m_campaignAssetIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
