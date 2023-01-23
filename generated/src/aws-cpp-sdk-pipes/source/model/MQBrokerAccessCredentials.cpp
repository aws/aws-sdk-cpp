/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/MQBrokerAccessCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

MQBrokerAccessCredentials::MQBrokerAccessCredentials() : 
    m_basicAuthHasBeenSet(false)
{
}

MQBrokerAccessCredentials::MQBrokerAccessCredentials(JsonView jsonValue) : 
    m_basicAuthHasBeenSet(false)
{
  *this = jsonValue;
}

MQBrokerAccessCredentials& MQBrokerAccessCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BasicAuth"))
  {
    m_basicAuth = jsonValue.GetString("BasicAuth");

    m_basicAuthHasBeenSet = true;
  }

  return *this;
}

JsonValue MQBrokerAccessCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_basicAuthHasBeenSet)
  {
   payload.WithString("BasicAuth", m_basicAuth);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
