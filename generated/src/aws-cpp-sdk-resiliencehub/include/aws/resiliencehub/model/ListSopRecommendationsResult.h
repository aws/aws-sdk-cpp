﻿/**
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
    AWS_RESILIENCEHUB_API ListSopRecommendationsResult() = default;
    AWS_RESILIENCEHUB_API ListSopRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListSopRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSopRecommendationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The standard operating procedure (SOP) recommendations for the Resilience Hub
     * applications.</p>
     */
    inline const Aws::Vector<SopRecommendation>& GetSopRecommendations() const { return m_sopRecommendations; }
    template<typename SopRecommendationsT = Aws::Vector<SopRecommendation>>
    void SetSopRecommendations(SopRecommendationsT&& value) { m_sopRecommendationsHasBeenSet = true; m_sopRecommendations = std::forward<SopRecommendationsT>(value); }
    template<typename SopRecommendationsT = Aws::Vector<SopRecommendation>>
    ListSopRecommendationsResult& WithSopRecommendations(SopRecommendationsT&& value) { SetSopRecommendations(std::forward<SopRecommendationsT>(value)); return *this;}
    template<typename SopRecommendationsT = SopRecommendation>
    ListSopRecommendationsResult& AddSopRecommendations(SopRecommendationsT&& value) { m_sopRecommendationsHasBeenSet = true; m_sopRecommendations.emplace_back(std::forward<SopRecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSopRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SopRecommendation> m_sopRecommendations;
    bool m_sopRecommendationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
