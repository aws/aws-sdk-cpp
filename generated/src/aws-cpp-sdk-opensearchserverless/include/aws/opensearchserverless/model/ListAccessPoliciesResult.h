/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/AccessPolicySummary.h>
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
  class ListAccessPoliciesResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API ListAccessPoliciesResult() = default;
    AWS_OPENSEARCHSERVERLESS_API ListAccessPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API ListAccessPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the requested access policies.</p>
     */
    inline const Aws::Vector<AccessPolicySummary>& GetAccessPolicySummaries() const { return m_accessPolicySummaries; }
    template<typename AccessPolicySummariesT = Aws::Vector<AccessPolicySummary>>
    void SetAccessPolicySummaries(AccessPolicySummariesT&& value) { m_accessPolicySummariesHasBeenSet = true; m_accessPolicySummaries = std::forward<AccessPolicySummariesT>(value); }
    template<typename AccessPolicySummariesT = Aws::Vector<AccessPolicySummary>>
    ListAccessPoliciesResult& WithAccessPolicySummaries(AccessPolicySummariesT&& value) { SetAccessPolicySummaries(std::forward<AccessPolicySummariesT>(value)); return *this;}
    template<typename AccessPolicySummariesT = AccessPolicySummary>
    ListAccessPoliciesResult& AddAccessPolicySummaries(AccessPolicySummariesT&& value) { m_accessPolicySummariesHasBeenSet = true; m_accessPolicySummaries.emplace_back(std::forward<AccessPolicySummariesT>(value)); return *this; }
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
    ListAccessPoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAccessPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccessPolicySummary> m_accessPolicySummaries;
    bool m_accessPolicySummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
