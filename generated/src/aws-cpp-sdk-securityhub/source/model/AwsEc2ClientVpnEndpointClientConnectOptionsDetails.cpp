/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2ClientVpnEndpointClientConnectOptionsDetails.h>
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

AwsEc2ClientVpnEndpointClientConnectOptionsDetails::AwsEc2ClientVpnEndpointClientConnectOptionsDetails() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_lambdaFunctionArnHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AwsEc2ClientVpnEndpointClientConnectOptionsDetails::AwsEc2ClientVpnEndpointClientConnectOptionsDetails(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_lambdaFunctionArnHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2ClientVpnEndpointClientConnectOptionsDetails& AwsEc2ClientVpnEndpointClientConnectOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LambdaFunctionArn"))
  {
    m_lambdaFunctionArn = jsonValue.GetString("LambdaFunctionArn");

    m_lambdaFunctionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2ClientVpnEndpointClientConnectOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_lambdaFunctionArnHasBeenSet)
  {
   payload.WithString("LambdaFunctionArn", m_lambdaFunctionArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
