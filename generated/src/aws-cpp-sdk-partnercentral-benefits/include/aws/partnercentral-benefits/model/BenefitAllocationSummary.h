/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/BenefitAllocationStatus.h>
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
 * <p>A summary view of a benefit allocation containing key information for list
 * operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/BenefitAllocationSummary">AWS
 * API Reference</a></p>
 */
class BenefitAllocationSummary {
 public:
  AWS_PARTNERCENTRALBENEFITS_API BenefitAllocationSummary() = default;
  AWS_PARTNERCENTRALBENEFITS_API BenefitAllocationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API BenefitAllocationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the benefit allocation.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  BenefitAllocationSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog identifier that the benefit allocation belongs to.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  BenefitAllocationSummary& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the benefit allocation.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  BenefitAllocationSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the benefit allocation.</p>
   */
  inline BenefitAllocationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(BenefitAllocationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline BenefitAllocationSummary& WithStatus(BenefitAllocationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information explaining the current status of the benefit
   * allocation.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  BenefitAllocationSummary& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable name of the benefit allocation.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  BenefitAllocationSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the benefit that this allocation is based on.</p>
   */
  inline const Aws::String& GetBenefitId() const { return m_benefitId; }
  inline bool BenefitIdHasBeenSet() const { return m_benefitIdHasBeenSet; }
  template <typename BenefitIdT = Aws::String>
  void SetBenefitId(BenefitIdT&& value) {
    m_benefitIdHasBeenSet = true;
    m_benefitId = std::forward<BenefitIdT>(value);
  }
  template <typename BenefitIdT = Aws::String>
  BenefitAllocationSummary& WithBenefitId(BenefitIdT&& value) {
    SetBenefitId(std::forward<BenefitIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the benefit application that resulted in this
   * allocation.</p>
   */
  inline const Aws::String& GetBenefitApplicationId() const { return m_benefitApplicationId; }
  inline bool BenefitApplicationIdHasBeenSet() const { return m_benefitApplicationIdHasBeenSet; }
  template <typename BenefitApplicationIdT = Aws::String>
  void SetBenefitApplicationId(BenefitApplicationIdT&& value) {
    m_benefitApplicationIdHasBeenSet = true;
    m_benefitApplicationId = std::forward<BenefitApplicationIdT>(value);
  }
  template <typename BenefitApplicationIdT = Aws::String>
  BenefitAllocationSummary& WithBenefitApplicationId(BenefitApplicationIdT&& value) {
    SetBenefitApplicationId(std::forward<BenefitApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fulfillment types used for this benefit allocation.</p>
   */
  inline const Aws::Vector<FulfillmentType>& GetFulfillmentTypes() const { return m_fulfillmentTypes; }
  inline bool FulfillmentTypesHasBeenSet() const { return m_fulfillmentTypesHasBeenSet; }
  template <typename FulfillmentTypesT = Aws::Vector<FulfillmentType>>
  void SetFulfillmentTypes(FulfillmentTypesT&& value) {
    m_fulfillmentTypesHasBeenSet = true;
    m_fulfillmentTypes = std::forward<FulfillmentTypesT>(value);
  }
  template <typename FulfillmentTypesT = Aws::Vector<FulfillmentType>>
  BenefitAllocationSummary& WithFulfillmentTypes(FulfillmentTypesT&& value) {
    SetFulfillmentTypes(std::forward<FulfillmentTypesT>(value));
    return *this;
  }
  inline BenefitAllocationSummary& AddFulfillmentTypes(FulfillmentType value) {
    m_fulfillmentTypesHasBeenSet = true;
    m_fulfillmentTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the benefit allocation was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  BenefitAllocationSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the benefit allocation expires.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  BenefitAllocationSummary& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifiers of the benefits applicable for this allocation.</p>
   */
  inline const Aws::Vector<Aws::String>& GetApplicableBenefitIds() const { return m_applicableBenefitIds; }
  inline bool ApplicableBenefitIdsHasBeenSet() const { return m_applicableBenefitIdsHasBeenSet; }
  template <typename ApplicableBenefitIdsT = Aws::Vector<Aws::String>>
  void SetApplicableBenefitIds(ApplicableBenefitIdsT&& value) {
    m_applicableBenefitIdsHasBeenSet = true;
    m_applicableBenefitIds = std::forward<ApplicableBenefitIdsT>(value);
  }
  template <typename ApplicableBenefitIdsT = Aws::Vector<Aws::String>>
  BenefitAllocationSummary& WithApplicableBenefitIds(ApplicableBenefitIdsT&& value) {
    SetApplicableBenefitIds(std::forward<ApplicableBenefitIdsT>(value));
    return *this;
  }
  template <typename ApplicableBenefitIdsT = Aws::String>
  BenefitAllocationSummary& AddApplicableBenefitIds(ApplicableBenefitIdsT&& value) {
    m_applicableBenefitIdsHasBeenSet = true;
    m_applicableBenefitIds.emplace_back(std::forward<ApplicableBenefitIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_catalog;
  bool m_catalogHasBeenSet = false;

  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  BenefitAllocationStatus m_status{BenefitAllocationStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_statusReason;
  bool m_statusReasonHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_benefitId;
  bool m_benefitIdHasBeenSet = false;

  Aws::String m_benefitApplicationId;
  bool m_benefitApplicationIdHasBeenSet = false;

  Aws::Vector<FulfillmentType> m_fulfillmentTypes;
  bool m_fulfillmentTypesHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_expiresAt{};
  bool m_expiresAtHasBeenSet = false;

  Aws::Vector<Aws::String> m_applicableBenefitIds;
  bool m_applicableBenefitIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
