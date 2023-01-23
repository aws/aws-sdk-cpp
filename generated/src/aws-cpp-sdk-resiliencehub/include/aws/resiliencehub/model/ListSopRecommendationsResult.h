/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/SopRecommendation.h>
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
  class ListSopRecommendationsResult
  {
  public:
    AWS_RESILIENCEHUB_API ListSopRecommendationsResult();
    AWS_RESILIENCEHUB_API ListSopRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListSopRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListSopRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListSopRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListSopRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The standard operating procedure (SOP) recommendations for the Resilience Hub
     * applications.</p>
     */
    inline const Aws::Vector<SopRecommendation>& GetSopRecommendations() const{ return m_sopRecommendations; }

    /**
     * <p>The standard operating procedure (SOP) recommendations for the Resilience Hub
     * applications.</p>
     */
    inline void SetSopRecommendations(const Aws::Vector<SopRecommendation>& value) { m_sopRecommendations = value; }

    /**
     * <p>The standard operating procedure (SOP) recommendations for the Resilience Hub
     * applications.</p>
     */
    inline void SetSopRecommendations(Aws::Vector<SopRecommendation>&& value) { m_sopRecommendations = std::move(value); }

    /**
     * <p>The standard operating procedure (SOP) recommendations for the Resilience Hub
     * applications.</p>
     */
    inline ListSopRecommendationsResult& WithSopRecommendations(const Aws::Vector<SopRecommendation>& value) { SetSopRecommendations(value); return *this;}

    /**
     * <p>The standard operating procedure (SOP) recommendations for the Resilience Hub
     * applications.</p>
     */
    inline ListSopRecommendationsResult& WithSopRecommendations(Aws::Vector<SopRecommendation>&& value) { SetSopRecommendations(std::move(value)); return *this;}

    /**
     * <p>The standard operating procedure (SOP) recommendations for the Resilience Hub
     * applications.</p>
     */
    inline ListSopRecommendationsResult& AddSopRecommendations(const SopRecommendation& value) { m_sopRecommendations.push_back(value); return *this; }

    /**
     * <p>The standard operating procedure (SOP) recommendations for the Resilience Hub
     * applications.</p>
     */
    inline ListSopRecommendationsResult& AddSopRecommendations(SopRecommendation&& value) { m_sopRecommendations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<SopRecommendation> m_sopRecommendations;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
