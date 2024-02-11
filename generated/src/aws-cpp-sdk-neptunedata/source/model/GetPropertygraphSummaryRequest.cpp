/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/GetPropertygraphSummaryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetPropertygraphSummaryRequest::GetPropertygraphSummaryRequest() : 
    m_mode(GraphSummaryType::NOT_SET),
    m_modeHasBeenSet(false)
{
}

Aws::String GetPropertygraphSummaryRequest::SerializePayload() const
{
  return {};
}

void GetPropertygraphSummaryRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_modeHasBeenSet)
    {
      ss << GraphSummaryTypeMapper::GetNameForGraphSummaryType(m_mode);
      uri.AddQueryStringParameter("mode", ss.str());
      ss.str("");
    }

}



