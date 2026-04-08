/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/ConfigurableUpfrontRateCardItem.h>
#include <aws/marketplace-discovery/model/TermType.h>

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
 * <p>Defines a configurable upfront pricing term with selectable rate cards, where
 * buyers choose from predefined pricing configurations.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/ConfigurableUpfrontPricingTerm">AWS
 * API Reference</a></p>
 */
class ConfigurableUpfrontPricingTerm {
 public:
  AWS_MARKETPLACEDISCOVERY_API ConfigurableUpfrontPricingTerm() = default;
  AWS_MARKETPLACEDISCOVERY_API ConfigurableUpfrontPricingTerm(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API ConfigurableUpfrontPricingTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the term.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ConfigurableUpfrontPricingTerm& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of the term.</p>
   */
  inline TermType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(TermType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ConfigurableUpfrontPricingTerm& WithType(TermType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the currency for the prices in this term.</p>
   */
  inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
  inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
  template <typename CurrencyCodeT = Aws::String>
  void SetCurrencyCode(CurrencyCodeT&& value) {
    m_currencyCodeHasBeenSet = true;
    m_currencyCode = std::forward<CurrencyCodeT>(value);
  }
  template <typename CurrencyCodeT = Aws::String>
  ConfigurableUpfrontPricingTerm& WithCurrencyCode(CurrencyCodeT&& value) {
    SetCurrencyCode(std::forward<CurrencyCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rate cards available for selection, each with a selector, constraints,
   * and per-unit rates.</p>
   */
  inline const Aws::Vector<ConfigurableUpfrontRateCardItem>& GetRateCards() const { return m_rateCards; }
  inline bool RateCardsHasBeenSet() const { return m_rateCardsHasBeenSet; }
  template <typename RateCardsT = Aws::Vector<ConfigurableUpfrontRateCardItem>>
  void SetRateCards(RateCardsT&& value) {
    m_rateCardsHasBeenSet = true;
    m_rateCards = std::forward<RateCardsT>(value);
  }
  template <typename RateCardsT = Aws::Vector<ConfigurableUpfrontRateCardItem>>
  ConfigurableUpfrontPricingTerm& WithRateCards(RateCardsT&& value) {
    SetRateCards(std::forward<RateCardsT>(value));
    return *this;
  }
  template <typename RateCardsT = ConfigurableUpfrontRateCardItem>
  ConfigurableUpfrontPricingTerm& AddRateCards(RateCardsT&& value) {
    m_rateCardsHasBeenSet = true;
    m_rateCards.emplace_back(std::forward<RateCardsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  TermType m_type{TermType::NOT_SET};

  Aws::String m_currencyCode;

  Aws::Vector<ConfigurableUpfrontRateCardItem> m_rateCards;
  bool m_idHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_currencyCodeHasBeenSet = false;
  bool m_rateCardsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
