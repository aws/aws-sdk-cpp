/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/ConfigurableUpfrontPricingTermConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/model/ConfigurableUpfrontRateCardItem.h>
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
   * <p>Defines a prepaid payment model that allows buyers to configure the
   * entitlements they want to purchase and the duration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/ConfigurableUpfrontPricingTerm">AWS
   * API Reference</a></p>
   */
  class ConfigurableUpfrontPricingTerm
  {
  public:
    AWS_AGREEMENTSERVICE_API ConfigurableUpfrontPricingTerm() = default;
    AWS_AGREEMENTSERVICE_API ConfigurableUpfrontPricingTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API ConfigurableUpfrontPricingTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional parameters specified by the acceptor while accepting the term.</p>
     */
    inline const ConfigurableUpfrontPricingTermConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = ConfigurableUpfrontPricingTermConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = ConfigurableUpfrontPricingTermConfiguration>
    ConfigurableUpfrontPricingTerm& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the currency for the prices mentioned in the term.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    ConfigurableUpfrontPricingTerm& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A rate card defines the per unit rates for product dimensions.</p>
     */
    inline const Aws::Vector<ConfigurableUpfrontRateCardItem>& GetRateCards() const { return m_rateCards; }
    inline bool RateCardsHasBeenSet() const { return m_rateCardsHasBeenSet; }
    template<typename RateCardsT = Aws::Vector<ConfigurableUpfrontRateCardItem>>
    void SetRateCards(RateCardsT&& value) { m_rateCardsHasBeenSet = true; m_rateCards = std::forward<RateCardsT>(value); }
    template<typename RateCardsT = Aws::Vector<ConfigurableUpfrontRateCardItem>>
    ConfigurableUpfrontPricingTerm& WithRateCards(RateCardsT&& value) { SetRateCards(std::forward<RateCardsT>(value)); return *this;}
    template<typename RateCardsT = ConfigurableUpfrontRateCardItem>
    ConfigurableUpfrontPricingTerm& AddRateCards(RateCardsT&& value) { m_rateCardsHasBeenSet = true; m_rateCards.emplace_back(std::forward<RateCardsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Category of selector.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ConfigurableUpfrontPricingTerm& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    ConfigurableUpfrontPricingTermConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::Vector<ConfigurableUpfrontRateCardItem> m_rateCards;
    bool m_rateCardsHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
