/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/DescribeCasesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCasesRequest::DescribeCasesRequest() : 
    m_caseIdListHasBeenSet(false),
    m_displayIdHasBeenSet(false),
    m_afterTimeHasBeenSet(false),
    m_beforeTimeHasBeenSet(false),
    m_includeResolvedCases(false),
    m_includeResolvedCasesHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_includeCommunications(false),
    m_includeCommunicationsHasBeenSet(false)
{
}

Aws::String DescribeCasesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_caseIdListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> caseIdListJsonList(m_caseIdList.size());
   for(unsigned caseIdListIndex = 0; caseIdListIndex < caseIdListJsonList.GetLength(); ++caseIdListIndex)
   {
     caseIdListJsonList[caseIdListIndex].AsString(m_caseIdList[caseIdListIndex]);
   }
   payload.WithArray("caseIdList", std::move(caseIdListJsonList));

  }

  if(m_displayIdHasBeenSet)
  {
   payload.WithString("displayId", m_displayId);

  }

  if(m_afterTimeHasBeenSet)
  {
   payload.WithString("afterTime", m_afterTime);

  }

  if(m_beforeTimeHasBeenSet)
  {
   payload.WithString("beforeTime", m_beforeTime);

  }

  if(m_includeResolvedCasesHasBeenSet)
  {
   payload.WithBool("includeResolvedCases", m_includeResolvedCases);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", m_language);

  }

  if(m_includeCommunicationsHasBeenSet)
  {
   payload.WithBool("includeCommunications", m_includeCommunications);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeCasesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSupport_20130415.DescribeCases"));
  return headers;

}




