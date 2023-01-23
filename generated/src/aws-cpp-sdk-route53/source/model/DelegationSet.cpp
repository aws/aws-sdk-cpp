/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/DelegationSet.h>
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

DelegationSet::DelegationSet() : 
    m_idHasBeenSet(false),
    m_callerReferenceHasBeenSet(false),
    m_nameServersHasBeenSet(false)
{
}

DelegationSet::DelegationSet(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_callerReferenceHasBeenSet(false),
    m_nameServersHasBeenSet(false)
{
  *this = xmlNode;
}

DelegationSet& DelegationSet::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
      m_idHasBeenSet = true;
    }
    XmlNode callerReferenceNode = resultNode.FirstChild("CallerReference");
    if(!callerReferenceNode.IsNull())
    {
      m_callerReference = Aws::Utils::Xml::DecodeEscapedXmlText(callerReferenceNode.GetText());
      m_callerReferenceHasBeenSet = true;
    }
    XmlNode nameServersNode = resultNode.FirstChild("NameServers");
    if(!nameServersNode.IsNull())
    {
      XmlNode nameServersMember = nameServersNode.FirstChild("NameServer");
      while(!nameServersMember.IsNull())
      {
        m_nameServers.push_back(nameServersMember.GetText());
        nameServersMember = nameServersMember.NextNode("NameServer");
      }

      m_nameServersHasBeenSet = true;
    }
  }

  return *this;
}

void DelegationSet::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_callerReferenceHasBeenSet)
  {
   XmlNode callerReferenceNode = parentNode.CreateChildElement("CallerReference");
   callerReferenceNode.SetText(m_callerReference);
  }

  if(m_nameServersHasBeenSet)
  {
   XmlNode nameServersParentNode = parentNode.CreateChildElement("NameServers");
   for(const auto& item : m_nameServers)
   {
     XmlNode nameServersNode = nameServersParentNode.CreateChildElement("NameServer");
     nameServersNode.SetText(item);
   }
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
