/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BasicAuthConnectionMetadata.h>
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

BasicAuthConnectionMetadata::BasicAuthConnectionMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

BasicAuthConnectionMetadata& BasicAuthConnectionMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BaseEndpoint"))
  {
    m_baseEndpoint = jsonValue.GetString("BaseEndpoint");
    m_baseEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");
    m_usernameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Password"))
  {
    m_password = jsonValue.GetString("Password");
    m_passwordHasBeenSet = true;
  }
  return *this;
}

JsonValue BasicAuthConnectionMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_baseEndpointHasBeenSet)
  {
   payload.WithString("BaseEndpoint", m_baseEndpoint);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
