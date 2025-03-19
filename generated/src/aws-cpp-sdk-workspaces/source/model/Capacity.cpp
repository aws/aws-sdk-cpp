/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/Capacity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

Capacity::Capacity(JsonView jsonValue)
{
  *this = jsonValue;
}

Capacity& Capacity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DesiredUserSessions"))
  {
    m_desiredUserSessions = jsonValue.GetInteger("DesiredUserSessions");
    m_desiredUserSessionsHasBeenSet = true;
  }
  return *this;
}

JsonValue Capacity::Jsonize() const
{
  JsonValue payload;

  if(m_desiredUserSessionsHasBeenSet)
  {
   payload.WithInteger("DesiredUserSessions", m_desiredUserSessions);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
