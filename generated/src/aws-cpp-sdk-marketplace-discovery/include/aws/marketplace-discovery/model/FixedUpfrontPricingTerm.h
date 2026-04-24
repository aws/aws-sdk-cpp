/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/GrantItem.h>
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
 * <p>Defines a fixed upfront pricing term with a pre-paid amount and granted
 * entitlements.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/FixedUpfrontPricingTerm">AWS
 * API Reference</a></p>
 */
class FixedUpfrontPricingTerm {
 public:
  AWS_MARKETPLACEDISCOVERY_API FixedUpfrontPricingTerm() = default;
  AWS_MARKETPLACEDISCOVERY_API FixedUpfrontPricingTerm(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API FixedUpfrontPricingTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  FixedUpfrontPricingTerm& WithId(IdT&& value) {
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
  inline FixedUpfrontPricingTerm& WithType(TermType value) {
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
  FixedUpfrontPricingTerm& WithCurrencyCode(CurrencyCodeT&& value) {
    SetCurrencyCode(std::forward<CurrencyCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration of the fixed pricing term, in ISO 8601 format.</p>
   */
  inline const Aws::String& GetDuration() const { return m_duration; }
  inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
  template <typename DurationT = Aws::String>
  void SetDuration(DurationT&& value) {
    m_durationHasBeenSet = true;
    m_duration = std::forward<DurationT>(value);
  }
  template <typename DurationT = Aws::String>
  FixedUpfrontPricingTerm& WithDuration(DurationT&& value) {
    SetDuration(std::forward<DurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The price charged upfront for this term.</p>
   */
  inline const Aws::String& GetPrice() const { return m_price; }
  inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }
  template <typename PriceT = Aws::String>
  void SetPrice(PriceT&& value) {
    m_priceHasBeenSet = true;
    m_price = std::forward<PriceT>(value);
  }
  template <typename PriceT = Aws::String>
  FixedUpfrontPricingTerm& WithPrice(PriceT&& value) {
    SetPrice(std::forward<PriceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entitlements granted to the buyer as part of this term.</p>
   */
  inline const Aws::Vector<GrantItem>& GetGrants() const { return m_grants; }
  inline bool GrantsHasBeenSet() const { return m_grantsHasBeenSet; }
  template <typename GrantsT = Aws::Vector<GrantItem>>
  void SetGrants(GrantsT&& value) {
    m_grantsHasBeenSet = true;
    m_grants = std::forward<GrantsT>(value);
  }
  template <typename GrantsT = Aws::Vector<GrantItem>>
  FixedUpfrontPricingTerm& WithGrants(GrantsT&& value) {
    SetGrants(std::forward<GrantsT>(value));
    return *this;
  }
  template <typename GrantsT = GrantItem>
  FixedUpfrontPricingTerm& AddGrants(GrantsT&& value) {
    m_grantsHasBeenSet = true;
    m_grants.emplace_back(std::forward<GrantsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  TermType m_type{TermType::NOT_SET};

  Aws::String m_currencyCode;

  Aws::String m_duration;

  Aws::String m_price;

  Aws::Vector<GrantItem> m_grants;
  bool m_idHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_currencyCodeHasBeenSet = false;
  bool m_durationHasBeenSet = false;
  bool m_priceHasBeenSet = false;
  bool m_grantsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
