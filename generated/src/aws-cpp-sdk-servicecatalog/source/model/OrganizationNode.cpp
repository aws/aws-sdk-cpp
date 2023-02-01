/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/OrganizationNode.h>
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

OrganizationNode::OrganizationNode() : 
    m_type(OrganizationNodeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

OrganizationNode::OrganizationNode(JsonView jsonValue) : 
    m_type(OrganizationNodeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationNode& OrganizationNode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = OrganizationNodeTypeMapper::GetOrganizationNodeTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationNode::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", OrganizationNodeTypeMapper::GetNameForOrganizationNodeType(m_type));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
