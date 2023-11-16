/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DescribeApplicationProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeApplicationProviderRequest::DescribeApplicationProviderRequest() : 
    m_applicationProviderArnHasBeenSet(false)
{
}

Aws::String DescribeApplicationProviderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationProviderArnHasBeenSet)
  {
   payload.WithString("ApplicationProviderArn", m_applicationProviderArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeApplicationProviderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.DescribeApplicationProvider"));
  return headers;

}




