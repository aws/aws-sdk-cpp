/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/CreateHostedZoneRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateHostedZoneRequest::CreateHostedZoneRequest() : 
    m_nameHasBeenSet(false),
    m_vPCHasBeenSet(false),
    m_callerReferenceHasBeenSet(false),
    m_hostedZoneConfigHasBeenSet(false),
    m_delegationSetIdHasBeenSet(false)
{
}

Aws::String CreateHostedZoneRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateHostedZoneRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_vPCHasBeenSet)
  {
   XmlNode vPCNode = parentNode.CreateChildElement("VPC");
   m_vPC.AddToNode(vPCNode);
  }

  if(m_callerReferenceHasBeenSet)
  {
   XmlNode callerReferenceNode = parentNode.CreateChildElement("CallerReference");
   callerReferenceNode.SetText(m_callerReference);
  }

  if(m_hostedZoneConfigHasBeenSet)
  {
   XmlNode hostedZoneConfigNode = parentNode.CreateChildElement("HostedZoneConfig");
   m_hostedZoneConfig.AddToNode(hostedZoneConfigNode);
  }

  if(m_delegationSetIdHasBeenSet)
  {
   XmlNode delegationSetIdNode = parentNode.CreateChildElement("DelegationSetId");
   delegationSetIdNode.SetText(m_delegationSetId);
  }

  return payloadDoc.ConvertToString();
}


