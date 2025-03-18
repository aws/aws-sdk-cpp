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
    AWS_AGREEMENTSERVICE_API UsageBasedPricingTerm() = default;
    AWS_AGREEMENTSERVICE_API UsageBasedPricingTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API UsageBasedPricingTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the currency for the prices mentioned in the term. </p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    UsageBasedPricingTerm& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of rate cards.</p>
     */
    inline const Aws::Vector<UsageBasedRateCardItem>& GetRateCards() const { return m_rateCards; }
    inline bool RateCardsHasBeenSet() const { return m_rateCardsHasBeenSet; }
    template<typename RateCardsT = Aws::Vector<UsageBasedRateCardItem>>
    void SetRateCards(RateCardsT&& value) { m_rateCardsHasBeenSet = true; m_rateCards = std::forward<RateCardsT>(value); }
    template<typename RateCardsT = Aws::Vector<UsageBasedRateCardItem>>
    UsageBasedPricingTerm& WithRateCards(RateCardsT&& value) { SetRateCards(std::forward<RateCardsT>(value)); return *this;}
    template<typename RateCardsT = UsageBasedRateCardItem>
    UsageBasedPricingTerm& AddRateCards(RateCardsT&& value) { m_rateCardsHasBeenSet = true; m_rateCards.emplace_back(std::forward<RateCardsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Category of the term.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    UsageBasedPricingTerm& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
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
