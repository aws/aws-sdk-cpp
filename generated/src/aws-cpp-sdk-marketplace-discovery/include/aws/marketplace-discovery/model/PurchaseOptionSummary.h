/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/PurchaseOptionAssociatedEntity.h>
#include <aws/marketplace-discovery/model/PurchaseOptionBadge.h>
#include <aws/marketplace-discovery/model/PurchaseOptionType.h>
#include <aws/marketplace-discovery/model/SellerInformation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>Summary information about a purchase option (offer or offer set) available to
 * the buyer, including the seller, badges, and associated products.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/PurchaseOptionSummary">AWS
 * API Reference</a></p>
 */
class PurchaseOptionSummary {
 public:
  AWS_MARKETPLACEDISCOVERY_API PurchaseOptionSummary() = default;
  AWS_MARKETPLACEDISCOVERY_API PurchaseOptionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API PurchaseOptionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the purchase option.</p>
   */
  inline const Aws::String& GetPurchaseOptionId() const { return m_purchaseOptionId; }
  inline bool PurchaseOptionIdHasBeenSet() const { return m_purchaseOptionIdHasBeenSet; }
  template <typename PurchaseOptionIdT = Aws::String>
  void SetPurchaseOptionId(PurchaseOptionIdT&& value) {
    m_purchaseOptionIdHasBeenSet = true;
    m_purchaseOptionId = std::forward<PurchaseOptionIdT>(value);
  }
  template <typename PurchaseOptionIdT = Aws::String>
  PurchaseOptionSummary& WithPurchaseOptionId(PurchaseOptionIdT&& value) {
    SetPurchaseOptionId(std::forward<PurchaseOptionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the catalog that the purchase option belongs to.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  PurchaseOptionSummary& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of purchase option. Values are <code>OFFER</code> for a
   * single-product offer or <code>OFFERSET</code> for a bundled offer set.</p>
   */
  inline PurchaseOptionType GetPurchaseOptionType() const { return m_purchaseOptionType; }
  inline bool PurchaseOptionTypeHasBeenSet() const { return m_purchaseOptionTypeHasBeenSet; }
  inline void SetPurchaseOptionType(PurchaseOptionType value) {
    m_purchaseOptionTypeHasBeenSet = true;
    m_purchaseOptionType = value;
  }
  inline PurchaseOptionSummary& WithPurchaseOptionType(PurchaseOptionType value) {
    SetPurchaseOptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the purchase option.</p>
   */
  inline const Aws::String& GetPurchaseOptionName() const { return m_purchaseOptionName; }
  inline bool PurchaseOptionNameHasBeenSet() const { return m_purchaseOptionNameHasBeenSet; }
  template <typename PurchaseOptionNameT = Aws::String>
  void SetPurchaseOptionName(PurchaseOptionNameT&& value) {
    m_purchaseOptionNameHasBeenSet = true;
    m_purchaseOptionName = std::forward<PurchaseOptionNameT>(value);
  }
  template <typename PurchaseOptionNameT = Aws::String>
  PurchaseOptionSummary& WithPurchaseOptionName(PurchaseOptionNameT&& value) {
    SetPurchaseOptionName(std::forward<PurchaseOptionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the purchase option became available to the buyer.</p>
   */
  inline const Aws::Utils::DateTime& GetAvailableFromTime() const { return m_availableFromTime; }
  inline bool AvailableFromTimeHasBeenSet() const { return m_availableFromTimeHasBeenSet; }
  template <typename AvailableFromTimeT = Aws::Utils::DateTime>
  void SetAvailableFromTime(AvailableFromTimeT&& value) {
    m_availableFromTimeHasBeenSet = true;
    m_availableFromTime = std::forward<AvailableFromTimeT>(value);
  }
  template <typename AvailableFromTimeT = Aws::Utils::DateTime>
  PurchaseOptionSummary& WithAvailableFromTime(AvailableFromTimeT&& value) {
    SetAvailableFromTime(std::forward<AvailableFromTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the purchase option expires and is no longer available
   * for procurement.</p>
   */
  inline const Aws::Utils::DateTime& GetExpirationTime() const { return m_expirationTime; }
  inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  void SetExpirationTime(ExpirationTimeT&& value) {
    m_expirationTimeHasBeenSet = true;
    m_expirationTime = std::forward<ExpirationTimeT>(value);
  }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  PurchaseOptionSummary& WithExpirationTime(ExpirationTimeT&& value) {
    SetExpirationTime(std::forward<ExpirationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity responsible for selling the product under this purchase
   * option.</p>
   */
  inline const SellerInformation& GetSellerOfRecord() const { return m_sellerOfRecord; }
  inline bool SellerOfRecordHasBeenSet() const { return m_sellerOfRecordHasBeenSet; }
  template <typename SellerOfRecordT = SellerInformation>
  void SetSellerOfRecord(SellerOfRecordT&& value) {
    m_sellerOfRecordHasBeenSet = true;
    m_sellerOfRecord = std::forward<SellerOfRecordT>(value);
  }
  template <typename SellerOfRecordT = SellerInformation>
  PurchaseOptionSummary& WithSellerOfRecord(SellerOfRecordT&& value) {
    SetSellerOfRecord(std::forward<SellerOfRecordT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Badges indicating special attributes of the purchase option, such as private
   * pricing or future dated.</p>
   */
  inline const Aws::Vector<PurchaseOptionBadge>& GetBadges() const { return m_badges; }
  inline bool BadgesHasBeenSet() const { return m_badgesHasBeenSet; }
  template <typename BadgesT = Aws::Vector<PurchaseOptionBadge>>
  void SetBadges(BadgesT&& value) {
    m_badgesHasBeenSet = true;
    m_badges = std::forward<BadgesT>(value);
  }
  template <typename BadgesT = Aws::Vector<PurchaseOptionBadge>>
  PurchaseOptionSummary& WithBadges(BadgesT&& value) {
    SetBadges(std::forward<BadgesT>(value));
    return *this;
  }
  template <typename BadgesT = PurchaseOptionBadge>
  PurchaseOptionSummary& AddBadges(BadgesT&& value) {
    m_badgesHasBeenSet = true;
    m_badges.emplace_back(std::forward<BadgesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The products, offers, and offer sets associated with this purchase
   * option.</p>
   */
  inline const Aws::Vector<PurchaseOptionAssociatedEntity>& GetAssociatedEntities() const { return m_associatedEntities; }
  inline bool AssociatedEntitiesHasBeenSet() const { return m_associatedEntitiesHasBeenSet; }
  template <typename AssociatedEntitiesT = Aws::Vector<PurchaseOptionAssociatedEntity>>
  void SetAssociatedEntities(AssociatedEntitiesT&& value) {
    m_associatedEntitiesHasBeenSet = true;
    m_associatedEntities = std::forward<AssociatedEntitiesT>(value);
  }
  template <typename AssociatedEntitiesT = Aws::Vector<PurchaseOptionAssociatedEntity>>
  PurchaseOptionSummary& WithAssociatedEntities(AssociatedEntitiesT&& value) {
    SetAssociatedEntities(std::forward<AssociatedEntitiesT>(value));
    return *this;
  }
  template <typename AssociatedEntitiesT = PurchaseOptionAssociatedEntity>
  PurchaseOptionSummary& AddAssociatedEntities(AssociatedEntitiesT&& value) {
    m_associatedEntitiesHasBeenSet = true;
    m_associatedEntities.emplace_back(std::forward<AssociatedEntitiesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_purchaseOptionId;

  Aws::String m_catalog;

  PurchaseOptionType m_purchaseOptionType{PurchaseOptionType::NOT_SET};

  Aws::String m_purchaseOptionName;

  Aws::Utils::DateTime m_availableFromTime{};

  Aws::Utils::DateTime m_expirationTime{};

  SellerInformation m_sellerOfRecord;

  Aws::Vector<PurchaseOptionBadge> m_badges;

  Aws::Vector<PurchaseOptionAssociatedEntity> m_associatedEntities;
  bool m_purchaseOptionIdHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_purchaseOptionTypeHasBeenSet = false;
  bool m_purchaseOptionNameHasBeenSet = false;
  bool m_availableFromTimeHasBeenSet = false;
  bool m_expirationTimeHasBeenSet = false;
  bool m_sellerOfRecordHasBeenSet = false;
  bool m_badgesHasBeenSet = false;
  bool m_associatedEntitiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
