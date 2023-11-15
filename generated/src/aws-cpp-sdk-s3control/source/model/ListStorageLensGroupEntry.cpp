/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ListStorageLensGroupEntry.h>
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

ListStorageLensGroupEntry::ListStorageLensGroupEntry() : 
    m_nameHasBeenSet(false),
    m_storageLensGroupArnHasBeenSet(false),
    m_homeRegionHasBeenSet(false)
{
}

ListStorageLensGroupEntry::ListStorageLensGroupEntry(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_storageLensGroupArnHasBeenSet(false),
    m_homeRegionHasBeenSet(false)
{
  *this = xmlNode;
}

ListStorageLensGroupEntry& ListStorageLensGroupEntry::operator =(const XmlNode& xmlNode)
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
    XmlNode storageLensGroupArnNode = resultNode.FirstChild("StorageLensGroupArn");
    if(!storageLensGroupArnNode.IsNull())
    {
      m_storageLensGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(storageLensGroupArnNode.GetText());
      m_storageLensGroupArnHasBeenSet = true;
    }
    XmlNode homeRegionNode = resultNode.FirstChild("HomeRegion");
    if(!homeRegionNode.IsNull())
    {
      m_homeRegion = Aws::Utils::Xml::DecodeEscapedXmlText(homeRegionNode.GetText());
      m_homeRegionHasBeenSet = true;
    }
  }

  return *this;
}

void ListStorageLensGroupEntry::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_storageLensGroupArnHasBeenSet)
  {
   XmlNode storageLensGroupArnNode = parentNode.CreateChildElement("StorageLensGroupArn");
   storageLensGroupArnNode.SetText(m_storageLensGroupArn);
  }

  if(m_homeRegionHasBeenSet)
  {
   XmlNode homeRegionNode = parentNode.CreateChildElement("HomeRegion");
   homeRegionNode.SetText(m_homeRegion);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
