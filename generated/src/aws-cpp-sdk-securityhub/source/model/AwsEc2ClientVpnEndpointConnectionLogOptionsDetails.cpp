/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2ClientVpnEndpointConnectionLogOptionsDetails.h>
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

AwsEc2ClientVpnEndpointConnectionLogOptionsDetails::AwsEc2ClientVpnEndpointConnectionLogOptionsDetails() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_cloudwatchLogGroupHasBeenSet(false),
    m_cloudwatchLogStreamHasBeenSet(false)
{
}

AwsEc2ClientVpnEndpointConnectionLogOptionsDetails::AwsEc2ClientVpnEndpointConnectionLogOptionsDetails(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_cloudwatchLogGroupHasBeenSet(false),
    m_cloudwatchLogStreamHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2ClientVpnEndpointConnectionLogOptionsDetails& AwsEc2ClientVpnEndpointConnectionLogOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudwatchLogGroup"))
  {
    m_cloudwatchLogGroup = jsonValue.GetString("CloudwatchLogGroup");

    m_cloudwatchLogGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudwatchLogStream"))
  {
    m_cloudwatchLogStream = jsonValue.GetString("CloudwatchLogStream");

    m_cloudwatchLogStreamHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2ClientVpnEndpointConnectionLogOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_cloudwatchLogGroupHasBeenSet)
  {
   payload.WithString("CloudwatchLogGroup", m_cloudwatchLogGroup);

  }

  if(m_cloudwatchLogStreamHasBeenSet)
  {
   payload.WithString("CloudwatchLogStream", m_cloudwatchLogStream);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
