/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/StorageLensGroup.h>
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

StorageLensGroup::StorageLensGroup() : 
    m_nameHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_storageLensGroupArnHasBeenSet(false)
{
}

StorageLensGroup::StorageLensGroup(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_storageLensGroupArnHasBeenSet(false)
{
  *this = xmlNode;
}

StorageLensGroup& StorageLensGroup::operator =(const XmlNode& xmlNode)
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
    XmlNode filterNode = resultNode.FirstChild("Filter");
    if(!filterNode.IsNull())
    {
      m_filter = filterNode;
      m_filterHasBeenSet = true;
    }
    XmlNode storageLensGroupArnNode = resultNode.FirstChild("StorageLensGroupArn");
    if(!storageLensGroupArnNode.IsNull())
    {
      m_storageLensGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(storageLensGroupArnNode.GetText());
      m_storageLensGroupArnHasBeenSet = true;
    }
  }

  return *this;
}

void StorageLensGroup::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_filterHasBeenSet)
  {
   XmlNode filterNode = parentNode.CreateChildElement("Filter");
   m_filter.AddToNode(filterNode);
  }

  if(m_storageLensGroupArnHasBeenSet)
  {
   XmlNode storageLensGroupArnNode = parentNode.CreateChildElement("StorageLensGroupArn");
   storageLensGroupArnNode.SetText(m_storageLensGroupArn);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
