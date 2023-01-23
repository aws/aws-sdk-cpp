/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3SetObjectTaggingOperation.h>
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

S3SetObjectTaggingOperation::S3SetObjectTaggingOperation() : 
    m_tagSetHasBeenSet(false)
{
}

S3SetObjectTaggingOperation::S3SetObjectTaggingOperation(const XmlNode& xmlNode) : 
    m_tagSetHasBeenSet(false)
{
  *this = xmlNode;
}

S3SetObjectTaggingOperation& S3SetObjectTaggingOperation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode tagSetNode = resultNode.FirstChild("TagSet");
    if(!tagSetNode.IsNull())
    {
      XmlNode tagSetMember = tagSetNode.FirstChild("member");
      while(!tagSetMember.IsNull())
      {
        m_tagSet.push_back(tagSetMember);
        tagSetMember = tagSetMember.NextNode("member");
      }

      m_tagSetHasBeenSet = true;
    }
  }

  return *this;
}

void S3SetObjectTaggingOperation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_tagSetHasBeenSet)
  {
   XmlNode tagSetParentNode = parentNode.CreateChildElement("TagSet");
   for(const auto& item : m_tagSet)
   {
     XmlNode tagSetNode = tagSetParentNode.CreateChildElement("S3Tag");
     item.AddToNode(tagSetNode);
   }
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
