/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ReadClientCredentialsGrantDetails.h>
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

ReadClientCredentialsGrantDetails::ReadClientCredentialsGrantDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ReadClientCredentialsGrantDetails& ReadClientCredentialsGrantDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClientId"))
  {
    m_clientId = jsonValue.GetString("ClientId");
    m_clientIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TokenEndpoint"))
  {
    m_tokenEndpoint = jsonValue.GetString("TokenEndpoint");
    m_tokenEndpointHasBeenSet = true;
  }
  return *this;
}

JsonValue ReadClientCredentialsGrantDetails::Jsonize() const
{
  JsonValue payload;

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_tokenEndpointHasBeenSet)
  {
   payload.WithString("TokenEndpoint", m_tokenEndpoint);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
