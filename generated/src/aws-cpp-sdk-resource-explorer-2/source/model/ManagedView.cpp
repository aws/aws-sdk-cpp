/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/ManagedView.h>
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

ManagedView::ManagedView(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedView& ManagedView::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Filters"))
  {
    m_filters = jsonValue.GetObject("Filters");
    m_filtersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludedProperties"))
  {
    Aws::Utils::Array<JsonView> includedPropertiesJsonList = jsonValue.GetArray("IncludedProperties");
    for(unsigned includedPropertiesIndex = 0; includedPropertiesIndex < includedPropertiesJsonList.GetLength(); ++includedPropertiesIndex)
    {
      m_includedProperties.push_back(includedPropertiesJsonList[includedPropertiesIndex].AsObject());
    }
    m_includedPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManagedViewArn"))
  {
    m_managedViewArn = jsonValue.GetString("ManagedViewArn");
    m_managedViewArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManagedViewName"))
  {
    m_managedViewName = jsonValue.GetString("ManagedViewName");
    m_managedViewNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");
    m_ownerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourcePolicy"))
  {
    m_resourcePolicy = jsonValue.GetString("ResourcePolicy");
    m_resourcePolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Scope"))
  {
    m_scope = jsonValue.GetString("Scope");
    m_scopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrustedService"))
  {
    m_trustedService = jsonValue.GetString("TrustedService");
    m_trustedServiceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");
    m_versionHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedView::Jsonize() const
{
  JsonValue payload;

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  if(m_includedPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includedPropertiesJsonList(m_includedProperties.size());
   for(unsigned includedPropertiesIndex = 0; includedPropertiesIndex < includedPropertiesJsonList.GetLength(); ++includedPropertiesIndex)
   {
     includedPropertiesJsonList[includedPropertiesIndex].AsObject(m_includedProperties[includedPropertiesIndex].Jsonize());
   }
   payload.WithArray("IncludedProperties", std::move(includedPropertiesJsonList));

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("LastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_managedViewArnHasBeenSet)
  {
   payload.WithString("ManagedViewArn", m_managedViewArn);

  }

  if(m_managedViewNameHasBeenSet)
  {
   payload.WithString("ManagedViewName", m_managedViewName);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_resourcePolicyHasBeenSet)
  {
   payload.WithString("ResourcePolicy", m_resourcePolicy);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", m_scope);

  }

  if(m_trustedServiceHasBeenSet)
  {
   payload.WithString("TrustedService", m_trustedService);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
