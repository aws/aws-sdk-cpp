/**
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
    AWS_SAVINGSPLANS_API DescribeSavingsPlansOfferingsRequest() = default;

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
    inline const Aws::Vector<Aws::String>& GetOfferingIds() const { return m_offeringIds; }
    inline bool OfferingIdsHasBeenSet() const { return m_offeringIdsHasBeenSet; }
    template<typename OfferingIdsT = Aws::Vector<Aws::String>>
    void SetOfferingIds(OfferingIdsT&& value) { m_offeringIdsHasBeenSet = true; m_offeringIds = std::forward<OfferingIdsT>(value); }
    template<typename OfferingIdsT = Aws::Vector<Aws::String>>
    DescribeSavingsPlansOfferingsRequest& WithOfferingIds(OfferingIdsT&& value) { SetOfferingIds(std::forward<OfferingIdsT>(value)); return *this;}
    template<typename OfferingIdsT = Aws::String>
    DescribeSavingsPlansOfferingsRequest& AddOfferingIds(OfferingIdsT&& value) { m_offeringIdsHasBeenSet = true; m_offeringIds.emplace_back(std::forward<OfferingIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The payment options.</p>
     */
    inline const Aws::Vector<SavingsPlanPaymentOption>& GetPaymentOptions() const { return m_paymentOptions; }
    inline bool PaymentOptionsHasBeenSet() const { return m_paymentOptionsHasBeenSet; }
    template<typename PaymentOptionsT = Aws::Vector<SavingsPlanPaymentOption>>
    void SetPaymentOptions(PaymentOptionsT&& value) { m_paymentOptionsHasBeenSet = true; m_paymentOptions = std::forward<PaymentOptionsT>(value); }
    template<typename PaymentOptionsT = Aws::Vector<SavingsPlanPaymentOption>>
    DescribeSavingsPlansOfferingsRequest& WithPaymentOptions(PaymentOptionsT&& value) { SetPaymentOptions(std::forward<PaymentOptionsT>(value)); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& AddPaymentOptions(SavingsPlanPaymentOption value) { m_paymentOptionsHasBeenSet = true; m_paymentOptions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The product type.</p>
     */
    inline SavingsPlanProductType GetProductType() const { return m_productType; }
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }
    inline void SetProductType(SavingsPlanProductType value) { m_productTypeHasBeenSet = true; m_productType = value; }
    inline DescribeSavingsPlansOfferingsRequest& WithProductType(SavingsPlanProductType value) { SetProductType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan types.</p>
     */
    inline const Aws::Vector<SavingsPlanType>& GetPlanTypes() const { return m_planTypes; }
    inline bool PlanTypesHasBeenSet() const { return m_planTypesHasBeenSet; }
    template<typename PlanTypesT = Aws::Vector<SavingsPlanType>>
    void SetPlanTypes(PlanTypesT&& value) { m_planTypesHasBeenSet = true; m_planTypes = std::forward<PlanTypesT>(value); }
    template<typename PlanTypesT = Aws::Vector<SavingsPlanType>>
    DescribeSavingsPlansOfferingsRequest& WithPlanTypes(PlanTypesT&& value) { SetPlanTypes(std::forward<PlanTypesT>(value)); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& AddPlanTypes(SavingsPlanType value) { m_planTypesHasBeenSet = true; m_planTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The duration, in seconds.</p>
     */
    inline const Aws::Vector<long long>& GetDurations() const { return m_durations; }
    inline bool DurationsHasBeenSet() const { return m_durationsHasBeenSet; }
    template<typename DurationsT = Aws::Vector<long long>>
    void SetDurations(DurationsT&& value) { m_durationsHasBeenSet = true; m_durations = std::forward<DurationsT>(value); }
    template<typename DurationsT = Aws::Vector<long long>>
    DescribeSavingsPlansOfferingsRequest& WithDurations(DurationsT&& value) { SetDurations(std::forward<DurationsT>(value)); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& AddDurations(long long value) { m_durationsHasBeenSet = true; m_durations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The currencies.</p>
     */
    inline const Aws::Vector<CurrencyCode>& GetCurrencies() const { return m_currencies; }
    inline bool CurrenciesHasBeenSet() const { return m_currenciesHasBeenSet; }
    template<typename CurrenciesT = Aws::Vector<CurrencyCode>>
    void SetCurrencies(CurrenciesT&& value) { m_currenciesHasBeenSet = true; m_currencies = std::forward<CurrenciesT>(value); }
    template<typename CurrenciesT = Aws::Vector<CurrencyCode>>
    DescribeSavingsPlansOfferingsRequest& WithCurrencies(CurrenciesT&& value) { SetCurrencies(std::forward<CurrenciesT>(value)); return *this;}
    inline DescribeSavingsPlansOfferingsRequest& AddCurrencies(CurrencyCode value) { m_currenciesHasBeenSet = true; m_currencies.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The descriptions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDescriptions() const { return m_descriptions; }
    inline bool DescriptionsHasBeenSet() const { return m_descriptionsHasBeenSet; }
    template<typename DescriptionsT = Aws::Vector<Aws::String>>
    void SetDescriptions(DescriptionsT&& value) { m_descriptionsHasBeenSet = true; m_descriptions = std::forward<DescriptionsT>(value); }
    template<typename DescriptionsT = Aws::Vector<Aws::String>>
    DescribeSavingsPlansOfferingsRequest& WithDescriptions(DescriptionsT&& value) { SetDescriptions(std::forward<DescriptionsT>(value)); return *this;}
    template<typename DescriptionsT = Aws::String>
    DescribeSavingsPlansOfferingsRequest& AddDescriptions(DescriptionsT&& value) { m_descriptionsHasBeenSet = true; m_descriptions.emplace_back(std::forward<DescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The services.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceCodes() const { return m_serviceCodes; }
    inline bool ServiceCodesHasBeenSet() const { return m_serviceCodesHasBeenSet; }
    template<typename ServiceCodesT = Aws::Vector<Aws::String>>
    void SetServiceCodes(ServiceCodesT&& value) { m_serviceCodesHasBeenSet = true; m_serviceCodes = std::forward<ServiceCodesT>(value); }
    template<typename ServiceCodesT = Aws::Vector<Aws::String>>
    DescribeSavingsPlansOfferingsRequest& WithServiceCodes(ServiceCodesT&& value) { SetServiceCodes(std::forward<ServiceCodesT>(value)); return *this;}
    template<typename ServiceCodesT = Aws::String>
    DescribeSavingsPlansOfferingsRequest& AddServiceCodes(ServiceCodesT&& value) { m_serviceCodesHasBeenSet = true; m_serviceCodes.emplace_back(std::forward<ServiceCodesT>(value)); return *this; }
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
    DescribeSavingsPlansOfferingsRequest& WithUsageTypes(UsageTypesT&& value) { SetUsageTypes(std::forward<UsageTypesT>(value)); return *this;}
    template<typename UsageTypesT = Aws::String>
    DescribeSavingsPlansOfferingsRequest& AddUsageTypes(UsageTypesT&& value) { m_usageTypesHasBeenSet = true; m_usageTypes.emplace_back(std::forward<UsageTypesT>(value)); return *this; }
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
    DescribeSavingsPlansOfferingsRequest& WithOperations(OperationsT&& value) { SetOperations(std::forward<OperationsT>(value)); return *this;}
    template<typename OperationsT = Aws::String>
    DescribeSavingsPlansOfferingsRequest& AddOperations(OperationsT&& value) { m_operationsHasBeenSet = true; m_operations.emplace_back(std::forward<OperationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters.</p>
     */
    inline const Aws::Vector<SavingsPlanOfferingFilterElement>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<SavingsPlanOfferingFilterElement>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<SavingsPlanOfferingFilterElement>>
    DescribeSavingsPlansOfferingsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = SavingsPlanOfferingFilterElement>
    DescribeSavingsPlansOfferingsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
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
    DescribeSavingsPlansOfferingsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve
     * additional results, make another call with the returned token value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeSavingsPlansOfferingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_offeringIds;
    bool m_offeringIdsHasBeenSet = false;

    Aws::Vector<SavingsPlanPaymentOption> m_paymentOptions;
    bool m_paymentOptionsHasBeenSet = false;

    SavingsPlanProductType m_productType{SavingsPlanProductType::NOT_SET};
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

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
