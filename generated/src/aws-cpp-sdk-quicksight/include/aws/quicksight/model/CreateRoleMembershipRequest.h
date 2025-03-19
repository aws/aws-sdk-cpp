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
    AWS_QUICKSIGHT_API CreateRoleMembershipRequest() = default;

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
    inline const Aws::String& GetMemberName() const { return m_memberName; }
    inline bool MemberNameHasBeenSet() const { return m_memberNameHasBeenSet; }
    template<typename MemberNameT = Aws::String>
    void SetMemberName(MemberNameT&& value) { m_memberNameHasBeenSet = true; m_memberName = std::forward<MemberNameT>(value); }
    template<typename MemberNameT = Aws::String>
    CreateRoleMembershipRequest& WithMemberName(MemberNameT&& value) { SetMemberName(std::forward<MemberNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the Amazon Web Services account that you want to create a group
     * in. The Amazon Web Services account ID that you provide must be the same Amazon
     * Web Services account that contains your Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    CreateRoleMembershipRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace that the role belongs to.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    CreateRoleMembershipRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role that you want to add a group to.</p>
     */
    inline Role GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(Role value) { m_roleHasBeenSet = true; m_role = value; }
    inline CreateRoleMembershipRequest& WithRole(Role value) { SetRole(value); return *this;}
    ///@}
  private:

    Aws::String m_memberName;
    bool m_memberNameHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Role m_role{Role::NOT_SET};
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
