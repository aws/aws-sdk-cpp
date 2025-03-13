/**
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
    AWS_PERSONALIZE_API ListRecommendersResult() = default;
    AWS_PERSONALIZE_API ListRecommendersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListRecommendersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the recommenders.</p>
     */
    inline const Aws::Vector<RecommenderSummary>& GetRecommenders() const { return m_recommenders; }
    template<typename RecommendersT = Aws::Vector<RecommenderSummary>>
    void SetRecommenders(RecommendersT&& value) { m_recommendersHasBeenSet = true; m_recommenders = std::forward<RecommendersT>(value); }
    template<typename RecommendersT = Aws::Vector<RecommenderSummary>>
    ListRecommendersResult& WithRecommenders(RecommendersT&& value) { SetRecommenders(std::forward<RecommendersT>(value)); return *this;}
    template<typename RecommendersT = RecommenderSummary>
    ListRecommendersResult& AddRecommenders(RecommendersT&& value) { m_recommendersHasBeenSet = true; m_recommenders.emplace_back(std::forward<RecommendersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of recommenders (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRecommendersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRecommendersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RecommenderSummary> m_recommenders;
    bool m_recommendersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
