/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsRequest.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/Contact.h>
#include <aws/partnercentral-benefits/model/FileInput.h>

#include <utility>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

/**
 */
class UpdateBenefitApplicationRequest : public PartnerCentralBenefitsRequest {
 public:
  AWS_PARTNERCENTRALBENEFITS_API UpdateBenefitApplicationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateBenefitApplication"; }

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
  UpdateBenefitApplicationRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure idempotent processing of the
   * update request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateBenefitApplicationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated human-readable name for the benefit application.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateBenefitApplicationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated detailed description of the benefit application.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateBenefitApplicationRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the benefit application to update.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  UpdateBenefitApplicationRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
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
  UpdateBenefitApplicationRequest& WithRevision(RevisionT&& value) {
    SetRevision(std::forward<RevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated detailed information and requirements specific to the benefit being
   * requested.</p>
   */
  inline Aws::Utils::DocumentView GetBenefitApplicationDetails() const { return m_benefitApplicationDetails; }
  inline bool BenefitApplicationDetailsHasBeenSet() const { return m_benefitApplicationDetailsHasBeenSet; }
  template <typename BenefitApplicationDetailsT = Aws::Utils::Document>
  void SetBenefitApplicationDetails(BenefitApplicationDetailsT&& value) {
    m_benefitApplicationDetailsHasBeenSet = true;
    m_benefitApplicationDetails = std::forward<BenefitApplicationDetailsT>(value);
  }
  template <typename BenefitApplicationDetailsT = Aws::Utils::Document>
  UpdateBenefitApplicationRequest& WithBenefitApplicationDetails(BenefitApplicationDetailsT&& value) {
    SetBenefitApplicationDetails(std::forward<BenefitApplicationDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated contact information for partner representatives responsible for this
   * benefit application.</p>
   */
  inline const Aws::Vector<Contact>& GetPartnerContacts() const { return m_partnerContacts; }
  inline bool PartnerContactsHasBeenSet() const { return m_partnerContactsHasBeenSet; }
  template <typename PartnerContactsT = Aws::Vector<Contact>>
  void SetPartnerContacts(PartnerContactsT&& value) {
    m_partnerContactsHasBeenSet = true;
    m_partnerContacts = std::forward<PartnerContactsT>(value);
  }
  template <typename PartnerContactsT = Aws::Vector<Contact>>
  UpdateBenefitApplicationRequest& WithPartnerContacts(PartnerContactsT&& value) {
    SetPartnerContacts(std::forward<PartnerContactsT>(value));
    return *this;
  }
  template <typename PartnerContactsT = Contact>
  UpdateBenefitApplicationRequest& AddPartnerContacts(PartnerContactsT&& value) {
    m_partnerContactsHasBeenSet = true;
    m_partnerContacts.emplace_back(std::forward<PartnerContactsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated supporting documents and files attached to the benefit
   * application.</p>
   */
  inline const Aws::Vector<FileInput>& GetFileDetails() const { return m_fileDetails; }
  inline bool FileDetailsHasBeenSet() const { return m_fileDetailsHasBeenSet; }
  template <typename FileDetailsT = Aws::Vector<FileInput>>
  void SetFileDetails(FileDetailsT&& value) {
    m_fileDetailsHasBeenSet = true;
    m_fileDetails = std::forward<FileDetailsT>(value);
  }
  template <typename FileDetailsT = Aws::Vector<FileInput>>
  UpdateBenefitApplicationRequest& WithFileDetails(FileDetailsT&& value) {
    SetFileDetails(std::forward<FileDetailsT>(value));
    return *this;
  }
  template <typename FileDetailsT = FileInput>
  UpdateBenefitApplicationRequest& AddFileDetails(FileDetailsT&& value) {
    m_fileDetailsHasBeenSet = true;
    m_fileDetails.emplace_back(std::forward<FileDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;
  bool m_catalogHasBeenSet = false;

  Aws::String m_clientToken;
  bool m_clientTokenHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Aws::String m_identifier;
  bool m_identifierHasBeenSet = false;

  Aws::String m_revision;
  bool m_revisionHasBeenSet = false;

  Aws::Utils::Document m_benefitApplicationDetails;
  bool m_benefitApplicationDetailsHasBeenSet = false;

  Aws::Vector<Contact> m_partnerContacts;
  bool m_partnerContactsHasBeenSet = false;

  Aws::Vector<FileInput> m_fileDetails;
  bool m_fileDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
