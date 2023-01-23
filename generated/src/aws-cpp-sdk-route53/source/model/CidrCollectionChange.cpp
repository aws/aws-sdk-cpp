/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/CidrCollectionChange.h>
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

CidrCollectionChange::CidrCollectionChange() : 
    m_locationNameHasBeenSet(false),
    m_action(CidrCollectionChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_cidrListHasBeenSet(false)
{
}

CidrCollectionChange::CidrCollectionChange(const XmlNode& xmlNode) : 
    m_locationNameHasBeenSet(false),
    m_action(CidrCollectionChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_cidrListHasBeenSet(false)
{
  *this = xmlNode;
}

CidrCollectionChange& CidrCollectionChange::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode locationNameNode = resultNode.FirstChild("LocationName");
    if(!locationNameNode.IsNull())
    {
      m_locationName = Aws::Utils::Xml::DecodeEscapedXmlText(locationNameNode.GetText());
      m_locationNameHasBeenSet = true;
    }
    XmlNode actionNode = resultNode.FirstChild("Action");
    if(!actionNode.IsNull())
    {
      m_action = CidrCollectionChangeActionMapper::GetCidrCollectionChangeActionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(actionNode.GetText()).c_str()).c_str());
      m_actionHasBeenSet = true;
    }
    XmlNode cidrListNode = resultNode.FirstChild("CidrList");
    if(!cidrListNode.IsNull())
    {
      XmlNode cidrListMember = cidrListNode.FirstChild("Cidr");
      while(!cidrListMember.IsNull())
      {
        m_cidrList.push_back(cidrListMember.GetText());
        cidrListMember = cidrListMember.NextNode("Cidr");
      }

      m_cidrListHasBeenSet = true;
    }
  }

  return *this;
}

void CidrCollectionChange::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_locationNameHasBeenSet)
  {
   XmlNode locationNameNode = parentNode.CreateChildElement("LocationName");
   locationNameNode.SetText(m_locationName);
  }

  if(m_actionHasBeenSet)
  {
   XmlNode actionNode = parentNode.CreateChildElement("Action");
   actionNode.SetText(CidrCollectionChangeActionMapper::GetNameForCidrCollectionChangeAction(m_action));
  }

  if(m_cidrListHasBeenSet)
  {
   XmlNode cidrListParentNode = parentNode.CreateChildElement("CidrList");
   for(const auto& item : m_cidrList)
   {
     XmlNode cidrListNode = cidrListParentNode.CreateChildElement("Cidr");
     cidrListNode.SetText(item);
   }
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
