/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/SendingOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

SendingOptions::SendingOptions() : 
    m_sendingEnabled(false),
    m_sendingEnabledHasBeenSet(false)
{
}

SendingOptions::SendingOptions(JsonView jsonValue) : 
    m_sendingEnabled(false),
    m_sendingEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

SendingOptions& SendingOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SendingEnabled"))
  {
    m_sendingEnabled = jsonValue.GetBool("SendingEnabled");

    m_sendingEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue SendingOptions::Jsonize() const
{
  JsonValue payload;

  if(m_sendingEnabledHasBeenSet)
  {
   payload.WithBool("SendingEnabled", m_sendingEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
