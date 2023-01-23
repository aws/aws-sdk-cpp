﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/NetworkFrameworkAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

NetworkFrameworkAttributes::NetworkFrameworkAttributes() : 
    m_fabricHasBeenSet(false),
    m_ethereumHasBeenSet(false)
{
}

NetworkFrameworkAttributes::NetworkFrameworkAttributes(JsonView jsonValue) : 
    m_fabricHasBeenSet(false),
    m_ethereumHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkFrameworkAttributes& NetworkFrameworkAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Fabric"))
  {
    m_fabric = jsonValue.GetObject("Fabric");

    m_fabricHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ethereum"))
  {
    m_ethereum = jsonValue.GetObject("Ethereum");

    m_ethereumHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkFrameworkAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_fabricHasBeenSet)
  {
   payload.WithObject("Fabric", m_fabric.Jsonize());

  }

  if(m_ethereumHasBeenSet)
  {
   payload.WithObject("Ethereum", m_ethereum.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
