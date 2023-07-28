/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/GCMChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

GCMChannelRequest::GCMChannelRequest() : 
    m_apiKeyHasBeenSet(false),
    m_defaultAuthenticationMethodHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_serviceJsonHasBeenSet(false)
{
}

GCMChannelRequest::GCMChannelRequest(JsonView jsonValue) : 
    m_apiKeyHasBeenSet(false),
    m_defaultAuthenticationMethodHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_serviceJsonHasBeenSet(false)
{
  *this = jsonValue;
}

GCMChannelRequest& GCMChannelRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApiKey"))
  {
    m_apiKey = jsonValue.GetString("ApiKey");

    m_apiKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultAuthenticationMethod"))
  {
    m_defaultAuthenticationMethod = jsonValue.GetString("DefaultAuthenticationMethod");

    m_defaultAuthenticationMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceJson"))
  {
    m_serviceJson = jsonValue.GetString("ServiceJson");

    m_serviceJsonHasBeenSet = true;
  }

  return *this;
}

JsonValue GCMChannelRequest::Jsonize() const
{
  JsonValue payload;

  if(m_apiKeyHasBeenSet)
  {
   payload.WithString("ApiKey", m_apiKey);

  }

  if(m_defaultAuthenticationMethodHasBeenSet)
  {
   payload.WithString("DefaultAuthenticationMethod", m_defaultAuthenticationMethod);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_serviceJsonHasBeenSet)
  {
   payload.WithString("ServiceJson", m_serviceJson);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
