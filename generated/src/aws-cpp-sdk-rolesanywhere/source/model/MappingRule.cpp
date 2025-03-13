/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/MappingRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

MappingRule::MappingRule(JsonView jsonValue)
{
  *this = jsonValue;
}

MappingRule& MappingRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("specifier"))
  {
    m_specifier = jsonValue.GetString("specifier");
    m_specifierHasBeenSet = true;
  }
  return *this;
}

JsonValue MappingRule::Jsonize() const
{
  JsonValue payload;

  if(m_specifierHasBeenSet)
  {
   payload.WithString("specifier", m_specifier);

  }

  return payload;
}

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
