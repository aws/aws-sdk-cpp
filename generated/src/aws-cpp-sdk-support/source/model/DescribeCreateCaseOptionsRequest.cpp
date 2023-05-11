/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/DescribeCreateCaseOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCreateCaseOptionsRequest::DescribeCreateCaseOptionsRequest() : 
    m_issueTypeHasBeenSet(false),
    m_serviceCodeHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_categoryCodeHasBeenSet(false)
{
}

Aws::String DescribeCreateCaseOptionsRequest::SerializePayload() const
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

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", m_language);

  }

  if(m_categoryCodeHasBeenSet)
  {
   payload.WithString("categoryCode", m_categoryCode);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeCreateCaseOptionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSupport_20130415.DescribeCreateCaseOptions"));
  return headers;

}




