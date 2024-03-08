/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/Role.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateRoleCustomPermissionRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateRoleCustomPermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRoleCustomPermission"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the custom permission that you want to update the role with.</p>
     */
    inline const Aws::String& GetCustomPermissionsName() const{ return m_customPermissionsName; }

    /**
     * <p>The name of the custom permission that you want to update the role with.</p>
     */
    inline bool CustomPermissionsNameHasBeenSet() const { return m_customPermissionsNameHasBeenSet; }

    /**
     * <p>The name of the custom permission that you want to update the role with.</p>
     */
    inline void SetCustomPermissionsName(const Aws::String& value) { m_customPermissionsNameHasBeenSet = true; m_customPermissionsName = value; }

    /**
     * <p>The name of the custom permission that you want to update the role with.</p>
     */
    inline void SetCustomPermissionsName(Aws::String&& value) { m_customPermissionsNameHasBeenSet = true; m_customPermissionsName = std::move(value); }

    /**
     * <p>The name of the custom permission that you want to update the role with.</p>
     */
    inline void SetCustomPermissionsName(const char* value) { m_customPermissionsNameHasBeenSet = true; m_customPermissionsName.assign(value); }

    /**
     * <p>The name of the custom permission that you want to update the role with.</p>
     */
    inline UpdateRoleCustomPermissionRequest& WithCustomPermissionsName(const Aws::String& value) { SetCustomPermissionsName(value); return *this;}

    /**
     * <p>The name of the custom permission that you want to update the role with.</p>
     */
    inline UpdateRoleCustomPermissionRequest& WithCustomPermissionsName(Aws::String&& value) { SetCustomPermissionsName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom permission that you want to update the role with.</p>
     */
    inline UpdateRoleCustomPermissionRequest& WithCustomPermissionsName(const char* value) { SetCustomPermissionsName(value); return *this;}


    /**
     * <p>The name of role tht you want to update.</p>
     */
    inline const Role& GetRole() const{ return m_role; }

    /**
     * <p>The name of role tht you want to update.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The name of role tht you want to update.</p>
     */
    inline void SetRole(const Role& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The name of role tht you want to update.</p>
     */
    inline void SetRole(Role&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The name of role tht you want to update.</p>
     */
    inline UpdateRoleCustomPermissionRequest& WithRole(const Role& value) { SetRole(value); return *this;}

    /**
     * <p>The name of role tht you want to update.</p>
     */
    inline UpdateRoleCustomPermissionRequest& WithRole(Role&& value) { SetRole(std::move(value)); return *this;}


    /**
     * <p>The ID for the Amazon Web Services account that you want to create a group
     * in. The Amazon Web Services account ID that you provide must be the same Amazon
     * Web Services account that contains your Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the Amazon Web Services account that you want to create a group
     * in. The Amazon Web Services account ID that you provide must be the same Amazon
     * Web Services account that contains your Amazon QuickSight account.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID for the Amazon Web Services account that you want to create a group
     * in. The Amazon Web Services account ID that you provide must be the same Amazon
     * Web Services account that contains your Amazon QuickSight account.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID for the Amazon Web Services account that you want to create a group
     * in. The Amazon Web Services account ID that you provide must be the same Amazon
     * Web Services account that contains your Amazon QuickSight account.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the Amazon Web Services account that you want to create a group
     * in. The Amazon Web Services account ID that you provide must be the same Amazon
     * Web Services account that contains your Amazon QuickSight account.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the Amazon Web Services account that you want to create a group
     * in. The Amazon Web Services account ID that you provide must be the same Amazon
     * Web Services account that contains your Amazon QuickSight account.</p>
     */
    inline UpdateRoleCustomPermissionRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that you want to create a group
     * in. The Amazon Web Services account ID that you provide must be the same Amazon
     * Web Services account that contains your Amazon QuickSight account.</p>
     */
    inline UpdateRoleCustomPermissionRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that you want to create a group
     * in. The Amazon Web Services account ID that you provide must be the same Amazon
     * Web Services account that contains your Amazon QuickSight account.</p>
     */
    inline UpdateRoleCustomPermissionRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The namespace that contains the role that you want to update.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace that contains the role that you want to update.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace that contains the role that you want to update.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace that contains the role that you want to update.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace that contains the role that you want to update.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace that contains the role that you want to update.</p>
     */
    inline UpdateRoleCustomPermissionRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace that contains the role that you want to update.</p>
     */
    inline UpdateRoleCustomPermissionRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace that contains the role that you want to update.</p>
     */
    inline UpdateRoleCustomPermissionRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}

  private:

    Aws::String m_customPermissionsName;
    bool m_customPermissionsNameHasBeenSet = false;

    Role m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
