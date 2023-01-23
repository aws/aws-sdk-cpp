/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DescribeCopyProductStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCopyProductStatusRequest::DescribeCopyProductStatusRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_copyProductTokenHasBeenSet(false)
{
}

Aws::String DescribeCopyProductStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_copyProductTokenHasBeenSet)
  {
   payload.WithString("CopyProductToken", m_copyProductToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeCopyProductStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.DescribeCopyProductStatus"));
  return headers;

}




