/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ReadAuthorizationCodeGrantDetails.h>
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

ReadAuthorizationCodeGrantDetails::ReadAuthorizationCodeGrantDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ReadAuthorizationCodeGrantDetails& ReadAuthorizationCodeGrantDetails::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("AuthorizationEndpoint"))
  {
    m_authorizationEndpoint = jsonValue.GetString("AuthorizationEndpoint");
    m_authorizationEndpointHasBeenSet = true;
  }
  return *this;
}

JsonValue ReadAuthorizationCodeGrantDetails::Jsonize() const
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

  if(m_authorizationEndpointHasBeenSet)
  {
   payload.WithString("AuthorizationEndpoint", m_authorizationEndpoint);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
