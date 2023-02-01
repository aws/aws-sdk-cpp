/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbSecurityGroupDetails.h>
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

AwsRdsDbSecurityGroupDetails::AwsRdsDbSecurityGroupDetails() : 
    m_dbSecurityGroupArnHasBeenSet(false),
    m_dbSecurityGroupDescriptionHasBeenSet(false),
    m_dbSecurityGroupNameHasBeenSet(false),
    m_ec2SecurityGroupsHasBeenSet(false),
    m_ipRangesHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

AwsRdsDbSecurityGroupDetails::AwsRdsDbSecurityGroupDetails(JsonView jsonValue) : 
    m_dbSecurityGroupArnHasBeenSet(false),
    m_dbSecurityGroupDescriptionHasBeenSet(false),
    m_dbSecurityGroupNameHasBeenSet(false),
    m_ec2SecurityGroupsHasBeenSet(false),
    m_ipRangesHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbSecurityGroupDetails& AwsRdsDbSecurityGroupDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DbSecurityGroupArn"))
  {
    m_dbSecurityGroupArn = jsonValue.GetString("DbSecurityGroupArn");

    m_dbSecurityGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbSecurityGroupDescription"))
  {
    m_dbSecurityGroupDescription = jsonValue.GetString("DbSecurityGroupDescription");

    m_dbSecurityGroupDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbSecurityGroupName"))
  {
    m_dbSecurityGroupName = jsonValue.GetString("DbSecurityGroupName");

    m_dbSecurityGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ec2SecurityGroups"))
  {
    Aws::Utils::Array<JsonView> ec2SecurityGroupsJsonList = jsonValue.GetArray("Ec2SecurityGroups");
    for(unsigned ec2SecurityGroupsIndex = 0; ec2SecurityGroupsIndex < ec2SecurityGroupsJsonList.GetLength(); ++ec2SecurityGroupsIndex)
    {
      m_ec2SecurityGroups.push_back(ec2SecurityGroupsJsonList[ec2SecurityGroupsIndex].AsObject());
    }
    m_ec2SecurityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpRanges"))
  {
    Aws::Utils::Array<JsonView> ipRangesJsonList = jsonValue.GetArray("IpRanges");
    for(unsigned ipRangesIndex = 0; ipRangesIndex < ipRangesJsonList.GetLength(); ++ipRangesIndex)
    {
      m_ipRanges.push_back(ipRangesJsonList[ipRangesIndex].AsObject());
    }
    m_ipRangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbSecurityGroupDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dbSecurityGroupArnHasBeenSet)
  {
   payload.WithString("DbSecurityGroupArn", m_dbSecurityGroupArn);

  }

  if(m_dbSecurityGroupDescriptionHasBeenSet)
  {
   payload.WithString("DbSecurityGroupDescription", m_dbSecurityGroupDescription);

  }

  if(m_dbSecurityGroupNameHasBeenSet)
  {
   payload.WithString("DbSecurityGroupName", m_dbSecurityGroupName);

  }

  if(m_ec2SecurityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ec2SecurityGroupsJsonList(m_ec2SecurityGroups.size());
   for(unsigned ec2SecurityGroupsIndex = 0; ec2SecurityGroupsIndex < ec2SecurityGroupsJsonList.GetLength(); ++ec2SecurityGroupsIndex)
   {
     ec2SecurityGroupsJsonList[ec2SecurityGroupsIndex].AsObject(m_ec2SecurityGroups[ec2SecurityGroupsIndex].Jsonize());
   }
   payload.WithArray("Ec2SecurityGroups", std::move(ec2SecurityGroupsJsonList));

  }

  if(m_ipRangesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipRangesJsonList(m_ipRanges.size());
   for(unsigned ipRangesIndex = 0; ipRangesIndex < ipRangesJsonList.GetLength(); ++ipRangesIndex)
   {
     ipRangesJsonList[ipRangesIndex].AsObject(m_ipRanges[ipRangesIndex].Jsonize());
   }
   payload.WithArray("IpRanges", std::move(ipRangesJsonList));

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
