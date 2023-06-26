/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAutoScalingLaunchConfigurationMetadataOptions.h>
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

AwsAutoScalingLaunchConfigurationMetadataOptions::AwsAutoScalingLaunchConfigurationMetadataOptions() : 
    m_httpEndpointHasBeenSet(false),
    m_httpPutResponseHopLimit(0),
    m_httpPutResponseHopLimitHasBeenSet(false),
    m_httpTokensHasBeenSet(false)
{
}

AwsAutoScalingLaunchConfigurationMetadataOptions::AwsAutoScalingLaunchConfigurationMetadataOptions(JsonView jsonValue) : 
    m_httpEndpointHasBeenSet(false),
    m_httpPutResponseHopLimit(0),
    m_httpPutResponseHopLimitHasBeenSet(false),
    m_httpTokensHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAutoScalingLaunchConfigurationMetadataOptions& AwsAutoScalingLaunchConfigurationMetadataOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HttpEndpoint"))
  {
    m_httpEndpoint = jsonValue.GetString("HttpEndpoint");

    m_httpEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpPutResponseHopLimit"))
  {
    m_httpPutResponseHopLimit = jsonValue.GetInteger("HttpPutResponseHopLimit");

    m_httpPutResponseHopLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpTokens"))
  {
    m_httpTokens = jsonValue.GetString("HttpTokens");

    m_httpTokensHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAutoScalingLaunchConfigurationMetadataOptions::Jsonize() const
{
  JsonValue payload;

  if(m_httpEndpointHasBeenSet)
  {
   payload.WithString("HttpEndpoint", m_httpEndpoint);

  }

  if(m_httpPutResponseHopLimitHasBeenSet)
  {
   payload.WithInteger("HttpPutResponseHopLimit", m_httpPutResponseHopLimit);

  }

  if(m_httpTokensHasBeenSet)
  {
   payload.WithString("HttpTokens", m_httpTokens);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
