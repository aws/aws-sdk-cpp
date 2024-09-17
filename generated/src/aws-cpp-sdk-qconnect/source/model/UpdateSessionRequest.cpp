/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/UpdateSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSessionRequest::UpdateSessionRequest() : 
    m_assistantIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_tagFilterHasBeenSet(false)
{
}

Aws::String UpdateSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_tagFilterHasBeenSet)
  {
   payload.WithObject("tagFilter", m_tagFilter.Jsonize());

  }

  return payload.View().WriteReadable();
}




