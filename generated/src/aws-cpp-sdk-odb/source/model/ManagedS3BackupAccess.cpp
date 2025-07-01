/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/ManagedS3BackupAccess.h>
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

ManagedS3BackupAccess::ManagedS3BackupAccess(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedS3BackupAccess& ManagedS3BackupAccess::operator =(JsonView jsonValue)
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
  return *this;
}

JsonValue ManagedS3BackupAccess::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
