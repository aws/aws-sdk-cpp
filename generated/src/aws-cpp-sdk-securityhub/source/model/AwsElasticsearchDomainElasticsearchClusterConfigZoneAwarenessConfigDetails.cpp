/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElasticsearchDomainElasticsearchClusterConfigZoneAwarenessConfigDetails.h>
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

AwsElasticsearchDomainElasticsearchClusterConfigZoneAwarenessConfigDetails::AwsElasticsearchDomainElasticsearchClusterConfigZoneAwarenessConfigDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsElasticsearchDomainElasticsearchClusterConfigZoneAwarenessConfigDetails& AwsElasticsearchDomainElasticsearchClusterConfigZoneAwarenessConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvailabilityZoneCount"))
  {
    m_availabilityZoneCount = jsonValue.GetInteger("AvailabilityZoneCount");
    m_availabilityZoneCountHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsElasticsearchDomainElasticsearchClusterConfigZoneAwarenessConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZoneCountHasBeenSet)
  {
   payload.WithInteger("AvailabilityZoneCount", m_availabilityZoneCount);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
