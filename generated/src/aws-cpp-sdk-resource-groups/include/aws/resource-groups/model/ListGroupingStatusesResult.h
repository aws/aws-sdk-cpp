/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-groups/model/GroupingStatusesItem.h>
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
namespace ResourceGroups
{
namespace Model
{
  class ListGroupingStatusesResult
  {
  public:
    AWS_RESOURCEGROUPS_API ListGroupingStatusesResult();
    AWS_RESOURCEGROUPS_API ListGroupingStatusesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API ListGroupingStatusesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The application group identifier, expressed as an Amazon resource name (ARN)
     * or the application group name.</p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }
    inline void SetGroup(const Aws::String& value) { m_group = value; }
    inline void SetGroup(Aws::String&& value) { m_group = std::move(value); }
    inline void SetGroup(const char* value) { m_group.assign(value); }
    inline ListGroupingStatusesResult& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}
    inline ListGroupingStatusesResult& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}
    inline ListGroupingStatusesResult& WithGroup(const char* value) { SetGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns details about the grouping or ungrouping status of the resources in
     * the specified application group. </p>
     */
    inline const Aws::Vector<GroupingStatusesItem>& GetGroupingStatuses() const{ return m_groupingStatuses; }
    inline void SetGroupingStatuses(const Aws::Vector<GroupingStatusesItem>& value) { m_groupingStatuses = value; }
    inline void SetGroupingStatuses(Aws::Vector<GroupingStatusesItem>&& value) { m_groupingStatuses = std::move(value); }
    inline ListGroupingStatusesResult& WithGroupingStatuses(const Aws::Vector<GroupingStatusesItem>& value) { SetGroupingStatuses(value); return *this;}
    inline ListGroupingStatusesResult& WithGroupingStatuses(Aws::Vector<GroupingStatusesItem>&& value) { SetGroupingStatuses(std::move(value)); return *this;}
    inline ListGroupingStatusesResult& AddGroupingStatuses(const GroupingStatusesItem& value) { m_groupingStatuses.push_back(value); return *this; }
    inline ListGroupingStatusesResult& AddGroupingStatuses(GroupingStatusesItem&& value) { m_groupingStatuses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListGroupingStatusesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListGroupingStatusesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListGroupingStatusesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListGroupingStatusesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListGroupingStatusesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListGroupingStatusesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_group;

    Aws::Vector<GroupingStatusesItem> m_groupingStatuses;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
