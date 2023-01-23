/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/GetTerminologyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Translate::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTerminologyRequest::GetTerminologyRequest() : 
    m_nameHasBeenSet(false),
    m_terminologyDataFormat(TerminologyDataFormat::NOT_SET),
    m_terminologyDataFormatHasBeenSet(false)
{
}

Aws::String GetTerminologyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_terminologyDataFormatHasBeenSet)
  {
   payload.WithString("TerminologyDataFormat", TerminologyDataFormatMapper::GetNameForTerminologyDataFormat(m_terminologyDataFormat));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTerminologyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShineFrontendService_20170701.GetTerminology"));
  return headers;

}




