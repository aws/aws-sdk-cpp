/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/Insight.h>
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
namespace SecurityHub
{
namespace Model
{
  class GetInsightsResult
  {
  public:
    AWS_SECURITYHUB_API GetInsightsResult();
    AWS_SECURITYHUB_API GetInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API GetInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The insights returned by the operation.</p>
     */
    inline const Aws::Vector<Insight>& GetInsights() const{ return m_insights; }

    /**
     * <p>The insights returned by the operation.</p>
     */
    inline void SetInsights(const Aws::Vector<Insight>& value) { m_insights = value; }

    /**
     * <p>The insights returned by the operation.</p>
     */
    inline void SetInsights(Aws::Vector<Insight>&& value) { m_insights = std::move(value); }

    /**
     * <p>The insights returned by the operation.</p>
     */
    inline GetInsightsResult& WithInsights(const Aws::Vector<Insight>& value) { SetInsights(value); return *this;}

    /**
     * <p>The insights returned by the operation.</p>
     */
    inline GetInsightsResult& WithInsights(Aws::Vector<Insight>&& value) { SetInsights(std::move(value)); return *this;}

    /**
     * <p>The insights returned by the operation.</p>
     */
    inline GetInsightsResult& AddInsights(const Insight& value) { m_insights.push_back(value); return *this; }

    /**
     * <p>The insights returned by the operation.</p>
     */
    inline GetInsightsResult& AddInsights(Insight&& value) { m_insights.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline GetInsightsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline GetInsightsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline GetInsightsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Insight> m_insights;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
