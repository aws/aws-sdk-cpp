/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ProvisionedResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Proton
{
namespace Model
{

ProvisionedResource::ProvisionedResource() : 
    m_identifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_provisioningEngine(ProvisionedResourceEngine::NOT_SET),
    m_provisioningEngineHasBeenSet(false)
{
}

ProvisionedResource::ProvisionedResource(JsonView jsonValue) : 
    m_identifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_provisioningEngine(ProvisionedResourceEngine::NOT_SET),
    m_provisioningEngineHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisionedResource& ProvisionedResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetString("identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("provisioningEngine"))
  {
    m_provisioningEngine = ProvisionedResourceEngineMapper::GetProvisionedResourceEngineForName(jsonValue.GetString("provisioningEngine"));

    m_provisioningEngineHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisionedResource::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_provisioningEngineHasBeenSet)
  {
   payload.WithString("provisioningEngine", ProvisionedResourceEngineMapper::GetNameForProvisionedResourceEngine(m_provisioningEngine));
  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
