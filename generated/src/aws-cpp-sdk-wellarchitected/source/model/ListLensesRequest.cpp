/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListLensesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListLensesRequest::SerializePayload() const
{
  return {};
}

void ListLensesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
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

    if(m_lensTypeHasBeenSet)
    {
      ss << LensTypeMapper::GetNameForLensType(m_lensType);
      uri.AddQueryStringParameter("LensType", ss.str());
      ss.str("");
    }

    if(m_lensStatusHasBeenSet)
    {
      ss << LensStatusTypeMapper::GetNameForLensStatusType(m_lensStatus);
      uri.AddQueryStringParameter("LensStatus", ss.str());
      ss.str("");
    }

    if(m_lensNameHasBeenSet)
    {
      ss << m_lensName;
      uri.AddQueryStringParameter("LensName", ss.str());
      ss.str("");
    }

}



