/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataMonitoringDetails.h>
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

AwsEc2LaunchTemplateDataMonitoringDetails::AwsEc2LaunchTemplateDataMonitoringDetails() : 
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataMonitoringDetails::AwsEc2LaunchTemplateDataMonitoringDetails(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataMonitoringDetails& AwsEc2LaunchTemplateDataMonitoringDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataMonitoringDetails::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
