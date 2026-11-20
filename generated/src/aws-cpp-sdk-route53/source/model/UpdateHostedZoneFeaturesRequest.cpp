/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/UpdateHostedZoneFeaturesRequest.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String UpdateHostedZoneFeaturesRequest::SerializePayload() const {
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("UpdateHostedZoneFeaturesRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
  if (m_enableAcceleratedRecoveryHasBeenSet) {
    XmlNode enableAcceleratedRecoveryNode = parentNode.CreateChildElement("EnableAcceleratedRecovery");
    ss << std::boolalpha << m_enableAcceleratedRecovery;
    enableAcceleratedRecoveryNode.SetText(ss.str());
    ss.str("");
  }

  if (m_enablePublicDNSFallbackHasBeenSet) {
    XmlNode enablePublicDNSFallbackNode = parentNode.CreateChildElement("EnablePublicDNSFallback");
    ss << std::boolalpha << m_enablePublicDNSFallback;
    enablePublicDNSFallbackNode.SetText(ss.str());
    ss.str("");
  }

  if (m_changeGuardrailsHasBeenSet) {
    XmlNode changeGuardrailsParentNode = parentNode.CreateChildElement("ChangeGuardrails");
    for (const auto& item : m_changeGuardrails) {
      XmlNode changeGuardrailsNode = changeGuardrailsParentNode.CreateChildElement("ChangeGuardrail");
      item.AddToNode(changeGuardrailsNode);
    }
  }

  if (m_dryRunHasBeenSet) {
    XmlNode dryRunNode = parentNode.CreateChildElement("DryRun");
    ss << std::boolalpha << m_dryRun;
    dryRunNode.SetText(ss.str());
    ss.str("");
  }

  return payloadDoc.ConvertToCompactString();
}
