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
    AWS_SAVINGSPLANS_API SavingsPlanOffering() = default;
    AWS_SAVINGSPLANS_API SavingsPlanOffering(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API SavingsPlanOffering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the offering.</p>
     */
    inline const Aws::String& GetOfferingId() const { return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    template<typename OfferingIdT = Aws::String>
    void SetOfferingId(OfferingIdT&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::forward<OfferingIdT>(value); }
    template<typename OfferingIdT = Aws::String>
    SavingsPlanOffering& WithOfferingId(OfferingIdT&& value) { SetOfferingId(std::forward<OfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product type.</p>
     */
    inline const Aws::Vector<SavingsPlanProductType>& GetProductTypes() const { return m_productTypes; }
    inline bool ProductTypesHasBeenSet() const { return m_productTypesHasBeenSet; }
    template<typename ProductTypesT = Aws::Vector<SavingsPlanProductType>>
    void SetProductTypes(ProductTypesT&& value) { m_productTypesHasBeenSet = true; m_productTypes = std::forward<ProductTypesT>(value); }
    template<typename ProductTypesT = Aws::Vector<SavingsPlanProductType>>
    SavingsPlanOffering& WithProductTypes(ProductTypesT&& value) { SetProductTypes(std::forward<ProductTypesT>(value)); return *this;}
    inline SavingsPlanOffering& AddProductTypes(SavingsPlanProductType value) { m_productTypesHasBeenSet = true; m_productTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The plan type.</p>
     */
    inline SavingsPlanType GetPlanType() const { return m_planType; }
    inline bool PlanTypeHasBeenSet() const { return m_planTypeHasBeenSet; }
    inline void SetPlanType(SavingsPlanType value) { m_planTypeHasBeenSet = true; m_planType = value; }
    inline SavingsPlanOffering& WithPlanType(SavingsPlanType value) { SetPlanType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SavingsPlanOffering& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option.</p>
     */
    inline SavingsPlanPaymentOption GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(SavingsPlanPaymentOption value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline SavingsPlanOffering& WithPaymentOption(SavingsPlanPaymentOption value) { SetPaymentOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration, in seconds.</p>
     */
    inline long long GetDurationSeconds() const { return m_durationSeconds; }
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
    inline void SetDurationSeconds(long long value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }
    inline SavingsPlanOffering& WithDurationSeconds(long long value) { SetDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency.</p>
     */
    inline CurrencyCode GetCurrency() const { return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    inline void SetCurrency(CurrencyCode value) { m_currencyHasBeenSet = true; m_currency = value; }
    inline SavingsPlanOffering& WithCurrency(CurrencyCode value) { SetCurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service.</p>
     */
    inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    template<typename ServiceCodeT = Aws::String>
    void SetServiceCode(ServiceCodeT&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::forward<ServiceCodeT>(value); }
    template<typename ServiceCodeT = Aws::String>
    SavingsPlanOffering& WithServiceCode(ServiceCodeT&& value) { SetServiceCode(std::forward<ServiceCodeT>(value)); return *this;}
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
    SavingsPlanOffering& WithUsageType(UsageTypeT&& value) { SetUsageType(std::forward<UsageTypeT>(value)); return *this;}
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
    SavingsPlanOffering& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties.</p>
     */
    inline const Aws::Vector<SavingsPlanOfferingProperty>& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::Vector<SavingsPlanOfferingProperty>>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::Vector<SavingsPlanOfferingProperty>>
    SavingsPlanOffering& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    template<typename PropertiesT = SavingsPlanOfferingProperty>
    SavingsPlanOffering& AddProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties.emplace_back(std::forward<PropertiesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;

    Aws::Vector<SavingsPlanProductType> m_productTypes;
    bool m_productTypesHasBeenSet = false;

    SavingsPlanType m_planType{SavingsPlanType::NOT_SET};
    bool m_planTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SavingsPlanPaymentOption m_paymentOption{SavingsPlanPaymentOption::NOT_SET};
    bool m_paymentOptionHasBeenSet = false;

    long long m_durationSeconds{0};
    bool m_durationSecondsHasBeenSet = false;

    CurrencyCode m_currency{CurrencyCode::NOT_SET};
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
