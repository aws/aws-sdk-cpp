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
    AWS_SAVINGSPLANS_API DescribeSavingsPlanRatesResult();
    AWS_SAVINGSPLANS_API DescribeSavingsPlanRatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAVINGSPLANS_API DescribeSavingsPlanRatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline const Aws::String& GetSavingsPlanId() const{ return m_savingsPlanId; }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline void SetSavingsPlanId(const Aws::String& value) { m_savingsPlanId = value; }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline void SetSavingsPlanId(Aws::String&& value) { m_savingsPlanId = std::move(value); }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline void SetSavingsPlanId(const char* value) { m_savingsPlanId.assign(value); }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline DescribeSavingsPlanRatesResult& WithSavingsPlanId(const Aws::String& value) { SetSavingsPlanId(value); return *this;}

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline DescribeSavingsPlanRatesResult& WithSavingsPlanId(Aws::String&& value) { SetSavingsPlanId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline DescribeSavingsPlanRatesResult& WithSavingsPlanId(const char* value) { SetSavingsPlanId(value); return *this;}


    /**
     * <p>Information about the Savings Plans rates.</p>
     */
    inline const Aws::Vector<SavingsPlanRate>& GetSearchResults() const{ return m_searchResults; }

    /**
     * <p>Information about the Savings Plans rates.</p>
     */
    inline void SetSearchResults(const Aws::Vector<SavingsPlanRate>& value) { m_searchResults = value; }

    /**
     * <p>Information about the Savings Plans rates.</p>
     */
    inline void SetSearchResults(Aws::Vector<SavingsPlanRate>&& value) { m_searchResults = std::move(value); }

    /**
     * <p>Information about the Savings Plans rates.</p>
     */
    inline DescribeSavingsPlanRatesResult& WithSearchResults(const Aws::Vector<SavingsPlanRate>& value) { SetSearchResults(value); return *this;}

    /**
     * <p>Information about the Savings Plans rates.</p>
     */
    inline DescribeSavingsPlanRatesResult& WithSearchResults(Aws::Vector<SavingsPlanRate>&& value) { SetSearchResults(std::move(value)); return *this;}

    /**
     * <p>Information about the Savings Plans rates.</p>
     */
    inline DescribeSavingsPlanRatesResult& AddSearchResults(const SavingsPlanRate& value) { m_searchResults.push_back(value); return *this; }

    /**
     * <p>Information about the Savings Plans rates.</p>
     */
    inline DescribeSavingsPlanRatesResult& AddSearchResults(SavingsPlanRate&& value) { m_searchResults.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline DescribeSavingsPlanRatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline DescribeSavingsPlanRatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline DescribeSavingsPlanRatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_savingsPlanId;

    Aws::Vector<SavingsPlanRate> m_searchResults;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
