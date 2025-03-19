/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Identifier.h>
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

Identifier::Identifier(JsonView jsonValue)
{
  *this = jsonValue;
}

Identifier& Identifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Identity"))
  {
    m_identity = jsonValue.GetString("Identity");
    m_identityHasBeenSet = true;
  }
  return *this;
}

JsonValue Identifier::Jsonize() const
{
  JsonValue payload;

  if(m_identityHasBeenSet)
  {
   payload.WithString("Identity", m_identity);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
