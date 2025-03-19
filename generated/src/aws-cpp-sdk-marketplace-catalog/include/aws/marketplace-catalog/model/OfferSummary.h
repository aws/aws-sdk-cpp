/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/model/OfferStateString.h>
#include <aws/marketplace-catalog/model/OfferTargetingString.h>
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
   * <p>Summarized information about an offer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/OfferSummary">AWS
   * API Reference</a></p>
   */
  class OfferSummary
  {
  public:
    AWS_MARKETPLACECATALOG_API OfferSummary() = default;
    AWS_MARKETPLACECATALOG_API OfferSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API OfferSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the offer.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    OfferSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product ID of the offer.</p>
     */
    inline const Aws::String& GetProductId() const { return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    template<typename ProductIdT = Aws::String>
    void SetProductId(ProductIdT&& value) { m_productIdHasBeenSet = true; m_productId = std::forward<ProductIdT>(value); }
    template<typename ProductIdT = Aws::String>
    OfferSummary& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ResaleAuthorizationId of the offer.</p>
     */
    inline const Aws::String& GetResaleAuthorizationId() const { return m_resaleAuthorizationId; }
    inline bool ResaleAuthorizationIdHasBeenSet() const { return m_resaleAuthorizationIdHasBeenSet; }
    template<typename ResaleAuthorizationIdT = Aws::String>
    void SetResaleAuthorizationId(ResaleAuthorizationIdT&& value) { m_resaleAuthorizationIdHasBeenSet = true; m_resaleAuthorizationId = std::forward<ResaleAuthorizationIdT>(value); }
    template<typename ResaleAuthorizationIdT = Aws::String>
    OfferSummary& WithResaleAuthorizationId(ResaleAuthorizationIdT&& value) { SetResaleAuthorizationId(std::forward<ResaleAuthorizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The release date of the offer.</p>
     */
    inline const Aws::String& GetReleaseDate() const { return m_releaseDate; }
    inline bool ReleaseDateHasBeenSet() const { return m_releaseDateHasBeenSet; }
    template<typename ReleaseDateT = Aws::String>
    void SetReleaseDate(ReleaseDateT&& value) { m_releaseDateHasBeenSet = true; m_releaseDate = std::forward<ReleaseDateT>(value); }
    template<typename ReleaseDateT = Aws::String>
    OfferSummary& WithReleaseDate(ReleaseDateT&& value) { SetReleaseDate(std::forward<ReleaseDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability end date of the offer.</p>
     */
    inline const Aws::String& GetAvailabilityEndDate() const { return m_availabilityEndDate; }
    inline bool AvailabilityEndDateHasBeenSet() const { return m_availabilityEndDateHasBeenSet; }
    template<typename AvailabilityEndDateT = Aws::String>
    void SetAvailabilityEndDate(AvailabilityEndDateT&& value) { m_availabilityEndDateHasBeenSet = true; m_availabilityEndDate = std::forward<AvailabilityEndDateT>(value); }
    template<typename AvailabilityEndDateT = Aws::String>
    OfferSummary& WithAvailabilityEndDate(AvailabilityEndDateT&& value) { SetAvailabilityEndDate(std::forward<AvailabilityEndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buyer accounts in the offer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBuyerAccounts() const { return m_buyerAccounts; }
    inline bool BuyerAccountsHasBeenSet() const { return m_buyerAccountsHasBeenSet; }
    template<typename BuyerAccountsT = Aws::Vector<Aws::String>>
    void SetBuyerAccounts(BuyerAccountsT&& value) { m_buyerAccountsHasBeenSet = true; m_buyerAccounts = std::forward<BuyerAccountsT>(value); }
    template<typename BuyerAccountsT = Aws::Vector<Aws::String>>
    OfferSummary& WithBuyerAccounts(BuyerAccountsT&& value) { SetBuyerAccounts(std::forward<BuyerAccountsT>(value)); return *this;}
    template<typename BuyerAccountsT = Aws::String>
    OfferSummary& AddBuyerAccounts(BuyerAccountsT&& value) { m_buyerAccountsHasBeenSet = true; m_buyerAccounts.emplace_back(std::forward<BuyerAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the offer.</p>
     */
    inline OfferStateString GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(OfferStateString value) { m_stateHasBeenSet = true; m_state = value; }
    inline OfferSummary& WithState(OfferStateString value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targeting in the offer.</p>
     */
    inline const Aws::Vector<OfferTargetingString>& GetTargeting() const { return m_targeting; }
    inline bool TargetingHasBeenSet() const { return m_targetingHasBeenSet; }
    template<typename TargetingT = Aws::Vector<OfferTargetingString>>
    void SetTargeting(TargetingT&& value) { m_targetingHasBeenSet = true; m_targeting = std::forward<TargetingT>(value); }
    template<typename TargetingT = Aws::Vector<OfferTargetingString>>
    OfferSummary& WithTargeting(TargetingT&& value) { SetTargeting(std::forward<TargetingT>(value)); return *this;}
    inline OfferSummary& AddTargeting(OfferTargetingString value) { m_targetingHasBeenSet = true; m_targeting.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_resaleAuthorizationId;
    bool m_resaleAuthorizationIdHasBeenSet = false;

    Aws::String m_releaseDate;
    bool m_releaseDateHasBeenSet = false;

    Aws::String m_availabilityEndDate;
    bool m_availabilityEndDateHasBeenSet = false;

    Aws::Vector<Aws::String> m_buyerAccounts;
    bool m_buyerAccountsHasBeenSet = false;

    OfferStateString m_state{OfferStateString::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<OfferTargetingString> m_targeting;
    bool m_targetingHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
