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
    AWS_RESOURCEGROUPS_API ListGroupingStatusesResult() = default;
    AWS_RESOURCEGROUPS_API ListGroupingStatusesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API ListGroupingStatusesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The application group identifier, expressed as an Amazon resource name (ARN)
     * or the application group name.</p>
     */
    inline const Aws::String& GetGroup() const { return m_group; }
    template<typename GroupT = Aws::String>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = Aws::String>
    ListGroupingStatusesResult& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns details about the grouping or ungrouping status of the resources in
     * the specified application group. </p>
     */
    inline const Aws::Vector<GroupingStatusesItem>& GetGroupingStatuses() const { return m_groupingStatuses; }
    template<typename GroupingStatusesT = Aws::Vector<GroupingStatusesItem>>
    void SetGroupingStatuses(GroupingStatusesT&& value) { m_groupingStatusesHasBeenSet = true; m_groupingStatuses = std::forward<GroupingStatusesT>(value); }
    template<typename GroupingStatusesT = Aws::Vector<GroupingStatusesItem>>
    ListGroupingStatusesResult& WithGroupingStatuses(GroupingStatusesT&& value) { SetGroupingStatuses(std::forward<GroupingStatusesT>(value)); return *this;}
    template<typename GroupingStatusesT = GroupingStatusesItem>
    ListGroupingStatusesResult& AddGroupingStatuses(GroupingStatusesT&& value) { m_groupingStatusesHasBeenSet = true; m_groupingStatuses.emplace_back(std::forward<GroupingStatusesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListGroupingStatusesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGroupingStatusesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::Vector<GroupingStatusesItem> m_groupingStatuses;
    bool m_groupingStatusesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
