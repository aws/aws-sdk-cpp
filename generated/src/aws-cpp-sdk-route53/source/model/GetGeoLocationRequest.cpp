/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/GetGeoLocationRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

GetGeoLocationRequest::GetGeoLocationRequest() : 
    m_continentCodeHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_subdivisionCodeHasBeenSet(false)
{
}

Aws::String GetGeoLocationRequest::SerializePayload() const
{
  return {};
}

void GetGeoLocationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_continentCodeHasBeenSet)
    {
      ss << m_continentCode;
      uri.AddQueryStringParameter("continentcode", ss.str());
      ss.str("");
    }

    if(m_countryCodeHasBeenSet)
    {
      ss << m_countryCode;
      uri.AddQueryStringParameter("countrycode", ss.str());
      ss.str("");
    }

    if(m_subdivisionCodeHasBeenSet)
    {
      ss << m_subdivisionCode;
      uri.AddQueryStringParameter("subdivisioncode", ss.str());
      ss.str("");
    }

}

