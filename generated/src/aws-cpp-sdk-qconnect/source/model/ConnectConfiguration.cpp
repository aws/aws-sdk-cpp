/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ConnectConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

ConnectConfiguration::ConnectConfiguration() : 
    m_instanceIdHasBeenSet(false)
{
}

ConnectConfiguration::ConnectConfiguration(JsonView jsonValue) : 
    m_instanceIdHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectConfiguration& ConnectConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceId"))
  {
    m_instanceId = jsonValue.GetString("instanceId");

    m_instanceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("instanceId", m_instanceId);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
