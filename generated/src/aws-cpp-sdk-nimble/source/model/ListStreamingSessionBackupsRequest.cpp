/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/ListStreamingSessionBackupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListStreamingSessionBackupsRequest::ListStreamingSessionBackupsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_ownedByHasBeenSet(false),
    m_studioIdHasBeenSet(false)
{
}

Aws::String ListStreamingSessionBackupsRequest::SerializePayload() const
{
  return {};
}

void ListStreamingSessionBackupsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_ownedByHasBeenSet)
    {
      ss << m_ownedBy;
      uri.AddQueryStringParameter("ownedBy", ss.str());
      ss.str("");
    }

}



