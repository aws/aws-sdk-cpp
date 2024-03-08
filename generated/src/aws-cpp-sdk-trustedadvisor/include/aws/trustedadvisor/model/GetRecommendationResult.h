/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/model/Recommendation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace TrustedAdvisor
{
namespace Model
{
  class GetRecommendationResult
  {
  public:
    AWS_TRUSTEDADVISOR_API GetRecommendationResult();
    AWS_TRUSTEDADVISOR_API GetRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRUSTEDADVISOR_API GetRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Recommendation</p>
     */
    inline const Recommendation& GetRecommendation() const{ return m_recommendation; }

    /**
     * <p>The Recommendation</p>
     */
    inline void SetRecommendation(const Recommendation& value) { m_recommendation = value; }

    /**
     * <p>The Recommendation</p>
     */
    inline void SetRecommendation(Recommendation&& value) { m_recommendation = std::move(value); }

    /**
     * <p>The Recommendation</p>
     */
    inline GetRecommendationResult& WithRecommendation(const Recommendation& value) { SetRecommendation(value); return *this;}

    /**
     * <p>The Recommendation</p>
     */
    inline GetRecommendationResult& WithRecommendation(Recommendation&& value) { SetRecommendation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRecommendationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRecommendationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRecommendationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Recommendation m_recommendation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
