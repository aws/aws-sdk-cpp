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
  class SearchGroupsResult
  {
  public:
    AWS_QUICKSIGHT_API SearchGroupsResult();
    AWS_QUICKSIGHT_API SearchGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API SearchGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of groups in a specified namespace that match the filters you set in
     * your <code>SearchGroups</code> request.</p>
     */
    inline const Aws::Vector<Group>& GetGroupList() const{ return m_groupList; }

    /**
     * <p>A list of groups in a specified namespace that match the filters you set in
     * your <code>SearchGroups</code> request.</p>
     */
    inline void SetGroupList(const Aws::Vector<Group>& value) { m_groupList = value; }

    /**
     * <p>A list of groups in a specified namespace that match the filters you set in
     * your <code>SearchGroups</code> request.</p>
     */
    inline void SetGroupList(Aws::Vector<Group>&& value) { m_groupList = std::move(value); }

    /**
     * <p>A list of groups in a specified namespace that match the filters you set in
     * your <code>SearchGroups</code> request.</p>
     */
    inline SearchGroupsResult& WithGroupList(const Aws::Vector<Group>& value) { SetGroupList(value); return *this;}

    /**
     * <p>A list of groups in a specified namespace that match the filters you set in
     * your <code>SearchGroups</code> request.</p>
     */
    inline SearchGroupsResult& WithGroupList(Aws::Vector<Group>&& value) { SetGroupList(std::move(value)); return *this;}

    /**
     * <p>A list of groups in a specified namespace that match the filters you set in
     * your <code>SearchGroups</code> request.</p>
     */
    inline SearchGroupsResult& AddGroupList(const Group& value) { m_groupList.push_back(value); return *this; }

    /**
     * <p>A list of groups in a specified namespace that match the filters you set in
     * your <code>SearchGroups</code> request.</p>
     */
    inline SearchGroupsResult& AddGroupList(Group&& value) { m_groupList.push_back(std::move(value)); return *this; }


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
    inline SearchGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline SearchGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline SearchGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline SearchGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline SearchGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline SearchGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


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
    inline SearchGroupsResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::Vector<Group> m_groupList;

    Aws::String m_nextToken;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
