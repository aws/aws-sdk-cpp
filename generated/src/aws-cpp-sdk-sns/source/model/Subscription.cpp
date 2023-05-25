/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/Subscription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SNS
{
namespace Model
{

Subscription::Subscription() : 
    m_subscriptionArnHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_topicArnHasBeenSet(false)
{
}

Subscription::Subscription(const XmlNode& xmlNode) : 
    m_subscriptionArnHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_topicArnHasBeenSet(false)
{
  *this = xmlNode;
}

Subscription& Subscription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode subscriptionArnNode = resultNode.FirstChild("SubscriptionArn");
    if(!subscriptionArnNode.IsNull())
    {
      m_subscriptionArn = Aws::Utils::Xml::DecodeEscapedXmlText(subscriptionArnNode.GetText());
      m_subscriptionArnHasBeenSet = true;
    }
    XmlNode ownerNode = resultNode.FirstChild("Owner");
    if(!ownerNode.IsNull())
    {
      m_owner = Aws::Utils::Xml::DecodeEscapedXmlText(ownerNode.GetText());
      m_ownerHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("Protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText());
      m_protocolHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = Aws::Utils::Xml::DecodeEscapedXmlText(endpointNode.GetText());
      m_endpointHasBeenSet = true;
    }
    XmlNode topicArnNode = resultNode.FirstChild("TopicArn");
    if(!topicArnNode.IsNull())
    {
      m_topicArn = Aws::Utils::Xml::DecodeEscapedXmlText(topicArnNode.GetText());
      m_topicArnHasBeenSet = true;
    }
  }

  return *this;
}

void Subscription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_subscriptionArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubscriptionArn=" << StringUtils::URLEncode(m_subscriptionArn.c_str()) << "&";
  }

  if(m_ownerHasBeenSet)
  {
      oStream << location << index << locationValue << ".Owner=" << StringUtils::URLEncode(m_owner.c_str()) << "&";
  }

  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }

  if(m_endpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }

  if(m_topicArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

}

void Subscription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_subscriptionArnHasBeenSet)
  {
      oStream << location << ".SubscriptionArn=" << StringUtils::URLEncode(m_subscriptionArn.c_str()) << "&";
  }
  if(m_ownerHasBeenSet)
  {
      oStream << location << ".Owner=" << StringUtils::URLEncode(m_owner.c_str()) << "&";
  }
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }
  if(m_endpointHasBeenSet)
  {
      oStream << location << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }
  if(m_topicArnHasBeenSet)
  {
      oStream << location << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SNS
} // namespace Aws
