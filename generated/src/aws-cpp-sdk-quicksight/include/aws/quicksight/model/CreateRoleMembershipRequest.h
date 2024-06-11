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
  class CreateRoleMembershipRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API CreateRoleMembershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRoleMembership"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the group that you want to add to the role.</p>
     */
    inline const Aws::String& GetMemberName() const{ return m_memberName; }
    inline bool MemberNameHasBeenSet() const { return m_memberNameHasBeenSet; }
    inline void SetMemberName(const Aws::String& value) { m_memberNameHasBeenSet = true; m_memberName = value; }
    inline void SetMemberName(Aws::String&& value) { m_memberNameHasBeenSet = true; m_memberName = std::move(value); }
    inline void SetMemberName(const char* value) { m_memberNameHasBeenSet = true; m_memberName.assign(value); }
    inline CreateRoleMembershipRequest& WithMemberName(const Aws::String& value) { SetMemberName(value); return *this;}
    inline CreateRoleMembershipRequest& WithMemberName(Aws::String&& value) { SetMemberName(std::move(value)); return *this;}
    inline CreateRoleMembershipRequest& WithMemberName(const char* value) { SetMemberName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the Amazon Web Services account that you want to create a group
     * in. The Amazon Web Services account ID that you provide must be the same Amazon
     * Web Services account that contains your Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline CreateRoleMembershipRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline CreateRoleMembershipRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline CreateRoleMembershipRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace that the role belongs to.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline CreateRoleMembershipRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline CreateRoleMembershipRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline CreateRoleMembershipRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role that you want to add a group to.</p>
     */
    inline const Role& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Role& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Role&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline CreateRoleMembershipRequest& WithRole(const Role& value) { SetRole(value); return *this;}
    inline CreateRoleMembershipRequest& WithRole(Role&& value) { SetRole(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_memberName;
    bool m_memberNameHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Role m_role;
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
