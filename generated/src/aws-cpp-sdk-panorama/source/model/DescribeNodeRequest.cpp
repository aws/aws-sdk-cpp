/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DescribeNodeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeNodeRequest::DescribeNodeRequest() : 
    m_nodeIdHasBeenSet(false),
    m_ownerAccountHasBeenSet(false)
{
}

Aws::String DescribeNodeRequest::SerializePayload() const
{
  return {};
}

void DescribeNodeRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_ownerAccountHasBeenSet)
    {
      ss << m_ownerAccount;
      uri.AddQueryStringParameter("OwnerAccount", ss.str());
      ss.str("");
    }

}



