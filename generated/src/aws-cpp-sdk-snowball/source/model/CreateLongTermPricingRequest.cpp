/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/CreateLongTermPricingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLongTermPricingRequest::CreateLongTermPricingRequest() : 
    m_longTermPricingType(LongTermPricingType::NOT_SET),
    m_longTermPricingTypeHasBeenSet(false),
    m_isLongTermPricingAutoRenew(false),
    m_isLongTermPricingAutoRenewHasBeenSet(false),
    m_snowballType(SnowballType::NOT_SET),
    m_snowballTypeHasBeenSet(false)
{
}

Aws::String CreateLongTermPricingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_longTermPricingTypeHasBeenSet)
  {
   payload.WithString("LongTermPricingType", LongTermPricingTypeMapper::GetNameForLongTermPricingType(m_longTermPricingType));
  }

  if(m_isLongTermPricingAutoRenewHasBeenSet)
  {
   payload.WithBool("IsLongTermPricingAutoRenew", m_isLongTermPricingAutoRenew);

  }

  if(m_snowballTypeHasBeenSet)
  {
   payload.WithString("SnowballType", SnowballTypeMapper::GetNameForSnowballType(m_snowballType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateLongTermPricingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIESnowballJobManagementService.CreateLongTermPricing"));
  return headers;

}




