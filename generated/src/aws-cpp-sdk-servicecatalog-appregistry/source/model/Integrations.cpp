/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/Integrations.h>
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

Integrations::Integrations() : 
    m_resourceGroupHasBeenSet(false),
    m_applicationTagResourceGroupHasBeenSet(false)
{
}

Integrations::Integrations(JsonView jsonValue) : 
    m_resourceGroupHasBeenSet(false),
    m_applicationTagResourceGroupHasBeenSet(false)
{
  *this = jsonValue;
}

Integrations& Integrations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceGroup"))
  {
    m_resourceGroup = jsonValue.GetObject("resourceGroup");

    m_resourceGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationTagResourceGroup"))
  {
    m_applicationTagResourceGroup = jsonValue.GetObject("applicationTagResourceGroup");

    m_applicationTagResourceGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue Integrations::Jsonize() const
{
  JsonValue payload;

  if(m_resourceGroupHasBeenSet)
  {
   payload.WithObject("resourceGroup", m_resourceGroup.Jsonize());

  }

  if(m_applicationTagResourceGroupHasBeenSet)
  {
   payload.WithObject("applicationTagResourceGroup", m_applicationTagResourceGroup.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
