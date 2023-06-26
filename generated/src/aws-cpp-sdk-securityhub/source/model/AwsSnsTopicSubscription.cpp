/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsSnsTopicSubscription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsSnsTopicSubscription::AwsSnsTopicSubscription() : 
    m_endpointHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
}

AwsSnsTopicSubscription::AwsSnsTopicSubscription(JsonView jsonValue) : 
    m_endpointHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
  *this = jsonValue;
}

AwsSnsTopicSubscription& AwsSnsTopicSubscription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetString("Endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = jsonValue.GetString("Protocol");

    m_protocolHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsSnsTopicSubscription::Jsonize() const
{
  JsonValue payload;

  if(m_endpointHasBeenSet)
  {
   payload.WithString("Endpoint", m_endpoint);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", m_protocol);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
