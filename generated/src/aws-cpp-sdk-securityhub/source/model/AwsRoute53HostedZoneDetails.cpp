/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRoute53HostedZoneDetails.h>
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

AwsRoute53HostedZoneDetails::AwsRoute53HostedZoneDetails() : 
    m_hostedZoneHasBeenSet(false),
    m_vpcsHasBeenSet(false),
    m_nameServersHasBeenSet(false),
    m_queryLoggingConfigHasBeenSet(false)
{
}

AwsRoute53HostedZoneDetails::AwsRoute53HostedZoneDetails(JsonView jsonValue) : 
    m_hostedZoneHasBeenSet(false),
    m_vpcsHasBeenSet(false),
    m_nameServersHasBeenSet(false),
    m_queryLoggingConfigHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRoute53HostedZoneDetails& AwsRoute53HostedZoneDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HostedZone"))
  {
    m_hostedZone = jsonValue.GetObject("HostedZone");

    m_hostedZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Vpcs"))
  {
    Aws::Utils::Array<JsonView> vpcsJsonList = jsonValue.GetArray("Vpcs");
    for(unsigned vpcsIndex = 0; vpcsIndex < vpcsJsonList.GetLength(); ++vpcsIndex)
    {
      m_vpcs.push_back(vpcsJsonList[vpcsIndex].AsObject());
    }
    m_vpcsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NameServers"))
  {
    Aws::Utils::Array<JsonView> nameServersJsonList = jsonValue.GetArray("NameServers");
    for(unsigned nameServersIndex = 0; nameServersIndex < nameServersJsonList.GetLength(); ++nameServersIndex)
    {
      m_nameServers.push_back(nameServersJsonList[nameServersIndex].AsString());
    }
    m_nameServersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryLoggingConfig"))
  {
    m_queryLoggingConfig = jsonValue.GetObject("QueryLoggingConfig");

    m_queryLoggingConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRoute53HostedZoneDetails::Jsonize() const
{
  JsonValue payload;

  if(m_hostedZoneHasBeenSet)
  {
   payload.WithObject("HostedZone", m_hostedZone.Jsonize());

  }

  if(m_vpcsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcsJsonList(m_vpcs.size());
   for(unsigned vpcsIndex = 0; vpcsIndex < vpcsJsonList.GetLength(); ++vpcsIndex)
   {
     vpcsJsonList[vpcsIndex].AsObject(m_vpcs[vpcsIndex].Jsonize());
   }
   payload.WithArray("Vpcs", std::move(vpcsJsonList));

  }

  if(m_nameServersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nameServersJsonList(m_nameServers.size());
   for(unsigned nameServersIndex = 0; nameServersIndex < nameServersJsonList.GetLength(); ++nameServersIndex)
   {
     nameServersJsonList[nameServersIndex].AsString(m_nameServers[nameServersIndex]);
   }
   payload.WithArray("NameServers", std::move(nameServersJsonList));

  }

  if(m_queryLoggingConfigHasBeenSet)
  {
   payload.WithObject("QueryLoggingConfig", m_queryLoggingConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
