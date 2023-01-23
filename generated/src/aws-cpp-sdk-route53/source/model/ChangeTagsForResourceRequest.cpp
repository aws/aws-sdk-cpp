/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ChangeTagsForResourceRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ChangeTagsForResourceRequest::ChangeTagsForResourceRequest() : 
    m_resourceType(TagResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_addTagsHasBeenSet(false),
    m_removeTagKeysHasBeenSet(false)
{
}

Aws::String ChangeTagsForResourceRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("ChangeTagsForResourceRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
  if(m_addTagsHasBeenSet)
  {
   XmlNode addTagsParentNode = parentNode.CreateChildElement("AddTags");
   for(const auto& item : m_addTags)
   {
     XmlNode addTagsNode = addTagsParentNode.CreateChildElement("Tag");
     item.AddToNode(addTagsNode);
   }
  }

  if(m_removeTagKeysHasBeenSet)
  {
   XmlNode removeTagKeysParentNode = parentNode.CreateChildElement("RemoveTagKeys");
   for(const auto& item : m_removeTagKeys)
   {
     XmlNode removeTagKeysNode = removeTagKeysParentNode.CreateChildElement("Key");
     removeTagKeysNode.SetText(item);
   }
  }

  return payloadDoc.ConvertToString();
}


