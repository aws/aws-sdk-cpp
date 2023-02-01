/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/BudgetDetail.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class ListBudgetsForResourceResult
  {
  public:
    AWS_SERVICECATALOG_API ListBudgetsForResourceResult();
    AWS_SERVICECATALOG_API ListBudgetsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListBudgetsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the associated budgets.</p>
     */
    inline const Aws::Vector<BudgetDetail>& GetBudgets() const{ return m_budgets; }

    /**
     * <p>Information about the associated budgets.</p>
     */
    inline void SetBudgets(const Aws::Vector<BudgetDetail>& value) { m_budgets = value; }

    /**
     * <p>Information about the associated budgets.</p>
     */
    inline void SetBudgets(Aws::Vector<BudgetDetail>&& value) { m_budgets = std::move(value); }

    /**
     * <p>Information about the associated budgets.</p>
     */
    inline ListBudgetsForResourceResult& WithBudgets(const Aws::Vector<BudgetDetail>& value) { SetBudgets(value); return *this;}

    /**
     * <p>Information about the associated budgets.</p>
     */
    inline ListBudgetsForResourceResult& WithBudgets(Aws::Vector<BudgetDetail>&& value) { SetBudgets(std::move(value)); return *this;}

    /**
     * <p>Information about the associated budgets.</p>
     */
    inline ListBudgetsForResourceResult& AddBudgets(const BudgetDetail& value) { m_budgets.push_back(value); return *this; }

    /**
     * <p>Information about the associated budgets.</p>
     */
    inline ListBudgetsForResourceResult& AddBudgets(BudgetDetail&& value) { m_budgets.push_back(std::move(value)); return *this; }


    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListBudgetsForResourceResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListBudgetsForResourceResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListBudgetsForResourceResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<BudgetDetail> m_budgets;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
