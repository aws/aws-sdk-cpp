/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3-crt/model/AnnotationTableConfigurationUpdates.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace S3Crt {
namespace Model {

AnnotationTableConfigurationUpdates::AnnotationTableConfigurationUpdates(const XmlNode& xmlNode) { *this = xmlNode; }

AnnotationTableConfigurationUpdates& AnnotationTableConfigurationUpdates::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode configurationStateNode = resultNode.FirstChild("ConfigurationState");
    if (!configurationStateNode.IsNull()) {
      m_configurationState = AnnotationConfigurationStateMapper::GetAnnotationConfigurationStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(configurationStateNode.GetText()).c_str()));
      m_configurationStateHasBeenSet = true;
    }
    XmlNode encryptionConfigurationNode = resultNode.FirstChild("EncryptionConfiguration");
    if (!encryptionConfigurationNode.IsNull()) {
      m_encryptionConfiguration = encryptionConfigurationNode;
      m_encryptionConfigurationHasBeenSet = true;
    }
    XmlNode roleNode = resultNode.FirstChild("Role");
    if (!roleNode.IsNull()) {
      m_role = Aws::Utils::Xml::DecodeEscapedXmlText(roleNode.GetText());
      m_roleHasBeenSet = true;
    }
  }

  return *this;
}

void AnnotationTableConfigurationUpdates::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_configurationStateHasBeenSet) {
    XmlNode configurationStateNode = parentNode.CreateChildElement("ConfigurationState");
    configurationStateNode.SetText(AnnotationConfigurationStateMapper::GetNameForAnnotationConfigurationState(m_configurationState));
  }

  if (m_encryptionConfigurationHasBeenSet) {
    XmlNode encryptionConfigurationNode = parentNode.CreateChildElement("EncryptionConfiguration");
    m_encryptionConfiguration.AddToNode(encryptionConfigurationNode);
  }

  if (m_roleHasBeenSet) {
    XmlNode roleNode = parentNode.CreateChildElement("Role");
    roleNode.SetText(m_role);
  }
}

}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
