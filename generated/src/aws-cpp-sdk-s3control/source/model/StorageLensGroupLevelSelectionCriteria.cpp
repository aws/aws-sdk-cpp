/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/StorageLensGroupLevelSelectionCriteria.h>
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

StorageLensGroupLevelSelectionCriteria::StorageLensGroupLevelSelectionCriteria() : 
    m_includeHasBeenSet(false),
    m_excludeHasBeenSet(false)
{
}

StorageLensGroupLevelSelectionCriteria::StorageLensGroupLevelSelectionCriteria(const XmlNode& xmlNode) : 
    m_includeHasBeenSet(false),
    m_excludeHasBeenSet(false)
{
  *this = xmlNode;
}

StorageLensGroupLevelSelectionCriteria& StorageLensGroupLevelSelectionCriteria::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode includeNode = resultNode.FirstChild("Include");
    if(!includeNode.IsNull())
    {
      XmlNode includeMember = includeNode.FirstChild("Arn");
      while(!includeMember.IsNull())
      {
        m_include.push_back(includeMember.GetText());
        includeMember = includeMember.NextNode("Arn");
      }

      m_includeHasBeenSet = true;
    }
    XmlNode excludeNode = resultNode.FirstChild("Exclude");
    if(!excludeNode.IsNull())
    {
      XmlNode excludeMember = excludeNode.FirstChild("Arn");
      while(!excludeMember.IsNull())
      {
        m_exclude.push_back(excludeMember.GetText());
        excludeMember = excludeMember.NextNode("Arn");
      }

      m_excludeHasBeenSet = true;
    }
  }

  return *this;
}

void StorageLensGroupLevelSelectionCriteria::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_includeHasBeenSet)
  {
   XmlNode includeParentNode = parentNode.CreateChildElement("Include");
   for(const auto& item : m_include)
   {
     XmlNode includeNode = includeParentNode.CreateChildElement("Arn");
     includeNode.SetText(item);
   }
  }

  if(m_excludeHasBeenSet)
  {
   XmlNode excludeParentNode = parentNode.CreateChildElement("Exclude");
   for(const auto& item : m_exclude)
   {
     XmlNode excludeNode = excludeParentNode.CreateChildElement("Arn");
     excludeNode.SetText(item);
   }
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
