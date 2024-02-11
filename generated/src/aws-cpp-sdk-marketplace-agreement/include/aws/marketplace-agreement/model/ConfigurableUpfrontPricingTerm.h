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
    AWS_AGREEMENTSERVICE_API ConfigurableUpfrontPricingTerm();
    AWS_AGREEMENTSERVICE_API ConfigurableUpfrontPricingTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API ConfigurableUpfrontPricingTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Additional parameters specified by the acceptor while accepting the term.</p>
     */
    inline const ConfigurableUpfrontPricingTermConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Additional parameters specified by the acceptor while accepting the term.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>Additional parameters specified by the acceptor while accepting the term.</p>
     */
    inline void SetConfiguration(const ConfigurableUpfrontPricingTermConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>Additional parameters specified by the acceptor while accepting the term.</p>
     */
    inline void SetConfiguration(ConfigurableUpfrontPricingTermConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>Additional parameters specified by the acceptor while accepting the term.</p>
     */
    inline ConfigurableUpfrontPricingTerm& WithConfiguration(const ConfigurableUpfrontPricingTermConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Additional parameters specified by the acceptor while accepting the term.</p>
     */
    inline ConfigurableUpfrontPricingTerm& WithConfiguration(ConfigurableUpfrontPricingTermConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>Defines the currency for the prices mentioned in the term.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>Defines the currency for the prices mentioned in the term.</p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>Defines the currency for the prices mentioned in the term.</p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>Defines the currency for the prices mentioned in the term.</p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>Defines the currency for the prices mentioned in the term.</p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * <p>Defines the currency for the prices mentioned in the term.</p>
     */
    inline ConfigurableUpfrontPricingTerm& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>Defines the currency for the prices mentioned in the term.</p>
     */
    inline ConfigurableUpfrontPricingTerm& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>Defines the currency for the prices mentioned in the term.</p>
     */
    inline ConfigurableUpfrontPricingTerm& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>A rate card defines the per unit rates for product dimensions.</p>
     */
    inline const Aws::Vector<ConfigurableUpfrontRateCardItem>& GetRateCards() const{ return m_rateCards; }

    /**
     * <p>A rate card defines the per unit rates for product dimensions.</p>
     */
    inline bool RateCardsHasBeenSet() const { return m_rateCardsHasBeenSet; }

    /**
     * <p>A rate card defines the per unit rates for product dimensions.</p>
     */
    inline void SetRateCards(const Aws::Vector<ConfigurableUpfrontRateCardItem>& value) { m_rateCardsHasBeenSet = true; m_rateCards = value; }

    /**
     * <p>A rate card defines the per unit rates for product dimensions.</p>
     */
    inline void SetRateCards(Aws::Vector<ConfigurableUpfrontRateCardItem>&& value) { m_rateCardsHasBeenSet = true; m_rateCards = std::move(value); }

    /**
     * <p>A rate card defines the per unit rates for product dimensions.</p>
     */
    inline ConfigurableUpfrontPricingTerm& WithRateCards(const Aws::Vector<ConfigurableUpfrontRateCardItem>& value) { SetRateCards(value); return *this;}

    /**
     * <p>A rate card defines the per unit rates for product dimensions.</p>
     */
    inline ConfigurableUpfrontPricingTerm& WithRateCards(Aws::Vector<ConfigurableUpfrontRateCardItem>&& value) { SetRateCards(std::move(value)); return *this;}

    /**
     * <p>A rate card defines the per unit rates for product dimensions.</p>
     */
    inline ConfigurableUpfrontPricingTerm& AddRateCards(const ConfigurableUpfrontRateCardItem& value) { m_rateCardsHasBeenSet = true; m_rateCards.push_back(value); return *this; }

    /**
     * <p>A rate card defines the per unit rates for product dimensions.</p>
     */
    inline ConfigurableUpfrontPricingTerm& AddRateCards(ConfigurableUpfrontRateCardItem&& value) { m_rateCardsHasBeenSet = true; m_rateCards.push_back(std::move(value)); return *this; }


    /**
     * <p>Category of selector.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Category of selector.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Category of selector.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Category of selector.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Category of selector.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Category of selector.</p>
     */
    inline ConfigurableUpfrontPricingTerm& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Category of selector.</p>
     */
    inline ConfigurableUpfrontPricingTerm& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Category of selector.</p>
     */
    inline ConfigurableUpfrontPricingTerm& WithType(const char* value) { SetType(value); return *this;}

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
