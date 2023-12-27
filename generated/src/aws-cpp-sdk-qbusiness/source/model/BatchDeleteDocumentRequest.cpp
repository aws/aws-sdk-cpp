/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/BatchDeleteDocumentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteDocumentRequest::BatchDeleteDocumentRequest() : 
    m_applicationIdHasBeenSet(false),
    m_dataSourceSyncIdHasBeenSet(false),
    m_documentsHasBeenSet(false),
    m_indexIdHasBeenSet(false)
{
}

Aws::String BatchDeleteDocumentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSourceSyncIdHasBeenSet)
  {
   payload.WithString("dataSourceSyncId", m_dataSourceSyncId);

  }

  if(m_documentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> documentsJsonList(m_documents.size());
   for(unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex)
   {
     documentsJsonList[documentsIndex].AsObject(m_documents[documentsIndex].Jsonize());
   }
   payload.WithArray("documents", std::move(documentsJsonList));

  }

  return payload.View().WriteReadable();
}




