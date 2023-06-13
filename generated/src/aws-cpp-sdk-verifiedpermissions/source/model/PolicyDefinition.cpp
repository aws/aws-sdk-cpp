/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/PolicyDefinition.h>
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

PolicyDefinition::PolicyDefinition() : 
    m_staticHasBeenSet(false),
    m_templateLinkedHasBeenSet(false)
{
}

PolicyDefinition::PolicyDefinition(JsonView jsonValue) : 
    m_staticHasBeenSet(false),
    m_templateLinkedHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyDefinition& PolicyDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("static"))
  {
    m_static = jsonValue.GetObject("static");

    m_staticHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateLinked"))
  {
    m_templateLinked = jsonValue.GetObject("templateLinked");

    m_templateLinkedHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_staticHasBeenSet)
  {
   payload.WithObject("static", m_static.Jsonize());

  }

  if(m_templateLinkedHasBeenSet)
  {
   payload.WithObject("templateLinked", m_templateLinked.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
