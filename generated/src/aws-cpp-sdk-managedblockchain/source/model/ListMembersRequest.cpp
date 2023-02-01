/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/ListMembersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListMembersRequest::ListMembersRequest() : 
    m_networkIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(MemberStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_isOwned(false),
    m_isOwnedHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListMembersRequest::SerializePayload() const
{
  return {};
}

void ListMembersRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nameHasBeenSet)
    {
      ss << m_name;
      uri.AddQueryStringParameter("name", ss.str());
      ss.str("");
    }

    if(m_statusHasBeenSet)
    {
      ss << MemberStatusMapper::GetNameForMemberStatus(m_status);
      uri.AddQueryStringParameter("status", ss.str());
      ss.str("");
    }

    if(m_isOwnedHasBeenSet)
    {
      ss << m_isOwned;
      uri.AddQueryStringParameter("isOwned", ss.str());
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

}



