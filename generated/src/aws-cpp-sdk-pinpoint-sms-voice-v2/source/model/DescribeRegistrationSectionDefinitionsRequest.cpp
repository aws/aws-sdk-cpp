/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationSectionDefinitionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeRegistrationSectionDefinitionsRequest::DescribeRegistrationSectionDefinitionsRequest() : 
    m_registrationTypeHasBeenSet(false),
    m_sectionPathsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeRegistrationSectionDefinitionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_registrationTypeHasBeenSet)
  {
   payload.WithString("RegistrationType", m_registrationType);

  }

  if(m_sectionPathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sectionPathsJsonList(m_sectionPaths.size());
   for(unsigned sectionPathsIndex = 0; sectionPathsIndex < sectionPathsJsonList.GetLength(); ++sectionPathsIndex)
   {
     sectionPathsJsonList[sectionPathsIndex].AsString(m_sectionPaths[sectionPathsIndex]);
   }
   payload.WithArray("SectionPaths", std::move(sectionPathsJsonList));

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

Aws::Http::HeaderValueCollection DescribeRegistrationSectionDefinitionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.DescribeRegistrationSectionDefinitions"));
  return headers;

}




