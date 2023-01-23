/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbClusterOptionGroupMembership.h>
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

AwsRdsDbClusterOptionGroupMembership::AwsRdsDbClusterOptionGroupMembership() : 
    m_dbClusterOptionGroupNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AwsRdsDbClusterOptionGroupMembership::AwsRdsDbClusterOptionGroupMembership(JsonView jsonValue) : 
    m_dbClusterOptionGroupNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbClusterOptionGroupMembership& AwsRdsDbClusterOptionGroupMembership::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DbClusterOptionGroupName"))
  {
    m_dbClusterOptionGroupName = jsonValue.GetString("DbClusterOptionGroupName");

    m_dbClusterOptionGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbClusterOptionGroupMembership::Jsonize() const
{
  JsonValue payload;

  if(m_dbClusterOptionGroupNameHasBeenSet)
  {
   payload.WithString("DbClusterOptionGroupName", m_dbClusterOptionGroupName);

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
