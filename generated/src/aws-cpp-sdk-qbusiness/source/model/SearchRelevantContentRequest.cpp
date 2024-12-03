/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/SearchRelevantContentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

SearchRelevantContentRequest::SearchRelevantContentRequest() : 
    m_applicationIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userGroupsHasBeenSet(false),
    m_queryTextHasBeenSet(false),
    m_contentSourceHasBeenSet(false),
    m_attributeFilterHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String SearchRelevantContentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryTextHasBeenSet)
  {
   payload.WithString("queryText", m_queryText);

  }

  if(m_contentSourceHasBeenSet)
  {
   payload.WithObject("contentSource", m_contentSource.Jsonize());

  }

  if(m_attributeFilterHasBeenSet)
  {
   payload.WithObject("attributeFilter", m_attributeFilter.Jsonize());

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

void SearchRelevantContentRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_userIdHasBeenSet)
    {
      ss << m_userId;
      uri.AddQueryStringParameter("userId", ss.str());
      ss.str("");
    }

    if(m_userGroupsHasBeenSet)
    {
      for(const auto& item : m_userGroups)
      {
        ss << item;
        uri.AddQueryStringParameter("userGroups", ss.str());
        ss.str("");
      }
    }

}



