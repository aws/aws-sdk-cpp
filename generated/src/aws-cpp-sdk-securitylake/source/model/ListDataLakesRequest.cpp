/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/ListDataLakesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListDataLakesRequest::ListDataLakesRequest() : 
    m_regionsHasBeenSet(false)
{
}

Aws::String ListDataLakesRequest::SerializePayload() const
{
  return {};
}

void ListDataLakesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_regionsHasBeenSet)
    {
      for(const auto& item : m_regions)
      {
        ss << item;
        uri.AddQueryStringParameter("regions", ss.str());
        ss.str("");
      }
    }

}



