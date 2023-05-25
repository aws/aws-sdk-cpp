/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/CreateOrderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateOrderRequest::CreateOrderRequest() : 
    m_outpostIdentifierHasBeenSet(false),
    m_lineItemsHasBeenSet(false),
    m_paymentOption(PaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_paymentTerm(PaymentTerm::NOT_SET),
    m_paymentTermHasBeenSet(false)
{
}

Aws::String CreateOrderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_outpostIdentifierHasBeenSet)
  {
   payload.WithString("OutpostIdentifier", m_outpostIdentifier);

  }

  if(m_lineItemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lineItemsJsonList(m_lineItems.size());
   for(unsigned lineItemsIndex = 0; lineItemsIndex < lineItemsJsonList.GetLength(); ++lineItemsIndex)
   {
     lineItemsJsonList[lineItemsIndex].AsObject(m_lineItems[lineItemsIndex].Jsonize());
   }
   payload.WithArray("LineItems", std::move(lineItemsJsonList));

  }

  if(m_paymentOptionHasBeenSet)
  {
   payload.WithString("PaymentOption", PaymentOptionMapper::GetNameForPaymentOption(m_paymentOption));
  }

  if(m_paymentTermHasBeenSet)
  {
   payload.WithString("PaymentTerm", PaymentTermMapper::GetNameForPaymentTerm(m_paymentTerm));
  }

  return payload.View().WriteReadable();
}




