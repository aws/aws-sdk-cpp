﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/GroupMember.h>
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
  class ListGroupMembershipsResult
  {
  public:
    AWS_QUICKSIGHT_API ListGroupMembershipsResult();
    AWS_QUICKSIGHT_API ListGroupMembershipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListGroupMembershipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of the members of the group.</p>
     */
    inline const Aws::Vector<GroupMember>& GetGroupMemberList() const{ return m_groupMemberList; }
    inline void SetGroupMemberList(const Aws::Vector<GroupMember>& value) { m_groupMemberList = value; }
    inline void SetGroupMemberList(Aws::Vector<GroupMember>&& value) { m_groupMemberList = std::move(value); }
    inline ListGroupMembershipsResult& WithGroupMemberList(const Aws::Vector<GroupMember>& value) { SetGroupMemberList(value); return *this;}
    inline ListGroupMembershipsResult& WithGroupMemberList(Aws::Vector<GroupMember>&& value) { SetGroupMemberList(std::move(value)); return *this;}
    inline ListGroupMembershipsResult& AddGroupMemberList(const GroupMember& value) { m_groupMemberList.push_back(value); return *this; }
    inline ListGroupMembershipsResult& AddGroupMemberList(GroupMember&& value) { m_groupMemberList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListGroupMembershipsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListGroupMembershipsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListGroupMembershipsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListGroupMembershipsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListGroupMembershipsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListGroupMembershipsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline ListGroupMembershipsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<GroupMember> m_groupMemberList;

    Aws::String m_nextToken;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
