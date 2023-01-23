/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/UpdateTrafficPolicyInstanceRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

UpdateTrafficPolicyInstanceRequest::UpdateTrafficPolicyInstanceRequest() : 
    m_idHasBeenSet(false),
    m_tTL(0),
    m_tTLHasBeenSet(false),
    m_trafficPolicyIdHasBeenSet(false),
    m_trafficPolicyVersion(0),
    m_trafficPolicyVersionHasBeenSet(false)
{
}

Aws::String UpdateTrafficPolicyInstanceRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("UpdateTrafficPolicyInstanceRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
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


