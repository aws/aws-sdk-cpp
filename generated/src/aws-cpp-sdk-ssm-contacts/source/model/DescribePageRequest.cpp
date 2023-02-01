/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/DescribePageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribePageRequest::DescribePageRequest() : 
    m_pageIdHasBeenSet(false)
{
}

Aws::String DescribePageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pageIdHasBeenSet)
  {
   payload.WithString("PageId", m_pageId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribePageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SSMContacts.DescribePage"));
  return headers;

}




