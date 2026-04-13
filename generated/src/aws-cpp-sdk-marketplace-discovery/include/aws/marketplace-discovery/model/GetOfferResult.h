/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/OfferAssociatedEntity.h>
#include <aws/marketplace-discovery/model/PricingModel.h>
#include <aws/marketplace-discovery/model/PurchaseOptionBadge.h>
#include <aws/marketplace-discovery/model/SellerInformation.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {
class GetOfferResult {
 public:
  AWS_MARKETPLACEDISCOVERY_API GetOfferResult() = default;
  AWS_MARKETPLACEDISCOVERY_API GetOfferResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MARKETPLACEDISCOVERY_API GetOfferResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the offer.</p>
   */
  inline const Aws::String& GetOfferId() const { return m_offerId; }
  template <typename OfferIdT = Aws::String>
  void SetOfferId(OfferIdT&& value) {
    m_offerIdHasBeenSet = true;
    m_offerId = std::forward<OfferIdT>(value);
  }
  template <typename OfferIdT = Aws::String>
  GetOfferResult& WithOfferId(OfferIdT&& value) {
    SetOfferId(std::forward<OfferIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the catalog that the offer belongs to.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  GetOfferResult& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the offer. This is free-form text provided by the
   * seller.</p>
   */
  inline const Aws::String& GetOfferName() const { return m_offerName; }
  template <typename OfferNameT = Aws::String>
  void SetOfferName(OfferNameT&& value) {
    m_offerNameHasBeenSet = true;
    m_offerName = std::forward<OfferNameT>(value);
  }
  template <typename OfferNameT = Aws::String>
  GetOfferResult& WithOfferName(OfferNameT&& value) {
    SetOfferName(std::forward<OfferNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An encoded string to be passed by the acceptor of the terms when creating an
   * agreement.</p>
   */
  inline const Aws::String& GetAgreementProposalId() const { return m_agreementProposalId; }
  template <typename AgreementProposalIdT = Aws::String>
  void SetAgreementProposalId(AgreementProposalIdT&& value) {
    m_agreementProposalIdHasBeenSet = true;
    m_agreementProposalId = std::forward<AgreementProposalIdT>(value);
  }
  template <typename AgreementProposalIdT = Aws::String>
  GetOfferResult& WithAgreementProposalId(AgreementProposalIdT&& value) {
    SetAgreementProposalId(std::forward<AgreementProposalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time until when the offer can be procured. This value is null
   * for offers that never expire.</p>
   */
  inline const Aws::Utils::DateTime& GetExpirationTime() const { return m_expirationTime; }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  void SetExpirationTime(ExpirationTimeT&& value) {
    m_expirationTimeHasBeenSet = true;
    m_expirationTime = std::forward<ExpirationTimeT>(value);
  }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  GetOfferResult& WithExpirationTime(ExpirationTimeT&& value) {
    SetExpirationTime(std::forward<ExpirationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the offer became available to the buyer.</p>
   */
  inline const Aws::Utils::DateTime& GetAvailableFromTime() const { return m_availableFromTime; }
  template <typename AvailableFromTimeT = Aws::Utils::DateTime>
  void SetAvailableFromTime(AvailableFromTimeT&& value) {
    m_availableFromTimeHasBeenSet = true;
    m_availableFromTime = std::forward<AvailableFromTimeT>(value);
  }
  template <typename AvailableFromTimeT = Aws::Utils::DateTime>
  GetOfferResult& WithAvailableFromTime(AvailableFromTimeT&& value) {
    SetAvailableFromTime(std::forward<AvailableFromTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity responsible for selling the product under this offer.</p>
   */
  inline const SellerInformation& GetSellerOfRecord() const { return m_sellerOfRecord; }
  template <typename SellerOfRecordT = SellerInformation>
  void SetSellerOfRecord(SellerOfRecordT&& value) {
    m_sellerOfRecordHasBeenSet = true;
    m_sellerOfRecord = std::forward<SellerOfRecordT>(value);
  }
  template <typename SellerOfRecordT = SellerInformation>
  GetOfferResult& WithSellerOfRecord(SellerOfRecordT&& value) {
    SetSellerOfRecord(std::forward<SellerOfRecordT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the existing agreement that this offer would replace.
   * Enables agreement-based offer functionality.</p>
   */
  inline const Aws::String& GetReplacementAgreementId() const { return m_replacementAgreementId; }
  template <typename ReplacementAgreementIdT = Aws::String>
  void SetReplacementAgreementId(ReplacementAgreementIdT&& value) {
    m_replacementAgreementIdHasBeenSet = true;
    m_replacementAgreementId = std::forward<ReplacementAgreementIdT>(value);
  }
  template <typename ReplacementAgreementIdT = Aws::String>
  GetOfferResult& WithReplacementAgreementId(ReplacementAgreementIdT&& value) {
    SetReplacementAgreementId(std::forward<ReplacementAgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pricing model that determines how buyers are charged, such as
   * usage-based, contract, BYOL, or free.</p>
   */
  inline const PricingModel& GetPricingModel() const { return m_pricingModel; }
  template <typename PricingModelT = PricingModel>
  void SetPricingModel(PricingModelT&& value) {
    m_pricingModelHasBeenSet = true;
    m_pricingModel = std::forward<PricingModelT>(value);
  }
  template <typename PricingModelT = PricingModel>
  GetOfferResult& WithPricingModel(PricingModelT&& value) {
    SetPricingModel(std::forward<PricingModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Badges indicating special attributes of the offer, such as private pricing,
   * future dated, or replacement offer.</p>
   */
  inline const Aws::Vector<PurchaseOptionBadge>& GetBadges() const { return m_badges; }
  template <typename BadgesT = Aws::Vector<PurchaseOptionBadge>>
  void SetBadges(BadgesT&& value) {
    m_badgesHasBeenSet = true;
    m_badges = std::forward<BadgesT>(value);
  }
  template <typename BadgesT = Aws::Vector<PurchaseOptionBadge>>
  GetOfferResult& WithBadges(BadgesT&& value) {
    SetBadges(std::forward<BadgesT>(value));
    return *this;
  }
  template <typename BadgesT = PurchaseOptionBadge>
  GetOfferResult& AddBadges(BadgesT&& value) {
    m_badgesHasBeenSet = true;
    m_badges.emplace_back(std::forward<BadgesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The products and offer sets associated with this offer.</p>
   */
  inline const Aws::Vector<OfferAssociatedEntity>& GetAssociatedEntities() const { return m_associatedEntities; }
  template <typename AssociatedEntitiesT = Aws::Vector<OfferAssociatedEntity>>
  void SetAssociatedEntities(AssociatedEntitiesT&& value) {
    m_associatedEntitiesHasBeenSet = true;
    m_associatedEntities = std::forward<AssociatedEntitiesT>(value);
  }
  template <typename AssociatedEntitiesT = Aws::Vector<OfferAssociatedEntity>>
  GetOfferResult& WithAssociatedEntities(AssociatedEntitiesT&& value) {
    SetAssociatedEntities(std::forward<AssociatedEntitiesT>(value));
    return *this;
  }
  template <typename AssociatedEntitiesT = OfferAssociatedEntity>
  GetOfferResult& AddAssociatedEntities(AssociatedEntitiesT&& value) {
    m_associatedEntitiesHasBeenSet = true;
    m_associatedEntities.emplace_back(std::forward<AssociatedEntitiesT>(value));
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
  GetOfferResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_offerId;

  Aws::String m_catalog;

  Aws::String m_offerName;

  Aws::String m_agreementProposalId;

  Aws::Utils::DateTime m_expirationTime{};

  Aws::Utils::DateTime m_availableFromTime{};

  SellerInformation m_sellerOfRecord;

  Aws::String m_replacementAgreementId;

  PricingModel m_pricingModel;

  Aws::Vector<PurchaseOptionBadge> m_badges;

  Aws::Vector<OfferAssociatedEntity> m_associatedEntities;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_offerIdHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_offerNameHasBeenSet = false;
  bool m_agreementProposalIdHasBeenSet = false;
  bool m_expirationTimeHasBeenSet = false;
  bool m_availableFromTimeHasBeenSet = false;
  bool m_sellerOfRecordHasBeenSet = false;
  bool m_replacementAgreementIdHasBeenSet = false;
  bool m_pricingModelHasBeenSet = false;
  bool m_badgesHasBeenSet = false;
  bool m_associatedEntitiesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
