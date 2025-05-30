﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/IpRuleItem.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class UpdateRulesOfIpGroupRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API UpdateRulesOfIpGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRulesOfIpGroup"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the group.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    UpdateRulesOfIpGroupRequest& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more rules.</p>
     */
    inline const Aws::Vector<IpRuleItem>& GetUserRules() const { return m_userRules; }
    inline bool UserRulesHasBeenSet() const { return m_userRulesHasBeenSet; }
    template<typename UserRulesT = Aws::Vector<IpRuleItem>>
    void SetUserRules(UserRulesT&& value) { m_userRulesHasBeenSet = true; m_userRules = std::forward<UserRulesT>(value); }
    template<typename UserRulesT = Aws::Vector<IpRuleItem>>
    UpdateRulesOfIpGroupRequest& WithUserRules(UserRulesT&& value) { SetUserRules(std::forward<UserRulesT>(value)); return *this;}
    template<typename UserRulesT = IpRuleItem>
    UpdateRulesOfIpGroupRequest& AddUserRules(UserRulesT&& value) { m_userRulesHasBeenSet = true; m_userRules.emplace_back(std::forward<UserRulesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::Vector<IpRuleItem> m_userRules;
    bool m_userRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
