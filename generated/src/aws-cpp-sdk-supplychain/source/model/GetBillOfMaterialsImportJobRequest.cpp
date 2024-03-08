/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/GetBillOfMaterialsImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SupplyChain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBillOfMaterialsImportJobRequest::GetBillOfMaterialsImportJobRequest() : 
    m_instanceIdHasBeenSet(false),
    m_jobIdHasBeenSet(false)
{
}

Aws::String GetBillOfMaterialsImportJobRequest::SerializePayload() const
{
  return {};
}




