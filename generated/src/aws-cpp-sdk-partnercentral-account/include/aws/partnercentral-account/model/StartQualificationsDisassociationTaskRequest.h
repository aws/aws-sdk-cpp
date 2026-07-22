/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccountRequest.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/QualificationsAssociationPartner.h>

#include <utility>

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

/**
 */
class StartQualificationsDisassociationTaskRequest : public PartnerCentralAccountRequest {
 public:
  AWS_PARTNERCENTRALACCOUNT_API StartQualificationsDisassociationTaskRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartQualificationsDisassociationTask"; }

  AWS_PARTNERCENTRALACCOUNT_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALACCOUNT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog in which to perform the qualifications disassociation. Valid
   * values: <code>AWS</code>, <code>Sandbox</code>.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  StartQualificationsDisassociationTaskRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Your partner identifier. You can provide either a partner ID (for example,
   * <code>partner-abc123</code>) or a partner ARN. You must own this identifier.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  StartQualificationsDisassociationTaskRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartQualificationsDisassociationTaskRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The primary partner's profile and account identifier that you are currently
   * associated with and will disassociate from. You must provide at least one of
   * <code>ProfileId</code> or <code>AccountId</code>. The specified partner must
   * match your current primary association.</p>
   */
  inline const QualificationsAssociationPartner& GetAssociatedPartner() const { return m_associatedPartner; }
  inline bool AssociatedPartnerHasBeenSet() const { return m_associatedPartnerHasBeenSet; }
  template <typename AssociatedPartnerT = QualificationsAssociationPartner>
  void SetAssociatedPartner(AssociatedPartnerT&& value) {
    m_associatedPartnerHasBeenSet = true;
    m_associatedPartner = std::forward<AssociatedPartnerT>(value);
  }
  template <typename AssociatedPartnerT = QualificationsAssociationPartner>
  StartQualificationsDisassociationTaskRequest& WithAssociatedPartner(AssociatedPartnerT&& value) {
    SetAssociatedPartner(std::forward<AssociatedPartnerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_identifier;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  QualificationsAssociationPartner m_associatedPartner;
  bool m_catalogHasBeenSet = false;
  bool m_identifierHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_associatedPartnerHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
