/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/savingsplans/SavingsPlansRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/savingsplans/model/SavingsPlanRateFilter.h>
#include <utility>

namespace Aws
{
namespace SavingsPlans
{
namespace Model
{

  /**
   */
  class DescribeSavingsPlanRatesRequest : public SavingsPlansRequest
  {
  public:
    AWS_SAVINGSPLANS_API DescribeSavingsPlanRatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSavingsPlanRates"; }

    AWS_SAVINGSPLANS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline const Aws::String& GetSavingsPlanId() const{ return m_savingsPlanId; }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline bool SavingsPlanIdHasBeenSet() const { return m_savingsPlanIdHasBeenSet; }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline void SetSavingsPlanId(const Aws::String& value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId = value; }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline void SetSavingsPlanId(Aws::String&& value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId = std::move(value); }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline void SetSavingsPlanId(const char* value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId.assign(value); }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline DescribeSavingsPlanRatesRequest& WithSavingsPlanId(const Aws::String& value) { SetSavingsPlanId(value); return *this;}

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline DescribeSavingsPlanRatesRequest& WithSavingsPlanId(Aws::String&& value) { SetSavingsPlanId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline DescribeSavingsPlanRatesRequest& WithSavingsPlanId(const char* value) { SetSavingsPlanId(value); return *this;}


    /**
     * <p>The filters.</p>
     */
    inline const Aws::Vector<SavingsPlanRateFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p>
     */
    inline void SetFilters(const Aws::Vector<SavingsPlanRateFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p>
     */
    inline void SetFilters(Aws::Vector<SavingsPlanRateFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p>
     */
    inline DescribeSavingsPlanRatesRequest& WithFilters(const Aws::Vector<SavingsPlanRateFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p>
     */
    inline DescribeSavingsPlanRatesRequest& WithFilters(Aws::Vector<SavingsPlanRateFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p>
     */
    inline DescribeSavingsPlanRatesRequest& AddFilters(const SavingsPlanRateFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p>
     */
    inline DescribeSavingsPlanRatesRequest& AddFilters(SavingsPlanRateFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeSavingsPlanRatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeSavingsPlanRatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeSavingsPlanRatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return with a single call. To retrieve
     * additional results, make another call with the returned token value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve
     * additional results, make another call with the returned token value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve
     * additional results, make another call with the returned token value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve
     * additional results, make another call with the returned token value.</p>
     */
    inline DescribeSavingsPlanRatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_savingsPlanId;
    bool m_savingsPlanIdHasBeenSet = false;

    Aws::Vector<SavingsPlanRateFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
