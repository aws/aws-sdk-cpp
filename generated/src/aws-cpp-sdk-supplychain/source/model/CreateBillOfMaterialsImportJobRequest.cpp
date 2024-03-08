/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/CreateBillOfMaterialsImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SupplyChain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBillOfMaterialsImportJobRequest::CreateBillOfMaterialsImportJobRequest() : 
    m_instanceIdHasBeenSet(false),
    m_s3uriHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateBillOfMaterialsImportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_s3uriHasBeenSet)
  {
   payload.WithString("s3uri", m_s3uri);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




