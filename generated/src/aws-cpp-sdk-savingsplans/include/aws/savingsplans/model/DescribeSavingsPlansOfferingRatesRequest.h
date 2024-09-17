/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/savingsplans/SavingsPlansRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/savingsplans/model/SavingsPlanPaymentOption.h>
#include <aws/savingsplans/model/SavingsPlanType.h>
#include <aws/savingsplans/model/SavingsPlanProductType.h>
#include <aws/savingsplans/model/SavingsPlanRateServiceCode.h>
#include <aws/savingsplans/model/SavingsPlanOfferingRateFilterElement.h>
#include <utility>

namespace Aws
{
namespace SavingsPlans
{
namespace Model
{

  /**
   */
  class DescribeSavingsPlansOfferingRatesRequest : public SavingsPlansRequest
  {
  public:
    AWS_SAVINGSPLANS_API DescribeSavingsPlansOfferingRatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSavingsPlansOfferingRates"; }

    AWS_SAVINGSPLANS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The IDs of the offerings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSavingsPlanOfferingIds() const{ return m_savingsPlanOfferingIds; }
    inline bool SavingsPlanOfferingIdsHasBeenSet() const { return m_savingsPlanOfferingIdsHasBeenSet; }
    inline void SetSavingsPlanOfferingIds(const Aws::Vector<Aws::String>& value) { m_savingsPlanOfferingIdsHasBeenSet = true; m_savingsPlanOfferingIds = value; }
    inline void SetSavingsPlanOfferingIds(Aws::Vector<Aws::String>&& value) { m_savingsPlanOfferingIdsHasBeenSet = true; m_savingsPlanOfferingIds = std::move(value); }
    inline DescribeSavingsPlansOfferingRatesRequest& WithSavingsPlanOfferingIds(const Aws::Vector<Aws::String>& value) { SetSavingsPlanOfferingIds(value); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& WithSavingsPlanOfferingIds(Aws::Vector<Aws::String>&& value) { SetSavingsPlanOfferingIds(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& AddSavingsPlanOfferingIds(const Aws::String& value) { m_savingsPlanOfferingIdsHasBeenSet = true; m_savingsPlanOfferingIds.push_back(value); return *this; }
    inline DescribeSavingsPlansOfferingRatesRequest& AddSavingsPlanOfferingIds(Aws::String&& value) { m_savingsPlanOfferingIdsHasBeenSet = true; m_savingsPlanOfferingIds.push_back(std::move(value)); return *this; }
    inline DescribeSavingsPlansOfferingRatesRequest& AddSavingsPlanOfferingIds(const char* value) { m_savingsPlanOfferingIdsHasBeenSet = true; m_savingsPlanOfferingIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The payment options.</p>
     */
    inline const Aws::Vector<SavingsPlanPaymentOption>& GetSavingsPlanPaymentOptions() const{ return m_savingsPlanPaymentOptions; }
    inline bool SavingsPlanPaymentOptionsHasBeenSet() const { return m_savingsPlanPaymentOptionsHasBeenSet; }
    inline void SetSavingsPlanPaymentOptions(const Aws::Vector<SavingsPlanPaymentOption>& value) { m_savingsPlanPaymentOptionsHasBeenSet = true; m_savingsPlanPaymentOptions = value; }
    inline void SetSavingsPlanPaymentOptions(Aws::Vector<SavingsPlanPaymentOption>&& value) { m_savingsPlanPaymentOptionsHasBeenSet = true; m_savingsPlanPaymentOptions = std::move(value); }
    inline DescribeSavingsPlansOfferingRatesRequest& WithSavingsPlanPaymentOptions(const Aws::Vector<SavingsPlanPaymentOption>& value) { SetSavingsPlanPaymentOptions(value); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& WithSavingsPlanPaymentOptions(Aws::Vector<SavingsPlanPaymentOption>&& value) { SetSavingsPlanPaymentOptions(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& AddSavingsPlanPaymentOptions(const SavingsPlanPaymentOption& value) { m_savingsPlanPaymentOptionsHasBeenSet = true; m_savingsPlanPaymentOptions.push_back(value); return *this; }
    inline DescribeSavingsPlansOfferingRatesRequest& AddSavingsPlanPaymentOptions(SavingsPlanPaymentOption&& value) { m_savingsPlanPaymentOptionsHasBeenSet = true; m_savingsPlanPaymentOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The plan types.</p>
     */
    inline const Aws::Vector<SavingsPlanType>& GetSavingsPlanTypes() const{ return m_savingsPlanTypes; }
    inline bool SavingsPlanTypesHasBeenSet() const { return m_savingsPlanTypesHasBeenSet; }
    inline void SetSavingsPlanTypes(const Aws::Vector<SavingsPlanType>& value) { m_savingsPlanTypesHasBeenSet = true; m_savingsPlanTypes = value; }
    inline void SetSavingsPlanTypes(Aws::Vector<SavingsPlanType>&& value) { m_savingsPlanTypesHasBeenSet = true; m_savingsPlanTypes = std::move(value); }
    inline DescribeSavingsPlansOfferingRatesRequest& WithSavingsPlanTypes(const Aws::Vector<SavingsPlanType>& value) { SetSavingsPlanTypes(value); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& WithSavingsPlanTypes(Aws::Vector<SavingsPlanType>&& value) { SetSavingsPlanTypes(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& AddSavingsPlanTypes(const SavingsPlanType& value) { m_savingsPlanTypesHasBeenSet = true; m_savingsPlanTypes.push_back(value); return *this; }
    inline DescribeSavingsPlansOfferingRatesRequest& AddSavingsPlanTypes(SavingsPlanType&& value) { m_savingsPlanTypesHasBeenSet = true; m_savingsPlanTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services products.</p>
     */
    inline const Aws::Vector<SavingsPlanProductType>& GetProducts() const{ return m_products; }
    inline bool ProductsHasBeenSet() const { return m_productsHasBeenSet; }
    inline void SetProducts(const Aws::Vector<SavingsPlanProductType>& value) { m_productsHasBeenSet = true; m_products = value; }
    inline void SetProducts(Aws::Vector<SavingsPlanProductType>&& value) { m_productsHasBeenSet = true; m_products = std::move(value); }
    inline DescribeSavingsPlansOfferingRatesRequest& WithProducts(const Aws::Vector<SavingsPlanProductType>& value) { SetProducts(value); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& WithProducts(Aws::Vector<SavingsPlanProductType>&& value) { SetProducts(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& AddProducts(const SavingsPlanProductType& value) { m_productsHasBeenSet = true; m_products.push_back(value); return *this; }
    inline DescribeSavingsPlansOfferingRatesRequest& AddProducts(SavingsPlanProductType&& value) { m_productsHasBeenSet = true; m_products.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The services.</p>
     */
    inline const Aws::Vector<SavingsPlanRateServiceCode>& GetServiceCodes() const{ return m_serviceCodes; }
    inline bool ServiceCodesHasBeenSet() const { return m_serviceCodesHasBeenSet; }
    inline void SetServiceCodes(const Aws::Vector<SavingsPlanRateServiceCode>& value) { m_serviceCodesHasBeenSet = true; m_serviceCodes = value; }
    inline void SetServiceCodes(Aws::Vector<SavingsPlanRateServiceCode>&& value) { m_serviceCodesHasBeenSet = true; m_serviceCodes = std::move(value); }
    inline DescribeSavingsPlansOfferingRatesRequest& WithServiceCodes(const Aws::Vector<SavingsPlanRateServiceCode>& value) { SetServiceCodes(value); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& WithServiceCodes(Aws::Vector<SavingsPlanRateServiceCode>&& value) { SetServiceCodes(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& AddServiceCodes(const SavingsPlanRateServiceCode& value) { m_serviceCodesHasBeenSet = true; m_serviceCodes.push_back(value); return *this; }
    inline DescribeSavingsPlansOfferingRatesRequest& AddServiceCodes(SavingsPlanRateServiceCode&& value) { m_serviceCodesHasBeenSet = true; m_serviceCodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUsageTypes() const{ return m_usageTypes; }
    inline bool UsageTypesHasBeenSet() const { return m_usageTypesHasBeenSet; }
    inline void SetUsageTypes(const Aws::Vector<Aws::String>& value) { m_usageTypesHasBeenSet = true; m_usageTypes = value; }
    inline void SetUsageTypes(Aws::Vector<Aws::String>&& value) { m_usageTypesHasBeenSet = true; m_usageTypes = std::move(value); }
    inline DescribeSavingsPlansOfferingRatesRequest& WithUsageTypes(const Aws::Vector<Aws::String>& value) { SetUsageTypes(value); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& WithUsageTypes(Aws::Vector<Aws::String>&& value) { SetUsageTypes(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& AddUsageTypes(const Aws::String& value) { m_usageTypesHasBeenSet = true; m_usageTypes.push_back(value); return *this; }
    inline DescribeSavingsPlansOfferingRatesRequest& AddUsageTypes(Aws::String&& value) { m_usageTypesHasBeenSet = true; m_usageTypes.push_back(std::move(value)); return *this; }
    inline DescribeSavingsPlansOfferingRatesRequest& AddUsageTypes(const char* value) { m_usageTypesHasBeenSet = true; m_usageTypes.push_back(value); return *this; }
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
    inline DescribeSavingsPlansOfferingRatesRequest& WithOperations(const Aws::Vector<Aws::String>& value) { SetOperations(value); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& WithOperations(Aws::Vector<Aws::String>&& value) { SetOperations(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& AddOperations(const Aws::String& value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }
    inline DescribeSavingsPlansOfferingRatesRequest& AddOperations(Aws::String&& value) { m_operationsHasBeenSet = true; m_operations.push_back(std::move(value)); return *this; }
    inline DescribeSavingsPlansOfferingRatesRequest& AddOperations(const char* value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters.</p>
     */
    inline const Aws::Vector<SavingsPlanOfferingRateFilterElement>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<SavingsPlanOfferingRateFilterElement>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<SavingsPlanOfferingRateFilterElement>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeSavingsPlansOfferingRatesRequest& WithFilters(const Aws::Vector<SavingsPlanOfferingRateFilterElement>& value) { SetFilters(value); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& WithFilters(Aws::Vector<SavingsPlanOfferingRateFilterElement>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& AddFilters(const SavingsPlanOfferingRateFilterElement& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeSavingsPlansOfferingRatesRequest& AddFilters(SavingsPlanOfferingRateFilterElement&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
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
    inline DescribeSavingsPlansOfferingRatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve
     * additional results, make another call with the returned token value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeSavingsPlansOfferingRatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_savingsPlanOfferingIds;
    bool m_savingsPlanOfferingIdsHasBeenSet = false;

    Aws::Vector<SavingsPlanPaymentOption> m_savingsPlanPaymentOptions;
    bool m_savingsPlanPaymentOptionsHasBeenSet = false;

    Aws::Vector<SavingsPlanType> m_savingsPlanTypes;
    bool m_savingsPlanTypesHasBeenSet = false;

    Aws::Vector<SavingsPlanProductType> m_products;
    bool m_productsHasBeenSet = false;

    Aws::Vector<SavingsPlanRateServiceCode> m_serviceCodes;
    bool m_serviceCodesHasBeenSet = false;

    Aws::Vector<Aws::String> m_usageTypes;
    bool m_usageTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_operations;
    bool m_operationsHasBeenSet = false;

    Aws::Vector<SavingsPlanOfferingRateFilterElement> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
