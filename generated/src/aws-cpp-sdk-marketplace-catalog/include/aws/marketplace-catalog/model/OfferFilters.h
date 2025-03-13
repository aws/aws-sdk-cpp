/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/OfferEntityIdFilter.h>
#include <aws/marketplace-catalog/model/OfferNameFilter.h>
#include <aws/marketplace-catalog/model/OfferProductIdFilter.h>
#include <aws/marketplace-catalog/model/OfferResaleAuthorizationIdFilter.h>
#include <aws/marketplace-catalog/model/OfferReleaseDateFilter.h>
#include <aws/marketplace-catalog/model/OfferAvailabilityEndDateFilter.h>
#include <aws/marketplace-catalog/model/OfferBuyerAccountsFilter.h>
#include <aws/marketplace-catalog/model/OfferStateFilter.h>
#include <aws/marketplace-catalog/model/OfferTargetingFilter.h>
#include <aws/marketplace-catalog/model/OfferLastModifiedDateFilter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>Object containing all the filter fields for offers entity. Client can add
   * only one wildcard filter and a maximum of 8 filters in a single
   * <code>ListEntities</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/OfferFilters">AWS
   * API Reference</a></p>
   */
  class OfferFilters
  {
  public:
    AWS_MARKETPLACECATALOG_API OfferFilters() = default;
    AWS_MARKETPLACECATALOG_API OfferFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API OfferFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allows filtering on <code>EntityId</code> of an offer.</p>
     */
    inline const OfferEntityIdFilter& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = OfferEntityIdFilter>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = OfferEntityIdFilter>
    OfferFilters& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>Name</code> of an offer.</p>
     */
    inline const OfferNameFilter& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = OfferNameFilter>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = OfferNameFilter>
    OfferFilters& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>ProductId</code> of an offer.</p>
     */
    inline const OfferProductIdFilter& GetProductId() const { return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    template<typename ProductIdT = OfferProductIdFilter>
    void SetProductId(ProductIdT&& value) { m_productIdHasBeenSet = true; m_productId = std::forward<ProductIdT>(value); }
    template<typename ProductIdT = OfferProductIdFilter>
    OfferFilters& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>ResaleAuthorizationId</code> of an offer.</p>
     *  <p>Not all offers have a <code>ResaleAuthorizationId</code>. The response
     * will only include offers for which you have permissions.</p> 
     */
    inline const OfferResaleAuthorizationIdFilter& GetResaleAuthorizationId() const { return m_resaleAuthorizationId; }
    inline bool ResaleAuthorizationIdHasBeenSet() const { return m_resaleAuthorizationIdHasBeenSet; }
    template<typename ResaleAuthorizationIdT = OfferResaleAuthorizationIdFilter>
    void SetResaleAuthorizationId(ResaleAuthorizationIdT&& value) { m_resaleAuthorizationIdHasBeenSet = true; m_resaleAuthorizationId = std::forward<ResaleAuthorizationIdT>(value); }
    template<typename ResaleAuthorizationIdT = OfferResaleAuthorizationIdFilter>
    OfferFilters& WithResaleAuthorizationId(ResaleAuthorizationIdT&& value) { SetResaleAuthorizationId(std::forward<ResaleAuthorizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>ReleaseDate</code> of an offer.</p>
     */
    inline const OfferReleaseDateFilter& GetReleaseDate() const { return m_releaseDate; }
    inline bool ReleaseDateHasBeenSet() const { return m_releaseDateHasBeenSet; }
    template<typename ReleaseDateT = OfferReleaseDateFilter>
    void SetReleaseDate(ReleaseDateT&& value) { m_releaseDateHasBeenSet = true; m_releaseDate = std::forward<ReleaseDateT>(value); }
    template<typename ReleaseDateT = OfferReleaseDateFilter>
    OfferFilters& WithReleaseDate(ReleaseDateT&& value) { SetReleaseDate(std::forward<ReleaseDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>AvailabilityEndDate</code> of an offer.</p>
     */
    inline const OfferAvailabilityEndDateFilter& GetAvailabilityEndDate() const { return m_availabilityEndDate; }
    inline bool AvailabilityEndDateHasBeenSet() const { return m_availabilityEndDateHasBeenSet; }
    template<typename AvailabilityEndDateT = OfferAvailabilityEndDateFilter>
    void SetAvailabilityEndDate(AvailabilityEndDateT&& value) { m_availabilityEndDateHasBeenSet = true; m_availabilityEndDate = std::forward<AvailabilityEndDateT>(value); }
    template<typename AvailabilityEndDateT = OfferAvailabilityEndDateFilter>
    OfferFilters& WithAvailabilityEndDate(AvailabilityEndDateT&& value) { SetAvailabilityEndDate(std::forward<AvailabilityEndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>BuyerAccounts</code> of an offer.</p>
     */
    inline const OfferBuyerAccountsFilter& GetBuyerAccounts() const { return m_buyerAccounts; }
    inline bool BuyerAccountsHasBeenSet() const { return m_buyerAccountsHasBeenSet; }
    template<typename BuyerAccountsT = OfferBuyerAccountsFilter>
    void SetBuyerAccounts(BuyerAccountsT&& value) { m_buyerAccountsHasBeenSet = true; m_buyerAccounts = std::forward<BuyerAccountsT>(value); }
    template<typename BuyerAccountsT = OfferBuyerAccountsFilter>
    OfferFilters& WithBuyerAccounts(BuyerAccountsT&& value) { SetBuyerAccounts(std::forward<BuyerAccountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>State</code> of an offer.</p>
     */
    inline const OfferStateFilter& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = OfferStateFilter>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = OfferStateFilter>
    OfferFilters& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>Targeting</code> of an offer.</p>
     */
    inline const OfferTargetingFilter& GetTargeting() const { return m_targeting; }
    inline bool TargetingHasBeenSet() const { return m_targetingHasBeenSet; }
    template<typename TargetingT = OfferTargetingFilter>
    void SetTargeting(TargetingT&& value) { m_targetingHasBeenSet = true; m_targeting = std::forward<TargetingT>(value); }
    template<typename TargetingT = OfferTargetingFilter>
    OfferFilters& WithTargeting(TargetingT&& value) { SetTargeting(std::forward<TargetingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer.</p>
     */
    inline const OfferLastModifiedDateFilter& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = OfferLastModifiedDateFilter>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = OfferLastModifiedDateFilter>
    OfferFilters& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}
  private:

    OfferEntityIdFilter m_entityId;
    bool m_entityIdHasBeenSet = false;

    OfferNameFilter m_name;
    bool m_nameHasBeenSet = false;

    OfferProductIdFilter m_productId;
    bool m_productIdHasBeenSet = false;

    OfferResaleAuthorizationIdFilter m_resaleAuthorizationId;
    bool m_resaleAuthorizationIdHasBeenSet = false;

    OfferReleaseDateFilter m_releaseDate;
    bool m_releaseDateHasBeenSet = false;

    OfferAvailabilityEndDateFilter m_availabilityEndDate;
    bool m_availabilityEndDateHasBeenSet = false;

    OfferBuyerAccountsFilter m_buyerAccounts;
    bool m_buyerAccountsHasBeenSet = false;

    OfferStateFilter m_state;
    bool m_stateHasBeenSet = false;

    OfferTargetingFilter m_targeting;
    bool m_targetingHasBeenSet = false;

    OfferLastModifiedDateFilter m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
