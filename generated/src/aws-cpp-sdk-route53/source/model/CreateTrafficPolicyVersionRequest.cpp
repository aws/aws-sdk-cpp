/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/CreateTrafficPolicyVersionRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateTrafficPolicyVersionRequest::CreateTrafficPolicyVersionRequest() : 
    m_idHasBeenSet(false),
    m_documentHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

Aws::String CreateTrafficPolicyVersionRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateTrafficPolicyVersionRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
  if(m_documentHasBeenSet)
  {
   XmlNode documentNode = parentNode.CreateChildElement("Document");
   documentNode.SetText(m_document);
  }

  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

  return payloadDoc.ConvertToString();
}


