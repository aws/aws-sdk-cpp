/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/PermissionSetProvisioningStatus.h>
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

PermissionSetProvisioningStatus::PermissionSetProvisioningStatus() : 
    m_status(StatusValues::NOT_SET),
    m_statusHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_permissionSetArnHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_createdDateHasBeenSet(false)
{
}

PermissionSetProvisioningStatus::PermissionSetProvisioningStatus(JsonView jsonValue) : 
    m_status(StatusValues::NOT_SET),
    m_statusHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_permissionSetArnHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_createdDateHasBeenSet(false)
{
  *this = jsonValue;
}

PermissionSetProvisioningStatus& PermissionSetProvisioningStatus::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PermissionSetArn"))
  {
    m_permissionSetArn = jsonValue.GetString("PermissionSetArn");

    m_permissionSetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  return *this;
}

JsonValue PermissionSetProvisioningStatus::Jsonize() const
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

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_permissionSetArnHasBeenSet)
  {
   payload.WithString("PermissionSetArn", m_permissionSetArn);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

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
