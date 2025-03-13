/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NamedEntityRef.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

NamedEntityRef::NamedEntityRef(JsonView jsonValue)
{
  *this = jsonValue;
}

NamedEntityRef& NamedEntityRef::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NamedEntityName"))
  {
    m_namedEntityName = jsonValue.GetString("NamedEntityName");
    m_namedEntityNameHasBeenSet = true;
  }
  return *this;
}

JsonValue NamedEntityRef::Jsonize() const
{
  JsonValue payload;

  if(m_namedEntityNameHasBeenSet)
  {
   payload.WithString("NamedEntityName", m_namedEntityName);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
