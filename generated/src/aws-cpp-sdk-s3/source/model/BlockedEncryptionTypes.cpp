/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3/model/BlockedEncryptionTypes.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace S3 {
namespace Model {

BlockedEncryptionTypes::BlockedEncryptionTypes(const XmlNode& xmlNode) { *this = xmlNode; }

BlockedEncryptionTypes& BlockedEncryptionTypes::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode encryptionTypeNode = resultNode.FirstChild("EncryptionType");
    if (!encryptionTypeNode.IsNull()) {
      XmlNode encryptionTypeMember = encryptionTypeNode;
      m_encryptionTypeHasBeenSet = !encryptionTypeMember.IsNull();
      while (!encryptionTypeMember.IsNull()) {
        m_encryptionType.push_back(
            EncryptionTypeMapper::GetEncryptionTypeForName(StringUtils::Trim(encryptionTypeMember.GetText().c_str())));
        encryptionTypeMember = encryptionTypeMember.NextNode("EncryptionType");
      }

      m_encryptionTypeHasBeenSet = true;
    }
  }

  return *this;
}

void BlockedEncryptionTypes::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_encryptionTypeHasBeenSet) {
    XmlNode encryptionTypeParentNode = parentNode.CreateChildElement("EncryptionType");
    for (const auto& item : m_encryptionType) {
      XmlNode encryptionTypeNode = encryptionTypeParentNode.CreateChildElement("EncryptionType");
      encryptionTypeNode.SetText(EncryptionTypeMapper::GetNameForEncryptionType(item));
    }
  }
}

}  // namespace Model
}  // namespace S3
}  // namespace Aws
