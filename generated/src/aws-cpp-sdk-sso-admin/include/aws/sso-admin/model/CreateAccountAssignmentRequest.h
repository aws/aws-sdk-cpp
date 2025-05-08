/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/TargetType.h>
#include <aws/sso-admin/model/PrincipalType.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class CreateAccountAssignmentRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API CreateAccountAssignmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccountAssignment"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    CreateAccountAssignmentRequest& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>TargetID is an Amazon Web Services account identifier, (For example,
     * 123456789012).</p>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    CreateAccountAssignmentRequest& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity type for which the assignment will be created.</p>
     */
    inline TargetType GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(TargetType value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline CreateAccountAssignmentRequest& WithTargetType(TargetType value) { SetTargetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the permission set that the admin wants to grant the principal
     * access to.</p>
     */
    inline const Aws::String& GetPermissionSetArn() const { return m_permissionSetArn; }
    inline bool PermissionSetArnHasBeenSet() const { return m_permissionSetArnHasBeenSet; }
    template<typename PermissionSetArnT = Aws::String>
    void SetPermissionSetArn(PermissionSetArnT&& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = std::forward<PermissionSetArnT>(value); }
    template<typename PermissionSetArnT = Aws::String>
    CreateAccountAssignmentRequest& WithPermissionSetArn(PermissionSetArnT&& value) { SetPermissionSetArn(std::forward<PermissionSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity type for which the assignment will be created.</p>
     */
    inline PrincipalType GetPrincipalType() const { return m_principalType; }
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
    inline void SetPrincipalType(PrincipalType value) { m_principalTypeHasBeenSet = true; m_principalType = value; }
    inline CreateAccountAssignmentRequest& WithPrincipalType(PrincipalType value) { SetPrincipalType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for an object in IAM Identity Center, such as a user or group.
     * PrincipalIds are GUIDs (For example, f81d4fae-7dec-11d0-a765-00a0c91e6bf6). For
     * more information about PrincipalIds in IAM Identity Center, see the <a
     * href="/singlesignon/latest/IdentityStoreAPIReference/welcome.html">IAM Identity
     * Center Identity Store API Reference</a>.</p>
     */
    inline const Aws::String& GetPrincipalId() const { return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    template<typename PrincipalIdT = Aws::String>
    void SetPrincipalId(PrincipalIdT&& value) { m_principalIdHasBeenSet = true; m_principalId = std::forward<PrincipalIdT>(value); }
    template<typename PrincipalIdT = Aws::String>
    CreateAccountAssignmentRequest& WithPrincipalId(PrincipalIdT&& value) { SetPrincipalId(std::forward<PrincipalIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    TargetType m_targetType{TargetType::NOT_SET};
    bool m_targetTypeHasBeenSet = false;

    Aws::String m_permissionSetArn;
    bool m_permissionSetArnHasBeenSet = false;

    PrincipalType m_principalType{PrincipalType::NOT_SET};
    bool m_principalTypeHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
