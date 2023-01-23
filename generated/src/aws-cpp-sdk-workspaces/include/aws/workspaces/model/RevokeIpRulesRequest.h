/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class RevokeIpRulesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API RevokeIpRulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeIpRules"; }

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
    inline RevokeIpRulesRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The identifier of the group.</p>
     */
    inline RevokeIpRulesRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the group.</p>
     */
    inline RevokeIpRulesRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The rules to remove from the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserRules() const{ return m_userRules; }

    /**
     * <p>The rules to remove from the group.</p>
     */
    inline bool UserRulesHasBeenSet() const { return m_userRulesHasBeenSet; }

    /**
     * <p>The rules to remove from the group.</p>
     */
    inline void SetUserRules(const Aws::Vector<Aws::String>& value) { m_userRulesHasBeenSet = true; m_userRules = value; }

    /**
     * <p>The rules to remove from the group.</p>
     */
    inline void SetUserRules(Aws::Vector<Aws::String>&& value) { m_userRulesHasBeenSet = true; m_userRules = std::move(value); }

    /**
     * <p>The rules to remove from the group.</p>
     */
    inline RevokeIpRulesRequest& WithUserRules(const Aws::Vector<Aws::String>& value) { SetUserRules(value); return *this;}

    /**
     * <p>The rules to remove from the group.</p>
     */
    inline RevokeIpRulesRequest& WithUserRules(Aws::Vector<Aws::String>&& value) { SetUserRules(std::move(value)); return *this;}

    /**
     * <p>The rules to remove from the group.</p>
     */
    inline RevokeIpRulesRequest& AddUserRules(const Aws::String& value) { m_userRulesHasBeenSet = true; m_userRules.push_back(value); return *this; }

    /**
     * <p>The rules to remove from the group.</p>
     */
    inline RevokeIpRulesRequest& AddUserRules(Aws::String&& value) { m_userRulesHasBeenSet = true; m_userRules.push_back(std::move(value)); return *this; }

    /**
     * <p>The rules to remove from the group.</p>
     */
    inline RevokeIpRulesRequest& AddUserRules(const char* value) { m_userRulesHasBeenSet = true; m_userRules.push_back(value); return *this; }

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_userRules;
    bool m_userRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
