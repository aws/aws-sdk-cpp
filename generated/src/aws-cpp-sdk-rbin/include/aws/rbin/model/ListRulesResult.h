/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rbin/model/RuleSummary.h>
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
namespace RecycleBin
{
namespace Model
{
  class ListRulesResult
  {
  public:
    AWS_RECYCLEBIN_API ListRulesResult();
    AWS_RECYCLEBIN_API ListRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RECYCLEBIN_API ListRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the retention rules.</p>
     */
    inline const Aws::Vector<RuleSummary>& GetRules() const{ return m_rules; }

    /**
     * <p>Information about the retention rules.</p>
     */
    inline void SetRules(const Aws::Vector<RuleSummary>& value) { m_rules = value; }

    /**
     * <p>Information about the retention rules.</p>
     */
    inline void SetRules(Aws::Vector<RuleSummary>&& value) { m_rules = std::move(value); }

    /**
     * <p>Information about the retention rules.</p>
     */
    inline ListRulesResult& WithRules(const Aws::Vector<RuleSummary>& value) { SetRules(value); return *this;}

    /**
     * <p>Information about the retention rules.</p>
     */
    inline ListRulesResult& WithRules(Aws::Vector<RuleSummary>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>Information about the retention rules.</p>
     */
    inline ListRulesResult& AddRules(const RuleSummary& value) { m_rules.push_back(value); return *this; }

    /**
     * <p>Information about the retention rules.</p>
     */
    inline ListRulesResult& AddRules(RuleSummary&& value) { m_rules.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RuleSummary> m_rules;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
