/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/CreateRobotApplicationVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRobotApplicationVersionRequest::CreateRobotApplicationVersionRequest() : 
    m_applicationHasBeenSet(false),
    m_currentRevisionIdHasBeenSet(false),
    m_s3EtagsHasBeenSet(false),
    m_imageDigestHasBeenSet(false)
{
}

Aws::String CreateRobotApplicationVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationHasBeenSet)
  {
   payload.WithString("application", m_application);

  }

  if(m_currentRevisionIdHasBeenSet)
  {
   payload.WithString("currentRevisionId", m_currentRevisionId);

  }

  if(m_s3EtagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> s3EtagsJsonList(m_s3Etags.size());
   for(unsigned s3EtagsIndex = 0; s3EtagsIndex < s3EtagsJsonList.GetLength(); ++s3EtagsIndex)
   {
     s3EtagsJsonList[s3EtagsIndex].AsString(m_s3Etags[s3EtagsIndex]);
   }
   payload.WithArray("s3Etags", std::move(s3EtagsJsonList));

  }

  if(m_imageDigestHasBeenSet)
  {
   payload.WithString("imageDigest", m_imageDigest);

  }

  return payload.View().WriteReadable();
}




