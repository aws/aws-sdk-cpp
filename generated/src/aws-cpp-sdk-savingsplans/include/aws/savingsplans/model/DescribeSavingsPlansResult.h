/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/savingsplans/model/SavingsPlan.h>
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
  class DescribeSavingsPlansResult
  {
  public:
    AWS_SAVINGSPLANS_API DescribeSavingsPlansResult();
    AWS_SAVINGSPLANS_API DescribeSavingsPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAVINGSPLANS_API DescribeSavingsPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the Savings Plans.</p>
     */
    inline const Aws::Vector<SavingsPlan>& GetSavingsPlans() const{ return m_savingsPlans; }

    /**
     * <p>Information about the Savings Plans.</p>
     */
    inline void SetSavingsPlans(const Aws::Vector<SavingsPlan>& value) { m_savingsPlans = value; }

    /**
     * <p>Information about the Savings Plans.</p>
     */
    inline void SetSavingsPlans(Aws::Vector<SavingsPlan>&& value) { m_savingsPlans = std::move(value); }

    /**
     * <p>Information about the Savings Plans.</p>
     */
    inline DescribeSavingsPlansResult& WithSavingsPlans(const Aws::Vector<SavingsPlan>& value) { SetSavingsPlans(value); return *this;}

    /**
     * <p>Information about the Savings Plans.</p>
     */
    inline DescribeSavingsPlansResult& WithSavingsPlans(Aws::Vector<SavingsPlan>&& value) { SetSavingsPlans(std::move(value)); return *this;}

    /**
     * <p>Information about the Savings Plans.</p>
     */
    inline DescribeSavingsPlansResult& AddSavingsPlans(const SavingsPlan& value) { m_savingsPlans.push_back(value); return *this; }

    /**
     * <p>Information about the Savings Plans.</p>
     */
    inline DescribeSavingsPlansResult& AddSavingsPlans(SavingsPlan&& value) { m_savingsPlans.push_back(std::move(value)); return *this; }


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
    inline DescribeSavingsPlansResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline DescribeSavingsPlansResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline DescribeSavingsPlansResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SavingsPlan> m_savingsPlans;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
