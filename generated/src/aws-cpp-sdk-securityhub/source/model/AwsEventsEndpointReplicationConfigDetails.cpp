/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEventsEndpointReplicationConfigDetails.h>
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

AwsEventsEndpointReplicationConfigDetails::AwsEventsEndpointReplicationConfigDetails() : 
    m_stateHasBeenSet(false)
{
}

AwsEventsEndpointReplicationConfigDetails::AwsEventsEndpointReplicationConfigDetails(JsonView jsonValue) : 
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEventsEndpointReplicationConfigDetails& AwsEventsEndpointReplicationConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEventsEndpointReplicationConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
