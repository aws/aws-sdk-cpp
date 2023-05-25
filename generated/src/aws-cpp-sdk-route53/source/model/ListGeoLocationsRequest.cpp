/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListGeoLocationsRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

ListGeoLocationsRequest::ListGeoLocationsRequest() : 
    m_startContinentCodeHasBeenSet(false),
    m_startCountryCodeHasBeenSet(false),
    m_startSubdivisionCodeHasBeenSet(false),
    m_maxItemsHasBeenSet(false)
{
}

Aws::String ListGeoLocationsRequest::SerializePayload() const
{
  return {};
}

void ListGeoLocationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_startContinentCodeHasBeenSet)
    {
      ss << m_startContinentCode;
      uri.AddQueryStringParameter("startcontinentcode", ss.str());
      ss.str("");
    }

    if(m_startCountryCodeHasBeenSet)
    {
      ss << m_startCountryCode;
      uri.AddQueryStringParameter("startcountrycode", ss.str());
      ss.str("");
    }

    if(m_startSubdivisionCodeHasBeenSet)
    {
      ss << m_startSubdivisionCode;
      uri.AddQueryStringParameter("startsubdivisioncode", ss.str());
      ss.str("");
    }

    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("maxitems", ss.str());
      ss.str("");
    }

}

