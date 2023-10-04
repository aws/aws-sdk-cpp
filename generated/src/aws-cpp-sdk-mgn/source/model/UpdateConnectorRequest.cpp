/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/UpdateConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConnectorRequest::UpdateConnectorRequest() : 
    m_connectorIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ssmCommandConfigHasBeenSet(false)
{
}

Aws::String UpdateConnectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectorIDHasBeenSet)
  {
   payload.WithString("connectorID", m_connectorID);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_ssmCommandConfigHasBeenSet)
  {
   payload.WithObject("ssmCommandConfig", m_ssmCommandConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




