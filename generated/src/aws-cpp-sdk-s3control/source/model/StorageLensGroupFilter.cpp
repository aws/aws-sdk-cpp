/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/StorageLensGroupFilter.h>
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

StorageLensGroupFilter::StorageLensGroupFilter() : 
    m_matchAnyPrefixHasBeenSet(false),
    m_matchAnySuffixHasBeenSet(false),
    m_matchAnyTagHasBeenSet(false),
    m_matchObjectAgeHasBeenSet(false),
    m_matchObjectSizeHasBeenSet(false),
    m_andHasBeenSet(false),
    m_orHasBeenSet(false)
{
}

StorageLensGroupFilter::StorageLensGroupFilter(const XmlNode& xmlNode) : 
    m_matchAnyPrefixHasBeenSet(false),
    m_matchAnySuffixHasBeenSet(false),
    m_matchAnyTagHasBeenSet(false),
    m_matchObjectAgeHasBeenSet(false),
    m_matchObjectSizeHasBeenSet(false),
    m_andHasBeenSet(false),
    m_orHasBeenSet(false)
{
  *this = xmlNode;
}

StorageLensGroupFilter& StorageLensGroupFilter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode matchAnyPrefixNode = resultNode.FirstChild("MatchAnyPrefix");
    if(!matchAnyPrefixNode.IsNull())
    {
      XmlNode matchAnyPrefixMember = matchAnyPrefixNode.FirstChild("Prefix");
      while(!matchAnyPrefixMember.IsNull())
      {
        m_matchAnyPrefix.push_back(matchAnyPrefixMember.GetText());
        matchAnyPrefixMember = matchAnyPrefixMember.NextNode("Prefix");
      }

      m_matchAnyPrefixHasBeenSet = true;
    }
    XmlNode matchAnySuffixNode = resultNode.FirstChild("MatchAnySuffix");
    if(!matchAnySuffixNode.IsNull())
    {
      XmlNode matchAnySuffixMember = matchAnySuffixNode.FirstChild("Suffix");
      while(!matchAnySuffixMember.IsNull())
      {
        m_matchAnySuffix.push_back(matchAnySuffixMember.GetText());
        matchAnySuffixMember = matchAnySuffixMember.NextNode("Suffix");
      }

      m_matchAnySuffixHasBeenSet = true;
    }
    XmlNode matchAnyTagNode = resultNode.FirstChild("MatchAnyTag");
    if(!matchAnyTagNode.IsNull())
    {
      XmlNode matchAnyTagMember = matchAnyTagNode.FirstChild("Tag");
      while(!matchAnyTagMember.IsNull())
      {
        m_matchAnyTag.push_back(matchAnyTagMember);
        matchAnyTagMember = matchAnyTagMember.NextNode("Tag");
      }

      m_matchAnyTagHasBeenSet = true;
    }
    XmlNode matchObjectAgeNode = resultNode.FirstChild("MatchObjectAge");
    if(!matchObjectAgeNode.IsNull())
    {
      m_matchObjectAge = matchObjectAgeNode;
      m_matchObjectAgeHasBeenSet = true;
    }
    XmlNode matchObjectSizeNode = resultNode.FirstChild("MatchObjectSize");
    if(!matchObjectSizeNode.IsNull())
    {
      m_matchObjectSize = matchObjectSizeNode;
      m_matchObjectSizeHasBeenSet = true;
    }
    XmlNode andNode = resultNode.FirstChild("And");
    if(!andNode.IsNull())
    {
      m_and = andNode;
      m_andHasBeenSet = true;
    }
    XmlNode orNode = resultNode.FirstChild("Or");
    if(!orNode.IsNull())
    {
      m_or = orNode;
      m_orHasBeenSet = true;
    }
  }

  return *this;
}

void StorageLensGroupFilter::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_matchAnyPrefixHasBeenSet)
  {
   XmlNode matchAnyPrefixParentNode = parentNode.CreateChildElement("MatchAnyPrefix");
   for(const auto& item : m_matchAnyPrefix)
   {
     XmlNode matchAnyPrefixNode = matchAnyPrefixParentNode.CreateChildElement("Prefix");
     matchAnyPrefixNode.SetText(item);
   }
  }

  if(m_matchAnySuffixHasBeenSet)
  {
   XmlNode matchAnySuffixParentNode = parentNode.CreateChildElement("MatchAnySuffix");
   for(const auto& item : m_matchAnySuffix)
   {
     XmlNode matchAnySuffixNode = matchAnySuffixParentNode.CreateChildElement("Suffix");
     matchAnySuffixNode.SetText(item);
   }
  }

  if(m_matchAnyTagHasBeenSet)
  {
   XmlNode matchAnyTagParentNode = parentNode.CreateChildElement("MatchAnyTag");
   for(const auto& item : m_matchAnyTag)
   {
     XmlNode matchAnyTagNode = matchAnyTagParentNode.CreateChildElement("Tag");
     item.AddToNode(matchAnyTagNode);
   }
  }

  if(m_matchObjectAgeHasBeenSet)
  {
   XmlNode matchObjectAgeNode = parentNode.CreateChildElement("MatchObjectAge");
   m_matchObjectAge.AddToNode(matchObjectAgeNode);
  }

  if(m_matchObjectSizeHasBeenSet)
  {
   XmlNode matchObjectSizeNode = parentNode.CreateChildElement("MatchObjectSize");
   m_matchObjectSize.AddToNode(matchObjectSizeNode);
  }

  if(m_andHasBeenSet)
  {
   XmlNode andNode = parentNode.CreateChildElement("And");
   m_and.AddToNode(andNode);
  }

  if(m_orHasBeenSet)
  {
   XmlNode orNode = parentNode.CreateChildElement("Or");
   m_or.AddToNode(orNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
