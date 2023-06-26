/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataMetadataOptionsDetails.h>
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

AwsEc2LaunchTemplateDataMetadataOptionsDetails::AwsEc2LaunchTemplateDataMetadataOptionsDetails() : 
    m_httpEndpointHasBeenSet(false),
    m_httpProtocolIpv6HasBeenSet(false),
    m_httpTokensHasBeenSet(false),
    m_httpPutResponseHopLimit(0),
    m_httpPutResponseHopLimitHasBeenSet(false),
    m_instanceMetadataTagsHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataMetadataOptionsDetails::AwsEc2LaunchTemplateDataMetadataOptionsDetails(JsonView jsonValue) : 
    m_httpEndpointHasBeenSet(false),
    m_httpProtocolIpv6HasBeenSet(false),
    m_httpTokensHasBeenSet(false),
    m_httpPutResponseHopLimit(0),
    m_httpPutResponseHopLimitHasBeenSet(false),
    m_instanceMetadataTagsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataMetadataOptionsDetails& AwsEc2LaunchTemplateDataMetadataOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HttpEndpoint"))
  {
    m_httpEndpoint = jsonValue.GetString("HttpEndpoint");

    m_httpEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpProtocolIpv6"))
  {
    m_httpProtocolIpv6 = jsonValue.GetString("HttpProtocolIpv6");

    m_httpProtocolIpv6HasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpTokens"))
  {
    m_httpTokens = jsonValue.GetString("HttpTokens");

    m_httpTokensHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpPutResponseHopLimit"))
  {
    m_httpPutResponseHopLimit = jsonValue.GetInteger("HttpPutResponseHopLimit");

    m_httpPutResponseHopLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceMetadataTags"))
  {
    m_instanceMetadataTags = jsonValue.GetString("InstanceMetadataTags");

    m_instanceMetadataTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataMetadataOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_httpEndpointHasBeenSet)
  {
   payload.WithString("HttpEndpoint", m_httpEndpoint);

  }

  if(m_httpProtocolIpv6HasBeenSet)
  {
   payload.WithString("HttpProtocolIpv6", m_httpProtocolIpv6);

  }

  if(m_httpTokensHasBeenSet)
  {
   payload.WithString("HttpTokens", m_httpTokens);

  }

  if(m_httpPutResponseHopLimitHasBeenSet)
  {
   payload.WithInteger("HttpPutResponseHopLimit", m_httpPutResponseHopLimit);

  }

  if(m_instanceMetadataTagsHasBeenSet)
  {
   payload.WithString("InstanceMetadataTags", m_instanceMetadataTags);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
