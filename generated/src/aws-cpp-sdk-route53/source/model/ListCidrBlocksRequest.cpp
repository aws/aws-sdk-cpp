/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListCidrBlocksRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

ListCidrBlocksRequest::ListCidrBlocksRequest() : 
    m_collectionIdHasBeenSet(false),
    m_locationNameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListCidrBlocksRequest::SerializePayload() const
{
  return {};
}

void ListCidrBlocksRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_locationNameHasBeenSet)
    {
      ss << m_locationName;
      uri.AddQueryStringParameter("location", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nexttoken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxresults", ss.str());
      ss.str("");
    }

}

