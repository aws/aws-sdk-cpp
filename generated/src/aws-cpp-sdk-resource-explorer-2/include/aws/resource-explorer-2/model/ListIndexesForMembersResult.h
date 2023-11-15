/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-explorer-2/model/MemberIndex.h>
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
namespace ResourceExplorer2
{
namespace Model
{
  class ListIndexesForMembersResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API ListIndexesForMembersResult();
    AWS_RESOURCEEXPLORER2_API ListIndexesForMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API ListIndexesForMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains the details and status of each index.</p>
     */
    inline const Aws::Vector<MemberIndex>& GetIndexes() const{ return m_indexes; }

    /**
     * <p>A structure that contains the details and status of each index.</p>
     */
    inline void SetIndexes(const Aws::Vector<MemberIndex>& value) { m_indexes = value; }

    /**
     * <p>A structure that contains the details and status of each index.</p>
     */
    inline void SetIndexes(Aws::Vector<MemberIndex>&& value) { m_indexes = std::move(value); }

    /**
     * <p>A structure that contains the details and status of each index.</p>
     */
    inline ListIndexesForMembersResult& WithIndexes(const Aws::Vector<MemberIndex>& value) { SetIndexes(value); return *this;}

    /**
     * <p>A structure that contains the details and status of each index.</p>
     */
    inline ListIndexesForMembersResult& WithIndexes(Aws::Vector<MemberIndex>&& value) { SetIndexes(std::move(value)); return *this;}

    /**
     * <p>A structure that contains the details and status of each index.</p>
     */
    inline ListIndexesForMembersResult& AddIndexes(const MemberIndex& value) { m_indexes.push_back(value); return *this; }

    /**
     * <p>A structure that contains the details and status of each index.</p>
     */
    inline ListIndexesForMembersResult& AddIndexes(MemberIndex&& value) { m_indexes.push_back(std::move(value)); return *this; }


    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>. The pagination tokens expire after 24 hours.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>. The pagination tokens expire after 24 hours.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>. The pagination tokens expire after 24 hours.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>. The pagination tokens expire after 24 hours.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>. The pagination tokens expire after 24 hours.</p>
     */
    inline ListIndexesForMembersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>. The pagination tokens expire after 24 hours.</p>
     */
    inline ListIndexesForMembersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>. The pagination tokens expire after 24 hours.</p>
     */
    inline ListIndexesForMembersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListIndexesForMembersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListIndexesForMembersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListIndexesForMembersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<MemberIndex> m_indexes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
