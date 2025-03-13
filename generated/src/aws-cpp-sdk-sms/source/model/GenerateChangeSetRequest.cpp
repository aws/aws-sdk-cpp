/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/GenerateChangeSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GenerateChangeSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_changesetFormatHasBeenSet)
  {
   payload.WithString("changesetFormat", OutputFormatMapper::GetNameForOutputFormat(m_changesetFormat));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GenerateChangeSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSServerMigrationService_V2016_10_24.GenerateChangeSet"));
  return headers;

}




