/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListProfilesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListProfilesRequest::ListProfilesRequest() : 
    m_profileNamePrefixHasBeenSet(false),
    m_profileOwnerType(ProfileOwnerType::NOT_SET),
    m_profileOwnerTypeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListProfilesRequest::SerializePayload() const
{
  return {};
}

void ListProfilesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_profileNamePrefixHasBeenSet)
    {
      ss << m_profileNamePrefix;
      uri.AddQueryStringParameter("ProfileNamePrefix", ss.str());
      ss.str("");
    }

    if(m_profileOwnerTypeHasBeenSet)
    {
      ss << ProfileOwnerTypeMapper::GetNameForProfileOwnerType(m_profileOwnerType);
      uri.AddQueryStringParameter("ProfileOwnerType", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

}



