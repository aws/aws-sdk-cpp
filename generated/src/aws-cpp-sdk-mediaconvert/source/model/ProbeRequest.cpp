/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ProbeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ProbeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inputFilesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputFilesJsonList(m_inputFiles.size());
   for(unsigned inputFilesIndex = 0; inputFilesIndex < inputFilesJsonList.GetLength(); ++inputFilesIndex)
   {
     inputFilesJsonList[inputFilesIndex].AsObject(m_inputFiles[inputFilesIndex].Jsonize());
   }
   payload.WithArray("inputFiles", std::move(inputFilesJsonList));

  }

  return payload.View().WriteReadable();
}




