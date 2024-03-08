/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/model/Role.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class DescribeRoleCustomPermissionRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DescribeRoleCustomPermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRoleCustomPermission"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the role whose permissions you want described.</p>
     */
    inline const Role& GetRole() const{ return m_role; }

    /**
     * <p>The name of the role whose permissions you want described.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The name of the role whose permissions you want described.</p>
     */
    inline void SetRole(const Role& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The name of the role whose permissions you want described.</p>
     */
    inline void SetRole(Role&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The name of the role whose permissions you want described.</p>
     */
    inline DescribeRoleCustomPermissionRequest& WithRole(const Role& value) { SetRole(value); return *this;}

    /**
     * <p>The name of the role whose permissions you want described.</p>
     */
    inline DescribeRoleCustomPermissionRequest& WithRole(Role&& value) { SetRole(std::move(value)); return *this;}


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
    inline DescribeRoleCustomPermissionRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that you want to create a group
     * in. The Amazon Web Services account ID that you provide must be the same Amazon
     * Web Services account that contains your Amazon QuickSight account.</p>
     */
    inline DescribeRoleCustomPermissionRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that you want to create a group
     * in. The Amazon Web Services account ID that you provide must be the same Amazon
     * Web Services account that contains your Amazon QuickSight account.</p>
     */
    inline DescribeRoleCustomPermissionRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The namespace that contains the role.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace that contains the role.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace that contains the role.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace that contains the role.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace that contains the role.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace that contains the role.</p>
     */
    inline DescribeRoleCustomPermissionRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace that contains the role.</p>
     */
    inline DescribeRoleCustomPermissionRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace that contains the role.</p>
     */
    inline DescribeRoleCustomPermissionRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}

  private:

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
