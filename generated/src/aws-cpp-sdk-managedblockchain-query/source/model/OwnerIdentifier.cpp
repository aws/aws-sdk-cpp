/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/OwnerIdentifier.h>
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

OwnerIdentifier::OwnerIdentifier() : 
    m_addressHasBeenSet(false)
{
}

OwnerIdentifier::OwnerIdentifier(JsonView jsonValue) : 
    m_addressHasBeenSet(false)
{
  *this = jsonValue;
}

OwnerIdentifier& OwnerIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("address"))
  {
    m_address = jsonValue.GetString("address");

    m_addressHasBeenSet = true;
  }

  return *this;
}

JsonValue OwnerIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_addressHasBeenSet)
  {
   payload.WithString("address", m_address);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
