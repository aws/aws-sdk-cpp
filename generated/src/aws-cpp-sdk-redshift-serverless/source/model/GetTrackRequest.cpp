/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/GetTrackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetTrackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trackNameHasBeenSet)
  {
   payload.WithString("trackName", m_trackName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTrackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.GetTrack"));
  return headers;

}




