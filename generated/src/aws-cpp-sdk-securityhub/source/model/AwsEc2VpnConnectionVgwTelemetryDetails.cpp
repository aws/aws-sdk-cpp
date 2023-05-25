/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2VpnConnectionVgwTelemetryDetails.h>
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

AwsEc2VpnConnectionVgwTelemetryDetails::AwsEc2VpnConnectionVgwTelemetryDetails() : 
    m_acceptedRouteCount(0),
    m_acceptedRouteCountHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_lastStatusChangeHasBeenSet(false),
    m_outsideIpAddressHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

AwsEc2VpnConnectionVgwTelemetryDetails::AwsEc2VpnConnectionVgwTelemetryDetails(JsonView jsonValue) : 
    m_acceptedRouteCount(0),
    m_acceptedRouteCountHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_lastStatusChangeHasBeenSet(false),
    m_outsideIpAddressHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2VpnConnectionVgwTelemetryDetails& AwsEc2VpnConnectionVgwTelemetryDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AcceptedRouteCount"))
  {
    m_acceptedRouteCount = jsonValue.GetInteger("AcceptedRouteCount");

    m_acceptedRouteCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateArn"))
  {
    m_certificateArn = jsonValue.GetString("CertificateArn");

    m_certificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastStatusChange"))
  {
    m_lastStatusChange = jsonValue.GetString("LastStatusChange");

    m_lastStatusChangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutsideIpAddress"))
  {
    m_outsideIpAddress = jsonValue.GetString("OutsideIpAddress");

    m_outsideIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2VpnConnectionVgwTelemetryDetails::Jsonize() const
{
  JsonValue payload;

  if(m_acceptedRouteCountHasBeenSet)
  {
   payload.WithInteger("AcceptedRouteCount", m_acceptedRouteCount);

  }

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("CertificateArn", m_certificateArn);

  }

  if(m_lastStatusChangeHasBeenSet)
  {
   payload.WithString("LastStatusChange", m_lastStatusChange);

  }

  if(m_outsideIpAddressHasBeenSet)
  {
   payload.WithString("OutsideIpAddress", m_outsideIpAddress);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
