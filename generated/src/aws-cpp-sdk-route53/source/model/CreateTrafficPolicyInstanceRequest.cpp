/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/CreateTrafficPolicyInstanceRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateTrafficPolicyInstanceRequest::CreateTrafficPolicyInstanceRequest() : 
    m_hostedZoneIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tTL(0),
    m_tTLHasBeenSet(false),
    m_trafficPolicyIdHasBeenSet(false),
    m_trafficPolicyVersion(0),
    m_trafficPolicyVersionHasBeenSet(false)
{
}

Aws::String CreateTrafficPolicyInstanceRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateTrafficPolicyInstanceRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
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

  return payloadDoc.ConvertToString();
}


