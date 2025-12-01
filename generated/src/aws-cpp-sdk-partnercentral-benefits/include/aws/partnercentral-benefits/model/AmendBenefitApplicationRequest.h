/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsRequest.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/Amendment.h>

#include <utility>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

/**
 */
class AmendBenefitApplicationRequest : public PartnerCentralBenefitsRequest {
 public:
  AWS_PARTNERCENTRALBENEFITS_API AmendBenefitApplicationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AmendBenefitApplication"; }

  AWS_PARTNERCENTRALBENEFITS_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALBENEFITS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog identifier that specifies which benefit catalog the application
   * belongs to.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  AmendBenefitApplicationRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure idempotent processing of the
   * amendment request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  AmendBenefitApplicationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current revision number of the benefit application to ensure optimistic
   * concurrency control.</p>
   */
  inline const Aws::String& GetRevision() const { return m_revision; }
  inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
  template <typename RevisionT = Aws::String>
  void SetRevision(RevisionT&& value) {
    m_revisionHasBeenSet = true;
    m_revision = std::forward<RevisionT>(value);
  }
  template <typename RevisionT = Aws::String>
  AmendBenefitApplicationRequest& WithRevision(RevisionT&& value) {
    SetRevision(std::forward<RevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the benefit application to be amended.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  AmendBenefitApplicationRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A descriptive reason explaining why the benefit application is being
   * amended.</p>
   */
  inline const Aws::String& GetAmendmentReason() const { return m_amendmentReason; }
  inline bool AmendmentReasonHasBeenSet() const { return m_amendmentReasonHasBeenSet; }
  template <typename AmendmentReasonT = Aws::String>
  void SetAmendmentReason(AmendmentReasonT&& value) {
    m_amendmentReasonHasBeenSet = true;
    m_amendmentReason = std::forward<AmendmentReasonT>(value);
  }
  template <typename AmendmentReasonT = Aws::String>
  AmendBenefitApplicationRequest& WithAmendmentReason(AmendmentReasonT&& value) {
    SetAmendmentReason(std::forward<AmendmentReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of specific field amendments to apply to the benefit application.</p>
   */
  inline const Aws::Vector<Amendment>& GetAmendments() const { return m_amendments; }
  inline bool AmendmentsHasBeenSet() const { return m_amendmentsHasBeenSet; }
  template <typename AmendmentsT = Aws::Vector<Amendment>>
  void SetAmendments(AmendmentsT&& value) {
    m_amendmentsHasBeenSet = true;
    m_amendments = std::forward<AmendmentsT>(value);
  }
  template <typename AmendmentsT = Aws::Vector<Amendment>>
  AmendBenefitApplicationRequest& WithAmendments(AmendmentsT&& value) {
    SetAmendments(std::forward<AmendmentsT>(value));
    return *this;
  }
  template <typename AmendmentsT = Amendment>
  AmendBenefitApplicationRequest& AddAmendments(AmendmentsT&& value) {
    m_amendmentsHasBeenSet = true;
    m_amendments.emplace_back(std::forward<AmendmentsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;
  bool m_catalogHasBeenSet = false;

  Aws::String m_clientToken;
  bool m_clientTokenHasBeenSet = false;

  Aws::String m_revision;
  bool m_revisionHasBeenSet = false;

  Aws::String m_identifier;
  bool m_identifierHasBeenSet = false;

  Aws::String m_amendmentReason;
  bool m_amendmentReasonHasBeenSet = false;

  Aws::Vector<Amendment> m_amendments;
  bool m_amendmentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
