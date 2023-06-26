/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/DescribeSupportedLanguagesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeSupportedLanguagesRequest::DescribeSupportedLanguagesRequest() : 
    m_issueTypeHasBeenSet(false),
    m_serviceCodeHasBeenSet(false),
    m_categoryCodeHasBeenSet(false)
{
}

Aws::String DescribeSupportedLanguagesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_issueTypeHasBeenSet)
  {
   payload.WithString("issueType", m_issueType);

  }

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("serviceCode", m_serviceCode);

  }

  if(m_categoryCodeHasBeenSet)
  {
   payload.WithString("categoryCode", m_categoryCode);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeSupportedLanguagesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSupport_20130415.DescribeSupportedLanguages"));
  return headers;

}




