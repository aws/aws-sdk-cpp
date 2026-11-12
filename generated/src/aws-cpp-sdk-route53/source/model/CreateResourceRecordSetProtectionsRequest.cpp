/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/CreateResourceRecordSetProtectionsRequest.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String CreateResourceRecordSetProtectionsRequest::SerializePayload() const {
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateResourceRecordSetProtectionsRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
  if (m_protectionsHasBeenSet) {
    XmlNode protectionsParentNode = parentNode.CreateChildElement("Protections");
    for (const auto& item : m_protections) {
      XmlNode protectionsNode = protectionsParentNode.CreateChildElement("ResourceRecordSetProtectionConfig");
      item.AddToNode(protectionsNode);
    }
  }

  return payloadDoc.ConvertToCompactString();
}
