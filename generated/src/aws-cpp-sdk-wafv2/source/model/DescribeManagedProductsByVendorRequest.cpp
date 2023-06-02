/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/DescribeManagedProductsByVendorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeManagedProductsByVendorRequest::DescribeManagedProductsByVendorRequest() : 
    m_vendorNameHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false)
{
}

Aws::String DescribeManagedProductsByVendorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vendorNameHasBeenSet)
  {
   payload.WithString("VendorName", m_vendorName);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", ScopeMapper::GetNameForScope(m_scope));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeManagedProductsByVendorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.DescribeManagedProductsByVendor"));
  return headers;

}




