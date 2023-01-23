/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/savingsplans/model/ParentSavingsPlanOffering.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/savingsplans/model/SavingsPlanRateUnit.h>
#include <aws/savingsplans/model/SavingsPlanProductType.h>
#include <aws/savingsplans/model/SavingsPlanRateServiceCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/savingsplans/model/SavingsPlanOfferingRateProperty.h>
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
   * <p>Information about a Savings Plan offering rate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/SavingsPlanOfferingRate">AWS
   * API Reference</a></p>
   */
  class SavingsPlanOfferingRate
  {
  public:
    AWS_SAVINGSPLANS_API SavingsPlanOfferingRate();
    AWS_SAVINGSPLANS_API SavingsPlanOfferingRate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API SavingsPlanOfferingRate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Savings Plan offering.</p>
     */
    inline const ParentSavingsPlanOffering& GetSavingsPlanOffering() const{ return m_savingsPlanOffering; }

    /**
     * <p>The Savings Plan offering.</p>
     */
    inline bool SavingsPlanOfferingHasBeenSet() const { return m_savingsPlanOfferingHasBeenSet; }

    /**
     * <p>The Savings Plan offering.</p>
     */
    inline void SetSavingsPlanOffering(const ParentSavingsPlanOffering& value) { m_savingsPlanOfferingHasBeenSet = true; m_savingsPlanOffering = value; }

    /**
     * <p>The Savings Plan offering.</p>
     */
    inline void SetSavingsPlanOffering(ParentSavingsPlanOffering&& value) { m_savingsPlanOfferingHasBeenSet = true; m_savingsPlanOffering = std::move(value); }

    /**
     * <p>The Savings Plan offering.</p>
     */
    inline SavingsPlanOfferingRate& WithSavingsPlanOffering(const ParentSavingsPlanOffering& value) { SetSavingsPlanOffering(value); return *this;}

    /**
     * <p>The Savings Plan offering.</p>
     */
    inline SavingsPlanOfferingRate& WithSavingsPlanOffering(ParentSavingsPlanOffering&& value) { SetSavingsPlanOffering(std::move(value)); return *this;}


    /**
     * <p>The Savings Plan rate.</p>
     */
    inline const Aws::String& GetRate() const{ return m_rate; }

    /**
     * <p>The Savings Plan rate.</p>
     */
    inline bool RateHasBeenSet() const { return m_rateHasBeenSet; }

    /**
     * <p>The Savings Plan rate.</p>
     */
    inline void SetRate(const Aws::String& value) { m_rateHasBeenSet = true; m_rate = value; }

    /**
     * <p>The Savings Plan rate.</p>
     */
    inline void SetRate(Aws::String&& value) { m_rateHasBeenSet = true; m_rate = std::move(value); }

    /**
     * <p>The Savings Plan rate.</p>
     */
    inline void SetRate(const char* value) { m_rateHasBeenSet = true; m_rate.assign(value); }

    /**
     * <p>The Savings Plan rate.</p>
     */
    inline SavingsPlanOfferingRate& WithRate(const Aws::String& value) { SetRate(value); return *this;}

    /**
     * <p>The Savings Plan rate.</p>
     */
    inline SavingsPlanOfferingRate& WithRate(Aws::String&& value) { SetRate(std::move(value)); return *this;}

    /**
     * <p>The Savings Plan rate.</p>
     */
    inline SavingsPlanOfferingRate& WithRate(const char* value) { SetRate(value); return *this;}


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
    inline SavingsPlanOfferingRate& WithUnit(const SavingsPlanRateUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit.</p>
     */
    inline SavingsPlanOfferingRate& WithUnit(SavingsPlanRateUnit&& value) { SetUnit(std::move(value)); return *this;}


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
    inline SavingsPlanOfferingRate& WithProductType(const SavingsPlanProductType& value) { SetProductType(value); return *this;}

    /**
     * <p>The product type.</p>
     */
    inline SavingsPlanOfferingRate& WithProductType(SavingsPlanProductType&& value) { SetProductType(std::move(value)); return *this;}


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
    inline SavingsPlanOfferingRate& WithServiceCode(const SavingsPlanRateServiceCode& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The service.</p>
     */
    inline SavingsPlanOfferingRate& WithServiceCode(SavingsPlanRateServiceCode&& value) { SetServiceCode(std::move(value)); return *this;}


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
    inline SavingsPlanOfferingRate& WithUsageType(const Aws::String& value) { SetUsageType(value); return *this;}

    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline SavingsPlanOfferingRate& WithUsageType(Aws::String&& value) { SetUsageType(std::move(value)); return *this;}

    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline SavingsPlanOfferingRate& WithUsageType(const char* value) { SetUsageType(value); return *this;}


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
    inline SavingsPlanOfferingRate& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}

    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline SavingsPlanOfferingRate& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}

    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline SavingsPlanOfferingRate& WithOperation(const char* value) { SetOperation(value); return *this;}


    /**
     * <p>The properties.</p>
     */
    inline const Aws::Vector<SavingsPlanOfferingRateProperty>& GetProperties() const{ return m_properties; }

    /**
     * <p>The properties.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>The properties.</p>
     */
    inline void SetProperties(const Aws::Vector<SavingsPlanOfferingRateProperty>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>The properties.</p>
     */
    inline void SetProperties(Aws::Vector<SavingsPlanOfferingRateProperty>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>The properties.</p>
     */
    inline SavingsPlanOfferingRate& WithProperties(const Aws::Vector<SavingsPlanOfferingRateProperty>& value) { SetProperties(value); return *this;}

    /**
     * <p>The properties.</p>
     */
    inline SavingsPlanOfferingRate& WithProperties(Aws::Vector<SavingsPlanOfferingRateProperty>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>The properties.</p>
     */
    inline SavingsPlanOfferingRate& AddProperties(const SavingsPlanOfferingRateProperty& value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }

    /**
     * <p>The properties.</p>
     */
    inline SavingsPlanOfferingRate& AddProperties(SavingsPlanOfferingRateProperty&& value) { m_propertiesHasBeenSet = true; m_properties.push_back(std::move(value)); return *this; }

  private:

    ParentSavingsPlanOffering m_savingsPlanOffering;
    bool m_savingsPlanOfferingHasBeenSet = false;

    Aws::String m_rate;
    bool m_rateHasBeenSet = false;

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

    Aws::Vector<SavingsPlanOfferingRateProperty> m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
