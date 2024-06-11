/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/Group.h>
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
  class ListGroupsResult
  {
  public:
    AWS_QUICKSIGHT_API ListGroupsResult();
    AWS_QUICKSIGHT_API ListGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of the groups.</p>
     */
    inline const Aws::Vector<Group>& GetGroupList() const{ return m_groupList; }
    inline void SetGroupList(const Aws::Vector<Group>& value) { m_groupList = value; }
    inline void SetGroupList(Aws::Vector<Group>&& value) { m_groupList = std::move(value); }
    inline ListGroupsResult& WithGroupList(const Aws::Vector<Group>& value) { SetGroupList(value); return *this;}
    inline ListGroupsResult& WithGroupList(Aws::Vector<Group>&& value) { SetGroupList(std::move(value)); return *this;}
    inline ListGroupsResult& AddGroupList(const Group& value) { m_groupList.push_back(value); return *this; }
    inline ListGroupsResult& AddGroupList(Group&& value) { m_groupList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline ListGroupsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<Group> m_groupList;

    Aws::String m_nextToken;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
