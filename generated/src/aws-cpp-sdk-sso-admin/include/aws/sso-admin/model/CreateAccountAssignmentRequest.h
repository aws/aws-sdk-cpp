/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/PrincipalType.h>
#include <aws/sso-admin/model/TargetType.h>
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
    AWS_SSOADMIN_API CreateAccountAssignmentRequest();

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
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }
    inline CreateAccountAssignmentRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline CreateAccountAssignmentRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline CreateAccountAssignmentRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the permission set that the admin wants to grant the principal
     * access to.</p>
     */
    inline const Aws::String& GetPermissionSetArn() const{ return m_permissionSetArn; }
    inline bool PermissionSetArnHasBeenSet() const { return m_permissionSetArnHasBeenSet; }
    inline void SetPermissionSetArn(const Aws::String& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = value; }
    inline void SetPermissionSetArn(Aws::String&& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = std::move(value); }
    inline void SetPermissionSetArn(const char* value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn.assign(value); }
    inline CreateAccountAssignmentRequest& WithPermissionSetArn(const Aws::String& value) { SetPermissionSetArn(value); return *this;}
    inline CreateAccountAssignmentRequest& WithPermissionSetArn(Aws::String&& value) { SetPermissionSetArn(std::move(value)); return *this;}
    inline CreateAccountAssignmentRequest& WithPermissionSetArn(const char* value) { SetPermissionSetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for an object in IAM Identity Center, such as a user or group.
     * PrincipalIds are GUIDs (For example, f81d4fae-7dec-11d0-a765-00a0c91e6bf6). For
     * more information about PrincipalIds in IAM Identity Center, see the <a
     * href="/singlesignon/latest/IdentityStoreAPIReference/welcome.html">IAM Identity
     * Center Identity Store API Reference</a>.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }
    inline CreateAccountAssignmentRequest& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}
    inline CreateAccountAssignmentRequest& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}
    inline CreateAccountAssignmentRequest& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity type for which the assignment will be created.</p>
     */
    inline const PrincipalType& GetPrincipalType() const{ return m_principalType; }
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
    inline void SetPrincipalType(const PrincipalType& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }
    inline void SetPrincipalType(PrincipalType&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }
    inline CreateAccountAssignmentRequest& WithPrincipalType(const PrincipalType& value) { SetPrincipalType(value); return *this;}
    inline CreateAccountAssignmentRequest& WithPrincipalType(PrincipalType&& value) { SetPrincipalType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>TargetID is an Amazon Web Services account identifier, (For example,
     * 123456789012).</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }
    inline CreateAccountAssignmentRequest& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}
    inline CreateAccountAssignmentRequest& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}
    inline CreateAccountAssignmentRequest& WithTargetId(const char* value) { SetTargetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity type for which the assignment will be created.</p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(const TargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline void SetTargetType(TargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }
    inline CreateAccountAssignmentRequest& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}
    inline CreateAccountAssignmentRequest& WithTargetType(TargetType&& value) { SetTargetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_permissionSetArn;
    bool m_permissionSetArnHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    PrincipalType m_principalType;
    bool m_principalTypeHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    TargetType m_targetType;
    bool m_targetTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
