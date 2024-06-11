/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/savingsplans/model/SavingsPlanType.h>
#include <aws/savingsplans/model/SavingsPlanPaymentOption.h>
#include <aws/savingsplans/model/CurrencyCode.h>
#include <aws/savingsplans/model/SavingsPlanProductType.h>
#include <aws/savingsplans/model/SavingsPlanOfferingProperty.h>
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
   * <p>Information about a Savings Plan offering.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/SavingsPlanOffering">AWS
   * API Reference</a></p>
   */
  class SavingsPlanOffering
  {
  public:
    AWS_SAVINGSPLANS_API SavingsPlanOffering();
    AWS_SAVINGSPLANS_API SavingsPlanOffering(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API SavingsPlanOffering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the offering.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }
    inline SavingsPlanOffering& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}
    inline SavingsPlanOffering& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}
    inline SavingsPlanOffering& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product type.</p>
     */
    inline const Aws::Vector<SavingsPlanProductType>& GetProductTypes() const{ return m_productTypes; }
    inline bool ProductTypesHasBeenSet() const { return m_productTypesHasBeenSet; }
    inline void SetProductTypes(const Aws::Vector<SavingsPlanProductType>& value) { m_productTypesHasBeenSet = true; m_productTypes = value; }
    inline void SetProductTypes(Aws::Vector<SavingsPlanProductType>&& value) { m_productTypesHasBeenSet = true; m_productTypes = std::move(value); }
    inline SavingsPlanOffering& WithProductTypes(const Aws::Vector<SavingsPlanProductType>& value) { SetProductTypes(value); return *this;}
    inline SavingsPlanOffering& WithProductTypes(Aws::Vector<SavingsPlanProductType>&& value) { SetProductTypes(std::move(value)); return *this;}
    inline SavingsPlanOffering& AddProductTypes(const SavingsPlanProductType& value) { m_productTypesHasBeenSet = true; m_productTypes.push_back(value); return *this; }
    inline SavingsPlanOffering& AddProductTypes(SavingsPlanProductType&& value) { m_productTypesHasBeenSet = true; m_productTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The plan type.</p>
     */
    inline const SavingsPlanType& GetPlanType() const{ return m_planType; }
    inline bool PlanTypeHasBeenSet() const { return m_planTypeHasBeenSet; }
    inline void SetPlanType(const SavingsPlanType& value) { m_planTypeHasBeenSet = true; m_planType = value; }
    inline void SetPlanType(SavingsPlanType&& value) { m_planTypeHasBeenSet = true; m_planType = std::move(value); }
    inline SavingsPlanOffering& WithPlanType(const SavingsPlanType& value) { SetPlanType(value); return *this;}
    inline SavingsPlanOffering& WithPlanType(SavingsPlanType&& value) { SetPlanType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SavingsPlanOffering& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SavingsPlanOffering& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SavingsPlanOffering& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option.</p>
     */
    inline const SavingsPlanPaymentOption& GetPaymentOption() const{ return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(const SavingsPlanPaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline void SetPaymentOption(SavingsPlanPaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }
    inline SavingsPlanOffering& WithPaymentOption(const SavingsPlanPaymentOption& value) { SetPaymentOption(value); return *this;}
    inline SavingsPlanOffering& WithPaymentOption(SavingsPlanPaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration, in seconds.</p>
     */
    inline long long GetDurationSeconds() const{ return m_durationSeconds; }
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
    inline void SetDurationSeconds(long long value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }
    inline SavingsPlanOffering& WithDurationSeconds(long long value) { SetDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency.</p>
     */
    inline const CurrencyCode& GetCurrency() const{ return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    inline void SetCurrency(const CurrencyCode& value) { m_currencyHasBeenSet = true; m_currency = value; }
    inline void SetCurrency(CurrencyCode&& value) { m_currencyHasBeenSet = true; m_currency = std::move(value); }
    inline SavingsPlanOffering& WithCurrency(const CurrencyCode& value) { SetCurrency(value); return *this;}
    inline SavingsPlanOffering& WithCurrency(CurrencyCode&& value) { SetCurrency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }
    inline SavingsPlanOffering& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}
    inline SavingsPlanOffering& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}
    inline SavingsPlanOffering& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline const Aws::String& GetUsageType() const{ return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    inline void SetUsageType(const Aws::String& value) { m_usageTypeHasBeenSet = true; m_usageType = value; }
    inline void SetUsageType(Aws::String&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::move(value); }
    inline void SetUsageType(const char* value) { m_usageTypeHasBeenSet = true; m_usageType.assign(value); }
    inline SavingsPlanOffering& WithUsageType(const Aws::String& value) { SetUsageType(value); return *this;}
    inline SavingsPlanOffering& WithUsageType(Aws::String&& value) { SetUsageType(std::move(value)); return *this;}
    inline SavingsPlanOffering& WithUsageType(const char* value) { SetUsageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific Amazon Web Services operation for the line item in the billing
     * report.</p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }
    inline SavingsPlanOffering& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}
    inline SavingsPlanOffering& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}
    inline SavingsPlanOffering& WithOperation(const char* value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties.</p>
     */
    inline const Aws::Vector<SavingsPlanOfferingProperty>& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::Vector<SavingsPlanOfferingProperty>& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::Vector<SavingsPlanOfferingProperty>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline SavingsPlanOffering& WithProperties(const Aws::Vector<SavingsPlanOfferingProperty>& value) { SetProperties(value); return *this;}
    inline SavingsPlanOffering& WithProperties(Aws::Vector<SavingsPlanOfferingProperty>&& value) { SetProperties(std::move(value)); return *this;}
    inline SavingsPlanOffering& AddProperties(const SavingsPlanOfferingProperty& value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }
    inline SavingsPlanOffering& AddProperties(SavingsPlanOfferingProperty&& value) { m_propertiesHasBeenSet = true; m_properties.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;

    Aws::Vector<SavingsPlanProductType> m_productTypes;
    bool m_productTypesHasBeenSet = false;

    SavingsPlanType m_planType;
    bool m_planTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SavingsPlanPaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    long long m_durationSeconds;
    bool m_durationSecondsHasBeenSet = false;

    CurrencyCode m_currency;
    bool m_currencyHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_usageType;
    bool m_usageTypeHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::Vector<SavingsPlanOfferingProperty> m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
