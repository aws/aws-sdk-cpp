/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/BenefitApplicationStatus.h>
#include <aws/partnercentral-benefits/model/FulfillmentType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralBenefits {
namespace Model {

/**
 * <p>A summary view of a benefit application containing key information for list
 * operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/BenefitApplicationSummary">AWS
 * API Reference</a></p>
 */
class BenefitApplicationSummary {
 public:
  AWS_PARTNERCENTRALBENEFITS_API BenefitApplicationSummary() = default;
  AWS_PARTNERCENTRALBENEFITS_API BenefitApplicationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API BenefitApplicationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The catalog identifier that the benefit application belongs to.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  BenefitApplicationSummary& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable name of the benefit application.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  BenefitApplicationSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the benefit application.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  BenefitApplicationSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the benefit application.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  BenefitApplicationSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the benefit being requested in this application.</p>
   */
  inline const Aws::String& GetBenefitId() const { return m_benefitId; }
  inline bool BenefitIdHasBeenSet() const { return m_benefitIdHasBeenSet; }
  template <typename BenefitIdT = Aws::String>
  void SetBenefitId(BenefitIdT&& value) {
    m_benefitIdHasBeenSet = true;
    m_benefitId = std::forward<BenefitIdT>(value);
  }
  template <typename BenefitIdT = Aws::String>
  BenefitApplicationSummary& WithBenefitId(BenefitIdT&& value) {
    SetBenefitId(std::forward<BenefitIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS partner programs associated with this benefit application.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPrograms() const { return m_programs; }
  inline bool ProgramsHasBeenSet() const { return m_programsHasBeenSet; }
  template <typename ProgramsT = Aws::Vector<Aws::String>>
  void SetPrograms(ProgramsT&& value) {
    m_programsHasBeenSet = true;
    m_programs = std::forward<ProgramsT>(value);
  }
  template <typename ProgramsT = Aws::Vector<Aws::String>>
  BenefitApplicationSummary& WithPrograms(ProgramsT&& value) {
    SetPrograms(std::forward<ProgramsT>(value));
    return *this;
  }
  template <typename ProgramsT = Aws::String>
  BenefitApplicationSummary& AddPrograms(ProgramsT&& value) {
    m_programsHasBeenSet = true;
    m_programs.emplace_back(std::forward<ProgramsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fulfillment types requested for this benefit application.</p>
   */
  inline const Aws::Vector<FulfillmentType>& GetFulfillmentTypes() const { return m_fulfillmentTypes; }
  inline bool FulfillmentTypesHasBeenSet() const { return m_fulfillmentTypesHasBeenSet; }
  template <typename FulfillmentTypesT = Aws::Vector<FulfillmentType>>
  void SetFulfillmentTypes(FulfillmentTypesT&& value) {
    m_fulfillmentTypesHasBeenSet = true;
    m_fulfillmentTypes = std::forward<FulfillmentTypesT>(value);
  }
  template <typename FulfillmentTypesT = Aws::Vector<FulfillmentType>>
  BenefitApplicationSummary& WithFulfillmentTypes(FulfillmentTypesT&& value) {
    SetFulfillmentTypes(std::forward<FulfillmentTypesT>(value));
    return *this;
  }
  inline BenefitApplicationSummary& AddFulfillmentTypes(FulfillmentType value) {
    m_fulfillmentTypesHasBeenSet = true;
    m_fulfillmentTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current processing status of the benefit application.</p>
   */
  inline BenefitApplicationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(BenefitApplicationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline BenefitApplicationSummary& WithStatus(BenefitApplicationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current stage in the benefit application processing workflow..</p>
   */
  inline const Aws::String& GetStage() const { return m_stage; }
  inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
  template <typename StageT = Aws::String>
  void SetStage(StageT&& value) {
    m_stageHasBeenSet = true;
    m_stage = std::forward<StageT>(value);
  }
  template <typename StageT = Aws::String>
  BenefitApplicationSummary& WithStage(StageT&& value) {
    SetStage(std::forward<StageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the benefit application was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  BenefitApplicationSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the benefit application was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  BenefitApplicationSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional attributes and metadata associated with the benefit
   * application.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetBenefitApplicationDetails() const { return m_benefitApplicationDetails; }
  inline bool BenefitApplicationDetailsHasBeenSet() const { return m_benefitApplicationDetailsHasBeenSet; }
  template <typename BenefitApplicationDetailsT = Aws::Map<Aws::String, Aws::String>>
  void SetBenefitApplicationDetails(BenefitApplicationDetailsT&& value) {
    m_benefitApplicationDetailsHasBeenSet = true;
    m_benefitApplicationDetails = std::forward<BenefitApplicationDetailsT>(value);
  }
  template <typename BenefitApplicationDetailsT = Aws::Map<Aws::String, Aws::String>>
  BenefitApplicationSummary& WithBenefitApplicationDetails(BenefitApplicationDetailsT&& value) {
    SetBenefitApplicationDetails(std::forward<BenefitApplicationDetailsT>(value));
    return *this;
  }
  template <typename BenefitApplicationDetailsKeyT = Aws::String, typename BenefitApplicationDetailsValueT = Aws::String>
  BenefitApplicationSummary& AddBenefitApplicationDetails(BenefitApplicationDetailsKeyT&& key, BenefitApplicationDetailsValueT&& value) {
    m_benefitApplicationDetailsHasBeenSet = true;
    m_benefitApplicationDetails.emplace(std::forward<BenefitApplicationDetailsKeyT>(key),
                                        std::forward<BenefitApplicationDetailsValueT>(value));
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
  BenefitApplicationSummary& WithAssociatedResources(AssociatedResourcesT&& value) {
    SetAssociatedResources(std::forward<AssociatedResourcesT>(value));
    return *this;
  }
  template <typename AssociatedResourcesT = Aws::String>
  BenefitApplicationSummary& AddAssociatedResources(AssociatedResourcesT&& value) {
    m_associatedResourcesHasBeenSet = true;
    m_associatedResources.emplace_back(std::forward<AssociatedResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;
  bool m_catalogHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_benefitId;
  bool m_benefitIdHasBeenSet = false;

  Aws::Vector<Aws::String> m_programs;
  bool m_programsHasBeenSet = false;

  Aws::Vector<FulfillmentType> m_fulfillmentTypes;
  bool m_fulfillmentTypesHasBeenSet = false;

  BenefitApplicationStatus m_status{BenefitApplicationStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_stage;
  bool m_stageHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_benefitApplicationDetails;
  bool m_benefitApplicationDetailsHasBeenSet = false;

  Aws::Vector<Aws::String> m_associatedResources;
  bool m_associatedResourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
