﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/oam/model/DeleteSinkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSinkRequest::DeleteSinkRequest() : 
    m_identifierHasBeenSet(false)
{
}

Aws::String DeleteSinkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  return payload.View().WriteReadable();
}




