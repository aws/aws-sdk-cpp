/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2InstanceMonitoringDetails.h>
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

AwsEc2InstanceMonitoringDetails::AwsEc2InstanceMonitoringDetails() : 
    m_stateHasBeenSet(false)
{
}

AwsEc2InstanceMonitoringDetails::AwsEc2InstanceMonitoringDetails(JsonView jsonValue) : 
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2InstanceMonitoringDetails& AwsEc2InstanceMonitoringDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2InstanceMonitoringDetails::Jsonize() const
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
