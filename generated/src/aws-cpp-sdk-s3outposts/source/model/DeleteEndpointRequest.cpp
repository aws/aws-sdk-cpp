/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3outposts/model/DeleteEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteEndpointRequest::DeleteEndpointRequest() : 
    m_endpointIdHasBeenSet(false),
    m_outpostIdHasBeenSet(false)
{
}

Aws::String DeleteEndpointRequest::SerializePayload() const
{
  return {};
}

void DeleteEndpointRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_endpointIdHasBeenSet)
    {
      ss << m_endpointId;
      uri.AddQueryStringParameter("endpointId", ss.str());
      ss.str("");
    }

    if(m_outpostIdHasBeenSet)
    {
      ss << m_outpostId;
      uri.AddQueryStringParameter("outpostId", ss.str());
      ss.str("");
    }

}



