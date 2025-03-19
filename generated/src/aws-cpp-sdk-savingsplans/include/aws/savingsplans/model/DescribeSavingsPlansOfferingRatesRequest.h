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
    AWS_SAVINGSPLANS_API DescribeSavingsPlansOfferingRatesRequest() = default;

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
    inline const Aws::Vector<Aws::String>& GetSavingsPlanOfferingIds() const { return m_savingsPlanOfferingIds; }
    inline bool SavingsPlanOfferingIdsHasBeenSet() const { return m_savingsPlanOfferingIdsHasBeenSet; }
    template<typename SavingsPlanOfferingIdsT = Aws::Vector<Aws::String>>
    void SetSavingsPlanOfferingIds(SavingsPlanOfferingIdsT&& value) { m_savingsPlanOfferingIdsHasBeenSet = true; m_savingsPlanOfferingIds = std::forward<SavingsPlanOfferingIdsT>(value); }
    template<typename SavingsPlanOfferingIdsT = Aws::Vector<Aws::String>>
    DescribeSavingsPlansOfferingRatesRequest& WithSavingsPlanOfferingIds(SavingsPlanOfferingIdsT&& value) { SetSavingsPlanOfferingIds(std::forward<SavingsPlanOfferingIdsT>(value)); return *this;}
    template<typename SavingsPlanOfferingIdsT = Aws::String>
    DescribeSavingsPlansOfferingRatesRequest& AddSavingsPlanOfferingIds(SavingsPlanOfferingIdsT&& value) { m_savingsPlanOfferingIdsHasBeenSet = true; m_savingsPlanOfferingIds.emplace_back(std::forward<SavingsPlanOfferingIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The payment options.</p>
     */
    inline const Aws::Vector<SavingsPlanPaymentOption>& GetSavingsPlanPaymentOptions() const { return m_savingsPlanPaymentOptions; }
    inline bool SavingsPlanPaymentOptionsHasBeenSet() const { return m_savingsPlanPaymentOptionsHasBeenSet; }
    template<typename SavingsPlanPaymentOptionsT = Aws::Vector<SavingsPlanPaymentOption>>
    void SetSavingsPlanPaymentOptions(SavingsPlanPaymentOptionsT&& value) { m_savingsPlanPaymentOptionsHasBeenSet = true; m_savingsPlanPaymentOptions = std::forward<SavingsPlanPaymentOptionsT>(value); }
    template<typename SavingsPlanPaymentOptionsT = Aws::Vector<SavingsPlanPaymentOption>>
    DescribeSavingsPlansOfferingRatesRequest& WithSavingsPlanPaymentOptions(SavingsPlanPaymentOptionsT&& value) { SetSavingsPlanPaymentOptions(std::forward<SavingsPlanPaymentOptionsT>(value)); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& AddSavingsPlanPaymentOptions(SavingsPlanPaymentOption value) { m_savingsPlanPaymentOptionsHasBeenSet = true; m_savingsPlanPaymentOptions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The plan types.</p>
     */
    inline const Aws::Vector<SavingsPlanType>& GetSavingsPlanTypes() const { return m_savingsPlanTypes; }
    inline bool SavingsPlanTypesHasBeenSet() const { return m_savingsPlanTypesHasBeenSet; }
    template<typename SavingsPlanTypesT = Aws::Vector<SavingsPlanType>>
    void SetSavingsPlanTypes(SavingsPlanTypesT&& value) { m_savingsPlanTypesHasBeenSet = true; m_savingsPlanTypes = std::forward<SavingsPlanTypesT>(value); }
    template<typename SavingsPlanTypesT = Aws::Vector<SavingsPlanType>>
    DescribeSavingsPlansOfferingRatesRequest& WithSavingsPlanTypes(SavingsPlanTypesT&& value) { SetSavingsPlanTypes(std::forward<SavingsPlanTypesT>(value)); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& AddSavingsPlanTypes(SavingsPlanType value) { m_savingsPlanTypesHasBeenSet = true; m_savingsPlanTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services products.</p>
     */
    inline const Aws::Vector<SavingsPlanProductType>& GetProducts() const { return m_products; }
    inline bool ProductsHasBeenSet() const { return m_productsHasBeenSet; }
    template<typename ProductsT = Aws::Vector<SavingsPlanProductType>>
    void SetProducts(ProductsT&& value) { m_productsHasBeenSet = true; m_products = std::forward<ProductsT>(value); }
    template<typename ProductsT = Aws::Vector<SavingsPlanProductType>>
    DescribeSavingsPlansOfferingRatesRequest& WithProducts(ProductsT&& value) { SetProducts(std::forward<ProductsT>(value)); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& AddProducts(SavingsPlanProductType value) { m_productsHasBeenSet = true; m_products.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The services.</p>
     */
    inline const Aws::Vector<SavingsPlanRateServiceCode>& GetServiceCodes() const { return m_serviceCodes; }
    inline bool ServiceCodesHasBeenSet() const { return m_serviceCodesHasBeenSet; }
    template<typename ServiceCodesT = Aws::Vector<SavingsPlanRateServiceCode>>
    void SetServiceCodes(ServiceCodesT&& value) { m_serviceCodesHasBeenSet = true; m_serviceCodes = std::forward<ServiceCodesT>(value); }
    template<typename ServiceCodesT = Aws::Vector<SavingsPlanRateServiceCode>>
    DescribeSavingsPlansOfferingRatesRequest& WithServiceCodes(ServiceCodesT&& value) { SetServiceCodes(std::forward<ServiceCodesT>(value)); return *this;}
    inline DescribeSavingsPlansOfferingRatesRequest& AddServiceCodes(SavingsPlanRateServiceCode value) { m_serviceCodesHasBeenSet = true; m_serviceCodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUsageTypes() const { return m_usageTypes; }
    inline bool UsageTypesHasBeenSet() const { return m_usageTypesHasBeenSet; }
    template<typename UsageTypesT = Aws::Vector<Aws::String>>
    void SetUsageTypes(UsageTypesT&& value) { m_usageTypesHasBeenSet = true; m_usageTypes = std::forward<UsageTypesT>(value); }
    template<typename UsageTypesT = Aws::Vector<Aws::String>>
    DescribeSavingsPlansOfferingRatesRequest& WithUsageTypes(UsageTypesT&& value) { SetUsageTypes(std::forward<UsageTypesT>(value)); return *this;}
    template<typename UsageTypesT = Aws::String>
    DescribeSavingsPlansOfferingRatesRequest& AddUsageTypes(UsageTypesT&& value) { m_usageTypesHasBeenSet = true; m_usageTypes.emplace_back(std::forward<UsageTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The specific Amazon Web Services operation for the line item in the billing
     * report.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOperations() const { return m_operations; }
    inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }
    template<typename OperationsT = Aws::Vector<Aws::String>>
    void SetOperations(OperationsT&& value) { m_operationsHasBeenSet = true; m_operations = std::forward<OperationsT>(value); }
    template<typename OperationsT = Aws::Vector<Aws::String>>
    DescribeSavingsPlansOfferingRatesRequest& WithOperations(OperationsT&& value) { SetOperations(std::forward<OperationsT>(value)); return *this;}
    template<typename OperationsT = Aws::String>
    DescribeSavingsPlansOfferingRatesRequest& AddOperations(OperationsT&& value) { m_operationsHasBeenSet = true; m_operations.emplace_back(std::forward<OperationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters.</p>
     */
    inline const Aws::Vector<SavingsPlanOfferingRateFilterElement>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<SavingsPlanOfferingRateFilterElement>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<SavingsPlanOfferingRateFilterElement>>
    DescribeSavingsPlansOfferingRatesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = SavingsPlanOfferingRateFilterElement>
    DescribeSavingsPlansOfferingRatesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSavingsPlansOfferingRatesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve
     * additional results, make another call with the returned token value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
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

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
