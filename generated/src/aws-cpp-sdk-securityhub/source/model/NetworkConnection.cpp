/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/NetworkConnection.h>
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

NetworkConnection::NetworkConnection(JsonView jsonValue)
{
  *this = jsonValue;
}

NetworkConnection& NetworkConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Direction"))
  {
    m_direction = ConnectionDirectionMapper::GetConnectionDirectionForName(jsonValue.GetString("Direction"));
    m_directionHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkConnection::Jsonize() const
{
  JsonValue payload;

  if(m_directionHasBeenSet)
  {
   payload.WithString("Direction", ConnectionDirectionMapper::GetNameForConnectionDirection(m_direction));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
