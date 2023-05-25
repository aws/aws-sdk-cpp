/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/AccountAssignmentOperationStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

AccountAssignmentOperationStatus::AccountAssignmentOperationStatus() : 
    m_status(StatusValues::NOT_SET),
    m_statusHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetType(TargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_permissionSetArnHasBeenSet(false),
    m_principalType(PrincipalType::NOT_SET),
    m_principalTypeHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_createdDateHasBeenSet(false)
{
}

AccountAssignmentOperationStatus::AccountAssignmentOperationStatus(JsonView jsonValue) : 
    m_status(StatusValues::NOT_SET),
    m_statusHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetType(TargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_permissionSetArnHasBeenSet(false),
    m_principalType(PrincipalType::NOT_SET),
    m_principalTypeHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_createdDateHasBeenSet(false)
{
  *this = jsonValue;
}

AccountAssignmentOperationStatus& AccountAssignmentOperationStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusValuesMapper::GetStatusValuesForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

    m_requestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetId"))
  {
    m_targetId = jsonValue.GetString("TargetId");

    m_targetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetType"))
  {
    m_targetType = TargetTypeMapper::GetTargetTypeForName(jsonValue.GetString("TargetType"));

    m_targetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PermissionSetArn"))
  {
    m_permissionSetArn = jsonValue.GetString("PermissionSetArn");

    m_permissionSetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrincipalType"))
  {
    m_principalType = PrincipalTypeMapper::GetPrincipalTypeForName(jsonValue.GetString("PrincipalType"));

    m_principalTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrincipalId"))
  {
    m_principalId = jsonValue.GetString("PrincipalId");

    m_principalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountAssignmentOperationStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusValuesMapper::GetNameForStatusValues(m_status));
  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("RequestId", m_requestId);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_targetIdHasBeenSet)
  {
   payload.WithString("TargetId", m_targetId);

  }

  if(m_targetTypeHasBeenSet)
  {
   payload.WithString("TargetType", TargetTypeMapper::GetNameForTargetType(m_targetType));
  }

  if(m_permissionSetArnHasBeenSet)
  {
   payload.WithString("PermissionSetArn", m_permissionSetArn);

  }

  if(m_principalTypeHasBeenSet)
  {
   payload.WithString("PrincipalType", PrincipalTypeMapper::GetNameForPrincipalType(m_principalType));
  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("PrincipalId", m_principalId);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("CreatedDate", m_createdDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
