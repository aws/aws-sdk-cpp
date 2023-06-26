/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/RateBasedStatementManagedKeysIPSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

RateBasedStatementManagedKeysIPSet::RateBasedStatementManagedKeysIPSet() : 
    m_iPAddressVersion(IPAddressVersion::NOT_SET),
    m_iPAddressVersionHasBeenSet(false),
    m_addressesHasBeenSet(false)
{
}

RateBasedStatementManagedKeysIPSet::RateBasedStatementManagedKeysIPSet(JsonView jsonValue) : 
    m_iPAddressVersion(IPAddressVersion::NOT_SET),
    m_iPAddressVersionHasBeenSet(false),
    m_addressesHasBeenSet(false)
{
  *this = jsonValue;
}

RateBasedStatementManagedKeysIPSet& RateBasedStatementManagedKeysIPSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IPAddressVersion"))
  {
    m_iPAddressVersion = IPAddressVersionMapper::GetIPAddressVersionForName(jsonValue.GetString("IPAddressVersion"));

    m_iPAddressVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Addresses"))
  {
    Aws::Utils::Array<JsonView> addressesJsonList = jsonValue.GetArray("Addresses");
    for(unsigned addressesIndex = 0; addressesIndex < addressesJsonList.GetLength(); ++addressesIndex)
    {
      m_addresses.push_back(addressesJsonList[addressesIndex].AsString());
    }
    m_addressesHasBeenSet = true;
  }

  return *this;
}

JsonValue RateBasedStatementManagedKeysIPSet::Jsonize() const
{
  JsonValue payload;

  if(m_iPAddressVersionHasBeenSet)
  {
   payload.WithString("IPAddressVersion", IPAddressVersionMapper::GetNameForIPAddressVersion(m_iPAddressVersion));
  }

  if(m_addressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addressesJsonList(m_addresses.size());
   for(unsigned addressesIndex = 0; addressesIndex < addressesJsonList.GetLength(); ++addressesIndex)
   {
     addressesJsonList[addressesIndex].AsString(m_addresses[addressesIndex]);
   }
   payload.WithArray("Addresses", std::move(addressesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
