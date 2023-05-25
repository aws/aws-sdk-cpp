/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/DnsConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

DnsConfig::DnsConfig() : 
    m_routingPolicy(RoutingPolicy::NOT_SET),
    m_routingPolicyHasBeenSet(false),
    m_dnsRecordsHasBeenSet(false)
{
}

DnsConfig::DnsConfig(JsonView jsonValue) : 
    m_routingPolicy(RoutingPolicy::NOT_SET),
    m_routingPolicyHasBeenSet(false),
    m_dnsRecordsHasBeenSet(false)
{
  *this = jsonValue;
}

DnsConfig& DnsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoutingPolicy"))
  {
    m_routingPolicy = RoutingPolicyMapper::GetRoutingPolicyForName(jsonValue.GetString("RoutingPolicy"));

    m_routingPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsRecords"))
  {
    Aws::Utils::Array<JsonView> dnsRecordsJsonList = jsonValue.GetArray("DnsRecords");
    for(unsigned dnsRecordsIndex = 0; dnsRecordsIndex < dnsRecordsJsonList.GetLength(); ++dnsRecordsIndex)
    {
      m_dnsRecords.push_back(dnsRecordsJsonList[dnsRecordsIndex].AsObject());
    }
    m_dnsRecordsHasBeenSet = true;
  }

  return *this;
}

JsonValue DnsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_routingPolicyHasBeenSet)
  {
   payload.WithString("RoutingPolicy", RoutingPolicyMapper::GetNameForRoutingPolicy(m_routingPolicy));
  }

  if(m_dnsRecordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsRecordsJsonList(m_dnsRecords.size());
   for(unsigned dnsRecordsIndex = 0; dnsRecordsIndex < dnsRecordsJsonList.GetLength(); ++dnsRecordsIndex)
   {
     dnsRecordsJsonList[dnsRecordsIndex].AsObject(m_dnsRecords[dnsRecordsIndex].Jsonize());
   }
   payload.WithArray("DnsRecords", std::move(dnsRecordsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
