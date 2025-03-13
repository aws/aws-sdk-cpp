/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/GroupSummary.h>
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
namespace Synthetics
{
namespace Model
{
  class ListGroupsResult
  {
  public:
    AWS_SYNTHETICS_API ListGroupsResult() = default;
    AWS_SYNTHETICS_API ListGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SYNTHETICS_API ListGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures that each contain information about one group.</p>
     */
    inline const Aws::Vector<GroupSummary>& GetGroups() const { return m_groups; }
    template<typename GroupsT = Aws::Vector<GroupSummary>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<GroupSummary>>
    ListGroupsResult& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = GroupSummary>
    ListGroupsResult& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>ListGroups</code> operation to retrieve the next set
     * of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GroupSummary> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
