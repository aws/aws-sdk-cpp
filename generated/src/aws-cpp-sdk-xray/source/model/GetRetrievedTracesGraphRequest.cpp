﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/GetRetrievedTracesGraphRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRetrievedTracesGraphRequest::GetRetrievedTracesGraphRequest() : 
    m_retrievalTokenHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetRetrievedTracesGraphRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_retrievalTokenHasBeenSet)
  {
   payload.WithString("RetrievalToken", m_retrievalToken);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




