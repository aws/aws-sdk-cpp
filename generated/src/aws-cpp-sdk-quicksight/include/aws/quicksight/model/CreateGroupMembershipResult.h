/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GroupMember.h>
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
  class CreateGroupMembershipResult
  {
  public:
    AWS_QUICKSIGHT_API CreateGroupMembershipResult() = default;
    AWS_QUICKSIGHT_API CreateGroupMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CreateGroupMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The group member.</p>
     */
    inline const GroupMember& GetGroupMember() const { return m_groupMember; }
    template<typename GroupMemberT = GroupMember>
    void SetGroupMember(GroupMemberT&& value) { m_groupMemberHasBeenSet = true; m_groupMember = std::forward<GroupMemberT>(value); }
    template<typename GroupMemberT = GroupMember>
    CreateGroupMembershipResult& WithGroupMember(GroupMemberT&& value) { SetGroupMember(std::forward<GroupMemberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateGroupMembershipResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateGroupMembershipResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    GroupMember m_groupMember;
    bool m_groupMemberHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
