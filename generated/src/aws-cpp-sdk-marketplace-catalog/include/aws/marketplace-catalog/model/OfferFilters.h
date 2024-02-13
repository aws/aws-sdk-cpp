/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/OfferEntityIdFilter.h>
#include <aws/marketplace-catalog/model/OfferNameFilter.h>
#include <aws/marketplace-catalog/model/OfferProductIdFilter.h>
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
    AWS_MARKETPLACECATALOG_API OfferFilters();
    AWS_MARKETPLACECATALOG_API OfferFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API OfferFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Allows filtering on <code>EntityId</code> of an offer.</p>
     */
    inline const OfferEntityIdFilter& GetEntityId() const{ return m_entityId; }

    /**
     * <p>Allows filtering on <code>EntityId</code> of an offer.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>Allows filtering on <code>EntityId</code> of an offer.</p>
     */
    inline void SetEntityId(const OfferEntityIdFilter& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>Allows filtering on <code>EntityId</code> of an offer.</p>
     */
    inline void SetEntityId(OfferEntityIdFilter&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>Allows filtering on <code>EntityId</code> of an offer.</p>
     */
    inline OfferFilters& WithEntityId(const OfferEntityIdFilter& value) { SetEntityId(value); return *this;}

    /**
     * <p>Allows filtering on <code>EntityId</code> of an offer.</p>
     */
    inline OfferFilters& WithEntityId(OfferEntityIdFilter&& value) { SetEntityId(std::move(value)); return *this;}


    /**
     * <p>Allows filtering on the <code>Name</code> of an offer.</p>
     */
    inline const OfferNameFilter& GetName() const{ return m_name; }

    /**
     * <p>Allows filtering on the <code>Name</code> of an offer.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Allows filtering on the <code>Name</code> of an offer.</p>
     */
    inline void SetName(const OfferNameFilter& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Allows filtering on the <code>Name</code> of an offer.</p>
     */
    inline void SetName(OfferNameFilter&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Allows filtering on the <code>Name</code> of an offer.</p>
     */
    inline OfferFilters& WithName(const OfferNameFilter& value) { SetName(value); return *this;}

    /**
     * <p>Allows filtering on the <code>Name</code> of an offer.</p>
     */
    inline OfferFilters& WithName(OfferNameFilter&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>Allows filtering on the <code>ProductId</code> of an offer.</p>
     */
    inline const OfferProductIdFilter& GetProductId() const{ return m_productId; }

    /**
     * <p>Allows filtering on the <code>ProductId</code> of an offer.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>Allows filtering on the <code>ProductId</code> of an offer.</p>
     */
    inline void SetProductId(const OfferProductIdFilter& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>Allows filtering on the <code>ProductId</code> of an offer.</p>
     */
    inline void SetProductId(OfferProductIdFilter&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>Allows filtering on the <code>ProductId</code> of an offer.</p>
     */
    inline OfferFilters& WithProductId(const OfferProductIdFilter& value) { SetProductId(value); return *this;}

    /**
     * <p>Allows filtering on the <code>ProductId</code> of an offer.</p>
     */
    inline OfferFilters& WithProductId(OfferProductIdFilter&& value) { SetProductId(std::move(value)); return *this;}


    /**
     * <p>Allows filtering on the <code>ReleaseDate</code> of an offer.</p>
     */
    inline const OfferReleaseDateFilter& GetReleaseDate() const{ return m_releaseDate; }

    /**
     * <p>Allows filtering on the <code>ReleaseDate</code> of an offer.</p>
     */
    inline bool ReleaseDateHasBeenSet() const { return m_releaseDateHasBeenSet; }

    /**
     * <p>Allows filtering on the <code>ReleaseDate</code> of an offer.</p>
     */
    inline void SetReleaseDate(const OfferReleaseDateFilter& value) { m_releaseDateHasBeenSet = true; m_releaseDate = value; }

    /**
     * <p>Allows filtering on the <code>ReleaseDate</code> of an offer.</p>
     */
    inline void SetReleaseDate(OfferReleaseDateFilter&& value) { m_releaseDateHasBeenSet = true; m_releaseDate = std::move(value); }

    /**
     * <p>Allows filtering on the <code>ReleaseDate</code> of an offer.</p>
     */
    inline OfferFilters& WithReleaseDate(const OfferReleaseDateFilter& value) { SetReleaseDate(value); return *this;}

    /**
     * <p>Allows filtering on the <code>ReleaseDate</code> of an offer.</p>
     */
    inline OfferFilters& WithReleaseDate(OfferReleaseDateFilter&& value) { SetReleaseDate(std::move(value)); return *this;}


    /**
     * <p>Allows filtering on the <code>AvailabilityEndDate</code> of an offer.</p>
     */
    inline const OfferAvailabilityEndDateFilter& GetAvailabilityEndDate() const{ return m_availabilityEndDate; }

    /**
     * <p>Allows filtering on the <code>AvailabilityEndDate</code> of an offer.</p>
     */
    inline bool AvailabilityEndDateHasBeenSet() const { return m_availabilityEndDateHasBeenSet; }

    /**
     * <p>Allows filtering on the <code>AvailabilityEndDate</code> of an offer.</p>
     */
    inline void SetAvailabilityEndDate(const OfferAvailabilityEndDateFilter& value) { m_availabilityEndDateHasBeenSet = true; m_availabilityEndDate = value; }

    /**
     * <p>Allows filtering on the <code>AvailabilityEndDate</code> of an offer.</p>
     */
    inline void SetAvailabilityEndDate(OfferAvailabilityEndDateFilter&& value) { m_availabilityEndDateHasBeenSet = true; m_availabilityEndDate = std::move(value); }

    /**
     * <p>Allows filtering on the <code>AvailabilityEndDate</code> of an offer.</p>
     */
    inline OfferFilters& WithAvailabilityEndDate(const OfferAvailabilityEndDateFilter& value) { SetAvailabilityEndDate(value); return *this;}

    /**
     * <p>Allows filtering on the <code>AvailabilityEndDate</code> of an offer.</p>
     */
    inline OfferFilters& WithAvailabilityEndDate(OfferAvailabilityEndDateFilter&& value) { SetAvailabilityEndDate(std::move(value)); return *this;}


    /**
     * <p>Allows filtering on the <code>BuyerAccounts</code> of an offer.</p>
     */
    inline const OfferBuyerAccountsFilter& GetBuyerAccounts() const{ return m_buyerAccounts; }

    /**
     * <p>Allows filtering on the <code>BuyerAccounts</code> of an offer.</p>
     */
    inline bool BuyerAccountsHasBeenSet() const { return m_buyerAccountsHasBeenSet; }

    /**
     * <p>Allows filtering on the <code>BuyerAccounts</code> of an offer.</p>
     */
    inline void SetBuyerAccounts(const OfferBuyerAccountsFilter& value) { m_buyerAccountsHasBeenSet = true; m_buyerAccounts = value; }

    /**
     * <p>Allows filtering on the <code>BuyerAccounts</code> of an offer.</p>
     */
    inline void SetBuyerAccounts(OfferBuyerAccountsFilter&& value) { m_buyerAccountsHasBeenSet = true; m_buyerAccounts = std::move(value); }

    /**
     * <p>Allows filtering on the <code>BuyerAccounts</code> of an offer.</p>
     */
    inline OfferFilters& WithBuyerAccounts(const OfferBuyerAccountsFilter& value) { SetBuyerAccounts(value); return *this;}

    /**
     * <p>Allows filtering on the <code>BuyerAccounts</code> of an offer.</p>
     */
    inline OfferFilters& WithBuyerAccounts(OfferBuyerAccountsFilter&& value) { SetBuyerAccounts(std::move(value)); return *this;}


    /**
     * <p>Allows filtering on the <code>State</code> of an offer.</p>
     */
    inline const OfferStateFilter& GetState() const{ return m_state; }

    /**
     * <p>Allows filtering on the <code>State</code> of an offer.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Allows filtering on the <code>State</code> of an offer.</p>
     */
    inline void SetState(const OfferStateFilter& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Allows filtering on the <code>State</code> of an offer.</p>
     */
    inline void SetState(OfferStateFilter&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Allows filtering on the <code>State</code> of an offer.</p>
     */
    inline OfferFilters& WithState(const OfferStateFilter& value) { SetState(value); return *this;}

    /**
     * <p>Allows filtering on the <code>State</code> of an offer.</p>
     */
    inline OfferFilters& WithState(OfferStateFilter&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Allows filtering on the <code>Targeting</code> of an offer.</p>
     */
    inline const OfferTargetingFilter& GetTargeting() const{ return m_targeting; }

    /**
     * <p>Allows filtering on the <code>Targeting</code> of an offer.</p>
     */
    inline bool TargetingHasBeenSet() const { return m_targetingHasBeenSet; }

    /**
     * <p>Allows filtering on the <code>Targeting</code> of an offer.</p>
     */
    inline void SetTargeting(const OfferTargetingFilter& value) { m_targetingHasBeenSet = true; m_targeting = value; }

    /**
     * <p>Allows filtering on the <code>Targeting</code> of an offer.</p>
     */
    inline void SetTargeting(OfferTargetingFilter&& value) { m_targetingHasBeenSet = true; m_targeting = std::move(value); }

    /**
     * <p>Allows filtering on the <code>Targeting</code> of an offer.</p>
     */
    inline OfferFilters& WithTargeting(const OfferTargetingFilter& value) { SetTargeting(value); return *this;}

    /**
     * <p>Allows filtering on the <code>Targeting</code> of an offer.</p>
     */
    inline OfferFilters& WithTargeting(OfferTargetingFilter&& value) { SetTargeting(std::move(value)); return *this;}


    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer.</p>
     */
    inline const OfferLastModifiedDateFilter& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer.</p>
     */
    inline void SetLastModifiedDate(const OfferLastModifiedDateFilter& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer.</p>
     */
    inline void SetLastModifiedDate(OfferLastModifiedDateFilter&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer.</p>
     */
    inline OfferFilters& WithLastModifiedDate(const OfferLastModifiedDateFilter& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer.</p>
     */
    inline OfferFilters& WithLastModifiedDate(OfferLastModifiedDateFilter&& value) { SetLastModifiedDate(std::move(value)); return *this;}

  private:

    OfferEntityIdFilter m_entityId;
    bool m_entityIdHasBeenSet = false;

    OfferNameFilter m_name;
    bool m_nameHasBeenSet = false;

    OfferProductIdFilter m_productId;
    bool m_productIdHasBeenSet = false;

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
