/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ContextSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListContextsResult
  {
  public:
    AWS_SAGEMAKER_API ListContextsResult() = default;
    AWS_SAGEMAKER_API ListContextsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListContextsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of contexts and their properties.</p>
     */
    inline const Aws::Vector<ContextSummary>& GetContextSummaries() const { return m_contextSummaries; }
    template<typename ContextSummariesT = Aws::Vector<ContextSummary>>
    void SetContextSummaries(ContextSummariesT&& value) { m_contextSummariesHasBeenSet = true; m_contextSummaries = std::forward<ContextSummariesT>(value); }
    template<typename ContextSummariesT = Aws::Vector<ContextSummary>>
    ListContextsResult& WithContextSummaries(ContextSummariesT&& value) { SetContextSummaries(std::forward<ContextSummariesT>(value)); return *this;}
    template<typename ContextSummariesT = ContextSummary>
    ListContextsResult& AddContextSummaries(ContextSummariesT&& value) { m_contextSummariesHasBeenSet = true; m_contextSummaries.emplace_back(std::forward<ContextSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of contexts, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListContextsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListContextsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContextSummary> m_contextSummaries;
    bool m_contextSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
