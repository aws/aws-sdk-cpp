/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ReplacePermissionAssociationsWork.h>
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
namespace RAM
{
namespace Model
{
  class ListReplacePermissionAssociationsWorkResult
  {
  public:
    AWS_RAM_API ListReplacePermissionAssociationsWorkResult();
    AWS_RAM_API ListReplacePermissionAssociationsWorkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API ListReplacePermissionAssociationsWorkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of data structures that provide details of the matching work
     * IDs.</p>
     */
    inline const Aws::Vector<ReplacePermissionAssociationsWork>& GetReplacePermissionAssociationsWorks() const{ return m_replacePermissionAssociationsWorks; }

    /**
     * <p>An array of data structures that provide details of the matching work
     * IDs.</p>
     */
    inline void SetReplacePermissionAssociationsWorks(const Aws::Vector<ReplacePermissionAssociationsWork>& value) { m_replacePermissionAssociationsWorks = value; }

    /**
     * <p>An array of data structures that provide details of the matching work
     * IDs.</p>
     */
    inline void SetReplacePermissionAssociationsWorks(Aws::Vector<ReplacePermissionAssociationsWork>&& value) { m_replacePermissionAssociationsWorks = std::move(value); }

    /**
     * <p>An array of data structures that provide details of the matching work
     * IDs.</p>
     */
    inline ListReplacePermissionAssociationsWorkResult& WithReplacePermissionAssociationsWorks(const Aws::Vector<ReplacePermissionAssociationsWork>& value) { SetReplacePermissionAssociationsWorks(value); return *this;}

    /**
     * <p>An array of data structures that provide details of the matching work
     * IDs.</p>
     */
    inline ListReplacePermissionAssociationsWorkResult& WithReplacePermissionAssociationsWorks(Aws::Vector<ReplacePermissionAssociationsWork>&& value) { SetReplacePermissionAssociationsWorks(std::move(value)); return *this;}

    /**
     * <p>An array of data structures that provide details of the matching work
     * IDs.</p>
     */
    inline ListReplacePermissionAssociationsWorkResult& AddReplacePermissionAssociationsWorks(const ReplacePermissionAssociationsWork& value) { m_replacePermissionAssociationsWorks.push_back(value); return *this; }

    /**
     * <p>An array of data structures that provide details of the matching work
     * IDs.</p>
     */
    inline ListReplacePermissionAssociationsWorkResult& AddReplacePermissionAssociationsWorks(ReplacePermissionAssociationsWork&& value) { m_replacePermissionAssociationsWorks.push_back(std::move(value)); return *this; }


    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline ListReplacePermissionAssociationsWorkResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline ListReplacePermissionAssociationsWorkResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline ListReplacePermissionAssociationsWorkResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListReplacePermissionAssociationsWorkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListReplacePermissionAssociationsWorkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListReplacePermissionAssociationsWorkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ReplacePermissionAssociationsWork> m_replacePermissionAssociationsWorks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
