/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/model/GrantItem.h>
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
   * <p>Defines a prepaid pricing model where the customers are charged a fixed
   * upfront amount.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/FixedUpfrontPricingTerm">AWS
   * API Reference</a></p>
   */
  class FixedUpfrontPricingTerm
  {
  public:
    AWS_AGREEMENTSERVICE_API FixedUpfrontPricingTerm() = default;
    AWS_AGREEMENTSERVICE_API FixedUpfrontPricingTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API FixedUpfrontPricingTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the currency for the prices mentioned in this term. </p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    FixedUpfrontPricingTerm& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contract duration for the terms.</p>
     */
    inline const Aws::String& GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    template<typename DurationT = Aws::String>
    void SetDuration(DurationT&& value) { m_durationHasBeenSet = true; m_duration = std::forward<DurationT>(value); }
    template<typename DurationT = Aws::String>
    FixedUpfrontPricingTerm& WithDuration(DurationT&& value) { SetDuration(std::forward<DurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Entitlements granted to the acceptor of fixed upfront as part of agreement
     * execution.</p>
     */
    inline const Aws::Vector<GrantItem>& GetGrants() const { return m_grants; }
    inline bool GrantsHasBeenSet() const { return m_grantsHasBeenSet; }
    template<typename GrantsT = Aws::Vector<GrantItem>>
    void SetGrants(GrantsT&& value) { m_grantsHasBeenSet = true; m_grants = std::forward<GrantsT>(value); }
    template<typename GrantsT = Aws::Vector<GrantItem>>
    FixedUpfrontPricingTerm& WithGrants(GrantsT&& value) { SetGrants(std::forward<GrantsT>(value)); return *this;}
    template<typename GrantsT = GrantItem>
    FixedUpfrontPricingTerm& AddGrants(GrantsT&& value) { m_grantsHasBeenSet = true; m_grants.emplace_back(std::forward<GrantsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Fixed amount to be charged to the customer when this term is accepted.</p>
     */
    inline const Aws::String& GetPrice() const { return m_price; }
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }
    template<typename PriceT = Aws::String>
    void SetPrice(PriceT&& value) { m_priceHasBeenSet = true; m_price = std::forward<PriceT>(value); }
    template<typename PriceT = Aws::String>
    FixedUpfrontPricingTerm& WithPrice(PriceT&& value) { SetPrice(std::forward<PriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Category of the term being updated.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    FixedUpfrontPricingTerm& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::String m_duration;
    bool m_durationHasBeenSet = false;

    Aws::Vector<GrantItem> m_grants;
    bool m_grantsHasBeenSet = false;

    Aws::String m_price;
    bool m_priceHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
