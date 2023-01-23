/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/RedactedEwsAvailabilityProvider.h>
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

RedactedEwsAvailabilityProvider::RedactedEwsAvailabilityProvider() : 
    m_ewsEndpointHasBeenSet(false),
    m_ewsUsernameHasBeenSet(false)
{
}

RedactedEwsAvailabilityProvider::RedactedEwsAvailabilityProvider(JsonView jsonValue) : 
    m_ewsEndpointHasBeenSet(false),
    m_ewsUsernameHasBeenSet(false)
{
  *this = jsonValue;
}

RedactedEwsAvailabilityProvider& RedactedEwsAvailabilityProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EwsEndpoint"))
  {
    m_ewsEndpoint = jsonValue.GetString("EwsEndpoint");

    m_ewsEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EwsUsername"))
  {
    m_ewsUsername = jsonValue.GetString("EwsUsername");

    m_ewsUsernameHasBeenSet = true;
  }

  return *this;
}

JsonValue RedactedEwsAvailabilityProvider::Jsonize() const
{
  JsonValue payload;

  if(m_ewsEndpointHasBeenSet)
  {
   payload.WithString("EwsEndpoint", m_ewsEndpoint);

  }

  if(m_ewsUsernameHasBeenSet)
  {
   payload.WithString("EwsUsername", m_ewsUsername);

  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
