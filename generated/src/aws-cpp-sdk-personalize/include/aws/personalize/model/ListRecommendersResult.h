﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/RecommenderSummary.h>
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
namespace Personalize
{
namespace Model
{
  class ListRecommendersResult
  {
  public:
    AWS_PERSONALIZE_API ListRecommendersResult();
    AWS_PERSONALIZE_API ListRecommendersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListRecommendersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the recommenders.</p>
     */
    inline const Aws::Vector<RecommenderSummary>& GetRecommenders() const{ return m_recommenders; }
    inline void SetRecommenders(const Aws::Vector<RecommenderSummary>& value) { m_recommenders = value; }
    inline void SetRecommenders(Aws::Vector<RecommenderSummary>&& value) { m_recommenders = std::move(value); }
    inline ListRecommendersResult& WithRecommenders(const Aws::Vector<RecommenderSummary>& value) { SetRecommenders(value); return *this;}
    inline ListRecommendersResult& WithRecommenders(Aws::Vector<RecommenderSummary>&& value) { SetRecommenders(std::move(value)); return *this;}
    inline ListRecommendersResult& AddRecommenders(const RecommenderSummary& value) { m_recommenders.push_back(value); return *this; }
    inline ListRecommendersResult& AddRecommenders(RecommenderSummary&& value) { m_recommenders.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of recommenders (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRecommendersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRecommendersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRecommendersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRecommendersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRecommendersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRecommendersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RecommenderSummary> m_recommenders;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
