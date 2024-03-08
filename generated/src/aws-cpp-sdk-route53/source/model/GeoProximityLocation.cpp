/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/GeoProximityLocation.h>
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

GeoProximityLocation::GeoProximityLocation() : 
    m_aWSRegionHasBeenSet(false),
    m_localZoneGroupHasBeenSet(false),
    m_coordinatesHasBeenSet(false),
    m_bias(0),
    m_biasHasBeenSet(false)
{
}

GeoProximityLocation::GeoProximityLocation(const XmlNode& xmlNode) : 
    m_aWSRegionHasBeenSet(false),
    m_localZoneGroupHasBeenSet(false),
    m_coordinatesHasBeenSet(false),
    m_bias(0),
    m_biasHasBeenSet(false)
{
  *this = xmlNode;
}

GeoProximityLocation& GeoProximityLocation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode aWSRegionNode = resultNode.FirstChild("AWSRegion");
    if(!aWSRegionNode.IsNull())
    {
      m_aWSRegion = Aws::Utils::Xml::DecodeEscapedXmlText(aWSRegionNode.GetText());
      m_aWSRegionHasBeenSet = true;
    }
    XmlNode localZoneGroupNode = resultNode.FirstChild("LocalZoneGroup");
    if(!localZoneGroupNode.IsNull())
    {
      m_localZoneGroup = Aws::Utils::Xml::DecodeEscapedXmlText(localZoneGroupNode.GetText());
      m_localZoneGroupHasBeenSet = true;
    }
    XmlNode coordinatesNode = resultNode.FirstChild("Coordinates");
    if(!coordinatesNode.IsNull())
    {
      m_coordinates = coordinatesNode;
      m_coordinatesHasBeenSet = true;
    }
    XmlNode biasNode = resultNode.FirstChild("Bias");
    if(!biasNode.IsNull())
    {
      m_bias = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(biasNode.GetText()).c_str()).c_str());
      m_biasHasBeenSet = true;
    }
  }

  return *this;
}

void GeoProximityLocation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_aWSRegionHasBeenSet)
  {
   XmlNode aWSRegionNode = parentNode.CreateChildElement("AWSRegion");
   aWSRegionNode.SetText(m_aWSRegion);
  }

  if(m_localZoneGroupHasBeenSet)
  {
   XmlNode localZoneGroupNode = parentNode.CreateChildElement("LocalZoneGroup");
   localZoneGroupNode.SetText(m_localZoneGroup);
  }

  if(m_coordinatesHasBeenSet)
  {
   XmlNode coordinatesNode = parentNode.CreateChildElement("Coordinates");
   m_coordinates.AddToNode(coordinatesNode);
  }

  if(m_biasHasBeenSet)
  {
   XmlNode biasNode = parentNode.CreateChildElement("Bias");
   ss << m_bias;
   biasNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
