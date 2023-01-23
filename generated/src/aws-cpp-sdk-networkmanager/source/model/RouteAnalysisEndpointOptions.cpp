/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/RouteAnalysisEndpointOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

RouteAnalysisEndpointOptions::RouteAnalysisEndpointOptions() : 
    m_transitGatewayAttachmentArnHasBeenSet(false),
    m_transitGatewayArnHasBeenSet(false),
    m_ipAddressHasBeenSet(false)
{
}

RouteAnalysisEndpointOptions::RouteAnalysisEndpointOptions(JsonView jsonValue) : 
    m_transitGatewayAttachmentArnHasBeenSet(false),
    m_transitGatewayArnHasBeenSet(false),
    m_ipAddressHasBeenSet(false)
{
  *this = jsonValue;
}

RouteAnalysisEndpointOptions& RouteAnalysisEndpointOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TransitGatewayAttachmentArn"))
  {
    m_transitGatewayAttachmentArn = jsonValue.GetString("TransitGatewayAttachmentArn");

    m_transitGatewayAttachmentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransitGatewayArn"))
  {
    m_transitGatewayArn = jsonValue.GetString("TransitGatewayArn");

    m_transitGatewayArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteAnalysisEndpointOptions::Jsonize() const
{
  JsonValue payload;

  if(m_transitGatewayAttachmentArnHasBeenSet)
  {
   payload.WithString("TransitGatewayAttachmentArn", m_transitGatewayAttachmentArn);

  }

  if(m_transitGatewayArnHasBeenSet)
  {
   payload.WithString("TransitGatewayArn", m_transitGatewayArn);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
