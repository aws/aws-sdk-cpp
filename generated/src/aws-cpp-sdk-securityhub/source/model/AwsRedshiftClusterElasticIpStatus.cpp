/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRedshiftClusterElasticIpStatus.h>
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

AwsRedshiftClusterElasticIpStatus::AwsRedshiftClusterElasticIpStatus() : 
    m_elasticIpHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AwsRedshiftClusterElasticIpStatus::AwsRedshiftClusterElasticIpStatus(JsonView jsonValue) : 
    m_elasticIpHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRedshiftClusterElasticIpStatus& AwsRedshiftClusterElasticIpStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ElasticIp"))
  {
    m_elasticIp = jsonValue.GetString("ElasticIp");

    m_elasticIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRedshiftClusterElasticIpStatus::Jsonize() const
{
  JsonValue payload;

  if(m_elasticIpHasBeenSet)
  {
   payload.WithString("ElasticIp", m_elasticIp);

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
