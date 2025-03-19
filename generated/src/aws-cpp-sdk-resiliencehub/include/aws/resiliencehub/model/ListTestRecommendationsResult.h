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
    AWS_RESILIENCEHUB_API ListTestRecommendationsResult() = default;
    AWS_RESILIENCEHUB_API ListTestRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListTestRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTestRecommendationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test recommendations for the Resilience Hub application.</p>
     */
    inline const Aws::Vector<TestRecommendation>& GetTestRecommendations() const { return m_testRecommendations; }
    template<typename TestRecommendationsT = Aws::Vector<TestRecommendation>>
    void SetTestRecommendations(TestRecommendationsT&& value) { m_testRecommendationsHasBeenSet = true; m_testRecommendations = std::forward<TestRecommendationsT>(value); }
    template<typename TestRecommendationsT = Aws::Vector<TestRecommendation>>
    ListTestRecommendationsResult& WithTestRecommendations(TestRecommendationsT&& value) { SetTestRecommendations(std::forward<TestRecommendationsT>(value)); return *this;}
    template<typename TestRecommendationsT = TestRecommendation>
    ListTestRecommendationsResult& AddTestRecommendations(TestRecommendationsT&& value) { m_testRecommendationsHasBeenSet = true; m_testRecommendations.emplace_back(std::forward<TestRecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTestRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TestRecommendation> m_testRecommendations;
    bool m_testRecommendationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
