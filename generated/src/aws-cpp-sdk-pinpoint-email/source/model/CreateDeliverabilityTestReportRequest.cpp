/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/CreateDeliverabilityTestReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDeliverabilityTestReportRequest::CreateDeliverabilityTestReportRequest() : 
    m_reportNameHasBeenSet(false),
    m_fromEmailAddressHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDeliverabilityTestReportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reportNameHasBeenSet)
  {
   payload.WithString("ReportName", m_reportName);

  }

  if(m_fromEmailAddressHasBeenSet)
  {
   payload.WithString("FromEmailAddress", m_fromEmailAddress);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithObject("Content", m_content.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




