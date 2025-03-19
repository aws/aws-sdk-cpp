/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ChangeCidrCollectionRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;


Aws::String ChangeCidrCollectionRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("ChangeCidrCollectionRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
  if(m_collectionVersionHasBeenSet)
  {
   XmlNode collectionVersionNode = parentNode.CreateChildElement("CollectionVersion");
   ss << m_collectionVersion;
   collectionVersionNode.SetText(ss.str());
   ss.str("");
  }

  if(m_changesHasBeenSet)
  {
   XmlNode changesParentNode = parentNode.CreateChildElement("Changes");
   for(const auto& item : m_changes)
   {
     XmlNode changesNode = changesParentNode.CreateChildElement("CidrCollectionChange");
     item.AddToNode(changesNode);
   }
  }

  return payloadDoc.ConvertToString();
}


