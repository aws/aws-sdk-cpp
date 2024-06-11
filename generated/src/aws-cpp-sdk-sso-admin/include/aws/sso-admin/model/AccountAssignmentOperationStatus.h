/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/PrincipalType.h>
#include <aws/sso-admin/model/StatusValues.h>
#include <aws/sso-admin/model/TargetType.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>The status of the creation or deletion operation of an assignment that a
   * principal needs to access an account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/AccountAssignmentOperationStatus">AWS
   * API Reference</a></p>
   */
  class AccountAssignmentOperationStatus
  {
  public:
    AWS_SSOADMIN_API AccountAssignmentOperationStatus();
    AWS_SSOADMIN_API AccountAssignmentOperationStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API AccountAssignmentOperationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date that the permission set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline AccountAssignmentOperationStatus& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline AccountAssignmentOperationStatus& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that contains an error or exception in case of an operation
     * failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline AccountAssignmentOperationStatus& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline AccountAssignmentOperationStatus& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline AccountAssignmentOperationStatus& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the permission set. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetPermissionSetArn() const{ return m_permissionSetArn; }
    inline bool PermissionSetArnHasBeenSet() const { return m_permissionSetArnHasBeenSet; }
    inline void SetPermissionSetArn(const Aws::String& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = value; }
    inline void SetPermissionSetArn(Aws::String&& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = std::move(value); }
    inline void SetPermissionSetArn(const char* value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn.assign(value); }
    inline AccountAssignmentOperationStatus& WithPermissionSetArn(const Aws::String& value) { SetPermissionSetArn(value); return *this;}
    inline AccountAssignmentOperationStatus& WithPermissionSetArn(Aws::String&& value) { SetPermissionSetArn(std::move(value)); return *this;}
    inline AccountAssignmentOperationStatus& WithPermissionSetArn(const char* value) { SetPermissionSetArn(value); return *this;}
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
    inline AccountAssignmentOperationStatus& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}
    inline AccountAssignmentOperationStatus& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}
    inline AccountAssignmentOperationStatus& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity type for which the assignment will be created.</p>
     */
    inline const PrincipalType& GetPrincipalType() const{ return m_principalType; }
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
    inline void SetPrincipalType(const PrincipalType& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }
    inline void SetPrincipalType(PrincipalType&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }
    inline AccountAssignmentOperationStatus& WithPrincipalType(const PrincipalType& value) { SetPrincipalType(value); return *this;}
    inline AccountAssignmentOperationStatus& WithPrincipalType(PrincipalType&& value) { SetPrincipalType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for tracking the request operation that is generated by the
     * universally unique identifier (UUID) workflow.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline AccountAssignmentOperationStatus& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AccountAssignmentOperationStatus& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AccountAssignmentOperationStatus& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the permission set provisioning process.</p>
     */
    inline const StatusValues& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StatusValues& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StatusValues&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AccountAssignmentOperationStatus& WithStatus(const StatusValues& value) { SetStatus(value); return *this;}
    inline AccountAssignmentOperationStatus& WithStatus(StatusValues&& value) { SetStatus(std::move(value)); return *this;}
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
    inline AccountAssignmentOperationStatus& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}
    inline AccountAssignmentOperationStatus& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}
    inline AccountAssignmentOperationStatus& WithTargetId(const char* value) { SetTargetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity type for which the assignment will be created.</p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(const TargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline void SetTargetType(TargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }
    inline AccountAssignmentOperationStatus& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}
    inline AccountAssignmentOperationStatus& WithTargetType(TargetType&& value) { SetTargetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_permissionSetArn;
    bool m_permissionSetArnHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    PrincipalType m_principalType;
    bool m_principalTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    StatusValues m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    TargetType m_targetType;
    bool m_targetTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
