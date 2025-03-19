/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/savingsplans/model/SavingsPlanOffering.h>
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
  class DescribeSavingsPlansOfferingsResult
  {
  public:
    AWS_SAVINGSPLANS_API DescribeSavingsPlansOfferingsResult() = default;
    AWS_SAVINGSPLANS_API DescribeSavingsPlansOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAVINGSPLANS_API DescribeSavingsPlansOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the Savings Plans offerings.</p>
     */
    inline const Aws::Vector<SavingsPlanOffering>& GetSearchResults() const { return m_searchResults; }
    template<typename SearchResultsT = Aws::Vector<SavingsPlanOffering>>
    void SetSearchResults(SearchResultsT&& value) { m_searchResultsHasBeenSet = true; m_searchResults = std::forward<SearchResultsT>(value); }
    template<typename SearchResultsT = Aws::Vector<SavingsPlanOffering>>
    DescribeSavingsPlansOfferingsResult& WithSearchResults(SearchResultsT&& value) { SetSearchResults(std::forward<SearchResultsT>(value)); return *this;}
    template<typename SearchResultsT = SavingsPlanOffering>
    DescribeSavingsPlansOfferingsResult& AddSearchResults(SearchResultsT&& value) { m_searchResultsHasBeenSet = true; m_searchResults.emplace_back(std::forward<SearchResultsT>(value)); return *this; }
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
    DescribeSavingsPlansOfferingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSavingsPlansOfferingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SavingsPlanOffering> m_searchResults;
    bool m_searchResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
