/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/CreateHealthCheckSourceRequest.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String CreateHealthCheckSourceRequest::SerializePayload() const {
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateHealthCheckSourceRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
  if (m_callerReferenceHasBeenSet) {
    XmlNode callerReferenceNode = parentNode.CreateChildElement("CallerReference");
    callerReferenceNode.SetText(m_callerReference);
  }

  if (m_healthCheckSourceConfigHasBeenSet) {
    XmlNode healthCheckSourceConfigNode = parentNode.CreateChildElement("HealthCheckSourceConfig");
    m_healthCheckSourceConfig.AddToNode(healthCheckSourceConfigNode);
  }

  if (m_tagsHasBeenSet) {
    XmlNode tagsParentNode = parentNode.CreateChildElement("Tags");
    for (const auto& item : m_tags) {
      XmlNode tagsNode = tagsParentNode.CreateChildElement("Tag");
      item.AddToNode(tagsNode);
    }
  }

  return payloadDoc.ConvertToCompactString();
}
