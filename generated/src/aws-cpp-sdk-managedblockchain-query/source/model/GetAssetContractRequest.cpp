/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/GetAssetContractRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedBlockchainQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAssetContractRequest::GetAssetContractRequest() : 
    m_contractIdentifierHasBeenSet(false)
{
}

Aws::String GetAssetContractRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contractIdentifierHasBeenSet)
  {
   payload.WithObject("contractIdentifier", m_contractIdentifier.Jsonize());

  }

  return payload.View().WriteReadable();
}




