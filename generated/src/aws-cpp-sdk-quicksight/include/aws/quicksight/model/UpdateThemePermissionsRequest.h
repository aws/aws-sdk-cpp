/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourcePermission.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateThemePermissionsRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateThemePermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateThemePermissions"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the theme.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme.</p>
     */
    inline UpdateThemePermissionsRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme.</p>
     */
    inline UpdateThemePermissionsRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme.</p>
     */
    inline UpdateThemePermissionsRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID for the theme.</p>
     */
    inline const Aws::String& GetThemeId() const{ return m_themeId; }

    /**
     * <p>The ID for the theme.</p>
     */
    inline bool ThemeIdHasBeenSet() const { return m_themeIdHasBeenSet; }

    /**
     * <p>The ID for the theme.</p>
     */
    inline void SetThemeId(const Aws::String& value) { m_themeIdHasBeenSet = true; m_themeId = value; }

    /**
     * <p>The ID for the theme.</p>
     */
    inline void SetThemeId(Aws::String&& value) { m_themeIdHasBeenSet = true; m_themeId = std::move(value); }

    /**
     * <p>The ID for the theme.</p>
     */
    inline void SetThemeId(const char* value) { m_themeIdHasBeenSet = true; m_themeId.assign(value); }

    /**
     * <p>The ID for the theme.</p>
     */
    inline UpdateThemePermissionsRequest& WithThemeId(const Aws::String& value) { SetThemeId(value); return *this;}

    /**
     * <p>The ID for the theme.</p>
     */
    inline UpdateThemePermissionsRequest& WithThemeId(Aws::String&& value) { SetThemeId(std::move(value)); return *this;}

    /**
     * <p>The ID for the theme.</p>
     */
    inline UpdateThemePermissionsRequest& WithThemeId(const char* value) { SetThemeId(value); return *this;}


    /**
     * <p>A list of resource permissions to be granted for the theme.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetGrantPermissions() const{ return m_grantPermissions; }

    /**
     * <p>A list of resource permissions to be granted for the theme.</p>
     */
    inline bool GrantPermissionsHasBeenSet() const { return m_grantPermissionsHasBeenSet; }

    /**
     * <p>A list of resource permissions to be granted for the theme.</p>
     */
    inline void SetGrantPermissions(const Aws::Vector<ResourcePermission>& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions = value; }

    /**
     * <p>A list of resource permissions to be granted for the theme.</p>
     */
    inline void SetGrantPermissions(Aws::Vector<ResourcePermission>&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions = std::move(value); }

    /**
     * <p>A list of resource permissions to be granted for the theme.</p>
     */
    inline UpdateThemePermissionsRequest& WithGrantPermissions(const Aws::Vector<ResourcePermission>& value) { SetGrantPermissions(value); return *this;}

    /**
     * <p>A list of resource permissions to be granted for the theme.</p>
     */
    inline UpdateThemePermissionsRequest& WithGrantPermissions(Aws::Vector<ResourcePermission>&& value) { SetGrantPermissions(std::move(value)); return *this;}

    /**
     * <p>A list of resource permissions to be granted for the theme.</p>
     */
    inline UpdateThemePermissionsRequest& AddGrantPermissions(const ResourcePermission& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions.push_back(value); return *this; }

    /**
     * <p>A list of resource permissions to be granted for the theme.</p>
     */
    inline UpdateThemePermissionsRequest& AddGrantPermissions(ResourcePermission&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of resource permissions to be revoked from the theme.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetRevokePermissions() const{ return m_revokePermissions; }

    /**
     * <p>A list of resource permissions to be revoked from the theme.</p>
     */
    inline bool RevokePermissionsHasBeenSet() const { return m_revokePermissionsHasBeenSet; }

    /**
     * <p>A list of resource permissions to be revoked from the theme.</p>
     */
    inline void SetRevokePermissions(const Aws::Vector<ResourcePermission>& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions = value; }

    /**
     * <p>A list of resource permissions to be revoked from the theme.</p>
     */
    inline void SetRevokePermissions(Aws::Vector<ResourcePermission>&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions = std::move(value); }

    /**
     * <p>A list of resource permissions to be revoked from the theme.</p>
     */
    inline UpdateThemePermissionsRequest& WithRevokePermissions(const Aws::Vector<ResourcePermission>& value) { SetRevokePermissions(value); return *this;}

    /**
     * <p>A list of resource permissions to be revoked from the theme.</p>
     */
    inline UpdateThemePermissionsRequest& WithRevokePermissions(Aws::Vector<ResourcePermission>&& value) { SetRevokePermissions(std::move(value)); return *this;}

    /**
     * <p>A list of resource permissions to be revoked from the theme.</p>
     */
    inline UpdateThemePermissionsRequest& AddRevokePermissions(const ResourcePermission& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions.push_back(value); return *this; }

    /**
     * <p>A list of resource permissions to be revoked from the theme.</p>
     */
    inline UpdateThemePermissionsRequest& AddRevokePermissions(ResourcePermission&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_themeId;
    bool m_themeIdHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_grantPermissions;
    bool m_grantPermissionsHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_revokePermissions;
    bool m_revokePermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
