﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pricing/model/ListPriceListsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pricing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListPriceListsRequest::ListPriceListsRequest() : 
    m_serviceCodeHasBeenSet(false),
    m_effectiveDateHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListPriceListsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("ServiceCode", m_serviceCode);

  }

  if(m_effectiveDateHasBeenSet)
  {
   payload.WithDouble("EffectiveDate", m_effectiveDate.SecondsWithMSPrecision());
  }

  if(m_regionCodeHasBeenSet)
  {
   payload.WithString("RegionCode", m_regionCode);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("CurrencyCode", m_currencyCode);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListPriceListsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPriceListService.ListPriceLists"));
  return headers;

}




