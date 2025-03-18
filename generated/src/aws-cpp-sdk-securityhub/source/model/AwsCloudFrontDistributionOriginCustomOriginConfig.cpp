/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCloudFrontDistributionOriginCustomOriginConfig.h>
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

AwsCloudFrontDistributionOriginCustomOriginConfig::AwsCloudFrontDistributionOriginCustomOriginConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsCloudFrontDistributionOriginCustomOriginConfig& AwsCloudFrontDistributionOriginCustomOriginConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HttpPort"))
  {
    m_httpPort = jsonValue.GetInteger("HttpPort");
    m_httpPortHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HttpsPort"))
  {
    m_httpsPort = jsonValue.GetInteger("HttpsPort");
    m_httpsPortHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OriginKeepaliveTimeout"))
  {
    m_originKeepaliveTimeout = jsonValue.GetInteger("OriginKeepaliveTimeout");
    m_originKeepaliveTimeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OriginProtocolPolicy"))
  {
    m_originProtocolPolicy = jsonValue.GetString("OriginProtocolPolicy");
    m_originProtocolPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OriginReadTimeout"))
  {
    m_originReadTimeout = jsonValue.GetInteger("OriginReadTimeout");
    m_originReadTimeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OriginSslProtocols"))
  {
    m_originSslProtocols = jsonValue.GetObject("OriginSslProtocols");
    m_originSslProtocolsHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsCloudFrontDistributionOriginCustomOriginConfig::Jsonize() const
{
  JsonValue payload;

  if(m_httpPortHasBeenSet)
  {
   payload.WithInteger("HttpPort", m_httpPort);

  }

  if(m_httpsPortHasBeenSet)
  {
   payload.WithInteger("HttpsPort", m_httpsPort);

  }

  if(m_originKeepaliveTimeoutHasBeenSet)
  {
   payload.WithInteger("OriginKeepaliveTimeout", m_originKeepaliveTimeout);

  }

  if(m_originProtocolPolicyHasBeenSet)
  {
   payload.WithString("OriginProtocolPolicy", m_originProtocolPolicy);

  }

  if(m_originReadTimeoutHasBeenSet)
  {
   payload.WithInteger("OriginReadTimeout", m_originReadTimeout);

  }

  if(m_originSslProtocolsHasBeenSet)
  {
   payload.WithObject("OriginSslProtocols", m_originSslProtocols.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
