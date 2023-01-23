/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/PermissionSet.h>
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

PermissionSet::PermissionSet() : 
    m_nameHasBeenSet(false),
    m_permissionSetArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_sessionDurationHasBeenSet(false),
    m_relayStateHasBeenSet(false)
{
}

PermissionSet::PermissionSet(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_permissionSetArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_sessionDurationHasBeenSet(false),
    m_relayStateHasBeenSet(false)
{
  *this = jsonValue;
}

PermissionSet& PermissionSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PermissionSetArn"))
  {
    m_permissionSetArn = jsonValue.GetString("PermissionSetArn");

    m_permissionSetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SessionDuration"))
  {
    m_sessionDuration = jsonValue.GetString("SessionDuration");

    m_sessionDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelayState"))
  {
    m_relayState = jsonValue.GetString("RelayState");

    m_relayStateHasBeenSet = true;
  }

  return *this;
}

JsonValue PermissionSet::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_permissionSetArnHasBeenSet)
  {
   payload.WithString("PermissionSetArn", m_permissionSetArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("CreatedDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_sessionDurationHasBeenSet)
  {
   payload.WithString("SessionDuration", m_sessionDuration);

  }

  if(m_relayStateHasBeenSet)
  {
   payload.WithString("RelayState", m_relayState);

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
