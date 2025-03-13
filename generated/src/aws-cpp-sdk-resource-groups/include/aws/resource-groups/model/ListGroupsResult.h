/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/GroupIdentifier.h>
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
  class ListGroupsResult
  {
  public:
    AWS_RESOURCEGROUPS_API ListGroupsResult() = default;
    AWS_RESOURCEGROUPS_API ListGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API ListGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <a>GroupIdentifier</a> objects. Each identifier is an object that
     * contains both the <code>Name</code> and the <code>GroupArn</code>.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroupIdentifiers() const { return m_groupIdentifiers; }
    template<typename GroupIdentifiersT = Aws::Vector<GroupIdentifier>>
    void SetGroupIdentifiers(GroupIdentifiersT&& value) { m_groupIdentifiersHasBeenSet = true; m_groupIdentifiers = std::forward<GroupIdentifiersT>(value); }
    template<typename GroupIdentifiersT = Aws::Vector<GroupIdentifier>>
    ListGroupsResult& WithGroupIdentifiers(GroupIdentifiersT&& value) { SetGroupIdentifiers(std::forward<GroupIdentifiersT>(value)); return *this;}
    template<typename GroupIdentifiersT = GroupIdentifier>
    ListGroupsResult& AddGroupIdentifiers(GroupIdentifiersT&& value) { m_groupIdentifiersHasBeenSet = true; m_groupIdentifiers.emplace_back(std::forward<GroupIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
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

    Aws::Vector<GroupIdentifier> m_groupIdentifiers;
    bool m_groupIdentifiersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
