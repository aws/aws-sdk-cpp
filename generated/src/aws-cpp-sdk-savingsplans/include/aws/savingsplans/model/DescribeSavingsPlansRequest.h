/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/savingsplans/SavingsPlansRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/savingsplans/model/SavingsPlanState.h>
#include <aws/savingsplans/model/SavingsPlanFilter.h>
#include <utility>

namespace Aws
{
namespace SavingsPlans
{
namespace Model
{

  /**
   */
  class DescribeSavingsPlansRequest : public SavingsPlansRequest
  {
  public:
    AWS_SAVINGSPLANS_API DescribeSavingsPlansRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSavingsPlans"; }

    AWS_SAVINGSPLANS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Names (ARN) of the Savings Plans.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSavingsPlanArns() const { return m_savingsPlanArns; }
    inline bool SavingsPlanArnsHasBeenSet() const { return m_savingsPlanArnsHasBeenSet; }
    template<typename SavingsPlanArnsT = Aws::Vector<Aws::String>>
    void SetSavingsPlanArns(SavingsPlanArnsT&& value) { m_savingsPlanArnsHasBeenSet = true; m_savingsPlanArns = std::forward<SavingsPlanArnsT>(value); }
    template<typename SavingsPlanArnsT = Aws::Vector<Aws::String>>
    DescribeSavingsPlansRequest& WithSavingsPlanArns(SavingsPlanArnsT&& value) { SetSavingsPlanArns(std::forward<SavingsPlanArnsT>(value)); return *this;}
    template<typename SavingsPlanArnsT = Aws::String>
    DescribeSavingsPlansRequest& AddSavingsPlanArns(SavingsPlanArnsT&& value) { m_savingsPlanArnsHasBeenSet = true; m_savingsPlanArns.emplace_back(std::forward<SavingsPlanArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the Savings Plans.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSavingsPlanIds() const { return m_savingsPlanIds; }
    inline bool SavingsPlanIdsHasBeenSet() const { return m_savingsPlanIdsHasBeenSet; }
    template<typename SavingsPlanIdsT = Aws::Vector<Aws::String>>
    void SetSavingsPlanIds(SavingsPlanIdsT&& value) { m_savingsPlanIdsHasBeenSet = true; m_savingsPlanIds = std::forward<SavingsPlanIdsT>(value); }
    template<typename SavingsPlanIdsT = Aws::Vector<Aws::String>>
    DescribeSavingsPlansRequest& WithSavingsPlanIds(SavingsPlanIdsT&& value) { SetSavingsPlanIds(std::forward<SavingsPlanIdsT>(value)); return *this;}
    template<typename SavingsPlanIdsT = Aws::String>
    DescribeSavingsPlansRequest& AddSavingsPlanIds(SavingsPlanIdsT&& value) { m_savingsPlanIdsHasBeenSet = true; m_savingsPlanIds.emplace_back(std::forward<SavingsPlanIdsT>(value)); return *this; }
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
    DescribeSavingsPlansRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve
     * additional results, make another call with the returned token value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeSavingsPlansRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current states of the Savings Plans.</p>
     */
    inline const Aws::Vector<SavingsPlanState>& GetStates() const { return m_states; }
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }
    template<typename StatesT = Aws::Vector<SavingsPlanState>>
    void SetStates(StatesT&& value) { m_statesHasBeenSet = true; m_states = std::forward<StatesT>(value); }
    template<typename StatesT = Aws::Vector<SavingsPlanState>>
    DescribeSavingsPlansRequest& WithStates(StatesT&& value) { SetStates(std::forward<StatesT>(value)); return *this;}
    inline DescribeSavingsPlansRequest& AddStates(SavingsPlanState value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters.</p>
     */
    inline const Aws::Vector<SavingsPlanFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<SavingsPlanFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<SavingsPlanFilter>>
    DescribeSavingsPlansRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = SavingsPlanFilter>
    DescribeSavingsPlansRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_savingsPlanArns;
    bool m_savingsPlanArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_savingsPlanIds;
    bool m_savingsPlanIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<SavingsPlanState> m_states;
    bool m_statesHasBeenSet = false;

    Aws::Vector<SavingsPlanFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
