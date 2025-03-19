/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/IpRuleItem.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes an IP access control group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspacesIpGroup">AWS
   * API Reference</a></p>
   */
  class WorkspacesIpGroup
  {
  public:
    AWS_WORKSPACES_API WorkspacesIpGroup() = default;
    AWS_WORKSPACES_API WorkspacesIpGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspacesIpGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the group.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    WorkspacesIpGroup& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    WorkspacesIpGroup& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the group.</p>
     */
    inline const Aws::String& GetGroupDesc() const { return m_groupDesc; }
    inline bool GroupDescHasBeenSet() const { return m_groupDescHasBeenSet; }
    template<typename GroupDescT = Aws::String>
    void SetGroupDesc(GroupDescT&& value) { m_groupDescHasBeenSet = true; m_groupDesc = std::forward<GroupDescT>(value); }
    template<typename GroupDescT = Aws::String>
    WorkspacesIpGroup& WithGroupDesc(GroupDescT&& value) { SetGroupDesc(std::forward<GroupDescT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules.</p>
     */
    inline const Aws::Vector<IpRuleItem>& GetUserRules() const { return m_userRules; }
    inline bool UserRulesHasBeenSet() const { return m_userRulesHasBeenSet; }
    template<typename UserRulesT = Aws::Vector<IpRuleItem>>
    void SetUserRules(UserRulesT&& value) { m_userRulesHasBeenSet = true; m_userRules = std::forward<UserRulesT>(value); }
    template<typename UserRulesT = Aws::Vector<IpRuleItem>>
    WorkspacesIpGroup& WithUserRules(UserRulesT&& value) { SetUserRules(std::forward<UserRulesT>(value)); return *this;}
    template<typename UserRulesT = IpRuleItem>
    WorkspacesIpGroup& AddUserRules(UserRulesT&& value) { m_userRulesHasBeenSet = true; m_userRules.emplace_back(std::forward<UserRulesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_groupDesc;
    bool m_groupDescHasBeenSet = false;

    Aws::Vector<IpRuleItem> m_userRules;
    bool m_userRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
