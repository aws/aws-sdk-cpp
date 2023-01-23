/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ChangeResourceRecordSetsRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ChangeResourceRecordSetsRequest::ChangeResourceRecordSetsRequest() : 
    m_hostedZoneIdHasBeenSet(false),
    m_changeBatchHasBeenSet(false)
{
}

Aws::String ChangeResourceRecordSetsRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("ChangeResourceRecordSetsRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
  if(m_changeBatchHasBeenSet)
  {
   XmlNode changeBatchNode = parentNode.CreateChildElement("ChangeBatch");
   m_changeBatch.AddToNode(changeBatchNode);
  }

  return payloadDoc.ConvertToString();
}


