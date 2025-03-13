/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/AddressIdentifierFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchainQuery
{
namespace Model
{

AddressIdentifierFilter::AddressIdentifierFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

AddressIdentifierFilter& AddressIdentifierFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("transactionEventToAddress"))
  {
    Aws::Utils::Array<JsonView> transactionEventToAddressJsonList = jsonValue.GetArray("transactionEventToAddress");
    for(unsigned transactionEventToAddressIndex = 0; transactionEventToAddressIndex < transactionEventToAddressJsonList.GetLength(); ++transactionEventToAddressIndex)
    {
      m_transactionEventToAddress.push_back(transactionEventToAddressJsonList[transactionEventToAddressIndex].AsString());
    }
    m_transactionEventToAddressHasBeenSet = true;
  }
  return *this;
}

JsonValue AddressIdentifierFilter::Jsonize() const
{
  JsonValue payload;

  if(m_transactionEventToAddressHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> transactionEventToAddressJsonList(m_transactionEventToAddress.size());
   for(unsigned transactionEventToAddressIndex = 0; transactionEventToAddressIndex < transactionEventToAddressJsonList.GetLength(); ++transactionEventToAddressIndex)
   {
     transactionEventToAddressJsonList[transactionEventToAddressIndex].AsString(m_transactionEventToAddress[transactionEventToAddressIndex]);
   }
   payload.WithArray("transactionEventToAddress", std::move(transactionEventToAddressJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
