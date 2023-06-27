/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/OrderedResourceDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

OrderedResourceDefinition::OrderedResourceDefinition() : 
    m_commitmentConfigurationHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_type(NetworkResourceDefinitionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

OrderedResourceDefinition::OrderedResourceDefinition(JsonView jsonValue) : 
    m_commitmentConfigurationHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_type(NetworkResourceDefinitionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

OrderedResourceDefinition& OrderedResourceDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("commitmentConfiguration"))
  {
    m_commitmentConfiguration = jsonValue.GetObject("commitmentConfiguration");

    m_commitmentConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = NetworkResourceDefinitionTypeMapper::GetNetworkResourceDefinitionTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue OrderedResourceDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_commitmentConfigurationHasBeenSet)
  {
   payload.WithObject("commitmentConfiguration", m_commitmentConfiguration.Jsonize());

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", NetworkResourceDefinitionTypeMapper::GetNameForNetworkResourceDefinitionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
