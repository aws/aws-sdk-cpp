/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsServiceNetworkConfigurationDetails.h>
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

AwsEcsServiceNetworkConfigurationDetails::AwsEcsServiceNetworkConfigurationDetails() : 
    m_awsVpcConfigurationHasBeenSet(false)
{
}

AwsEcsServiceNetworkConfigurationDetails::AwsEcsServiceNetworkConfigurationDetails(JsonView jsonValue) : 
    m_awsVpcConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsServiceNetworkConfigurationDetails& AwsEcsServiceNetworkConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AwsVpcConfiguration"))
  {
    m_awsVpcConfiguration = jsonValue.GetObject("AwsVpcConfiguration");

    m_awsVpcConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsServiceNetworkConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_awsVpcConfigurationHasBeenSet)
  {
   payload.WithObject("AwsVpcConfiguration", m_awsVpcConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
