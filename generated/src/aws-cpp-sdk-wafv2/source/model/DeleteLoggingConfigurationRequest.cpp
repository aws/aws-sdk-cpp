/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/DeleteLoggingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteLoggingConfigurationRequest::DeleteLoggingConfigurationRequest() : 
    m_resourceArnHasBeenSet(false),
    m_logType(LogType::NOT_SET),
    m_logTypeHasBeenSet(false),
    m_logScope(LogScope::NOT_SET),
    m_logScopeHasBeenSet(false)
{
}

Aws::String DeleteLoggingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_logTypeHasBeenSet)
  {
   payload.WithString("LogType", LogTypeMapper::GetNameForLogType(m_logType));
  }

  if(m_logScopeHasBeenSet)
  {
   payload.WithString("LogScope", LogScopeMapper::GetNameForLogScope(m_logScope));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteLoggingConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.DeleteLoggingConfiguration"));
  return headers;

}




