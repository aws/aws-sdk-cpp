/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/DescribeAgreementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAgreementRequest::DescribeAgreementRequest() : 
    m_agreementIdHasBeenSet(false)
{
}

Aws::String DescribeAgreementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agreementIdHasBeenSet)
  {
   payload.WithString("agreementId", m_agreementId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAgreementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMPCommerceService_v20200301.DescribeAgreement"));
  return headers;

}




