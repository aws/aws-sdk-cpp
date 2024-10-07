/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/UpdateSessionDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSessionDataRequest::UpdateSessionDataRequest() : 
    m_assistantIdHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_namespace(SessionDataNamespace::NOT_SET),
    m_namespaceHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

Aws::String UpdateSessionDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataJsonList(m_data.size());
   for(unsigned dataIndex = 0; dataIndex < dataJsonList.GetLength(); ++dataIndex)
   {
     dataJsonList[dataIndex].AsObject(m_data[dataIndex].Jsonize());
   }
   payload.WithArray("data", std::move(dataJsonList));

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", SessionDataNamespaceMapper::GetNameForSessionDataNamespace(m_namespace));
  }

  return payload.View().WriteReadable();
}




