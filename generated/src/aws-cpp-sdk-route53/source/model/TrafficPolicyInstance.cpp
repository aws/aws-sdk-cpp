/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/TrafficPolicyInstance.h>
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

TrafficPolicyInstance::TrafficPolicyInstance() : 
    m_idHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tTL(0),
    m_tTLHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_trafficPolicyIdHasBeenSet(false),
    m_trafficPolicyVersion(0),
    m_trafficPolicyVersionHasBeenSet(false),
    m_trafficPolicyType(RRType::NOT_SET),
    m_trafficPolicyTypeHasBeenSet(false)
{
}

TrafficPolicyInstance::TrafficPolicyInstance(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tTL(0),
    m_tTLHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_trafficPolicyIdHasBeenSet(false),
    m_trafficPolicyVersion(0),
    m_trafficPolicyVersionHasBeenSet(false),
    m_trafficPolicyType(RRType::NOT_SET),
    m_trafficPolicyTypeHasBeenSet(false)
{
  *this = xmlNode;
}

TrafficPolicyInstance& TrafficPolicyInstance::operator =(const XmlNode& xmlNode)
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
    XmlNode hostedZoneIdNode = resultNode.FirstChild("HostedZoneId");
    if(!hostedZoneIdNode.IsNull())
    {
      m_hostedZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(hostedZoneIdNode.GetText());
      m_hostedZoneIdHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode tTLNode = resultNode.FirstChild("TTL");
    if(!tTLNode.IsNull())
    {
      m_tTL = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tTLNode.GetText()).c_str()).c_str());
      m_tTLHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("State");
    if(!stateNode.IsNull())
    {
      m_state = Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText());
      m_stateHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("Message");
    if(!messageNode.IsNull())
    {
      m_message = Aws::Utils::Xml::DecodeEscapedXmlText(messageNode.GetText());
      m_messageHasBeenSet = true;
    }
    XmlNode trafficPolicyIdNode = resultNode.FirstChild("TrafficPolicyId");
    if(!trafficPolicyIdNode.IsNull())
    {
      m_trafficPolicyId = Aws::Utils::Xml::DecodeEscapedXmlText(trafficPolicyIdNode.GetText());
      m_trafficPolicyIdHasBeenSet = true;
    }
    XmlNode trafficPolicyVersionNode = resultNode.FirstChild("TrafficPolicyVersion");
    if(!trafficPolicyVersionNode.IsNull())
    {
      m_trafficPolicyVersion = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(trafficPolicyVersionNode.GetText()).c_str()).c_str());
      m_trafficPolicyVersionHasBeenSet = true;
    }
    XmlNode trafficPolicyTypeNode = resultNode.FirstChild("TrafficPolicyType");
    if(!trafficPolicyTypeNode.IsNull())
    {
      m_trafficPolicyType = RRTypeMapper::GetRRTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(trafficPolicyTypeNode.GetText()).c_str()).c_str());
      m_trafficPolicyTypeHasBeenSet = true;
    }
  }

  return *this;
}

void TrafficPolicyInstance::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_hostedZoneIdHasBeenSet)
  {
   XmlNode hostedZoneIdNode = parentNode.CreateChildElement("HostedZoneId");
   hostedZoneIdNode.SetText(m_hostedZoneId);
  }

  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_tTLHasBeenSet)
  {
   XmlNode tTLNode = parentNode.CreateChildElement("TTL");
   ss << m_tTL;
   tTLNode.SetText(ss.str());
   ss.str("");
  }

  if(m_stateHasBeenSet)
  {
   XmlNode stateNode = parentNode.CreateChildElement("State");
   stateNode.SetText(m_state);
  }

  if(m_messageHasBeenSet)
  {
   XmlNode messageNode = parentNode.CreateChildElement("Message");
   messageNode.SetText(m_message);
  }

  if(m_trafficPolicyIdHasBeenSet)
  {
   XmlNode trafficPolicyIdNode = parentNode.CreateChildElement("TrafficPolicyId");
   trafficPolicyIdNode.SetText(m_trafficPolicyId);
  }

  if(m_trafficPolicyVersionHasBeenSet)
  {
   XmlNode trafficPolicyVersionNode = parentNode.CreateChildElement("TrafficPolicyVersion");
   ss << m_trafficPolicyVersion;
   trafficPolicyVersionNode.SetText(ss.str());
   ss.str("");
  }

  if(m_trafficPolicyTypeHasBeenSet)
  {
   XmlNode trafficPolicyTypeNode = parentNode.CreateChildElement("TrafficPolicyType");
   trafficPolicyTypeNode.SetText(RRTypeMapper::GetNameForRRType(m_trafficPolicyType));
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
