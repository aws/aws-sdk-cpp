/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/CancelOpenCypherQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

CancelOpenCypherQueryRequest::CancelOpenCypherQueryRequest() : 
    m_queryIdHasBeenSet(false),
    m_silent(false),
    m_silentHasBeenSet(false)
{
}

Aws::String CancelOpenCypherQueryRequest::SerializePayload() const
{
  return {};
}

void CancelOpenCypherQueryRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_silentHasBeenSet)
    {
      ss << m_silent;
      uri.AddQueryStringParameter("silent", ss.str());
      ss.str("");
    }

}



