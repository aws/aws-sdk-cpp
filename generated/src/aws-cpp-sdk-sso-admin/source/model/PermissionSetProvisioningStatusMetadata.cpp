/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/PermissionSetProvisioningStatusMetadata.h>
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

PermissionSetProvisioningStatusMetadata::PermissionSetProvisioningStatusMetadata() : 
    m_status(StatusValues::NOT_SET),
    m_statusHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_createdDateHasBeenSet(false)
{
}

PermissionSetProvisioningStatusMetadata::PermissionSetProvisioningStatusMetadata(JsonView jsonValue) : 
    m_status(StatusValues::NOT_SET),
    m_statusHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_createdDateHasBeenSet(false)
{
  *this = jsonValue;
}

PermissionSetProvisioningStatusMetadata& PermissionSetProvisioningStatusMetadata::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  return *this;
}

JsonValue PermissionSetProvisioningStatusMetadata::Jsonize() const
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

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("CreatedDate", m_createdDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
