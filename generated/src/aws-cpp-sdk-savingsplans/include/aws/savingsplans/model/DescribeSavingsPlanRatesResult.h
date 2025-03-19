/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/savingsplans/model/SavingsPlanRate.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SavingsPlans
{
namespace Model
{
  class DescribeSavingsPlanRatesResult
  {
  public:
    AWS_SAVINGSPLANS_API DescribeSavingsPlanRatesResult() = default;
    AWS_SAVINGSPLANS_API DescribeSavingsPlanRatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAVINGSPLANS_API DescribeSavingsPlanRatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline const Aws::String& GetSavingsPlanId() const { return m_savingsPlanId; }
    template<typename SavingsPlanIdT = Aws::String>
    void SetSavingsPlanId(SavingsPlanIdT&& value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId = std::forward<SavingsPlanIdT>(value); }
    template<typename SavingsPlanIdT = Aws::String>
    DescribeSavingsPlanRatesResult& WithSavingsPlanId(SavingsPlanIdT&& value) { SetSavingsPlanId(std::forward<SavingsPlanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Savings Plan rates.</p>
     */
    inline const Aws::Vector<SavingsPlanRate>& GetSearchResults() const { return m_searchResults; }
    template<typename SearchResultsT = Aws::Vector<SavingsPlanRate>>
    void SetSearchResults(SearchResultsT&& value) { m_searchResultsHasBeenSet = true; m_searchResults = std::forward<SearchResultsT>(value); }
    template<typename SearchResultsT = Aws::Vector<SavingsPlanRate>>
    DescribeSavingsPlanRatesResult& WithSearchResults(SearchResultsT&& value) { SetSearchResults(std::forward<SearchResultsT>(value)); return *this;}
    template<typename SearchResultsT = SavingsPlanRate>
    DescribeSavingsPlanRatesResult& AddSearchResults(SearchResultsT&& value) { m_searchResultsHasBeenSet = true; m_searchResults.emplace_back(std::forward<SearchResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSavingsPlanRatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSavingsPlanRatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_savingsPlanId;
    bool m_savingsPlanIdHasBeenSet = false;

    Aws::Vector<SavingsPlanRate> m_searchResults;
    bool m_searchResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
