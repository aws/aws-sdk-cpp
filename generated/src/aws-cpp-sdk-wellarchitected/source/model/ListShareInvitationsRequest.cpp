/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListShareInvitationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListShareInvitationsRequest::ListShareInvitationsRequest() : 
    m_workloadNamePrefixHasBeenSet(false),
    m_lensNamePrefixHasBeenSet(false),
    m_shareResourceType(ShareResourceType::NOT_SET),
    m_shareResourceTypeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_profileNamePrefixHasBeenSet(false),
    m_templateNamePrefixHasBeenSet(false)
{
}

Aws::String ListShareInvitationsRequest::SerializePayload() const
{
  return {};
}

void ListShareInvitationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_workloadNamePrefixHasBeenSet)
    {
      ss << m_workloadNamePrefix;
      uri.AddQueryStringParameter("WorkloadNamePrefix", ss.str());
      ss.str("");
    }

    if(m_lensNamePrefixHasBeenSet)
    {
      ss << m_lensNamePrefix;
      uri.AddQueryStringParameter("LensNamePrefix", ss.str());
      ss.str("");
    }

    if(m_shareResourceTypeHasBeenSet)
    {
      ss << ShareResourceTypeMapper::GetNameForShareResourceType(m_shareResourceType);
      uri.AddQueryStringParameter("ShareResourceType", ss.str());
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

    if(m_profileNamePrefixHasBeenSet)
    {
      ss << m_profileNamePrefix;
      uri.AddQueryStringParameter("ProfileNamePrefix", ss.str());
      ss.str("");
    }

    if(m_templateNamePrefixHasBeenSet)
    {
      ss << m_templateNamePrefix;
      uri.AddQueryStringParameter("TemplateNamePrefix", ss.str());
      ss.str("");
    }

}



