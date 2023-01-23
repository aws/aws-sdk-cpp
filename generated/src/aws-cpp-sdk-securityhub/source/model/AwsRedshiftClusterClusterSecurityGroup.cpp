/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRedshiftClusterClusterSecurityGroup.h>
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

AwsRedshiftClusterClusterSecurityGroup::AwsRedshiftClusterClusterSecurityGroup() : 
    m_clusterSecurityGroupNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AwsRedshiftClusterClusterSecurityGroup::AwsRedshiftClusterClusterSecurityGroup(JsonView jsonValue) : 
    m_clusterSecurityGroupNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRedshiftClusterClusterSecurityGroup& AwsRedshiftClusterClusterSecurityGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterSecurityGroupName"))
  {
    m_clusterSecurityGroupName = jsonValue.GetString("ClusterSecurityGroupName");

    m_clusterSecurityGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRedshiftClusterClusterSecurityGroup::Jsonize() const
{
  JsonValue payload;

  if(m_clusterSecurityGroupNameHasBeenSet)
  {
   payload.WithString("ClusterSecurityGroupName", m_clusterSecurityGroupName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
