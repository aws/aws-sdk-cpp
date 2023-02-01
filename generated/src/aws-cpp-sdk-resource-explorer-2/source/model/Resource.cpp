/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/Resource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

Resource::Resource() : 
    m_arnHasBeenSet(false),
    m_lastReportedAtHasBeenSet(false),
    m_owningAccountIdHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_serviceHasBeenSet(false)
{
}

Resource::Resource(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_lastReportedAtHasBeenSet(false),
    m_owningAccountIdHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_serviceHasBeenSet(false)
{
  *this = jsonValue;
}

Resource& Resource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastReportedAt"))
  {
    m_lastReportedAt = jsonValue.GetString("LastReportedAt");

    m_lastReportedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwningAccountId"))
  {
    m_owningAccountId = jsonValue.GetString("OwningAccountId");

    m_owningAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Properties"))
  {
    Aws::Utils::Array<JsonView> propertiesJsonList = jsonValue.GetArray("Properties");
    for(unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex)
    {
      m_properties.push_back(propertiesJsonList[propertiesIndex].AsObject());
    }
    m_propertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Service"))
  {
    m_service = jsonValue.GetString("Service");

    m_serviceHasBeenSet = true;
  }

  return *this;
}

JsonValue Resource::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_lastReportedAtHasBeenSet)
  {
   payload.WithString("LastReportedAt", m_lastReportedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_owningAccountIdHasBeenSet)
  {
   payload.WithString("OwningAccountId", m_owningAccountId);

  }

  if(m_propertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propertiesJsonList(m_properties.size());
   for(unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex)
   {
     propertiesJsonList[propertiesIndex].AsObject(m_properties[propertiesIndex].Jsonize());
   }
   payload.WithArray("Properties", std::move(propertiesJsonList));

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_serviceHasBeenSet)
  {
   payload.WithString("Service", m_service);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
