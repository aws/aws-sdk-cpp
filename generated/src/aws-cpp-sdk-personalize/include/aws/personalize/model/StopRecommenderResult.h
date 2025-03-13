/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{
  class StopRecommenderResult
  {
  public:
    AWS_PERSONALIZE_API StopRecommenderResult() = default;
    AWS_PERSONALIZE_API StopRecommenderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API StopRecommenderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recommender you stopped.</p>
     */
    inline const Aws::String& GetRecommenderArn() const { return m_recommenderArn; }
    template<typename RecommenderArnT = Aws::String>
    void SetRecommenderArn(RecommenderArnT&& value) { m_recommenderArnHasBeenSet = true; m_recommenderArn = std::forward<RecommenderArnT>(value); }
    template<typename RecommenderArnT = Aws::String>
    StopRecommenderResult& WithRecommenderArn(RecommenderArnT&& value) { SetRecommenderArn(std::forward<RecommenderArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StopRecommenderResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recommenderArn;
    bool m_recommenderArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
