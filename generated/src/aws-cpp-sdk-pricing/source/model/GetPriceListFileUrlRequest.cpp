/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pricing/model/GetPriceListFileUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pricing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPriceListFileUrlRequest::GetPriceListFileUrlRequest() : 
    m_priceListArnHasBeenSet(false),
    m_fileFormatHasBeenSet(false)
{
}

Aws::String GetPriceListFileUrlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_priceListArnHasBeenSet)
  {
   payload.WithString("PriceListArn", m_priceListArn);

  }

  if(m_fileFormatHasBeenSet)
  {
   payload.WithString("FileFormat", m_fileFormat);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetPriceListFileUrlRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPriceListService.GetPriceListFileUrl"));
  return headers;

}




