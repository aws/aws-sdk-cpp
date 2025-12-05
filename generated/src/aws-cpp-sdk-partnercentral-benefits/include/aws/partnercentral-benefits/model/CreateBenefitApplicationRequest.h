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
#include <aws/partnercentral-benefits/model/FulfillmentType.h>
#include <aws/partnercentral-benefits/model/Tag.h>

#include <utility>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

/**
 */
class CreateBenefitApplicationRequest : public PartnerCentralBenefitsRequest {
 public:
  AWS_PARTNERCENTRALBENEFITS_API CreateBenefitApplicationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateBenefitApplication"; }

  AWS_PARTNERCENTRALBENEFITS_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALBENEFITS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog identifier that specifies which benefit catalog to create the
   * application in.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  CreateBenefitApplicationRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure idempotent processing of the
   * creation request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateBenefitApplicationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable name for the benefit application.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateBenefitApplicationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A detailed description of the benefit application and its intended use.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateBenefitApplicationRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the benefit being requested in this application.</p>
   */
  inline const Aws::String& GetBenefitIdentifier() const { return m_benefitIdentifier; }
  inline bool BenefitIdentifierHasBeenSet() const { return m_benefitIdentifierHasBeenSet; }
  template <typename BenefitIdentifierT = Aws::String>
  void SetBenefitIdentifier(BenefitIdentifierT&& value) {
    m_benefitIdentifierHasBeenSet = true;
    m_benefitIdentifier = std::forward<BenefitIdentifierT>(value);
  }
  template <typename BenefitIdentifierT = Aws::String>
  CreateBenefitApplicationRequest& WithBenefitIdentifier(BenefitIdentifierT&& value) {
    SetBenefitIdentifier(std::forward<BenefitIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of fulfillment requested for this benefit application (e.g.,
   * credits, access, disbursement).</p>
   */
  inline const Aws::Vector<FulfillmentType>& GetFulfillmentTypes() const { return m_fulfillmentTypes; }
  inline bool FulfillmentTypesHasBeenSet() const { return m_fulfillmentTypesHasBeenSet; }
  template <typename FulfillmentTypesT = Aws::Vector<FulfillmentType>>
  void SetFulfillmentTypes(FulfillmentTypesT&& value) {
    m_fulfillmentTypesHasBeenSet = true;
    m_fulfillmentTypes = std::forward<FulfillmentTypesT>(value);
  }
  template <typename FulfillmentTypesT = Aws::Vector<FulfillmentType>>
  CreateBenefitApplicationRequest& WithFulfillmentTypes(FulfillmentTypesT&& value) {
    SetFulfillmentTypes(std::forward<FulfillmentTypesT>(value));
    return *this;
  }
  inline CreateBenefitApplicationRequest& AddFulfillmentTypes(FulfillmentType value) {
    m_fulfillmentTypesHasBeenSet = true;
    m_fulfillmentTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed information and requirements specific to the benefit being
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
  CreateBenefitApplicationRequest& WithBenefitApplicationDetails(BenefitApplicationDetailsT&& value) {
    SetBenefitApplicationDetails(std::forward<BenefitApplicationDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Key-value pairs to categorize and organize the benefit application.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateBenefitApplicationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateBenefitApplicationRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS resources that are associated with this benefit application.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAssociatedResources() const { return m_associatedResources; }
  inline bool AssociatedResourcesHasBeenSet() const { return m_associatedResourcesHasBeenSet; }
  template <typename AssociatedResourcesT = Aws::Vector<Aws::String>>
  void SetAssociatedResources(AssociatedResourcesT&& value) {
    m_associatedResourcesHasBeenSet = true;
    m_associatedResources = std::forward<AssociatedResourcesT>(value);
  }
  template <typename AssociatedResourcesT = Aws::Vector<Aws::String>>
  CreateBenefitApplicationRequest& WithAssociatedResources(AssociatedResourcesT&& value) {
    SetAssociatedResources(std::forward<AssociatedResourcesT>(value));
    return *this;
  }
  template <typename AssociatedResourcesT = Aws::String>
  CreateBenefitApplicationRequest& AddAssociatedResources(AssociatedResourcesT&& value) {
    m_associatedResourcesHasBeenSet = true;
    m_associatedResources.emplace_back(std::forward<AssociatedResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contact information for partner representatives responsible for this benefit
   * application.</p>
   */
  inline const Aws::Vector<Contact>& GetPartnerContacts() const { return m_partnerContacts; }
  inline bool PartnerContactsHasBeenSet() const { return m_partnerContactsHasBeenSet; }
  template <typename PartnerContactsT = Aws::Vector<Contact>>
  void SetPartnerContacts(PartnerContactsT&& value) {
    m_partnerContactsHasBeenSet = true;
    m_partnerContacts = std::forward<PartnerContactsT>(value);
  }
  template <typename PartnerContactsT = Aws::Vector<Contact>>
  CreateBenefitApplicationRequest& WithPartnerContacts(PartnerContactsT&& value) {
    SetPartnerContacts(std::forward<PartnerContactsT>(value));
    return *this;
  }
  template <typename PartnerContactsT = Contact>
  CreateBenefitApplicationRequest& AddPartnerContacts(PartnerContactsT&& value) {
    m_partnerContactsHasBeenSet = true;
    m_partnerContacts.emplace_back(std::forward<PartnerContactsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Supporting documents and files attached to the benefit application.</p>
   */
  inline const Aws::Vector<FileInput>& GetFileDetails() const { return m_fileDetails; }
  inline bool FileDetailsHasBeenSet() const { return m_fileDetailsHasBeenSet; }
  template <typename FileDetailsT = Aws::Vector<FileInput>>
  void SetFileDetails(FileDetailsT&& value) {
    m_fileDetailsHasBeenSet = true;
    m_fileDetails = std::forward<FileDetailsT>(value);
  }
  template <typename FileDetailsT = Aws::Vector<FileInput>>
  CreateBenefitApplicationRequest& WithFileDetails(FileDetailsT&& value) {
    SetFileDetails(std::forward<FileDetailsT>(value));
    return *this;
  }
  template <typename FileDetailsT = FileInput>
  CreateBenefitApplicationRequest& AddFileDetails(FileDetailsT&& value) {
    m_fileDetailsHasBeenSet = true;
    m_fileDetails.emplace_back(std::forward<FileDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_clientToken;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_benefitIdentifier;

  Aws::Vector<FulfillmentType> m_fulfillmentTypes;

  Aws::Utils::Document m_benefitApplicationDetails;

  Aws::Vector<Tag> m_tags;

  Aws::Vector<Aws::String> m_associatedResources;

  Aws::Vector<Contact> m_partnerContacts;

  Aws::Vector<FileInput> m_fileDetails;
  bool m_catalogHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_benefitIdentifierHasBeenSet = false;
  bool m_fulfillmentTypesHasBeenSet = false;
  bool m_benefitApplicationDetailsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_associatedResourcesHasBeenSet = false;
  bool m_partnerContactsHasBeenSet = false;
  bool m_fileDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
