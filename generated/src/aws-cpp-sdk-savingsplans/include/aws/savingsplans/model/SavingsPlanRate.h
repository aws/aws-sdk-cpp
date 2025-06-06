﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/savingsplans/model/CurrencyCode.h>
#include <aws/savingsplans/model/SavingsPlanRateUnit.h>
#include <aws/savingsplans/model/SavingsPlanProductType.h>
#include <aws/savingsplans/model/SavingsPlanRateServiceCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/savingsplans/model/SavingsPlanRateProperty.h>
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
namespace SavingsPlans
{
namespace Model
{

  /**
   * <p>Information about a Savings Plan rate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/SavingsPlanRate">AWS
   * API Reference</a></p>
   */
  class SavingsPlanRate
  {
  public:
    AWS_SAVINGSPLANS_API SavingsPlanRate() = default;
    AWS_SAVINGSPLANS_API SavingsPlanRate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API SavingsPlanRate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The rate.</p>
     */
    inline const Aws::String& GetRate() const { return m_rate; }
    inline bool RateHasBeenSet() const { return m_rateHasBeenSet; }
    template<typename RateT = Aws::String>
    void SetRate(RateT&& value) { m_rateHasBeenSet = true; m_rate = std::forward<RateT>(value); }
    template<typename RateT = Aws::String>
    SavingsPlanRate& WithRate(RateT&& value) { SetRate(std::forward<RateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency.</p>
     */
    inline CurrencyCode GetCurrency() const { return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    inline void SetCurrency(CurrencyCode value) { m_currencyHasBeenSet = true; m_currency = value; }
    inline SavingsPlanRate& WithCurrency(CurrencyCode value) { SetCurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit.</p>
     */
    inline SavingsPlanRateUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(SavingsPlanRateUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline SavingsPlanRate& WithUnit(SavingsPlanRateUnit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product type.</p>
     */
    inline SavingsPlanProductType GetProductType() const { return m_productType; }
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }
    inline void SetProductType(SavingsPlanProductType value) { m_productTypeHasBeenSet = true; m_productType = value; }
    inline SavingsPlanRate& WithProductType(SavingsPlanProductType value) { SetProductType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service.</p>
     */
    inline SavingsPlanRateServiceCode GetServiceCode() const { return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    inline void SetServiceCode(SavingsPlanRateServiceCode value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }
    inline SavingsPlanRate& WithServiceCode(SavingsPlanRateServiceCode value) { SetServiceCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline const Aws::String& GetUsageType() const { return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    template<typename UsageTypeT = Aws::String>
    void SetUsageType(UsageTypeT&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::forward<UsageTypeT>(value); }
    template<typename UsageTypeT = Aws::String>
    SavingsPlanRate& WithUsageType(UsageTypeT&& value) { SetUsageType(std::forward<UsageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific Amazon Web Services operation for the line item in the billing
     * report.</p>
     */
    inline const Aws::String& GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    template<typename OperationT = Aws::String>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Aws::String>
    SavingsPlanRate& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties.</p>
     */
    inline const Aws::Vector<SavingsPlanRateProperty>& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::Vector<SavingsPlanRateProperty>>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::Vector<SavingsPlanRateProperty>>
    SavingsPlanRate& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    template<typename PropertiesT = SavingsPlanRateProperty>
    SavingsPlanRate& AddProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties.emplace_back(std::forward<PropertiesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_rate;
    bool m_rateHasBeenSet = false;

    CurrencyCode m_currency{CurrencyCode::NOT_SET};
    bool m_currencyHasBeenSet = false;

    SavingsPlanRateUnit m_unit{SavingsPlanRateUnit::NOT_SET};
    bool m_unitHasBeenSet = false;

    SavingsPlanProductType m_productType{SavingsPlanProductType::NOT_SET};
    bool m_productTypeHasBeenSet = false;

    SavingsPlanRateServiceCode m_serviceCode{SavingsPlanRateServiceCode::NOT_SET};
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_usageType;
    bool m_usageTypeHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::Vector<SavingsPlanRateProperty> m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
