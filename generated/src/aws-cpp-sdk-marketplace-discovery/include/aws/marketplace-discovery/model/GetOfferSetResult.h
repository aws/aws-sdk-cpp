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
#include <aws/marketplace-discovery/model/OfferSetAssociatedEntity.h>
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
class GetOfferSetResult {
 public:
  AWS_MARKETPLACEDISCOVERY_API GetOfferSetResult() = default;
  AWS_MARKETPLACEDISCOVERY_API GetOfferSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MARKETPLACEDISCOVERY_API GetOfferSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the offer set.</p>
   */
  inline const Aws::String& GetOfferSetId() const { return m_offerSetId; }
  template <typename OfferSetIdT = Aws::String>
  void SetOfferSetId(OfferSetIdT&& value) {
    m_offerSetIdHasBeenSet = true;
    m_offerSetId = std::forward<OfferSetIdT>(value);
  }
  template <typename OfferSetIdT = Aws::String>
  GetOfferSetResult& WithOfferSetId(OfferSetIdT&& value) {
    SetOfferSetId(std::forward<OfferSetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the catalog that the offer set belongs to.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  GetOfferSetResult& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the offer set.</p>
   */
  inline const Aws::String& GetOfferSetName() const { return m_offerSetName; }
  template <typename OfferSetNameT = Aws::String>
  void SetOfferSetName(OfferSetNameT&& value) {
    m_offerSetNameHasBeenSet = true;
    m_offerSetName = std::forward<OfferSetNameT>(value);
  }
  template <typename OfferSetNameT = Aws::String>
  GetOfferSetResult& WithOfferSetName(OfferSetNameT&& value) {
    SetOfferSetName(std::forward<OfferSetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the offer set became available to the buyer.</p>
   */
  inline const Aws::Utils::DateTime& GetAvailableFromTime() const { return m_availableFromTime; }
  template <typename AvailableFromTimeT = Aws::Utils::DateTime>
  void SetAvailableFromTime(AvailableFromTimeT&& value) {
    m_availableFromTimeHasBeenSet = true;
    m_availableFromTime = std::forward<AvailableFromTimeT>(value);
  }
  template <typename AvailableFromTimeT = Aws::Utils::DateTime>
  GetOfferSetResult& WithAvailableFromTime(AvailableFromTimeT&& value) {
    SetAvailableFromTime(std::forward<AvailableFromTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the offer set expires and is no longer available for
   * procurement.</p>
   */
  inline const Aws::Utils::DateTime& GetExpirationTime() const { return m_expirationTime; }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  void SetExpirationTime(ExpirationTimeT&& value) {
    m_expirationTimeHasBeenSet = true;
    m_expirationTime = std::forward<ExpirationTimeT>(value);
  }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  GetOfferSetResult& WithExpirationTime(ExpirationTimeT&& value) {
    SetExpirationTime(std::forward<ExpirationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed information about the offer set that helps buyers understand its
   * purpose and contents.</p>
   */
  inline const Aws::String& GetBuyerNotes() const { return m_buyerNotes; }
  template <typename BuyerNotesT = Aws::String>
  void SetBuyerNotes(BuyerNotesT&& value) {
    m_buyerNotesHasBeenSet = true;
    m_buyerNotes = std::forward<BuyerNotesT>(value);
  }
  template <typename BuyerNotesT = Aws::String>
  GetOfferSetResult& WithBuyerNotes(BuyerNotesT&& value) {
    SetBuyerNotes(std::forward<BuyerNotesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity responsible for selling the products under this offer set.</p>
   */
  inline const SellerInformation& GetSellerOfRecord() const { return m_sellerOfRecord; }
  template <typename SellerOfRecordT = SellerInformation>
  void SetSellerOfRecord(SellerOfRecordT&& value) {
    m_sellerOfRecordHasBeenSet = true;
    m_sellerOfRecord = std::forward<SellerOfRecordT>(value);
  }
  template <typename SellerOfRecordT = SellerInformation>
  GetOfferSetResult& WithSellerOfRecord(SellerOfRecordT&& value) {
    SetSellerOfRecord(std::forward<SellerOfRecordT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Badges indicating special attributes of the offer set, such as private
   * pricing or future dated.</p>
   */
  inline const Aws::Vector<PurchaseOptionBadge>& GetBadges() const { return m_badges; }
  template <typename BadgesT = Aws::Vector<PurchaseOptionBadge>>
  void SetBadges(BadgesT&& value) {
    m_badgesHasBeenSet = true;
    m_badges = std::forward<BadgesT>(value);
  }
  template <typename BadgesT = Aws::Vector<PurchaseOptionBadge>>
  GetOfferSetResult& WithBadges(BadgesT&& value) {
    SetBadges(std::forward<BadgesT>(value));
    return *this;
  }
  template <typename BadgesT = PurchaseOptionBadge>
  GetOfferSetResult& AddBadges(BadgesT&& value) {
    m_badgesHasBeenSet = true;
    m_badges.emplace_back(std::forward<BadgesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The products and offers included in this offer set.</p>
   */
  inline const Aws::Vector<OfferSetAssociatedEntity>& GetAssociatedEntities() const { return m_associatedEntities; }
  template <typename AssociatedEntitiesT = Aws::Vector<OfferSetAssociatedEntity>>
  void SetAssociatedEntities(AssociatedEntitiesT&& value) {
    m_associatedEntitiesHasBeenSet = true;
    m_associatedEntities = std::forward<AssociatedEntitiesT>(value);
  }
  template <typename AssociatedEntitiesT = Aws::Vector<OfferSetAssociatedEntity>>
  GetOfferSetResult& WithAssociatedEntities(AssociatedEntitiesT&& value) {
    SetAssociatedEntities(std::forward<AssociatedEntitiesT>(value));
    return *this;
  }
  template <typename AssociatedEntitiesT = OfferSetAssociatedEntity>
  GetOfferSetResult& AddAssociatedEntities(AssociatedEntitiesT&& value) {
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
  GetOfferSetResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_offerSetId;

  Aws::String m_catalog;

  Aws::String m_offerSetName;

  Aws::Utils::DateTime m_availableFromTime{};

  Aws::Utils::DateTime m_expirationTime{};

  Aws::String m_buyerNotes;

  SellerInformation m_sellerOfRecord;

  Aws::Vector<PurchaseOptionBadge> m_badges;

  Aws::Vector<OfferSetAssociatedEntity> m_associatedEntities;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_offerSetIdHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_offerSetNameHasBeenSet = false;
  bool m_availableFromTimeHasBeenSet = false;
  bool m_expirationTimeHasBeenSet = false;
  bool m_buyerNotesHasBeenSet = false;
  bool m_sellerOfRecordHasBeenSet = false;
  bool m_badgesHasBeenSet = false;
  bool m_associatedEntitiesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
