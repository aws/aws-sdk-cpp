﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/GeoLocationDetails.h>
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

GeoLocationDetails::GeoLocationDetails(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

GeoLocationDetails& GeoLocationDetails::operator =(const XmlNode& xmlNode)
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
    XmlNode continentNameNode = resultNode.FirstChild("ContinentName");
    if(!continentNameNode.IsNull())
    {
      m_continentName = Aws::Utils::Xml::DecodeEscapedXmlText(continentNameNode.GetText());
      m_continentNameHasBeenSet = true;
    }
    XmlNode countryCodeNode = resultNode.FirstChild("CountryCode");
    if(!countryCodeNode.IsNull())
    {
      m_countryCode = Aws::Utils::Xml::DecodeEscapedXmlText(countryCodeNode.GetText());
      m_countryCodeHasBeenSet = true;
    }
    XmlNode countryNameNode = resultNode.FirstChild("CountryName");
    if(!countryNameNode.IsNull())
    {
      m_countryName = Aws::Utils::Xml::DecodeEscapedXmlText(countryNameNode.GetText());
      m_countryNameHasBeenSet = true;
    }
    XmlNode subdivisionCodeNode = resultNode.FirstChild("SubdivisionCode");
    if(!subdivisionCodeNode.IsNull())
    {
      m_subdivisionCode = Aws::Utils::Xml::DecodeEscapedXmlText(subdivisionCodeNode.GetText());
      m_subdivisionCodeHasBeenSet = true;
    }
    XmlNode subdivisionNameNode = resultNode.FirstChild("SubdivisionName");
    if(!subdivisionNameNode.IsNull())
    {
      m_subdivisionName = Aws::Utils::Xml::DecodeEscapedXmlText(subdivisionNameNode.GetText());
      m_subdivisionNameHasBeenSet = true;
    }
  }

  return *this;
}

void GeoLocationDetails::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_continentCodeHasBeenSet)
  {
   XmlNode continentCodeNode = parentNode.CreateChildElement("ContinentCode");
   continentCodeNode.SetText(m_continentCode);
  }

  if(m_continentNameHasBeenSet)
  {
   XmlNode continentNameNode = parentNode.CreateChildElement("ContinentName");
   continentNameNode.SetText(m_continentName);
  }

  if(m_countryCodeHasBeenSet)
  {
   XmlNode countryCodeNode = parentNode.CreateChildElement("CountryCode");
   countryCodeNode.SetText(m_countryCode);
  }

  if(m_countryNameHasBeenSet)
  {
   XmlNode countryNameNode = parentNode.CreateChildElement("CountryName");
   countryNameNode.SetText(m_countryName);
  }

  if(m_subdivisionCodeHasBeenSet)
  {
   XmlNode subdivisionCodeNode = parentNode.CreateChildElement("SubdivisionCode");
   subdivisionCodeNode.SetText(m_subdivisionCode);
  }

  if(m_subdivisionNameHasBeenSet)
  {
   XmlNode subdivisionNameNode = parentNode.CreateChildElement("SubdivisionName");
   subdivisionNameNode.SetText(m_subdivisionName);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
