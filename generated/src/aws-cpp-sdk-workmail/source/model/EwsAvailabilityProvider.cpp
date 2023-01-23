/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/EwsAvailabilityProvider.h>
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

EwsAvailabilityProvider::EwsAvailabilityProvider() : 
    m_ewsEndpointHasBeenSet(false),
    m_ewsUsernameHasBeenSet(false),
    m_ewsPasswordHasBeenSet(false)
{
}

EwsAvailabilityProvider::EwsAvailabilityProvider(JsonView jsonValue) : 
    m_ewsEndpointHasBeenSet(false),
    m_ewsUsernameHasBeenSet(false),
    m_ewsPasswordHasBeenSet(false)
{
  *this = jsonValue;
}

EwsAvailabilityProvider& EwsAvailabilityProvider::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("EwsPassword"))
  {
    m_ewsPassword = jsonValue.GetString("EwsPassword");

    m_ewsPasswordHasBeenSet = true;
  }

  return *this;
}

JsonValue EwsAvailabilityProvider::Jsonize() const
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

  if(m_ewsPasswordHasBeenSet)
  {
   payload.WithString("EwsPassword", m_ewsPassword);

  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
