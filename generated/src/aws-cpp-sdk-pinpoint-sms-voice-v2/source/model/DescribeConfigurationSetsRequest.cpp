/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeConfigurationSetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeConfigurationSetsRequest::DescribeConfigurationSetsRequest() : 
    m_configurationSetNamesHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeConfigurationSetsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationSetNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationSetNamesJsonList(m_configurationSetNames.size());
   for(unsigned configurationSetNamesIndex = 0; configurationSetNamesIndex < configurationSetNamesJsonList.GetLength(); ++configurationSetNamesIndex)
   {
     configurationSetNamesJsonList[configurationSetNamesIndex].AsString(m_configurationSetNames[configurationSetNamesIndex]);
   }
   payload.WithArray("ConfigurationSetNames", std::move(configurationSetNamesJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

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

Aws::Http::HeaderValueCollection DescribeConfigurationSetsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.DescribeConfigurationSets"));
  return headers;

}




