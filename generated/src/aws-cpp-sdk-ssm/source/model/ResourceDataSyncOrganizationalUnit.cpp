/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ResourceDataSyncOrganizationalUnit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ResourceDataSyncOrganizationalUnit::ResourceDataSyncOrganizationalUnit() : 
    m_organizationalUnitIdHasBeenSet(false)
{
}

ResourceDataSyncOrganizationalUnit::ResourceDataSyncOrganizationalUnit(JsonView jsonValue) : 
    m_organizationalUnitIdHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDataSyncOrganizationalUnit& ResourceDataSyncOrganizationalUnit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OrganizationalUnitId"))
  {
    m_organizationalUnitId = jsonValue.GetString("OrganizationalUnitId");

    m_organizationalUnitIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDataSyncOrganizationalUnit::Jsonize() const
{
  JsonValue payload;

  if(m_organizationalUnitIdHasBeenSet)
  {
   payload.WithString("OrganizationalUnitId", m_organizationalUnitId);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
