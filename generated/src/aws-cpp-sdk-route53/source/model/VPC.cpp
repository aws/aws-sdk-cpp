/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/VPC.h>
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

VPC::VPC() : 
    m_vPCRegion(VPCRegion::NOT_SET),
    m_vPCRegionHasBeenSet(false),
    m_vPCIdHasBeenSet(false)
{
}

VPC::VPC(const XmlNode& xmlNode) : 
    m_vPCRegion(VPCRegion::NOT_SET),
    m_vPCRegionHasBeenSet(false),
    m_vPCIdHasBeenSet(false)
{
  *this = xmlNode;
}

VPC& VPC::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode vPCRegionNode = resultNode.FirstChild("VPCRegion");
    if(!vPCRegionNode.IsNull())
    {
      m_vPCRegion = VPCRegionMapper::GetVPCRegionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(vPCRegionNode.GetText()).c_str()).c_str());
      m_vPCRegionHasBeenSet = true;
    }
    XmlNode vPCIdNode = resultNode.FirstChild("VPCId");
    if(!vPCIdNode.IsNull())
    {
      m_vPCId = Aws::Utils::Xml::DecodeEscapedXmlText(vPCIdNode.GetText());
      m_vPCIdHasBeenSet = true;
    }
  }

  return *this;
}

void VPC::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_vPCRegionHasBeenSet)
  {
   XmlNode vPCRegionNode = parentNode.CreateChildElement("VPCRegion");
   vPCRegionNode.SetText(VPCRegionMapper::GetNameForVPCRegion(m_vPCRegion));
  }

  if(m_vPCIdHasBeenSet)
  {
   XmlNode vPCIdNode = parentNode.CreateChildElement("VPCId");
   vPCIdNode.SetText(m_vPCId);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
