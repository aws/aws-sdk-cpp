/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/HostedZoneConfig.h>
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

HostedZoneConfig::HostedZoneConfig() : 
    m_commentHasBeenSet(false),
    m_privateZone(false),
    m_privateZoneHasBeenSet(false)
{
}

HostedZoneConfig::HostedZoneConfig(const XmlNode& xmlNode) : 
    m_commentHasBeenSet(false),
    m_privateZone(false),
    m_privateZoneHasBeenSet(false)
{
  *this = xmlNode;
}

HostedZoneConfig& HostedZoneConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = Aws::Utils::Xml::DecodeEscapedXmlText(commentNode.GetText());
      m_commentHasBeenSet = true;
    }
    XmlNode privateZoneNode = resultNode.FirstChild("PrivateZone");
    if(!privateZoneNode.IsNull())
    {
      m_privateZone = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(privateZoneNode.GetText()).c_str()).c_str());
      m_privateZoneHasBeenSet = true;
    }
  }

  return *this;
}

void HostedZoneConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

  if(m_privateZoneHasBeenSet)
  {
   XmlNode privateZoneNode = parentNode.CreateChildElement("PrivateZone");
   ss << std::boolalpha << m_privateZone;
   privateZoneNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
