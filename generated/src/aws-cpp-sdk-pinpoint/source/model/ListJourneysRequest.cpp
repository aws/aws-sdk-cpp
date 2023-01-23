/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/ListJourneysRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListJourneysRequest::ListJourneysRequest() : 
    m_applicationIdHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_tokenHasBeenSet(false)
{
}

Aws::String ListJourneysRequest::SerializePayload() const
{
  return {};
}

void ListJourneysRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_pageSizeHasBeenSet)
    {
      ss << m_pageSize;
      uri.AddQueryStringParameter("page-size", ss.str());
      ss.str("");
    }

    if(m_tokenHasBeenSet)
    {
      ss << m_token;
      uri.AddQueryStringParameter("token", ss.str());
      ss.str("");
    }

}



