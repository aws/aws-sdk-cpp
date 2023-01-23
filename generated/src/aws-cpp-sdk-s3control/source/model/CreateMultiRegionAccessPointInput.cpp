/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/CreateMultiRegionAccessPointInput.h>
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

CreateMultiRegionAccessPointInput::CreateMultiRegionAccessPointInput() : 
    m_nameHasBeenSet(false),
    m_publicAccessBlockHasBeenSet(false),
    m_regionsHasBeenSet(false)
{
}

CreateMultiRegionAccessPointInput::CreateMultiRegionAccessPointInput(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_publicAccessBlockHasBeenSet(false),
    m_regionsHasBeenSet(false)
{
  *this = xmlNode;
}

CreateMultiRegionAccessPointInput& CreateMultiRegionAccessPointInput::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode publicAccessBlockNode = resultNode.FirstChild("PublicAccessBlock");
    if(!publicAccessBlockNode.IsNull())
    {
      m_publicAccessBlock = publicAccessBlockNode;
      m_publicAccessBlockHasBeenSet = true;
    }
    XmlNode regionsNode = resultNode.FirstChild("Regions");
    if(!regionsNode.IsNull())
    {
      XmlNode regionsMember = regionsNode.FirstChild("Region");
      while(!regionsMember.IsNull())
      {
        m_regions.push_back(regionsMember);
        regionsMember = regionsMember.NextNode("Region");
      }

      m_regionsHasBeenSet = true;
    }
  }

  return *this;
}

void CreateMultiRegionAccessPointInput::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_publicAccessBlockHasBeenSet)
  {
   XmlNode publicAccessBlockNode = parentNode.CreateChildElement("PublicAccessBlock");
   m_publicAccessBlock.AddToNode(publicAccessBlockNode);
  }

  if(m_regionsHasBeenSet)
  {
   XmlNode regionsParentNode = parentNode.CreateChildElement("Regions");
   for(const auto& item : m_regions)
   {
     XmlNode regionsNode = regionsParentNode.CreateChildElement("Region");
     item.AddToNode(regionsNode);
   }
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
