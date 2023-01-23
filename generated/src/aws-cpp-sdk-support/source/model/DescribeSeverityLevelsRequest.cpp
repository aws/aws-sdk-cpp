/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/DescribeSeverityLevelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeSeverityLevelsRequest::DescribeSeverityLevelsRequest() : 
    m_languageHasBeenSet(false)
{
}

Aws::String DescribeSeverityLevelsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", m_language);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeSeverityLevelsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSupport_20130415.DescribeSeverityLevels"));
  return headers;

}




