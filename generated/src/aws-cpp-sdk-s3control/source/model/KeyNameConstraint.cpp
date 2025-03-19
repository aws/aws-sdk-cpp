/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/KeyNameConstraint.h>
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

KeyNameConstraint::KeyNameConstraint(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

KeyNameConstraint& KeyNameConstraint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode matchAnyPrefixNode = resultNode.FirstChild("MatchAnyPrefix");
    if(!matchAnyPrefixNode.IsNull())
    {
      XmlNode matchAnyPrefixMember = matchAnyPrefixNode.FirstChild("member");
      m_matchAnyPrefixHasBeenSet = !matchAnyPrefixMember.IsNull();
      while(!matchAnyPrefixMember.IsNull())
      {
        m_matchAnyPrefix.push_back(matchAnyPrefixMember.GetText());
        matchAnyPrefixMember = matchAnyPrefixMember.NextNode("member");
      }

      m_matchAnyPrefixHasBeenSet = true;
    }
    XmlNode matchAnySuffixNode = resultNode.FirstChild("MatchAnySuffix");
    if(!matchAnySuffixNode.IsNull())
    {
      XmlNode matchAnySuffixMember = matchAnySuffixNode.FirstChild("member");
      m_matchAnySuffixHasBeenSet = !matchAnySuffixMember.IsNull();
      while(!matchAnySuffixMember.IsNull())
      {
        m_matchAnySuffix.push_back(matchAnySuffixMember.GetText());
        matchAnySuffixMember = matchAnySuffixMember.NextNode("member");
      }

      m_matchAnySuffixHasBeenSet = true;
    }
    XmlNode matchAnySubstringNode = resultNode.FirstChild("MatchAnySubstring");
    if(!matchAnySubstringNode.IsNull())
    {
      XmlNode matchAnySubstringMember = matchAnySubstringNode.FirstChild("member");
      m_matchAnySubstringHasBeenSet = !matchAnySubstringMember.IsNull();
      while(!matchAnySubstringMember.IsNull())
      {
        m_matchAnySubstring.push_back(matchAnySubstringMember.GetText());
        matchAnySubstringMember = matchAnySubstringMember.NextNode("member");
      }

      m_matchAnySubstringHasBeenSet = true;
    }
  }

  return *this;
}

void KeyNameConstraint::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_matchAnyPrefixHasBeenSet)
  {
   XmlNode matchAnyPrefixParentNode = parentNode.CreateChildElement("MatchAnyPrefix");
   for(const auto& item : m_matchAnyPrefix)
   {
     XmlNode matchAnyPrefixNode = matchAnyPrefixParentNode.CreateChildElement("member");
     matchAnyPrefixNode.SetText(item);
   }
  }

  if(m_matchAnySuffixHasBeenSet)
  {
   XmlNode matchAnySuffixParentNode = parentNode.CreateChildElement("MatchAnySuffix");
   for(const auto& item : m_matchAnySuffix)
   {
     XmlNode matchAnySuffixNode = matchAnySuffixParentNode.CreateChildElement("member");
     matchAnySuffixNode.SetText(item);
   }
  }

  if(m_matchAnySubstringHasBeenSet)
  {
   XmlNode matchAnySubstringParentNode = parentNode.CreateChildElement("MatchAnySubstring");
   for(const auto& item : m_matchAnySubstring)
   {
     XmlNode matchAnySubstringNode = matchAnySubstringParentNode.CreateChildElement("member");
     matchAnySubstringNode.SetText(item);
   }
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
