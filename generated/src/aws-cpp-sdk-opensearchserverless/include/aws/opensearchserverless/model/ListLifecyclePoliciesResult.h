/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/LifecyclePolicySummary.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class ListLifecyclePoliciesResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API ListLifecyclePoliciesResult() = default;
    AWS_OPENSEARCHSERVERLESS_API ListLifecyclePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API ListLifecyclePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the requested lifecycle policies.</p>
     */
    inline const Aws::Vector<LifecyclePolicySummary>& GetLifecyclePolicySummaries() const { return m_lifecyclePolicySummaries; }
    template<typename LifecyclePolicySummariesT = Aws::Vector<LifecyclePolicySummary>>
    void SetLifecyclePolicySummaries(LifecyclePolicySummariesT&& value) { m_lifecyclePolicySummariesHasBeenSet = true; m_lifecyclePolicySummaries = std::forward<LifecyclePolicySummariesT>(value); }
    template<typename LifecyclePolicySummariesT = Aws::Vector<LifecyclePolicySummary>>
    ListLifecyclePoliciesResult& WithLifecyclePolicySummaries(LifecyclePolicySummariesT&& value) { SetLifecyclePolicySummaries(std::forward<LifecyclePolicySummariesT>(value)); return *this;}
    template<typename LifecyclePolicySummariesT = LifecyclePolicySummary>
    ListLifecyclePoliciesResult& AddLifecyclePolicySummaries(LifecyclePolicySummariesT&& value) { m_lifecyclePolicySummariesHasBeenSet = true; m_lifecyclePolicySummaries.emplace_back(std::forward<LifecyclePolicySummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLifecyclePoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLifecyclePoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LifecyclePolicySummary> m_lifecyclePolicySummaries;
    bool m_lifecyclePolicySummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
