/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/GetLoaderJobStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetLoaderJobStatusRequest::SerializePayload() const
{
  return {};
}

void GetLoaderJobStatusRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_detailsHasBeenSet)
    {
      ss << m_details;
      uri.AddQueryStringParameter("details", ss.str());
      ss.str("");
    }

    if(m_errorsHasBeenSet)
    {
      ss << m_errors;
      uri.AddQueryStringParameter("errors", ss.str());
      ss.str("");
    }

    if(m_pageHasBeenSet)
    {
      ss << m_page;
      uri.AddQueryStringParameter("page", ss.str());
      ss.str("");
    }

    if(m_errorsPerPageHasBeenSet)
    {
      ss << m_errorsPerPage;
      uri.AddQueryStringParameter("errorsPerPage", ss.str());
      ss.str("");
    }

}



