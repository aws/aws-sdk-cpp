/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/BenefitApplicationStatus.h>
#include <aws/partnercentral-benefits/model/Contact.h>
#include <aws/partnercentral-benefits/model/FileDetail.h>
#include <aws/partnercentral-benefits/model/FulfillmentType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralBenefits {
namespace Model {
class GetBenefitApplicationResult {
 public:
  AWS_PARTNERCENTRALBENEFITS_API GetBenefitApplicationResult() = default;
  AWS_PARTNERCENTRALBENEFITS_API GetBenefitApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALBENEFITS_API GetBenefitApplicationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the benefit application.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetBenefitApplicationResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the benefit application.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetBenefitApplicationResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog identifier that the benefit application belongs to.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  GetBenefitApplicationResult& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the benefit being requested in this application.</p>
   */
  inline const Aws::String& GetBenefitId() const { return m_benefitId; }
  template <typename BenefitIdT = Aws::String>
  void SetBenefitId(BenefitIdT&& value) {
    m_benefitIdHasBeenSet = true;
    m_benefitId = std::forward<BenefitIdT>(value);
  }
  template <typename BenefitIdT = Aws::String>
  GetBenefitApplicationResult& WithBenefitId(BenefitIdT&& value) {
    SetBenefitId(std::forward<BenefitIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable name of the benefit application.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetBenefitApplicationResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A detailed description of the benefit application.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetBenefitApplicationResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fulfillment types requested for this benefit application.</p>
   */
  inline const Aws::Vector<FulfillmentType>& GetFulfillmentTypes() const { return m_fulfillmentTypes; }
  template <typename FulfillmentTypesT = Aws::Vector<FulfillmentType>>
  void SetFulfillmentTypes(FulfillmentTypesT&& value) {
    m_fulfillmentTypesHasBeenSet = true;
    m_fulfillmentTypes = std::forward<FulfillmentTypesT>(value);
  }
  template <typename FulfillmentTypesT = Aws::Vector<FulfillmentType>>
  GetBenefitApplicationResult& WithFulfillmentTypes(FulfillmentTypesT&& value) {
    SetFulfillmentTypes(std::forward<FulfillmentTypesT>(value));
    return *this;
  }
  inline GetBenefitApplicationResult& AddFulfillmentTypes(FulfillmentType value) {
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
  template <typename BenefitApplicationDetailsT = Aws::Utils::Document>
  void SetBenefitApplicationDetails(BenefitApplicationDetailsT&& value) {
    m_benefitApplicationDetailsHasBeenSet = true;
    m_benefitApplicationDetails = std::forward<BenefitApplicationDetailsT>(value);
  }
  template <typename BenefitApplicationDetailsT = Aws::Utils::Document>
  GetBenefitApplicationResult& WithBenefitApplicationDetails(BenefitApplicationDetailsT&& value) {
    SetBenefitApplicationDetails(std::forward<BenefitApplicationDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS partner programs associated with this benefit application.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPrograms() const { return m_programs; }
  template <typename ProgramsT = Aws::Vector<Aws::String>>
  void SetPrograms(ProgramsT&& value) {
    m_programsHasBeenSet = true;
    m_programs = std::forward<ProgramsT>(value);
  }
  template <typename ProgramsT = Aws::Vector<Aws::String>>
  GetBenefitApplicationResult& WithPrograms(ProgramsT&& value) {
    SetPrograms(std::forward<ProgramsT>(value));
    return *this;
  }
  template <typename ProgramsT = Aws::String>
  GetBenefitApplicationResult& AddPrograms(ProgramsT&& value) {
    m_programsHasBeenSet = true;
    m_programs.emplace_back(std::forward<ProgramsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current processing status of the benefit application.</p>
   */
  inline BenefitApplicationStatus GetStatus() const { return m_status; }
  inline void SetStatus(BenefitApplicationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetBenefitApplicationResult& WithStatus(BenefitApplicationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current stage in the benefit application processing workflow.</p>
   */
  inline const Aws::String& GetStage() const { return m_stage; }
  template <typename StageT = Aws::String>
  void SetStage(StageT&& value) {
    m_stageHasBeenSet = true;
    m_stage = std::forward<StageT>(value);
  }
  template <typename StageT = Aws::String>
  GetBenefitApplicationResult& WithStage(StageT&& value) {
    SetStage(std::forward<StageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information explaining the current status of the benefit
   * application.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  GetBenefitApplicationResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of standardized codes representing the reason for the current
   * status.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStatusReasonCodes() const { return m_statusReasonCodes; }
  template <typename StatusReasonCodesT = Aws::Vector<Aws::String>>
  void SetStatusReasonCodes(StatusReasonCodesT&& value) {
    m_statusReasonCodesHasBeenSet = true;
    m_statusReasonCodes = std::forward<StatusReasonCodesT>(value);
  }
  template <typename StatusReasonCodesT = Aws::Vector<Aws::String>>
  GetBenefitApplicationResult& WithStatusReasonCodes(StatusReasonCodesT&& value) {
    SetStatusReasonCodes(std::forward<StatusReasonCodesT>(value));
    return *this;
  }
  template <typename StatusReasonCodesT = Aws::String>
  GetBenefitApplicationResult& AddStatusReasonCodes(StatusReasonCodesT&& value) {
    m_statusReasonCodesHasBeenSet = true;
    m_statusReasonCodes.emplace_back(std::forward<StatusReasonCodesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the benefit application was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetBenefitApplicationResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the benefit application was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetBenefitApplicationResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current revision number of the benefit application.</p>
   */
  inline const Aws::String& GetRevision() const { return m_revision; }
  template <typename RevisionT = Aws::String>
  void SetRevision(RevisionT&& value) {
    m_revisionHasBeenSet = true;
    m_revision = std::forward<RevisionT>(value);
  }
  template <typename RevisionT = Aws::String>
  GetBenefitApplicationResult& WithRevision(RevisionT&& value) {
    SetRevision(std::forward<RevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS resources that are associated with this benefit application.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAssociatedResources() const { return m_associatedResources; }
  template <typename AssociatedResourcesT = Aws::Vector<Aws::String>>
  void SetAssociatedResources(AssociatedResourcesT&& value) {
    m_associatedResourcesHasBeenSet = true;
    m_associatedResources = std::forward<AssociatedResourcesT>(value);
  }
  template <typename AssociatedResourcesT = Aws::Vector<Aws::String>>
  GetBenefitApplicationResult& WithAssociatedResources(AssociatedResourcesT&& value) {
    SetAssociatedResources(std::forward<AssociatedResourcesT>(value));
    return *this;
  }
  template <typename AssociatedResourcesT = Aws::String>
  GetBenefitApplicationResult& AddAssociatedResources(AssociatedResourcesT&& value) {
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
  template <typename PartnerContactsT = Aws::Vector<Contact>>
  void SetPartnerContacts(PartnerContactsT&& value) {
    m_partnerContactsHasBeenSet = true;
    m_partnerContacts = std::forward<PartnerContactsT>(value);
  }
  template <typename PartnerContactsT = Aws::Vector<Contact>>
  GetBenefitApplicationResult& WithPartnerContacts(PartnerContactsT&& value) {
    SetPartnerContacts(std::forward<PartnerContactsT>(value));
    return *this;
  }
  template <typename PartnerContactsT = Contact>
  GetBenefitApplicationResult& AddPartnerContacts(PartnerContactsT&& value) {
    m_partnerContactsHasBeenSet = true;
    m_partnerContacts.emplace_back(std::forward<PartnerContactsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Supporting documents and files attached to the benefit application.</p>
   */
  inline const Aws::Vector<FileDetail>& GetFileDetails() const { return m_fileDetails; }
  template <typename FileDetailsT = Aws::Vector<FileDetail>>
  void SetFileDetails(FileDetailsT&& value) {
    m_fileDetailsHasBeenSet = true;
    m_fileDetails = std::forward<FileDetailsT>(value);
  }
  template <typename FileDetailsT = Aws::Vector<FileDetail>>
  GetBenefitApplicationResult& WithFileDetails(FileDetailsT&& value) {
    SetFileDetails(std::forward<FileDetailsT>(value));
    return *this;
  }
  template <typename FileDetailsT = FileDetail>
  GetBenefitApplicationResult& AddFileDetails(FileDetailsT&& value) {
    m_fileDetailsHasBeenSet = true;
    m_fileDetails.emplace_back(std::forward<FileDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetBenefitApplicationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_catalog;

  Aws::String m_benefitId;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<FulfillmentType> m_fulfillmentTypes;

  Aws::Utils::Document m_benefitApplicationDetails;

  Aws::Vector<Aws::String> m_programs;

  BenefitApplicationStatus m_status{BenefitApplicationStatus::NOT_SET};

  Aws::String m_stage;

  Aws::String m_statusReason;

  Aws::Vector<Aws::String> m_statusReasonCodes;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_revision;

  Aws::Vector<Aws::String> m_associatedResources;

  Aws::Vector<Contact> m_partnerContacts;

  Aws::Vector<FileDetail> m_fileDetails;

  Aws::String m_requestId;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_benefitIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_fulfillmentTypesHasBeenSet = false;
  bool m_benefitApplicationDetailsHasBeenSet = false;
  bool m_programsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_stageHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_statusReasonCodesHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
  bool m_associatedResourcesHasBeenSet = false;
  bool m_partnerContactsHasBeenSet = false;
  bool m_fileDetailsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
