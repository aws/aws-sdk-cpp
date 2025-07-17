/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/Dependency.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

Dependency::Dependency(JsonView jsonValue)
{
  *this = jsonValue;
}

Dependency& Dependency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = DependencyTypeMapper::GetDependencyTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Reference"))
  {
    m_reference = jsonValue.GetString("Reference");
    m_referenceHasBeenSet = true;
  }
  return *this;
}

JsonValue Dependency::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DependencyTypeMapper::GetNameForDependencyType(m_type));
  }

  if(m_referenceHasBeenSet)
  {
   payload.WithString("Reference", m_reference);

  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
