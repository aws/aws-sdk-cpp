/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/UpdateCrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::RolesAnywhere::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCrlRequest::UpdateCrlRequest() : 
    m_crlDataHasBeenSet(false),
    m_crlIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String UpdateCrlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_crlDataHasBeenSet)
  {
   payload.WithString("crlData", HashingUtils::Base64Encode(m_crlData));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload.View().WriteReadable();
}




