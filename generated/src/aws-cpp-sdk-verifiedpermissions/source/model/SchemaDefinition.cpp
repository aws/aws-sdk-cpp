/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/SchemaDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

SchemaDefinition::SchemaDefinition() : 
    m_cedarJsonHasBeenSet(false)
{
}

SchemaDefinition::SchemaDefinition(JsonView jsonValue) : 
    m_cedarJsonHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaDefinition& SchemaDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cedarJson"))
  {
    m_cedarJson = jsonValue.GetString("cedarJson");

    m_cedarJsonHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_cedarJsonHasBeenSet)
  {
   payload.WithString("cedarJson", m_cedarJson);

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
