/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/WorkloadInsightsTopContributorsRow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFlowMonitor
{
namespace Model
{

WorkloadInsightsTopContributorsRow::WorkloadInsightsTopContributorsRow(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkloadInsightsTopContributorsRow& WorkloadInsightsTopContributorsRow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localSubnetId"))
  {
    m_localSubnetId = jsonValue.GetString("localSubnetId");
    m_localSubnetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localAz"))
  {
    m_localAz = jsonValue.GetString("localAz");
    m_localAzHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localVpcId"))
  {
    m_localVpcId = jsonValue.GetString("localVpcId");
    m_localVpcIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localRegion"))
  {
    m_localRegion = jsonValue.GetString("localRegion");
    m_localRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remoteIdentifier"))
  {
    m_remoteIdentifier = jsonValue.GetString("remoteIdentifier");
    m_remoteIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetInt64("value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localSubnetArn"))
  {
    m_localSubnetArn = jsonValue.GetString("localSubnetArn");
    m_localSubnetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localVpcArn"))
  {
    m_localVpcArn = jsonValue.GetString("localVpcArn");
    m_localVpcArnHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkloadInsightsTopContributorsRow::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_localSubnetIdHasBeenSet)
  {
   payload.WithString("localSubnetId", m_localSubnetId);

  }

  if(m_localAzHasBeenSet)
  {
   payload.WithString("localAz", m_localAz);

  }

  if(m_localVpcIdHasBeenSet)
  {
   payload.WithString("localVpcId", m_localVpcId);

  }

  if(m_localRegionHasBeenSet)
  {
   payload.WithString("localRegion", m_localRegion);

  }

  if(m_remoteIdentifierHasBeenSet)
  {
   payload.WithString("remoteIdentifier", m_remoteIdentifier);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithInt64("value", m_value);

  }

  if(m_localSubnetArnHasBeenSet)
  {
   payload.WithString("localSubnetArn", m_localSubnetArn);

  }

  if(m_localVpcArnHasBeenSet)
  {
   payload.WithString("localVpcArn", m_localVpcArn);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
