/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/UpdateSourceServerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSourceServerRequest::UpdateSourceServerRequest() : 
    m_accountIDHasBeenSet(false),
    m_connectorActionHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false)
{
}

Aws::String UpdateSourceServerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIDHasBeenSet)
  {
   payload.WithString("accountID", m_accountID);

  }

  if(m_connectorActionHasBeenSet)
  {
   payload.WithObject("connectorAction", m_connectorAction.Jsonize());

  }

  if(m_sourceServerIDHasBeenSet)
  {
   payload.WithString("sourceServerID", m_sourceServerID);

  }

  return payload.View().WriteReadable();
}




