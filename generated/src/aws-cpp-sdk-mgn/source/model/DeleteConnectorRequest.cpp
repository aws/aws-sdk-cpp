/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/DeleteConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteConnectorRequest::DeleteConnectorRequest() : 
    m_connectorIDHasBeenSet(false)
{
}

Aws::String DeleteConnectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectorIDHasBeenSet)
  {
   payload.WithString("connectorID", m_connectorID);

  }

  return payload.View().WriteReadable();
}




