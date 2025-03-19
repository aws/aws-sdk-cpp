/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationFieldValuesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeRegistrationFieldValuesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_registrationIdHasBeenSet)
  {
   payload.WithString("RegistrationId", m_registrationId);

  }

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInt64("VersionNumber", m_versionNumber);

  }

  if(m_sectionPathHasBeenSet)
  {
   payload.WithString("SectionPath", m_sectionPath);

  }

  if(m_fieldPathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldPathsJsonList(m_fieldPaths.size());
   for(unsigned fieldPathsIndex = 0; fieldPathsIndex < fieldPathsJsonList.GetLength(); ++fieldPathsIndex)
   {
     fieldPathsJsonList[fieldPathsIndex].AsString(m_fieldPaths[fieldPathsIndex]);
   }
   payload.WithArray("FieldPaths", std::move(fieldPathsJsonList));

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

Aws::Http::HeaderValueCollection DescribeRegistrationFieldValuesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.DescribeRegistrationFieldValues"));
  return headers;

}




