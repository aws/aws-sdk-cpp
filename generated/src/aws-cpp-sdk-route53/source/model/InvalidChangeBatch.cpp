/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/InvalidChangeBatch.h>
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

InvalidChangeBatch::InvalidChangeBatch() : 
    m_messagesHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

InvalidChangeBatch::InvalidChangeBatch(const XmlNode& xmlNode) : 
    m_messagesHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = xmlNode;
}

InvalidChangeBatch& InvalidChangeBatch::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode messagesNode = resultNode.FirstChild("messages");
    if(!messagesNode.IsNull())
    {
      XmlNode messagesMember = messagesNode.FirstChild("Message");
      while(!messagesMember.IsNull())
      {
        m_messages.push_back(messagesMember.GetText());
        messagesMember = messagesMember.NextNode("Message");
      }

      m_messagesHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("message");
    if(!messageNode.IsNull())
    {
      m_message = Aws::Utils::Xml::DecodeEscapedXmlText(messageNode.GetText());
      m_messageHasBeenSet = true;
    }
  }

  return *this;
}

void InvalidChangeBatch::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_messagesHasBeenSet)
  {
   XmlNode messagesParentNode = parentNode.CreateChildElement("messages");
   for(const auto& item : m_messages)
   {
     XmlNode messagesNode = messagesParentNode.CreateChildElement("Message");
     messagesNode.SetText(item);
   }
  }

  if(m_messageHasBeenSet)
  {
   XmlNode messageNode = parentNode.CreateChildElement("message");
   messageNode.SetText(m_message);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
