/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/TestRecommendation.h>
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
namespace ResilienceHub
{
namespace Model
{
  class ListTestRecommendationsResult
  {
  public:
    AWS_RESILIENCEHUB_API ListTestRecommendationsResult();
    AWS_RESILIENCEHUB_API ListTestRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListTestRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListTestRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListTestRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListTestRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The test recommendations for the Resilience Hub application.</p>
     */
    inline const Aws::Vector<TestRecommendation>& GetTestRecommendations() const{ return m_testRecommendations; }

    /**
     * <p>The test recommendations for the Resilience Hub application.</p>
     */
    inline void SetTestRecommendations(const Aws::Vector<TestRecommendation>& value) { m_testRecommendations = value; }

    /**
     * <p>The test recommendations for the Resilience Hub application.</p>
     */
    inline void SetTestRecommendations(Aws::Vector<TestRecommendation>&& value) { m_testRecommendations = std::move(value); }

    /**
     * <p>The test recommendations for the Resilience Hub application.</p>
     */
    inline ListTestRecommendationsResult& WithTestRecommendations(const Aws::Vector<TestRecommendation>& value) { SetTestRecommendations(value); return *this;}

    /**
     * <p>The test recommendations for the Resilience Hub application.</p>
     */
    inline ListTestRecommendationsResult& WithTestRecommendations(Aws::Vector<TestRecommendation>&& value) { SetTestRecommendations(std::move(value)); return *this;}

    /**
     * <p>The test recommendations for the Resilience Hub application.</p>
     */
    inline ListTestRecommendationsResult& AddTestRecommendations(const TestRecommendation& value) { m_testRecommendations.push_back(value); return *this; }

    /**
     * <p>The test recommendations for the Resilience Hub application.</p>
     */
    inline ListTestRecommendationsResult& AddTestRecommendations(TestRecommendation&& value) { m_testRecommendations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<TestRecommendation> m_testRecommendations;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
