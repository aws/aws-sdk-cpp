/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/GetTokenBalanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedBlockchainQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTokenBalanceRequest::GetTokenBalanceRequest() : 
    m_tokenIdentifierHasBeenSet(false),
    m_ownerIdentifierHasBeenSet(false),
    m_atBlockchainInstantHasBeenSet(false)
{
}

Aws::String GetTokenBalanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tokenIdentifierHasBeenSet)
  {
   payload.WithObject("tokenIdentifier", m_tokenIdentifier.Jsonize());

  }

  if(m_ownerIdentifierHasBeenSet)
  {
   payload.WithObject("ownerIdentifier", m_ownerIdentifier.Jsonize());

  }

  if(m_atBlockchainInstantHasBeenSet)
  {
   payload.WithObject("atBlockchainInstant", m_atBlockchainInstant.Jsonize());

  }

  return payload.View().WriteReadable();
}




