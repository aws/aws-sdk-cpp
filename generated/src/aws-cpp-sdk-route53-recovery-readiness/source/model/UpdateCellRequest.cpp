/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/UpdateCellRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCellRequest::UpdateCellRequest() : 
    m_cellNameHasBeenSet(false),
    m_cellsHasBeenSet(false)
{
}

Aws::String UpdateCellRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cellsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cellsJsonList(m_cells.size());
   for(unsigned cellsIndex = 0; cellsIndex < cellsJsonList.GetLength(); ++cellsIndex)
   {
     cellsJsonList[cellsIndex].AsString(m_cells[cellsIndex]);
   }
   payload.WithArray("cells", std::move(cellsJsonList));

  }

  return payload.View().WriteReadable();
}




