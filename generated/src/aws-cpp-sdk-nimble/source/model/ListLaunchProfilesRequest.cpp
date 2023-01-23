/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/ListLaunchProfilesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListLaunchProfilesRequest::ListLaunchProfilesRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_statesHasBeenSet(false),
    m_studioIdHasBeenSet(false)
{
}

Aws::String ListLaunchProfilesRequest::SerializePayload() const
{
  return {};
}

void ListLaunchProfilesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
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

    if(m_principalIdHasBeenSet)
    {
      ss << m_principalId;
      uri.AddQueryStringParameter("principalId", ss.str());
      ss.str("");
    }

    if(m_statesHasBeenSet)
    {
      for(const auto& item : m_states)
      {
        ss << LaunchProfileStateMapper::GetNameForLaunchProfileState(item);
        uri.AddQueryStringParameter("states", ss.str());
        ss.str("");
      }
    }

}



