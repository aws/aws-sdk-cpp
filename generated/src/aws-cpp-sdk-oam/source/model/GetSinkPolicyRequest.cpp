/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/oam/model/GetSinkPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSinkPolicyRequest::GetSinkPolicyRequest() : 
    m_sinkIdentifierHasBeenSet(false)
{
}

Aws::String GetSinkPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sinkIdentifierHasBeenSet)
  {
   payload.WithString("SinkIdentifier", m_sinkIdentifier);

  }

  return payload.View().WriteReadable();
}




