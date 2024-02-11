/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRoute53HostedZoneVpcDetails.h>
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

AwsRoute53HostedZoneVpcDetails::AwsRoute53HostedZoneVpcDetails() : 
    m_idHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

AwsRoute53HostedZoneVpcDetails::AwsRoute53HostedZoneVpcDetails(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_regionHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRoute53HostedZoneVpcDetails& AwsRoute53HostedZoneVpcDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRoute53HostedZoneVpcDetails::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
