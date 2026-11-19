/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingRequest.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/Catalog.h>

#include <utility>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {

/**
 * <p>Input for StartCampaignAssetActivationTask.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/StartCampaignAssetActivationTaskRequest">AWS
 * API Reference</a></p>
 */
class StartCampaignAssetActivationTaskRequest : public PartnerCentralMarketingRequest {
 public:
  AWS_PARTNERCENTRALMARKETING_API StartCampaignAssetActivationTaskRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartCampaignAssetActivationTask"; }

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
  inline StartCampaignAssetActivationTaskRequest& WithCatalog(Catalog value) {
    SetCatalog(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The campaign identifier, which also authorizes the call.</p>
   */
  inline const Aws::String& GetCampaignIdentifier() const { return m_campaignIdentifier; }
  inline bool CampaignIdentifierHasBeenSet() const { return m_campaignIdentifierHasBeenSet; }
  template <typename CampaignIdentifierT = Aws::String>
  void SetCampaignIdentifier(CampaignIdentifierT&& value) {
    m_campaignIdentifierHasBeenSet = true;
    m_campaignIdentifier = std::forward<CampaignIdentifierT>(value);
  }
  template <typename CampaignIdentifierT = Aws::String>
  StartCampaignAssetActivationTaskRequest& WithCampaignIdentifier(CampaignIdentifierT&& value) {
    SetCampaignIdentifier(std::forward<CampaignIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The assets to activate, in any order — the service derives the dependency
   * order and ignores the order given here.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCampaignAssetIdentifiers() const { return m_campaignAssetIdentifiers; }
  inline bool CampaignAssetIdentifiersHasBeenSet() const { return m_campaignAssetIdentifiersHasBeenSet; }
  template <typename CampaignAssetIdentifiersT = Aws::Vector<Aws::String>>
  void SetCampaignAssetIdentifiers(CampaignAssetIdentifiersT&& value) {
    m_campaignAssetIdentifiersHasBeenSet = true;
    m_campaignAssetIdentifiers = std::forward<CampaignAssetIdentifiersT>(value);
  }
  template <typename CampaignAssetIdentifiersT = Aws::Vector<Aws::String>>
  StartCampaignAssetActivationTaskRequest& WithCampaignAssetIdentifiers(CampaignAssetIdentifiersT&& value) {
    SetCampaignAssetIdentifiers(std::forward<CampaignAssetIdentifiersT>(value));
    return *this;
  }
  template <typename CampaignAssetIdentifiersT = Aws::String>
  StartCampaignAssetActivationTaskRequest& AddCampaignAssetIdentifiers(CampaignAssetIdentifiersT&& value) {
    m_campaignAssetIdentifiersHasBeenSet = true;
    m_campaignAssetIdentifiers.emplace_back(std::forward<CampaignAssetIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token. Two requests carrying the same token are one request, and
   * the second returns the first one's task rather than starting a second.</p>
   * <p>The deduplication window is the <strong>life of the task record</strong>, not
   * a fixed number of hours: replaying a token after the task has expired starts a
   * new task. Stated because a caller would otherwise assume the usual few-hour
   * guarantee.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartCampaignAssetActivationTaskRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Catalog m_catalog{Catalog::NOT_SET};

  Aws::String m_campaignIdentifier;

  Aws::Vector<Aws::String> m_campaignAssetIdentifiers;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_catalogHasBeenSet = false;
  bool m_campaignIdentifierHasBeenSet = false;
  bool m_campaignAssetIdentifiersHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
