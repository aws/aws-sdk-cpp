/**
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
    AWS_WORKSPACES_API UpdateRulesOfIpGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRulesOfIpGroup"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The identifier of the group.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The identifier of the group.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The identifier of the group.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The identifier of the group.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The identifier of the group.</p>
     */
    inline UpdateRulesOfIpGroupRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The identifier of the group.</p>
     */
    inline UpdateRulesOfIpGroupRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the group.</p>
     */
    inline UpdateRulesOfIpGroupRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>One or more rules.</p>
     */
    inline const Aws::Vector<IpRuleItem>& GetUserRules() const{ return m_userRules; }

    /**
     * <p>One or more rules.</p>
     */
    inline bool UserRulesHasBeenSet() const { return m_userRulesHasBeenSet; }

    /**
     * <p>One or more rules.</p>
     */
    inline void SetUserRules(const Aws::Vector<IpRuleItem>& value) { m_userRulesHasBeenSet = true; m_userRules = value; }

    /**
     * <p>One or more rules.</p>
     */
    inline void SetUserRules(Aws::Vector<IpRuleItem>&& value) { m_userRulesHasBeenSet = true; m_userRules = std::move(value); }

    /**
     * <p>One or more rules.</p>
     */
    inline UpdateRulesOfIpGroupRequest& WithUserRules(const Aws::Vector<IpRuleItem>& value) { SetUserRules(value); return *this;}

    /**
     * <p>One or more rules.</p>
     */
    inline UpdateRulesOfIpGroupRequest& WithUserRules(Aws::Vector<IpRuleItem>&& value) { SetUserRules(std::move(value)); return *this;}

    /**
     * <p>One or more rules.</p>
     */
    inline UpdateRulesOfIpGroupRequest& AddUserRules(const IpRuleItem& value) { m_userRulesHasBeenSet = true; m_userRules.push_back(value); return *this; }

    /**
     * <p>One or more rules.</p>
     */
    inline UpdateRulesOfIpGroupRequest& AddUserRules(IpRuleItem&& value) { m_userRulesHasBeenSet = true; m_userRules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::Vector<IpRuleItem> m_userRules;
    bool m_userRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
