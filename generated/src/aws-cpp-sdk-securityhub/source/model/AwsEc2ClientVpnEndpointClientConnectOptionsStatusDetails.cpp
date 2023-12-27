/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2ClientVpnEndpointClientConnectOptionsStatusDetails.h>
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

AwsEc2ClientVpnEndpointClientConnectOptionsStatusDetails::AwsEc2ClientVpnEndpointClientConnectOptionsStatusDetails() : 
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

AwsEc2ClientVpnEndpointClientConnectOptionsStatusDetails::AwsEc2ClientVpnEndpointClientConnectOptionsStatusDetails(JsonView jsonValue) : 
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2ClientVpnEndpointClientConnectOptionsStatusDetails& AwsEc2ClientVpnEndpointClientConnectOptionsStatusDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = jsonValue.GetString("Code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2ClientVpnEndpointClientConnectOptionsStatusDetails::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", m_code);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
