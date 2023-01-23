/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DeleteInventoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteInventoryRequest::DeleteInventoryRequest() : 
    m_typeNameHasBeenSet(false),
    m_schemaDeleteOption(InventorySchemaDeleteOption::NOT_SET),
    m_schemaDeleteOptionHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String DeleteInventoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("TypeName", m_typeName);

  }

  if(m_schemaDeleteOptionHasBeenSet)
  {
   payload.WithString("SchemaDeleteOption", InventorySchemaDeleteOptionMapper::GetNameForInventorySchemaDeleteOption(m_schemaDeleteOption));
  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteInventoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.DeleteInventory"));
  return headers;

}




