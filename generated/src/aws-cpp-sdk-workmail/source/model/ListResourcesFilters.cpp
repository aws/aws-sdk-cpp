/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/ListResourcesFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

ListResourcesFilters::ListResourcesFilters() : 
    m_namePrefixHasBeenSet(false),
    m_primaryEmailPrefixHasBeenSet(false),
    m_state(EntityState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

ListResourcesFilters::ListResourcesFilters(JsonView jsonValue) : 
    m_namePrefixHasBeenSet(false),
    m_primaryEmailPrefixHasBeenSet(false),
    m_state(EntityState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

ListResourcesFilters& ListResourcesFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NamePrefix"))
  {
    m_namePrefix = jsonValue.GetString("NamePrefix");

    m_namePrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryEmailPrefix"))
  {
    m_primaryEmailPrefix = jsonValue.GetString("PrimaryEmailPrefix");

    m_primaryEmailPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = EntityStateMapper::GetEntityStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue ListResourcesFilters::Jsonize() const
{
  JsonValue payload;

  if(m_namePrefixHasBeenSet)
  {
   payload.WithString("NamePrefix", m_namePrefix);

  }

  if(m_primaryEmailPrefixHasBeenSet)
  {
   payload.WithString("PrimaryEmailPrefix", m_primaryEmailPrefix);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", EntityStateMapper::GetNameForEntityState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
