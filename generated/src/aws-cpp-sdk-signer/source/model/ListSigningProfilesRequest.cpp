/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/ListSigningProfilesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListSigningProfilesRequest::ListSigningProfilesRequest() : 
    m_includeCanceled(false),
    m_includeCanceledHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_statusesHasBeenSet(false)
{
}

Aws::String ListSigningProfilesRequest::SerializePayload() const
{
  return {};
}

void ListSigningProfilesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_includeCanceledHasBeenSet)
    {
      ss << m_includeCanceled;
      uri.AddQueryStringParameter("includeCanceled", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_platformIdHasBeenSet)
    {
      ss << m_platformId;
      uri.AddQueryStringParameter("platformId", ss.str());
      ss.str("");
    }

    if(m_statusesHasBeenSet)
    {
      for(const auto& item : m_statuses)
      {
        ss << SigningProfileStatusMapper::GetNameForSigningProfileStatus(item);
        uri.AddQueryStringParameter("statuses", ss.str());
        ss.str("");
      }
    }

}



