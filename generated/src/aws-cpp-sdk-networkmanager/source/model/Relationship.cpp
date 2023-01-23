/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/Relationship.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

Relationship::Relationship() : 
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false)
{
}

Relationship::Relationship(JsonView jsonValue) : 
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false)
{
  *this = jsonValue;
}

Relationship& Relationship::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("From"))
  {
    m_from = jsonValue.GetString("From");

    m_fromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("To"))
  {
    m_to = jsonValue.GetString("To");

    m_toHasBeenSet = true;
  }

  return *this;
}

JsonValue Relationship::Jsonize() const
{
  JsonValue payload;

  if(m_fromHasBeenSet)
  {
   payload.WithString("From", m_from);

  }

  if(m_toHasBeenSet)
  {
   payload.WithString("To", m_to);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
