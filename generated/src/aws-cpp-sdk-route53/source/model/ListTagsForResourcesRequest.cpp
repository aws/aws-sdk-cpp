/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListTagsForResourcesRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ListTagsForResourcesRequest::ListTagsForResourcesRequest() : 
    m_resourceType(TagResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdsHasBeenSet(false)
{
}

Aws::String ListTagsForResourcesRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("ListTagsForResourcesRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
  if(m_resourceIdsHasBeenSet)
  {
   XmlNode resourceIdsParentNode = parentNode.CreateChildElement("ResourceIds");
   for(const auto& item : m_resourceIds)
   {
     XmlNode resourceIdsNode = resourceIdsParentNode.CreateChildElement("ResourceId");
     resourceIdsNode.SetText(item);
   }
  }

  return payloadDoc.ConvertToString();
}


