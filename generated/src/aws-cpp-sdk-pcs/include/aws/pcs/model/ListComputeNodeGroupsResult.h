/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/model/ComputeNodeGroupSummary.h>
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
namespace PCS
{
namespace Model
{
  class ListComputeNodeGroupsResult
  {
  public:
    AWS_PCS_API ListComputeNodeGroupsResult();
    AWS_PCS_API ListComputeNodeGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCS_API ListComputeNodeGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of compute node groups for the cluster.</p>
     */
    inline const Aws::Vector<ComputeNodeGroupSummary>& GetComputeNodeGroups() const{ return m_computeNodeGroups; }
    inline void SetComputeNodeGroups(const Aws::Vector<ComputeNodeGroupSummary>& value) { m_computeNodeGroups = value; }
    inline void SetComputeNodeGroups(Aws::Vector<ComputeNodeGroupSummary>&& value) { m_computeNodeGroups = std::move(value); }
    inline ListComputeNodeGroupsResult& WithComputeNodeGroups(const Aws::Vector<ComputeNodeGroupSummary>& value) { SetComputeNodeGroups(value); return *this;}
    inline ListComputeNodeGroupsResult& WithComputeNodeGroups(Aws::Vector<ComputeNodeGroupSummary>&& value) { SetComputeNodeGroups(std::move(value)); return *this;}
    inline ListComputeNodeGroupsResult& AddComputeNodeGroups(const ComputeNodeGroupSummary& value) { m_computeNodeGroups.push_back(value); return *this; }
    inline ListComputeNodeGroupsResult& AddComputeNodeGroups(ComputeNodeGroupSummary&& value) { m_computeNodeGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value of <code>nextToken</code> is a unique pagination token for each
     * page of results returned. If <code>nextToken</code> is returned, there are more
     * results available. Make the call again using the returned token to retrieve the
     * next page. Keep all other arguments unchanged. Each pagination token expires
     * after 24 hours. Using an expired pagination token returns an <code>HTTP 400
     * InvalidToken</code> error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListComputeNodeGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListComputeNodeGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListComputeNodeGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListComputeNodeGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListComputeNodeGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListComputeNodeGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ComputeNodeGroupSummary> m_computeNodeGroups;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
