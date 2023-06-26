/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ServerReplicationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

ServerReplicationConfiguration::ServerReplicationConfiguration() : 
    m_serverHasBeenSet(false),
    m_serverReplicationParametersHasBeenSet(false)
{
}

ServerReplicationConfiguration::ServerReplicationConfiguration(JsonView jsonValue) : 
    m_serverHasBeenSet(false),
    m_serverReplicationParametersHasBeenSet(false)
{
  *this = jsonValue;
}

ServerReplicationConfiguration& ServerReplicationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("server"))
  {
    m_server = jsonValue.GetObject("server");

    m_serverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverReplicationParameters"))
  {
    m_serverReplicationParameters = jsonValue.GetObject("serverReplicationParameters");

    m_serverReplicationParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerReplicationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serverHasBeenSet)
  {
   payload.WithObject("server", m_server.Jsonize());

  }

  if(m_serverReplicationParametersHasBeenSet)
  {
   payload.WithObject("serverReplicationParameters", m_serverReplicationParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
