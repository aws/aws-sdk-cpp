/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbSecurityGroupIpRange.h>
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

AwsRdsDbSecurityGroupIpRange::AwsRdsDbSecurityGroupIpRange() : 
    m_cidrIpHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AwsRdsDbSecurityGroupIpRange::AwsRdsDbSecurityGroupIpRange(JsonView jsonValue) : 
    m_cidrIpHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbSecurityGroupIpRange& AwsRdsDbSecurityGroupIpRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CidrIp"))
  {
    m_cidrIp = jsonValue.GetString("CidrIp");

    m_cidrIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbSecurityGroupIpRange::Jsonize() const
{
  JsonValue payload;

  if(m_cidrIpHasBeenSet)
  {
   payload.WithString("CidrIp", m_cidrIp);

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
