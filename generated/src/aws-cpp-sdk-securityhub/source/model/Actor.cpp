/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Actor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Actor::Actor(JsonView jsonValue)
{
  *this = jsonValue;
}

Actor& Actor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("User"))
  {
    m_user = jsonValue.GetObject("User");
    m_userHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Session"))
  {
    m_session = jsonValue.GetObject("Session");
    m_sessionHasBeenSet = true;
  }
  return *this;
}

JsonValue Actor::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_userHasBeenSet)
  {
   payload.WithObject("User", m_user.Jsonize());

  }

  if(m_sessionHasBeenSet)
  {
   payload.WithObject("Session", m_session.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
