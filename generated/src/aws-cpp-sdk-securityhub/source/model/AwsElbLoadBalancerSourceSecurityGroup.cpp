/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElbLoadBalancerSourceSecurityGroup.h>
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

AwsElbLoadBalancerSourceSecurityGroup::AwsElbLoadBalancerSourceSecurityGroup() : 
    m_groupNameHasBeenSet(false),
    m_ownerAliasHasBeenSet(false)
{
}

AwsElbLoadBalancerSourceSecurityGroup::AwsElbLoadBalancerSourceSecurityGroup(JsonView jsonValue) : 
    m_groupNameHasBeenSet(false),
    m_ownerAliasHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElbLoadBalancerSourceSecurityGroup& AwsElbLoadBalancerSourceSecurityGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerAlias"))
  {
    m_ownerAlias = jsonValue.GetString("OwnerAlias");

    m_ownerAliasHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElbLoadBalancerSourceSecurityGroup::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_ownerAliasHasBeenSet)
  {
   payload.WithString("OwnerAlias", m_ownerAlias);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
