/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/MultiRegionAccessPointReport.h>
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

MultiRegionAccessPointReport::MultiRegionAccessPointReport() : 
    m_nameHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_publicAccessBlockHasBeenSet(false),
    m_status(MultiRegionAccessPointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_regionsHasBeenSet(false)
{
}

MultiRegionAccessPointReport::MultiRegionAccessPointReport(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_publicAccessBlockHasBeenSet(false),
    m_status(MultiRegionAccessPointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_regionsHasBeenSet(false)
{
  *this = xmlNode;
}

MultiRegionAccessPointReport& MultiRegionAccessPointReport::operator =(const XmlNode& xmlNode)
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
    XmlNode aliasNode = resultNode.FirstChild("Alias");
    if(!aliasNode.IsNull())
    {
      m_alias = Aws::Utils::Xml::DecodeEscapedXmlText(aliasNode.GetText());
      m_aliasHasBeenSet = true;
    }
    XmlNode createdAtNode = resultNode.FirstChild("CreatedAt");
    if(!createdAtNode.IsNull())
    {
      m_createdAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdAtNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdAtHasBeenSet = true;
    }
    XmlNode publicAccessBlockNode = resultNode.FirstChild("PublicAccessBlock");
    if(!publicAccessBlockNode.IsNull())
    {
      m_publicAccessBlock = publicAccessBlockNode;
      m_publicAccessBlockHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = MultiRegionAccessPointStatusMapper::GetMultiRegionAccessPointStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
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

void MultiRegionAccessPointReport::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_aliasHasBeenSet)
  {
   XmlNode aliasNode = parentNode.CreateChildElement("Alias");
   aliasNode.SetText(m_alias);
  }

  if(m_createdAtHasBeenSet)
  {
   XmlNode createdAtNode = parentNode.CreateChildElement("CreatedAt");
   createdAtNode.SetText(m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_publicAccessBlockHasBeenSet)
  {
   XmlNode publicAccessBlockNode = parentNode.CreateChildElement("PublicAccessBlock");
   m_publicAccessBlock.AddToNode(publicAccessBlockNode);
  }

  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(MultiRegionAccessPointStatusMapper::GetNameForMultiRegionAccessPointStatus(m_status));
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
