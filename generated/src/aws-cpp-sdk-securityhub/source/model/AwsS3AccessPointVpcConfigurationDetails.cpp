/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3AccessPointVpcConfigurationDetails.h>
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

AwsS3AccessPointVpcConfigurationDetails::AwsS3AccessPointVpcConfigurationDetails() : 
    m_vpcIdHasBeenSet(false)
{
}

AwsS3AccessPointVpcConfigurationDetails::AwsS3AccessPointVpcConfigurationDetails(JsonView jsonValue) : 
    m_vpcIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3AccessPointVpcConfigurationDetails& AwsS3AccessPointVpcConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3AccessPointVpcConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
