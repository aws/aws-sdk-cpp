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
    AWS_WORKSPACES_API WorkspacesIpGroup();
    AWS_WORKSPACES_API WorkspacesIpGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspacesIpGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline WorkspacesIpGroup& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline WorkspacesIpGroup& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline WorkspacesIpGroup& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline WorkspacesIpGroup& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline WorkspacesIpGroup& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline WorkspacesIpGroup& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the group.</p>
     */
    inline const Aws::String& GetGroupDesc() const{ return m_groupDesc; }
    inline bool GroupDescHasBeenSet() const { return m_groupDescHasBeenSet; }
    inline void SetGroupDesc(const Aws::String& value) { m_groupDescHasBeenSet = true; m_groupDesc = value; }
    inline void SetGroupDesc(Aws::String&& value) { m_groupDescHasBeenSet = true; m_groupDesc = std::move(value); }
    inline void SetGroupDesc(const char* value) { m_groupDescHasBeenSet = true; m_groupDesc.assign(value); }
    inline WorkspacesIpGroup& WithGroupDesc(const Aws::String& value) { SetGroupDesc(value); return *this;}
    inline WorkspacesIpGroup& WithGroupDesc(Aws::String&& value) { SetGroupDesc(std::move(value)); return *this;}
    inline WorkspacesIpGroup& WithGroupDesc(const char* value) { SetGroupDesc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules.</p>
     */
    inline const Aws::Vector<IpRuleItem>& GetUserRules() const{ return m_userRules; }
    inline bool UserRulesHasBeenSet() const { return m_userRulesHasBeenSet; }
    inline void SetUserRules(const Aws::Vector<IpRuleItem>& value) { m_userRulesHasBeenSet = true; m_userRules = value; }
    inline void SetUserRules(Aws::Vector<IpRuleItem>&& value) { m_userRulesHasBeenSet = true; m_userRules = std::move(value); }
    inline WorkspacesIpGroup& WithUserRules(const Aws::Vector<IpRuleItem>& value) { SetUserRules(value); return *this;}
    inline WorkspacesIpGroup& WithUserRules(Aws::Vector<IpRuleItem>&& value) { SetUserRules(std::move(value)); return *this;}
    inline WorkspacesIpGroup& AddUserRules(const IpRuleItem& value) { m_userRulesHasBeenSet = true; m_userRules.push_back(value); return *this; }
    inline WorkspacesIpGroup& AddUserRules(IpRuleItem&& value) { m_userRulesHasBeenSet = true; m_userRules.push_back(std::move(value)); return *this; }
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
