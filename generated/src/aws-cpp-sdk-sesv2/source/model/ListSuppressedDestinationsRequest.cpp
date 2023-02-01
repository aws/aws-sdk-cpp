/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ListSuppressedDestinationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListSuppressedDestinationsRequest::ListSuppressedDestinationsRequest() : 
    m_reasonsHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false)
{
}

Aws::String ListSuppressedDestinationsRequest::SerializePayload() const
{
  return {};
}

void ListSuppressedDestinationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_reasonsHasBeenSet)
    {
      for(const auto& item : m_reasons)
      {
        ss << SuppressionListReasonMapper::GetNameForSuppressionListReason(item);
        uri.AddQueryStringParameter("Reason", ss.str());
        ss.str("");
      }
    }

    if(m_startDateHasBeenSet)
    {
      ss << m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("StartDate", ss.str());
      ss.str("");
    }

    if(m_endDateHasBeenSet)
    {
      ss << m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("EndDate", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_pageSizeHasBeenSet)
    {
      ss << m_pageSize;
      uri.AddQueryStringParameter("PageSize", ss.str());
      ss.str("");
    }

}



