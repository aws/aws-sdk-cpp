/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/ResourceIntegrations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRegistry
{
namespace Model
{

ResourceIntegrations::ResourceIntegrations() : 
    m_resourceGroupHasBeenSet(false)
{
}

ResourceIntegrations::ResourceIntegrations(JsonView jsonValue) : 
    m_resourceGroupHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceIntegrations& ResourceIntegrations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceGroup"))
  {
    m_resourceGroup = jsonValue.GetObject("resourceGroup");

    m_resourceGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceIntegrations::Jsonize() const
{
  JsonValue payload;

  if(m_resourceGroupHasBeenSet)
  {
   payload.WithObject("resourceGroup", m_resourceGroup.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
