/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/S3Access.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace odb
{
namespace Model
{

S3Access::S3Access(JsonView jsonValue)
{
  *this = jsonValue;
}

S3Access& S3Access::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = ManagedResourceStatusMapper::GetManagedResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ipv4Addresses"))
  {
    Aws::Utils::Array<JsonView> ipv4AddressesJsonList = jsonValue.GetArray("ipv4Addresses");
    for(unsigned ipv4AddressesIndex = 0; ipv4AddressesIndex < ipv4AddressesJsonList.GetLength(); ++ipv4AddressesIndex)
    {
      m_ipv4Addresses.push_back(ipv4AddressesJsonList[ipv4AddressesIndex].AsString());
    }
    m_ipv4AddressesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3PolicyDocument"))
  {
    m_s3PolicyDocument = jsonValue.GetString("s3PolicyDocument");
    m_s3PolicyDocumentHasBeenSet = true;
  }
  return *this;
}

JsonValue S3Access::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ManagedResourceStatusMapper::GetNameForManagedResourceStatus(m_status));
  }

  if(m_ipv4AddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipv4AddressesJsonList(m_ipv4Addresses.size());
   for(unsigned ipv4AddressesIndex = 0; ipv4AddressesIndex < ipv4AddressesJsonList.GetLength(); ++ipv4AddressesIndex)
   {
     ipv4AddressesJsonList[ipv4AddressesIndex].AsString(m_ipv4Addresses[ipv4AddressesIndex]);
   }
   payload.WithArray("ipv4Addresses", std::move(ipv4AddressesJsonList));

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_s3PolicyDocumentHasBeenSet)
  {
   payload.WithString("s3PolicyDocument", m_s3PolicyDocument);

  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
