/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEksClusterResourcesVpcConfigDetails.h>
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

AwsEksClusterResourcesVpcConfigDetails::AwsEksClusterResourcesVpcConfigDetails() : 
    m_securityGroupIdsHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_endpointPublicAccess(false),
    m_endpointPublicAccessHasBeenSet(false)
{
}

AwsEksClusterResourcesVpcConfigDetails::AwsEksClusterResourcesVpcConfigDetails(JsonView jsonValue) : 
    m_securityGroupIdsHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_endpointPublicAccess(false),
    m_endpointPublicAccessHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEksClusterResourcesVpcConfigDetails& AwsEksClusterResourcesVpcConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecurityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("SecurityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointPublicAccess"))
  {
    m_endpointPublicAccess = jsonValue.GetBool("EndpointPublicAccess");

    m_endpointPublicAccessHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEksClusterResourcesVpcConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_endpointPublicAccessHasBeenSet)
  {
   payload.WithBool("EndpointPublicAccess", m_endpointPublicAccess);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
