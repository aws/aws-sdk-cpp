﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/savingsplans/SavingsPlansRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/savingsplans/model/SavingsPlanProductType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/savingsplans/model/SavingsPlanPaymentOption.h>
#include <aws/savingsplans/model/SavingsPlanType.h>
#include <aws/savingsplans/model/CurrencyCode.h>
#include <aws/savingsplans/model/SavingsPlanOfferingFilterElement.h>
#include <utility>

namespace Aws
{
namespace SavingsPlans
{
namespace Model
{

  /**
   */
  class DescribeSavingsPlansOfferingsRequest : public SavingsPlansRequest
  {
  public:
    AWS_SAVINGSPLANS_API DescribeSavingsPlansOfferingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSavingsPlansOfferings"; }

    AWS_SAVINGSPLANS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The IDs of the offerings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOfferingIds() const{ return m_offeringIds; }
    inline bool OfferingIdsHasBeenSet() const { return m_offeringIdsHasBeenSet; }
    inline void SetOfferingIds(const Aws::Vector<Aws::String>& value) { m_offeringIdsHasBeenSet = true; m_offeringIds = value; }
    inline void SetOfferingIds(Aws::Vector<Aws::String>&& value) { m_offeringIdsHasBeenSet = true; m_offeringIds = std::move(value); }
    inline DescribeSavingsPlansOfferingsRequest& WithOfferingIds(const Aws::Vector<Aws::String>& value) { SetOfferingIds(value); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& WithOfferingIds(Aws::Vector<Aws::String>&& value) { SetOfferingIds(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& AddOfferingIds(const Aws::String& value) { m_offeringIdsHasBeenSet = true; m_offeringIds.push_back(value); return *this; }
    inline DescribeSavingsPlansOfferingsRequest& AddOfferingIds(Aws::String&& value) { m_offeringIdsHasBeenSet = true; m_offeringIds.push_back(std::move(value)); return *this; }
    inline DescribeSavingsPlansOfferingsRequest& AddOfferingIds(const char* value) { m_offeringIdsHasBeenSet = true; m_offeringIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The payment options.</p>
     */
    inline const Aws::Vector<SavingsPlanPaymentOption>& GetPaymentOptions() const{ return m_paymentOptions; }
    inline bool PaymentOptionsHasBeenSet() const { return m_paymentOptionsHasBeenSet; }
    inline void SetPaymentOptions(const Aws::Vector<SavingsPlanPaymentOption>& value) { m_paymentOptionsHasBeenSet = true; m_paymentOptions = value; }
    inline void SetPaymentOptions(Aws::Vector<SavingsPlanPaymentOption>&& value) { m_paymentOptionsHasBeenSet = true; m_paymentOptions = std::move(value); }
    inline DescribeSavingsPlansOfferingsRequest& WithPaymentOptions(const Aws::Vector<SavingsPlanPaymentOption>& value) { SetPaymentOptions(value); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& WithPaymentOptions(Aws::Vector<SavingsPlanPaymentOption>&& value) { SetPaymentOptions(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& AddPaymentOptions(const SavingsPlanPaymentOption& value) { m_paymentOptionsHasBeenSet = true; m_paymentOptions.push_back(value); return *this; }
    inline DescribeSavingsPlansOfferingsRequest& AddPaymentOptions(SavingsPlanPaymentOption&& value) { m_paymentOptionsHasBeenSet = true; m_paymentOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The product type.</p>
     */
    inline const SavingsPlanProductType& GetProductType() const{ return m_productType; }
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }
    inline void SetProductType(const SavingsPlanProductType& value) { m_productTypeHasBeenSet = true; m_productType = value; }
    inline void SetProductType(SavingsPlanProductType&& value) { m_productTypeHasBeenSet = true; m_productType = std::move(value); }
    inline DescribeSavingsPlansOfferingsRequest& WithProductType(const SavingsPlanProductType& value) { SetProductType(value); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& WithProductType(SavingsPlanProductType&& value) { SetProductType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan types.</p>
     */
    inline const Aws::Vector<SavingsPlanType>& GetPlanTypes() const{ return m_planTypes; }
    inline bool PlanTypesHasBeenSet() const { return m_planTypesHasBeenSet; }
    inline void SetPlanTypes(const Aws::Vector<SavingsPlanType>& value) { m_planTypesHasBeenSet = true; m_planTypes = value; }
    inline void SetPlanTypes(Aws::Vector<SavingsPlanType>&& value) { m_planTypesHasBeenSet = true; m_planTypes = std::move(value); }
    inline DescribeSavingsPlansOfferingsRequest& WithPlanTypes(const Aws::Vector<SavingsPlanType>& value) { SetPlanTypes(value); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& WithPlanTypes(Aws::Vector<SavingsPlanType>&& value) { SetPlanTypes(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& AddPlanTypes(const SavingsPlanType& value) { m_planTypesHasBeenSet = true; m_planTypes.push_back(value); return *this; }
    inline DescribeSavingsPlansOfferingsRequest& AddPlanTypes(SavingsPlanType&& value) { m_planTypesHasBeenSet = true; m_planTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The duration, in seconds.</p>
     */
    inline const Aws::Vector<long long>& GetDurations() const{ return m_durations; }
    inline bool DurationsHasBeenSet() const { return m_durationsHasBeenSet; }
    inline void SetDurations(const Aws::Vector<long long>& value) { m_durationsHasBeenSet = true; m_durations = value; }
    inline void SetDurations(Aws::Vector<long long>&& value) { m_durationsHasBeenSet = true; m_durations = std::move(value); }
    inline DescribeSavingsPlansOfferingsRequest& WithDurations(const Aws::Vector<long long>& value) { SetDurations(value); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& WithDurations(Aws::Vector<long long>&& value) { SetDurations(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& AddDurations(long long value) { m_durationsHasBeenSet = true; m_durations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The currencies.</p>
     */
    inline const Aws::Vector<CurrencyCode>& GetCurrencies() const{ return m_currencies; }
    inline bool CurrenciesHasBeenSet() const { return m_currenciesHasBeenSet; }
    inline void SetCurrencies(const Aws::Vector<CurrencyCode>& value) { m_currenciesHasBeenSet = true; m_currencies = value; }
    inline void SetCurrencies(Aws::Vector<CurrencyCode>&& value) { m_currenciesHasBeenSet = true; m_currencies = std::move(value); }
    inline DescribeSavingsPlansOfferingsRequest& WithCurrencies(const Aws::Vector<CurrencyCode>& value) { SetCurrencies(value); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& WithCurrencies(Aws::Vector<CurrencyCode>&& value) { SetCurrencies(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& AddCurrencies(const CurrencyCode& value) { m_currenciesHasBeenSet = true; m_currencies.push_back(value); return *this; }
    inline DescribeSavingsPlansOfferingsRequest& AddCurrencies(CurrencyCode&& value) { m_currenciesHasBeenSet = true; m_currencies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The descriptions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDescriptions() const{ return m_descriptions; }
    inline bool DescriptionsHasBeenSet() const { return m_descriptionsHasBeenSet; }
    inline void SetDescriptions(const Aws::Vector<Aws::String>& value) { m_descriptionsHasBeenSet = true; m_descriptions = value; }
    inline void SetDescriptions(Aws::Vector<Aws::String>&& value) { m_descriptionsHasBeenSet = true; m_descriptions = std::move(value); }
    inline DescribeSavingsPlansOfferingsRequest& WithDescriptions(const Aws::Vector<Aws::String>& value) { SetDescriptions(value); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& WithDescriptions(Aws::Vector<Aws::String>&& value) { SetDescriptions(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& AddDescriptions(const Aws::String& value) { m_descriptionsHasBeenSet = true; m_descriptions.push_back(value); return *this; }
    inline DescribeSavingsPlansOfferingsRequest& AddDescriptions(Aws::String&& value) { m_descriptionsHasBeenSet = true; m_descriptions.push_back(std::move(value)); return *this; }
    inline DescribeSavingsPlansOfferingsRequest& AddDescriptions(const char* value) { m_descriptionsHasBeenSet = true; m_descriptions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The services.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceCodes() const{ return m_serviceCodes; }
    inline bool ServiceCodesHasBeenSet() const { return m_serviceCodesHasBeenSet; }
    inline void SetServiceCodes(const Aws::Vector<Aws::String>& value) { m_serviceCodesHasBeenSet = true; m_serviceCodes = value; }
    inline void SetServiceCodes(Aws::Vector<Aws::String>&& value) { m_serviceCodesHasBeenSet = true; m_serviceCodes = std::move(value); }
    inline DescribeSavingsPlansOfferingsRequest& WithServiceCodes(const Aws::Vector<Aws::String>& value) { SetServiceCodes(value); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& WithServiceCodes(Aws::Vector<Aws::String>&& value) { SetServiceCodes(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& AddServiceCodes(const Aws::String& value) { m_serviceCodesHasBeenSet = true; m_serviceCodes.push_back(value); return *this; }
    inline DescribeSavingsPlansOfferingsRequest& AddServiceCodes(Aws::String&& value) { m_serviceCodesHasBeenSet = true; m_serviceCodes.push_back(std::move(value)); return *this; }
    inline DescribeSavingsPlansOfferingsRequest& AddServiceCodes(const char* value) { m_serviceCodesHasBeenSet = true; m_serviceCodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUsageTypes() const{ return m_usageTypes; }
    inline bool UsageTypesHasBeenSet() const { return m_usageTypesHasBeenSet; }
    inline void SetUsageTypes(const Aws::Vector<Aws::String>& value) { m_usageTypesHasBeenSet = true; m_usageTypes = value; }
    inline void SetUsageTypes(Aws::Vector<Aws::String>&& value) { m_usageTypesHasBeenSet = true; m_usageTypes = std::move(value); }
    inline DescribeSavingsPlansOfferingsRequest& WithUsageTypes(const Aws::Vector<Aws::String>& value) { SetUsageTypes(value); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& WithUsageTypes(Aws::Vector<Aws::String>&& value) { SetUsageTypes(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& AddUsageTypes(const Aws::String& value) { m_usageTypesHasBeenSet = true; m_usageTypes.push_back(value); return *this; }
    inline DescribeSavingsPlansOfferingsRequest& AddUsageTypes(Aws::String&& value) { m_usageTypesHasBeenSet = true; m_usageTypes.push_back(std::move(value)); return *this; }
    inline DescribeSavingsPlansOfferingsRequest& AddUsageTypes(const char* value) { m_usageTypesHasBeenSet = true; m_usageTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The specific Amazon Web Services operation for the line item in the billing
     * report.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOperations() const{ return m_operations; }
    inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }
    inline void SetOperations(const Aws::Vector<Aws::String>& value) { m_operationsHasBeenSet = true; m_operations = value; }
    inline void SetOperations(Aws::Vector<Aws::String>&& value) { m_operationsHasBeenSet = true; m_operations = std::move(value); }
    inline DescribeSavingsPlansOfferingsRequest& WithOperations(const Aws::Vector<Aws::String>& value) { SetOperations(value); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& WithOperations(Aws::Vector<Aws::String>&& value) { SetOperations(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& AddOperations(const Aws::String& value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }
    inline DescribeSavingsPlansOfferingsRequest& AddOperations(Aws::String&& value) { m_operationsHasBeenSet = true; m_operations.push_back(std::move(value)); return *this; }
    inline DescribeSavingsPlansOfferingsRequest& AddOperations(const char* value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters.</p>
     */
    inline const Aws::Vector<SavingsPlanOfferingFilterElement>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<SavingsPlanOfferingFilterElement>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<SavingsPlanOfferingFilterElement>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeSavingsPlansOfferingsRequest& WithFilters(const Aws::Vector<SavingsPlanOfferingFilterElement>& value) { SetFilters(value); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& WithFilters(Aws::Vector<SavingsPlanOfferingFilterElement>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& AddFilters(const SavingsPlanOfferingFilterElement& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeSavingsPlansOfferingsRequest& AddFilters(SavingsPlanOfferingFilterElement&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeSavingsPlansOfferingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve
     * additional results, make another call with the returned token value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeSavingsPlansOfferingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_offeringIds;
    bool m_offeringIdsHasBeenSet = false;

    Aws::Vector<SavingsPlanPaymentOption> m_paymentOptions;
    bool m_paymentOptionsHasBeenSet = false;

    SavingsPlanProductType m_productType;
    bool m_productTypeHasBeenSet = false;

    Aws::Vector<SavingsPlanType> m_planTypes;
    bool m_planTypesHasBeenSet = false;

    Aws::Vector<long long> m_durations;
    bool m_durationsHasBeenSet = false;

    Aws::Vector<CurrencyCode> m_currencies;
    bool m_currenciesHasBeenSet = false;

    Aws::Vector<Aws::String> m_descriptions;
    bool m_descriptionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_serviceCodes;
    bool m_serviceCodesHasBeenSet = false;

    Aws::Vector<Aws::String> m_usageTypes;
    bool m_usageTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_operations;
    bool m_operationsHasBeenSet = false;

    Aws::Vector<SavingsPlanOfferingFilterElement> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
