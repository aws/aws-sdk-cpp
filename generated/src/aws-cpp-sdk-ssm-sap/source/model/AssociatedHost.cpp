/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/AssociatedHost.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SsmSap
{
namespace Model
{

AssociatedHost::AssociatedHost() : 
    m_hostnameHasBeenSet(false),
    m_ec2InstanceIdHasBeenSet(false),
    m_ipAddressesHasBeenSet(false),
    m_osVersionHasBeenSet(false)
{
}

AssociatedHost::AssociatedHost(JsonView jsonValue) : 
    m_hostnameHasBeenSet(false),
    m_ec2InstanceIdHasBeenSet(false),
    m_ipAddressesHasBeenSet(false),
    m_osVersionHasBeenSet(false)
{
  *this = jsonValue;
}

AssociatedHost& AssociatedHost::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Hostname"))
  {
    m_hostname = jsonValue.GetString("Hostname");

    m_hostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ec2InstanceId"))
  {
    m_ec2InstanceId = jsonValue.GetString("Ec2InstanceId");

    m_ec2InstanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddresses"))
  {
    Aws::Utils::Array<JsonView> ipAddressesJsonList = jsonValue.GetArray("IpAddresses");
    for(unsigned ipAddressesIndex = 0; ipAddressesIndex < ipAddressesJsonList.GetLength(); ++ipAddressesIndex)
    {
      m_ipAddresses.push_back(ipAddressesJsonList[ipAddressesIndex].AsObject());
    }
    m_ipAddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OsVersion"))
  {
    m_osVersion = jsonValue.GetString("OsVersion");

    m_osVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociatedHost::Jsonize() const
{
  JsonValue payload;

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("Hostname", m_hostname);

  }

  if(m_ec2InstanceIdHasBeenSet)
  {
   payload.WithString("Ec2InstanceId", m_ec2InstanceId);

  }

  if(m_ipAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipAddressesJsonList(m_ipAddresses.size());
   for(unsigned ipAddressesIndex = 0; ipAddressesIndex < ipAddressesJsonList.GetLength(); ++ipAddressesIndex)
   {
     ipAddressesJsonList[ipAddressesIndex].AsObject(m_ipAddresses[ipAddressesIndex].Jsonize());
   }
   payload.WithArray("IpAddresses", std::move(ipAddressesJsonList));

  }

  if(m_osVersionHasBeenSet)
  {
   payload.WithString("OsVersion", m_osVersion);

  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
