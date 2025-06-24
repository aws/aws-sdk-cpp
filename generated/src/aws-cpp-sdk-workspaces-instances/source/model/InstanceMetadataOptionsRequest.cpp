/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/InstanceMetadataOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

InstanceMetadataOptionsRequest::InstanceMetadataOptionsRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

InstanceMetadataOptionsRequest& InstanceMetadataOptionsRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HttpEndpoint"))
  {
    m_httpEndpoint = HttpEndpointEnumMapper::GetHttpEndpointEnumForName(jsonValue.GetString("HttpEndpoint"));
    m_httpEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HttpProtocolIpv6"))
  {
    m_httpProtocolIpv6 = HttpProtocolIpv6EnumMapper::GetHttpProtocolIpv6EnumForName(jsonValue.GetString("HttpProtocolIpv6"));
    m_httpProtocolIpv6HasBeenSet = true;
  }
  if(jsonValue.ValueExists("HttpPutResponseHopLimit"))
  {
    m_httpPutResponseHopLimit = jsonValue.GetInteger("HttpPutResponseHopLimit");
    m_httpPutResponseHopLimitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HttpTokens"))
  {
    m_httpTokens = HttpTokensEnumMapper::GetHttpTokensEnumForName(jsonValue.GetString("HttpTokens"));
    m_httpTokensHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceMetadataTags"))
  {
    m_instanceMetadataTags = InstanceMetadataTagsEnumMapper::GetInstanceMetadataTagsEnumForName(jsonValue.GetString("InstanceMetadataTags"));
    m_instanceMetadataTagsHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceMetadataOptionsRequest::Jsonize() const
{
  JsonValue payload;

  if(m_httpEndpointHasBeenSet)
  {
   payload.WithString("HttpEndpoint", HttpEndpointEnumMapper::GetNameForHttpEndpointEnum(m_httpEndpoint));
  }

  if(m_httpProtocolIpv6HasBeenSet)
  {
   payload.WithString("HttpProtocolIpv6", HttpProtocolIpv6EnumMapper::GetNameForHttpProtocolIpv6Enum(m_httpProtocolIpv6));
  }

  if(m_httpPutResponseHopLimitHasBeenSet)
  {
   payload.WithInteger("HttpPutResponseHopLimit", m_httpPutResponseHopLimit);

  }

  if(m_httpTokensHasBeenSet)
  {
   payload.WithString("HttpTokens", HttpTokensEnumMapper::GetNameForHttpTokensEnum(m_httpTokens));
  }

  if(m_instanceMetadataTagsHasBeenSet)
  {
   payload.WithString("InstanceMetadataTags", InstanceMetadataTagsEnumMapper::GetNameForInstanceMetadataTagsEnum(m_instanceMetadataTags));
  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
