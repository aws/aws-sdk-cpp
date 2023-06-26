/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/ListGroupResourcesItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

ListGroupResourcesItem::ListGroupResourcesItem() : 
    m_identifierHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

ListGroupResourcesItem::ListGroupResourcesItem(JsonView jsonValue) : 
    m_identifierHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ListGroupResourcesItem& ListGroupResourcesItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetObject("Identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ListGroupResourcesItem::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithObject("Identifier", m_identifier.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
