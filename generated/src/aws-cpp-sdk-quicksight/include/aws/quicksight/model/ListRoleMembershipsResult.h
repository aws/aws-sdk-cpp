/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace QuickSight
{
namespace Model
{
  class ListRoleMembershipsResult
  {
  public:
    AWS_QUICKSIGHT_API ListRoleMembershipsResult();
    AWS_QUICKSIGHT_API ListRoleMembershipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListRoleMembershipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of groups associated with a role</p>
     */
    inline const Aws::Vector<Aws::String>& GetMembersList() const{ return m_membersList; }

    /**
     * <p>The list of groups associated with a role</p>
     */
    inline void SetMembersList(const Aws::Vector<Aws::String>& value) { m_membersList = value; }

    /**
     * <p>The list of groups associated with a role</p>
     */
    inline void SetMembersList(Aws::Vector<Aws::String>&& value) { m_membersList = std::move(value); }

    /**
     * <p>The list of groups associated with a role</p>
     */
    inline ListRoleMembershipsResult& WithMembersList(const Aws::Vector<Aws::String>& value) { SetMembersList(value); return *this;}

    /**
     * <p>The list of groups associated with a role</p>
     */
    inline ListRoleMembershipsResult& WithMembersList(Aws::Vector<Aws::String>&& value) { SetMembersList(std::move(value)); return *this;}

    /**
     * <p>The list of groups associated with a role</p>
     */
    inline ListRoleMembershipsResult& AddMembersList(const Aws::String& value) { m_membersList.push_back(value); return *this; }

    /**
     * <p>The list of groups associated with a role</p>
     */
    inline ListRoleMembershipsResult& AddMembersList(Aws::String&& value) { m_membersList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of groups associated with a role</p>
     */
    inline ListRoleMembershipsResult& AddMembersList(const char* value) { m_membersList.push_back(value); return *this; }


    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline ListRoleMembershipsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline ListRoleMembershipsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline ListRoleMembershipsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRoleMembershipsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRoleMembershipsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRoleMembershipsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline ListRoleMembershipsResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_membersList;

    Aws::String m_nextToken;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
