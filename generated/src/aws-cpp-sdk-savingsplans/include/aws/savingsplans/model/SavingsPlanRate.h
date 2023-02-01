/**
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
    AWS_SAVINGSPLANS_API SavingsPlanRate();
    AWS_SAVINGSPLANS_API SavingsPlanRate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API SavingsPlanRate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The rate.</p>
     */
    inline const Aws::String& GetRate() const{ return m_rate; }

    /**
     * <p>The rate.</p>
     */
    inline bool RateHasBeenSet() const { return m_rateHasBeenSet; }

    /**
     * <p>The rate.</p>
     */
    inline void SetRate(const Aws::String& value) { m_rateHasBeenSet = true; m_rate = value; }

    /**
     * <p>The rate.</p>
     */
    inline void SetRate(Aws::String&& value) { m_rateHasBeenSet = true; m_rate = std::move(value); }

    /**
     * <p>The rate.</p>
     */
    inline void SetRate(const char* value) { m_rateHasBeenSet = true; m_rate.assign(value); }

    /**
     * <p>The rate.</p>
     */
    inline SavingsPlanRate& WithRate(const Aws::String& value) { SetRate(value); return *this;}

    /**
     * <p>The rate.</p>
     */
    inline SavingsPlanRate& WithRate(Aws::String&& value) { SetRate(std::move(value)); return *this;}

    /**
     * <p>The rate.</p>
     */
    inline SavingsPlanRate& WithRate(const char* value) { SetRate(value); return *this;}


    /**
     * <p>The currency.</p>
     */
    inline const CurrencyCode& GetCurrency() const{ return m_currency; }

    /**
     * <p>The currency.</p>
     */
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }

    /**
     * <p>The currency.</p>
     */
    inline void SetCurrency(const CurrencyCode& value) { m_currencyHasBeenSet = true; m_currency = value; }

    /**
     * <p>The currency.</p>
     */
    inline void SetCurrency(CurrencyCode&& value) { m_currencyHasBeenSet = true; m_currency = std::move(value); }

    /**
     * <p>The currency.</p>
     */
    inline SavingsPlanRate& WithCurrency(const CurrencyCode& value) { SetCurrency(value); return *this;}

    /**
     * <p>The currency.</p>
     */
    inline SavingsPlanRate& WithCurrency(CurrencyCode&& value) { SetCurrency(std::move(value)); return *this;}


    /**
     * <p>The unit.</p>
     */
    inline const SavingsPlanRateUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit.</p>
     */
    inline void SetUnit(const SavingsPlanRateUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit.</p>
     */
    inline void SetUnit(SavingsPlanRateUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit.</p>
     */
    inline SavingsPlanRate& WithUnit(const SavingsPlanRateUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit.</p>
     */
    inline SavingsPlanRate& WithUnit(SavingsPlanRateUnit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>The product type.</p>
     */
    inline const SavingsPlanProductType& GetProductType() const{ return m_productType; }

    /**
     * <p>The product type.</p>
     */
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }

    /**
     * <p>The product type.</p>
     */
    inline void SetProductType(const SavingsPlanProductType& value) { m_productTypeHasBeenSet = true; m_productType = value; }

    /**
     * <p>The product type.</p>
     */
    inline void SetProductType(SavingsPlanProductType&& value) { m_productTypeHasBeenSet = true; m_productType = std::move(value); }

    /**
     * <p>The product type.</p>
     */
    inline SavingsPlanRate& WithProductType(const SavingsPlanProductType& value) { SetProductType(value); return *this;}

    /**
     * <p>The product type.</p>
     */
    inline SavingsPlanRate& WithProductType(SavingsPlanProductType&& value) { SetProductType(std::move(value)); return *this;}


    /**
     * <p>The service.</p>
     */
    inline const SavingsPlanRateServiceCode& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>The service.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>The service.</p>
     */
    inline void SetServiceCode(const SavingsPlanRateServiceCode& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>The service.</p>
     */
    inline void SetServiceCode(SavingsPlanRateServiceCode&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>The service.</p>
     */
    inline SavingsPlanRate& WithServiceCode(const SavingsPlanRateServiceCode& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The service.</p>
     */
    inline SavingsPlanRate& WithServiceCode(SavingsPlanRateServiceCode&& value) { SetServiceCode(std::move(value)); return *this;}


    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline const Aws::String& GetUsageType() const{ return m_usageType; }

    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }

    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline void SetUsageType(const Aws::String& value) { m_usageTypeHasBeenSet = true; m_usageType = value; }

    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline void SetUsageType(Aws::String&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::move(value); }

    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline void SetUsageType(const char* value) { m_usageTypeHasBeenSet = true; m_usageType.assign(value); }

    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline SavingsPlanRate& WithUsageType(const Aws::String& value) { SetUsageType(value); return *this;}

    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline SavingsPlanRate& WithUsageType(Aws::String&& value) { SetUsageType(std::move(value)); return *this;}

    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline SavingsPlanRate& WithUsageType(const char* value) { SetUsageType(value); return *this;}


    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }

    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }

    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline SavingsPlanRate& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}

    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline SavingsPlanRate& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}

    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline SavingsPlanRate& WithOperation(const char* value) { SetOperation(value); return *this;}


    /**
     * <p>The properties.</p>
     */
    inline const Aws::Vector<SavingsPlanRateProperty>& GetProperties() const{ return m_properties; }

    /**
     * <p>The properties.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>The properties.</p>
     */
    inline void SetProperties(const Aws::Vector<SavingsPlanRateProperty>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>The properties.</p>
     */
    inline void SetProperties(Aws::Vector<SavingsPlanRateProperty>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>The properties.</p>
     */
    inline SavingsPlanRate& WithProperties(const Aws::Vector<SavingsPlanRateProperty>& value) { SetProperties(value); return *this;}

    /**
     * <p>The properties.</p>
     */
    inline SavingsPlanRate& WithProperties(Aws::Vector<SavingsPlanRateProperty>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>The properties.</p>
     */
    inline SavingsPlanRate& AddProperties(const SavingsPlanRateProperty& value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }

    /**
     * <p>The properties.</p>
     */
    inline SavingsPlanRate& AddProperties(SavingsPlanRateProperty&& value) { m_propertiesHasBeenSet = true; m_properties.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_rate;
    bool m_rateHasBeenSet = false;

    CurrencyCode m_currency;
    bool m_currencyHasBeenSet = false;

    SavingsPlanRateUnit m_unit;
    bool m_unitHasBeenSet = false;

    SavingsPlanProductType m_productType;
    bool m_productTypeHasBeenSet = false;

    SavingsPlanRateServiceCode m_serviceCode;
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
