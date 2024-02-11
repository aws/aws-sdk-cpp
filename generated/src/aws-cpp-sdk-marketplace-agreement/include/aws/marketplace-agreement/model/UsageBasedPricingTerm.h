/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/model/UsageBasedRateCardItem.h>
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
namespace AgreementService
{
namespace Model
{

  /**
   * <p>Defines a usage-based pricing model (typically, pay-as-you-go pricing), where
   * the customers are charged based on product usage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/UsageBasedPricingTerm">AWS
   * API Reference</a></p>
   */
  class UsageBasedPricingTerm
  {
  public:
    AWS_AGREEMENTSERVICE_API UsageBasedPricingTerm();
    AWS_AGREEMENTSERVICE_API UsageBasedPricingTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API UsageBasedPricingTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the currency for the prices mentioned in the term. </p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>Defines the currency for the prices mentioned in the term. </p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>Defines the currency for the prices mentioned in the term. </p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>Defines the currency for the prices mentioned in the term. </p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>Defines the currency for the prices mentioned in the term. </p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * <p>Defines the currency for the prices mentioned in the term. </p>
     */
    inline UsageBasedPricingTerm& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>Defines the currency for the prices mentioned in the term. </p>
     */
    inline UsageBasedPricingTerm& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>Defines the currency for the prices mentioned in the term. </p>
     */
    inline UsageBasedPricingTerm& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>List of rate cards.</p>
     */
    inline const Aws::Vector<UsageBasedRateCardItem>& GetRateCards() const{ return m_rateCards; }

    /**
     * <p>List of rate cards.</p>
     */
    inline bool RateCardsHasBeenSet() const { return m_rateCardsHasBeenSet; }

    /**
     * <p>List of rate cards.</p>
     */
    inline void SetRateCards(const Aws::Vector<UsageBasedRateCardItem>& value) { m_rateCardsHasBeenSet = true; m_rateCards = value; }

    /**
     * <p>List of rate cards.</p>
     */
    inline void SetRateCards(Aws::Vector<UsageBasedRateCardItem>&& value) { m_rateCardsHasBeenSet = true; m_rateCards = std::move(value); }

    /**
     * <p>List of rate cards.</p>
     */
    inline UsageBasedPricingTerm& WithRateCards(const Aws::Vector<UsageBasedRateCardItem>& value) { SetRateCards(value); return *this;}

    /**
     * <p>List of rate cards.</p>
     */
    inline UsageBasedPricingTerm& WithRateCards(Aws::Vector<UsageBasedRateCardItem>&& value) { SetRateCards(std::move(value)); return *this;}

    /**
     * <p>List of rate cards.</p>
     */
    inline UsageBasedPricingTerm& AddRateCards(const UsageBasedRateCardItem& value) { m_rateCardsHasBeenSet = true; m_rateCards.push_back(value); return *this; }

    /**
     * <p>List of rate cards.</p>
     */
    inline UsageBasedPricingTerm& AddRateCards(UsageBasedRateCardItem&& value) { m_rateCardsHasBeenSet = true; m_rateCards.push_back(std::move(value)); return *this; }


    /**
     * <p>Category of the term.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Category of the term.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Category of the term.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Category of the term.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Category of the term.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Category of the term.</p>
     */
    inline UsageBasedPricingTerm& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Category of the term.</p>
     */
    inline UsageBasedPricingTerm& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Category of the term.</p>
     */
    inline UsageBasedPricingTerm& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::Vector<UsageBasedRateCardItem> m_rateCards;
    bool m_rateCardsHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
