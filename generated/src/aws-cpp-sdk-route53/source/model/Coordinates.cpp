/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/Coordinates.h>
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

Coordinates::Coordinates() : 
    m_latitudeHasBeenSet(false),
    m_longitudeHasBeenSet(false)
{
}

Coordinates::Coordinates(const XmlNode& xmlNode) : 
    m_latitudeHasBeenSet(false),
    m_longitudeHasBeenSet(false)
{
  *this = xmlNode;
}

Coordinates& Coordinates::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode latitudeNode = resultNode.FirstChild("Latitude");
    if(!latitudeNode.IsNull())
    {
      m_latitude = Aws::Utils::Xml::DecodeEscapedXmlText(latitudeNode.GetText());
      m_latitudeHasBeenSet = true;
    }
    XmlNode longitudeNode = resultNode.FirstChild("Longitude");
    if(!longitudeNode.IsNull())
    {
      m_longitude = Aws::Utils::Xml::DecodeEscapedXmlText(longitudeNode.GetText());
      m_longitudeHasBeenSet = true;
    }
  }

  return *this;
}

void Coordinates::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_latitudeHasBeenSet)
  {
   XmlNode latitudeNode = parentNode.CreateChildElement("Latitude");
   latitudeNode.SetText(m_latitude);
  }

  if(m_longitudeHasBeenSet)
  {
   XmlNode longitudeNode = parentNode.CreateChildElement("Longitude");
   longitudeNode.SetText(m_longitude);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
