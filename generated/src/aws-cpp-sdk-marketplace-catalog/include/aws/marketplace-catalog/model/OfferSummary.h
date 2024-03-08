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
    AWS_MARKETPLACECATALOG_API OfferSummary();
    AWS_MARKETPLACECATALOG_API OfferSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API OfferSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the offer.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the offer.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the offer.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the offer.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the offer.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the offer.</p>
     */
    inline OfferSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the offer.</p>
     */
    inline OfferSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the offer.</p>
     */
    inline OfferSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The product ID of the offer.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product ID of the offer.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The product ID of the offer.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product ID of the offer.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The product ID of the offer.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The product ID of the offer.</p>
     */
    inline OfferSummary& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product ID of the offer.</p>
     */
    inline OfferSummary& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The product ID of the offer.</p>
     */
    inline OfferSummary& WithProductId(const char* value) { SetProductId(value); return *this;}


    /**
     * <p>The release date of the offer.</p>
     */
    inline const Aws::String& GetReleaseDate() const{ return m_releaseDate; }

    /**
     * <p>The release date of the offer.</p>
     */
    inline bool ReleaseDateHasBeenSet() const { return m_releaseDateHasBeenSet; }

    /**
     * <p>The release date of the offer.</p>
     */
    inline void SetReleaseDate(const Aws::String& value) { m_releaseDateHasBeenSet = true; m_releaseDate = value; }

    /**
     * <p>The release date of the offer.</p>
     */
    inline void SetReleaseDate(Aws::String&& value) { m_releaseDateHasBeenSet = true; m_releaseDate = std::move(value); }

    /**
     * <p>The release date of the offer.</p>
     */
    inline void SetReleaseDate(const char* value) { m_releaseDateHasBeenSet = true; m_releaseDate.assign(value); }

    /**
     * <p>The release date of the offer.</p>
     */
    inline OfferSummary& WithReleaseDate(const Aws::String& value) { SetReleaseDate(value); return *this;}

    /**
     * <p>The release date of the offer.</p>
     */
    inline OfferSummary& WithReleaseDate(Aws::String&& value) { SetReleaseDate(std::move(value)); return *this;}

    /**
     * <p>The release date of the offer.</p>
     */
    inline OfferSummary& WithReleaseDate(const char* value) { SetReleaseDate(value); return *this;}


    /**
     * <p>The availability end date of the offer.</p>
     */
    inline const Aws::String& GetAvailabilityEndDate() const{ return m_availabilityEndDate; }

    /**
     * <p>The availability end date of the offer.</p>
     */
    inline bool AvailabilityEndDateHasBeenSet() const { return m_availabilityEndDateHasBeenSet; }

    /**
     * <p>The availability end date of the offer.</p>
     */
    inline void SetAvailabilityEndDate(const Aws::String& value) { m_availabilityEndDateHasBeenSet = true; m_availabilityEndDate = value; }

    /**
     * <p>The availability end date of the offer.</p>
     */
    inline void SetAvailabilityEndDate(Aws::String&& value) { m_availabilityEndDateHasBeenSet = true; m_availabilityEndDate = std::move(value); }

    /**
     * <p>The availability end date of the offer.</p>
     */
    inline void SetAvailabilityEndDate(const char* value) { m_availabilityEndDateHasBeenSet = true; m_availabilityEndDate.assign(value); }

    /**
     * <p>The availability end date of the offer.</p>
     */
    inline OfferSummary& WithAvailabilityEndDate(const Aws::String& value) { SetAvailabilityEndDate(value); return *this;}

    /**
     * <p>The availability end date of the offer.</p>
     */
    inline OfferSummary& WithAvailabilityEndDate(Aws::String&& value) { SetAvailabilityEndDate(std::move(value)); return *this;}

    /**
     * <p>The availability end date of the offer.</p>
     */
    inline OfferSummary& WithAvailabilityEndDate(const char* value) { SetAvailabilityEndDate(value); return *this;}


    /**
     * <p>The buyer accounts in the offer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBuyerAccounts() const{ return m_buyerAccounts; }

    /**
     * <p>The buyer accounts in the offer.</p>
     */
    inline bool BuyerAccountsHasBeenSet() const { return m_buyerAccountsHasBeenSet; }

    /**
     * <p>The buyer accounts in the offer.</p>
     */
    inline void SetBuyerAccounts(const Aws::Vector<Aws::String>& value) { m_buyerAccountsHasBeenSet = true; m_buyerAccounts = value; }

    /**
     * <p>The buyer accounts in the offer.</p>
     */
    inline void SetBuyerAccounts(Aws::Vector<Aws::String>&& value) { m_buyerAccountsHasBeenSet = true; m_buyerAccounts = std::move(value); }

    /**
     * <p>The buyer accounts in the offer.</p>
     */
    inline OfferSummary& WithBuyerAccounts(const Aws::Vector<Aws::String>& value) { SetBuyerAccounts(value); return *this;}

    /**
     * <p>The buyer accounts in the offer.</p>
     */
    inline OfferSummary& WithBuyerAccounts(Aws::Vector<Aws::String>&& value) { SetBuyerAccounts(std::move(value)); return *this;}

    /**
     * <p>The buyer accounts in the offer.</p>
     */
    inline OfferSummary& AddBuyerAccounts(const Aws::String& value) { m_buyerAccountsHasBeenSet = true; m_buyerAccounts.push_back(value); return *this; }

    /**
     * <p>The buyer accounts in the offer.</p>
     */
    inline OfferSummary& AddBuyerAccounts(Aws::String&& value) { m_buyerAccountsHasBeenSet = true; m_buyerAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>The buyer accounts in the offer.</p>
     */
    inline OfferSummary& AddBuyerAccounts(const char* value) { m_buyerAccountsHasBeenSet = true; m_buyerAccounts.push_back(value); return *this; }


    /**
     * <p>The status of the offer.</p>
     */
    inline const OfferStateString& GetState() const{ return m_state; }

    /**
     * <p>The status of the offer.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The status of the offer.</p>
     */
    inline void SetState(const OfferStateString& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The status of the offer.</p>
     */
    inline void SetState(OfferStateString&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The status of the offer.</p>
     */
    inline OfferSummary& WithState(const OfferStateString& value) { SetState(value); return *this;}

    /**
     * <p>The status of the offer.</p>
     */
    inline OfferSummary& WithState(OfferStateString&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The targeting in the offer.</p>
     */
    inline const Aws::Vector<OfferTargetingString>& GetTargeting() const{ return m_targeting; }

    /**
     * <p>The targeting in the offer.</p>
     */
    inline bool TargetingHasBeenSet() const { return m_targetingHasBeenSet; }

    /**
     * <p>The targeting in the offer.</p>
     */
    inline void SetTargeting(const Aws::Vector<OfferTargetingString>& value) { m_targetingHasBeenSet = true; m_targeting = value; }

    /**
     * <p>The targeting in the offer.</p>
     */
    inline void SetTargeting(Aws::Vector<OfferTargetingString>&& value) { m_targetingHasBeenSet = true; m_targeting = std::move(value); }

    /**
     * <p>The targeting in the offer.</p>
     */
    inline OfferSummary& WithTargeting(const Aws::Vector<OfferTargetingString>& value) { SetTargeting(value); return *this;}

    /**
     * <p>The targeting in the offer.</p>
     */
    inline OfferSummary& WithTargeting(Aws::Vector<OfferTargetingString>&& value) { SetTargeting(std::move(value)); return *this;}

    /**
     * <p>The targeting in the offer.</p>
     */
    inline OfferSummary& AddTargeting(const OfferTargetingString& value) { m_targetingHasBeenSet = true; m_targeting.push_back(value); return *this; }

    /**
     * <p>The targeting in the offer.</p>
     */
    inline OfferSummary& AddTargeting(OfferTargetingString&& value) { m_targetingHasBeenSet = true; m_targeting.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_releaseDate;
    bool m_releaseDateHasBeenSet = false;

    Aws::String m_availabilityEndDate;
    bool m_availabilityEndDateHasBeenSet = false;

    Aws::Vector<Aws::String> m_buyerAccounts;
    bool m_buyerAccountsHasBeenSet = false;

    OfferStateString m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<OfferTargetingString> m_targeting;
    bool m_targetingHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
