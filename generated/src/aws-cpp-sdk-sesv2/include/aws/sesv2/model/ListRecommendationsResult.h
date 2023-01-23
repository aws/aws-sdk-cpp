/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/Recommendation.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>Contains the response to your request to retrieve the list of recommendations
   * for your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListRecommendationsResponse">AWS
   * API Reference</a></p>
   */
  class ListRecommendationsResult
  {
  public:
    AWS_SESV2_API ListRecommendationsResult();
    AWS_SESV2_API ListRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The recommendations applicable to your account.</p>
     */
    inline const Aws::Vector<Recommendation>& GetRecommendations() const{ return m_recommendations; }

    /**
     * <p>The recommendations applicable to your account.</p>
     */
    inline void SetRecommendations(const Aws::Vector<Recommendation>& value) { m_recommendations = value; }

    /**
     * <p>The recommendations applicable to your account.</p>
     */
    inline void SetRecommendations(Aws::Vector<Recommendation>&& value) { m_recommendations = std::move(value); }

    /**
     * <p>The recommendations applicable to your account.</p>
     */
    inline ListRecommendationsResult& WithRecommendations(const Aws::Vector<Recommendation>& value) { SetRecommendations(value); return *this;}

    /**
     * <p>The recommendations applicable to your account.</p>
     */
    inline ListRecommendationsResult& WithRecommendations(Aws::Vector<Recommendation>&& value) { SetRecommendations(std::move(value)); return *this;}

    /**
     * <p>The recommendations applicable to your account.</p>
     */
    inline ListRecommendationsResult& AddRecommendations(const Recommendation& value) { m_recommendations.push_back(value); return *this; }

    /**
     * <p>The recommendations applicable to your account.</p>
     */
    inline ListRecommendationsResult& AddRecommendations(Recommendation&& value) { m_recommendations.push_back(std::move(value)); return *this; }


    /**
     * <p>A string token indicating that there might be additional recommendations
     * available to be listed. Use the token provided in the
     * <code>ListRecommendationsResponse</code> to use in the subsequent call to
     * <code>ListRecommendations</code> with the same parameters to retrieve the next
     * page of recommendations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string token indicating that there might be additional recommendations
     * available to be listed. Use the token provided in the
     * <code>ListRecommendationsResponse</code> to use in the subsequent call to
     * <code>ListRecommendations</code> with the same parameters to retrieve the next
     * page of recommendations.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A string token indicating that there might be additional recommendations
     * available to be listed. Use the token provided in the
     * <code>ListRecommendationsResponse</code> to use in the subsequent call to
     * <code>ListRecommendations</code> with the same parameters to retrieve the next
     * page of recommendations.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A string token indicating that there might be additional recommendations
     * available to be listed. Use the token provided in the
     * <code>ListRecommendationsResponse</code> to use in the subsequent call to
     * <code>ListRecommendations</code> with the same parameters to retrieve the next
     * page of recommendations.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A string token indicating that there might be additional recommendations
     * available to be listed. Use the token provided in the
     * <code>ListRecommendationsResponse</code> to use in the subsequent call to
     * <code>ListRecommendations</code> with the same parameters to retrieve the next
     * page of recommendations.</p>
     */
    inline ListRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string token indicating that there might be additional recommendations
     * available to be listed. Use the token provided in the
     * <code>ListRecommendationsResponse</code> to use in the subsequent call to
     * <code>ListRecommendations</code> with the same parameters to retrieve the next
     * page of recommendations.</p>
     */
    inline ListRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A string token indicating that there might be additional recommendations
     * available to be listed. Use the token provided in the
     * <code>ListRecommendationsResponse</code> to use in the subsequent call to
     * <code>ListRecommendations</code> with the same parameters to retrieve the next
     * page of recommendations.</p>
     */
    inline ListRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Recommendation> m_recommendations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
