/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ResourceTargetDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ResourceTargetDefinition::ResourceTargetDefinition() : 
    m_attribute(ResourceAttribute::NOT_SET),
    m_attributeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_requiresRecreation(RequiresRecreation::NOT_SET),
    m_requiresRecreationHasBeenSet(false)
{
}

ResourceTargetDefinition::ResourceTargetDefinition(JsonView jsonValue) : 
    m_attribute(ResourceAttribute::NOT_SET),
    m_attributeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_requiresRecreation(RequiresRecreation::NOT_SET),
    m_requiresRecreationHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceTargetDefinition& ResourceTargetDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attribute"))
  {
    m_attribute = ResourceAttributeMapper::GetResourceAttributeForName(jsonValue.GetString("Attribute"));

    m_attributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequiresRecreation"))
  {
    m_requiresRecreation = RequiresRecreationMapper::GetRequiresRecreationForName(jsonValue.GetString("RequiresRecreation"));

    m_requiresRecreationHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceTargetDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("Attribute", ResourceAttributeMapper::GetNameForResourceAttribute(m_attribute));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_requiresRecreationHasBeenSet)
  {
   payload.WithString("RequiresRecreation", RequiresRecreationMapper::GetNameForRequiresRecreation(m_requiresRecreation));
  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
