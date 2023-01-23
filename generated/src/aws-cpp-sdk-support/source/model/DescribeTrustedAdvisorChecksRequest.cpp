/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/DescribeTrustedAdvisorChecksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeTrustedAdvisorChecksRequest::DescribeTrustedAdvisorChecksRequest() : 
    m_languageHasBeenSet(false)
{
}

Aws::String DescribeTrustedAdvisorChecksRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", m_language);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeTrustedAdvisorChecksRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSupport_20130415.DescribeTrustedAdvisorChecks"));
  return headers;

}




