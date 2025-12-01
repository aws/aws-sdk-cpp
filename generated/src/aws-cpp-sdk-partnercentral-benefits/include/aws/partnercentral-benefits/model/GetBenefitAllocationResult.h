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
#include <aws/partnercentral-benefits/model/FulfillmentDetails.h>
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
class GetBenefitAllocationResult {
 public:
  AWS_PARTNERCENTRALBENEFITS_API GetBenefitAllocationResult() = default;
  AWS_PARTNERCENTRALBENEFITS_API GetBenefitAllocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALBENEFITS_API GetBenefitAllocationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the benefit allocation.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetBenefitAllocationResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog identifier that the benefit allocation belongs to.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  GetBenefitAllocationResult& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the benefit allocation.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetBenefitAllocationResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable name of the benefit allocation.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetBenefitAllocationResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A detailed description of the benefit allocation.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetBenefitAllocationResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the benefit allocation (e.g., active, expired,
   * consumed).</p>
   */
  inline BenefitAllocationStatus GetStatus() const { return m_status; }
  inline void SetStatus(BenefitAllocationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetBenefitAllocationResult& WithStatus(BenefitAllocationStatus value) {
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
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  GetBenefitAllocationResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the benefit application that resulted in this
   * allocation.</p>
   */
  inline const Aws::String& GetBenefitApplicationId() const { return m_benefitApplicationId; }
  template <typename BenefitApplicationIdT = Aws::String>
  void SetBenefitApplicationId(BenefitApplicationIdT&& value) {
    m_benefitApplicationIdHasBeenSet = true;
    m_benefitApplicationId = std::forward<BenefitApplicationIdT>(value);
  }
  template <typename BenefitApplicationIdT = Aws::String>
  GetBenefitAllocationResult& WithBenefitApplicationId(BenefitApplicationIdT&& value) {
    SetBenefitApplicationId(std::forward<BenefitApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the benefit that this allocation is based on.</p>
   */
  inline const Aws::String& GetBenefitId() const { return m_benefitId; }
  template <typename BenefitIdT = Aws::String>
  void SetBenefitId(BenefitIdT&& value) {
    m_benefitIdHasBeenSet = true;
    m_benefitId = std::forward<BenefitIdT>(value);
  }
  template <typename BenefitIdT = Aws::String>
  GetBenefitAllocationResult& WithBenefitId(BenefitIdT&& value) {
    SetBenefitId(std::forward<BenefitIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fulfillment type used for this benefit allocation.</p>
   */
  inline FulfillmentType GetFulfillmentType() const { return m_fulfillmentType; }
  inline void SetFulfillmentType(FulfillmentType value) {
    m_fulfillmentTypeHasBeenSet = true;
    m_fulfillmentType = value;
  }
  inline GetBenefitAllocationResult& WithFulfillmentType(FulfillmentType value) {
    SetFulfillmentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of benefit identifiers that this allocation can be applied to.</p>
   */
  inline const Aws::Vector<Aws::String>& GetApplicableBenefitIds() const { return m_applicableBenefitIds; }
  template <typename ApplicableBenefitIdsT = Aws::Vector<Aws::String>>
  void SetApplicableBenefitIds(ApplicableBenefitIdsT&& value) {
    m_applicableBenefitIdsHasBeenSet = true;
    m_applicableBenefitIds = std::forward<ApplicableBenefitIdsT>(value);
  }
  template <typename ApplicableBenefitIdsT = Aws::Vector<Aws::String>>
  GetBenefitAllocationResult& WithApplicableBenefitIds(ApplicableBenefitIdsT&& value) {
    SetApplicableBenefitIds(std::forward<ApplicableBenefitIdsT>(value));
    return *this;
  }
  template <typename ApplicableBenefitIdsT = Aws::String>
  GetBenefitAllocationResult& AddApplicableBenefitIds(ApplicableBenefitIdsT&& value) {
    m_applicableBenefitIdsHasBeenSet = true;
    m_applicableBenefitIds.emplace_back(std::forward<ApplicableBenefitIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed information about how the benefit allocation is fulfilled.</p>
   */
  inline const FulfillmentDetails& GetFulfillmentDetail() const { return m_fulfillmentDetail; }
  template <typename FulfillmentDetailT = FulfillmentDetails>
  void SetFulfillmentDetail(FulfillmentDetailT&& value) {
    m_fulfillmentDetailHasBeenSet = true;
    m_fulfillmentDetail = std::forward<FulfillmentDetailT>(value);
  }
  template <typename FulfillmentDetailT = FulfillmentDetails>
  GetBenefitAllocationResult& WithFulfillmentDetail(FulfillmentDetailT&& value) {
    SetFulfillmentDetail(std::forward<FulfillmentDetailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the benefit allocation was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetBenefitAllocationResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the benefit allocation was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetBenefitAllocationResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the benefit allocation becomes active and usable.</p>
   */
  inline const Aws::Utils::DateTime& GetStartsAt() const { return m_startsAt; }
  template <typename StartsAtT = Aws::Utils::DateTime>
  void SetStartsAt(StartsAtT&& value) {
    m_startsAtHasBeenSet = true;
    m_startsAt = std::forward<StartsAtT>(value);
  }
  template <typename StartsAtT = Aws::Utils::DateTime>
  GetBenefitAllocationResult& WithStartsAt(StartsAtT&& value) {
    SetStartsAt(std::forward<StartsAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the benefit allocation expires and is no longer
   * usable.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  GetBenefitAllocationResult& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
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
  GetBenefitAllocationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
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

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  BenefitAllocationStatus m_status{BenefitAllocationStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_statusReason;
  bool m_statusReasonHasBeenSet = false;

  Aws::String m_benefitApplicationId;
  bool m_benefitApplicationIdHasBeenSet = false;

  Aws::String m_benefitId;
  bool m_benefitIdHasBeenSet = false;

  FulfillmentType m_fulfillmentType{FulfillmentType::NOT_SET};
  bool m_fulfillmentTypeHasBeenSet = false;

  Aws::Vector<Aws::String> m_applicableBenefitIds;
  bool m_applicableBenefitIdsHasBeenSet = false;

  FulfillmentDetails m_fulfillmentDetail;
  bool m_fulfillmentDetailHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  Aws::Utils::DateTime m_startsAt{};
  bool m_startsAtHasBeenSet = false;

  Aws::Utils::DateTime m_expiresAt{};
  bool m_expiresAtHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
