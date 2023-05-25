/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/ImpersonationRole.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

ImpersonationRole::ImpersonationRole() : 
    m_impersonationRoleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(ImpersonationRoleType::NOT_SET),
    m_typeHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateModifiedHasBeenSet(false)
{
}

ImpersonationRole::ImpersonationRole(JsonView jsonValue) : 
    m_impersonationRoleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(ImpersonationRoleType::NOT_SET),
    m_typeHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateModifiedHasBeenSet(false)
{
  *this = jsonValue;
}

ImpersonationRole& ImpersonationRole::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImpersonationRoleId"))
  {
    m_impersonationRoleId = jsonValue.GetString("ImpersonationRoleId");

    m_impersonationRoleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ImpersonationRoleTypeMapper::GetImpersonationRoleTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateCreated"))
  {
    m_dateCreated = jsonValue.GetDouble("DateCreated");

    m_dateCreatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateModified"))
  {
    m_dateModified = jsonValue.GetDouble("DateModified");

    m_dateModifiedHasBeenSet = true;
  }

  return *this;
}

JsonValue ImpersonationRole::Jsonize() const
{
  JsonValue payload;

  if(m_impersonationRoleIdHasBeenSet)
  {
   payload.WithString("ImpersonationRoleId", m_impersonationRoleId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ImpersonationRoleTypeMapper::GetNameForImpersonationRoleType(m_type));
  }

  if(m_dateCreatedHasBeenSet)
  {
   payload.WithDouble("DateCreated", m_dateCreated.SecondsWithMSPrecision());
  }

  if(m_dateModifiedHasBeenSet)
  {
   payload.WithDouble("DateModified", m_dateModified.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
