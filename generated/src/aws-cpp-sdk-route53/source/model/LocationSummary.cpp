/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/LocationSummary.h>
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

LocationSummary::LocationSummary() : 
    m_locationNameHasBeenSet(false)
{
}

LocationSummary::LocationSummary(const XmlNode& xmlNode) : 
    m_locationNameHasBeenSet(false)
{
  *this = xmlNode;
}

LocationSummary& LocationSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode locationNameNode = resultNode.FirstChild("LocationName");
    if(!locationNameNode.IsNull())
    {
      m_locationName = Aws::Utils::Xml::DecodeEscapedXmlText(locationNameNode.GetText());
      m_locationNameHasBeenSet = true;
    }
  }

  return *this;
}

void LocationSummary::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_locationNameHasBeenSet)
  {
   XmlNode locationNameNode = parentNode.CreateChildElement("LocationName");
   locationNameNode.SetText(m_locationName);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
