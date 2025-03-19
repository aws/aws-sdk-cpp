/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopSummary.h>
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
namespace AugmentedAIRuntime
{
namespace Model
{
  class ListHumanLoopsResult
  {
  public:
    AWS_AUGMENTEDAIRUNTIME_API ListHumanLoopsResult() = default;
    AWS_AUGMENTEDAIRUNTIME_API ListHumanLoopsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUGMENTEDAIRUNTIME_API ListHumanLoopsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that contain information about the human loops.</p>
     */
    inline const Aws::Vector<HumanLoopSummary>& GetHumanLoopSummaries() const { return m_humanLoopSummaries; }
    template<typename HumanLoopSummariesT = Aws::Vector<HumanLoopSummary>>
    void SetHumanLoopSummaries(HumanLoopSummariesT&& value) { m_humanLoopSummariesHasBeenSet = true; m_humanLoopSummaries = std::forward<HumanLoopSummariesT>(value); }
    template<typename HumanLoopSummariesT = Aws::Vector<HumanLoopSummary>>
    ListHumanLoopsResult& WithHumanLoopSummaries(HumanLoopSummariesT&& value) { SetHumanLoopSummaries(std::forward<HumanLoopSummariesT>(value)); return *this;}
    template<typename HumanLoopSummariesT = HumanLoopSummary>
    ListHumanLoopsResult& AddHumanLoopSummaries(HumanLoopSummariesT&& value) { m_humanLoopSummariesHasBeenSet = true; m_humanLoopSummaries.emplace_back(std::forward<HumanLoopSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to display the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListHumanLoopsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListHumanLoopsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HumanLoopSummary> m_humanLoopSummaries;
    bool m_humanLoopSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
