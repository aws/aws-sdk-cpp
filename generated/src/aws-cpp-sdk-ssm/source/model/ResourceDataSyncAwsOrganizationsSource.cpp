/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ResourceDataSyncAwsOrganizationsSource.h>
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

ResourceDataSyncAwsOrganizationsSource::ResourceDataSyncAwsOrganizationsSource() : 
    m_organizationSourceTypeHasBeenSet(false),
    m_organizationalUnitsHasBeenSet(false)
{
}

ResourceDataSyncAwsOrganizationsSource::ResourceDataSyncAwsOrganizationsSource(JsonView jsonValue) : 
    m_organizationSourceTypeHasBeenSet(false),
    m_organizationalUnitsHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDataSyncAwsOrganizationsSource& ResourceDataSyncAwsOrganizationsSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OrganizationSourceType"))
  {
    m_organizationSourceType = jsonValue.GetString("OrganizationSourceType");

    m_organizationSourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationalUnits"))
  {
    Aws::Utils::Array<JsonView> organizationalUnitsJsonList = jsonValue.GetArray("OrganizationalUnits");
    for(unsigned organizationalUnitsIndex = 0; organizationalUnitsIndex < organizationalUnitsJsonList.GetLength(); ++organizationalUnitsIndex)
    {
      m_organizationalUnits.push_back(organizationalUnitsJsonList[organizationalUnitsIndex].AsObject());
    }
    m_organizationalUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDataSyncAwsOrganizationsSource::Jsonize() const
{
  JsonValue payload;

  if(m_organizationSourceTypeHasBeenSet)
  {
   payload.WithString("OrganizationSourceType", m_organizationSourceType);

  }

  if(m_organizationalUnitsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> organizationalUnitsJsonList(m_organizationalUnits.size());
   for(unsigned organizationalUnitsIndex = 0; organizationalUnitsIndex < organizationalUnitsJsonList.GetLength(); ++organizationalUnitsIndex)
   {
     organizationalUnitsJsonList[organizationalUnitsIndex].AsObject(m_organizationalUnits[organizationalUnitsIndex].Jsonize());
   }
   payload.WithArray("OrganizationalUnits", std::move(organizationalUnitsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
