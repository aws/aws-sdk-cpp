/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/VpcConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

VpcConfiguration::VpcConfiguration() : 
    m_vpcIdHasBeenSet(false)
{
}

VpcConfiguration::VpcConfiguration(const XmlNode& xmlNode) : 
    m_vpcIdHasBeenSet(false)
{
  *this = xmlNode;
}

VpcConfiguration& VpcConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
  }

  return *this;
}

void VpcConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_vpcIdHasBeenSet)
  {
   XmlNode vpcIdNode = parentNode.CreateChildElement("VpcId");
   vpcIdNode.SetText(m_vpcId);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
