/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsDmsReplicationInstanceVpcSecurityGroupsDetails.h>
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

AwsDmsReplicationInstanceVpcSecurityGroupsDetails::AwsDmsReplicationInstanceVpcSecurityGroupsDetails() : 
    m_vpcSecurityGroupIdHasBeenSet(false)
{
}

AwsDmsReplicationInstanceVpcSecurityGroupsDetails::AwsDmsReplicationInstanceVpcSecurityGroupsDetails(JsonView jsonValue) : 
    m_vpcSecurityGroupIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsDmsReplicationInstanceVpcSecurityGroupsDetails& AwsDmsReplicationInstanceVpcSecurityGroupsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpcSecurityGroupId"))
  {
    m_vpcSecurityGroupId = jsonValue.GetString("VpcSecurityGroupId");

    m_vpcSecurityGroupIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsDmsReplicationInstanceVpcSecurityGroupsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_vpcSecurityGroupIdHasBeenSet)
  {
   payload.WithString("VpcSecurityGroupId", m_vpcSecurityGroupId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
