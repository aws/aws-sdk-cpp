/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/GeoLocation.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

GeoLocation::GeoLocation() : 
    m_continentCodeHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_subdivisionCodeHasBeenSet(false)
{
}

GeoLocation::GeoLocation(const XmlNode& xmlNode) : 
    m_continentCodeHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_subdivisionCodeHasBeenSet(false)
{
  *this = xmlNode;
}

GeoLocation& GeoLocation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode continentCodeNode = resultNode.FirstChild("ContinentCode");
    if(!continentCodeNode.IsNull())
    {
      m_continentCode = Aws::Utils::Xml::DecodeEscapedXmlText(continentCodeNode.GetText());
      m_continentCodeHasBeenSet = true;
    }
    XmlNode countryCodeNode = resultNode.FirstChild("CountryCode");
    if(!countryCodeNode.IsNull())
    {
      m_countryCode = Aws::Utils::Xml::DecodeEscapedXmlText(countryCodeNode.GetText());
      m_countryCodeHasBeenSet = true;
    }
    XmlNode subdivisionCodeNode = resultNode.FirstChild("SubdivisionCode");
    if(!subdivisionCodeNode.IsNull())
    {
      m_subdivisionCode = Aws::Utils::Xml::DecodeEscapedXmlText(subdivisionCodeNode.GetText());
      m_subdivisionCodeHasBeenSet = true;
    }
  }

  return *this;
}

void GeoLocation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_continentCodeHasBeenSet)
  {
   XmlNode continentCodeNode = parentNode.CreateChildElement("ContinentCode");
   continentCodeNode.SetText(m_continentCode);
  }

  if(m_countryCodeHasBeenSet)
  {
   XmlNode countryCodeNode = parentNode.CreateChildElement("CountryCode");
   countryCodeNode.SetText(m_countryCode);
  }

  if(m_subdivisionCodeHasBeenSet)
  {
   XmlNode subdivisionCodeNode = parentNode.CreateChildElement("SubdivisionCode");
   subdivisionCodeNode.SetText(m_subdivisionCode);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
