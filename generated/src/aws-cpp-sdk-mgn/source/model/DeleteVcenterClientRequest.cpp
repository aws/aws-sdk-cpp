/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/DeleteVcenterClientRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteVcenterClientRequest::DeleteVcenterClientRequest() : 
    m_vcenterClientIDHasBeenSet(false)
{
}

Aws::String DeleteVcenterClientRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vcenterClientIDHasBeenSet)
  {
   payload.WithString("vcenterClientID", m_vcenterClientID);

  }

  return payload.View().WriteReadable();
}




