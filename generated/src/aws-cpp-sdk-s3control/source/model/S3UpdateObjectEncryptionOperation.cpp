/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3control/model/S3UpdateObjectEncryptionOperation.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace S3Control {
namespace Model {

S3UpdateObjectEncryptionOperation::S3UpdateObjectEncryptionOperation(const XmlNode& xmlNode) { *this = xmlNode; }

S3UpdateObjectEncryptionOperation& S3UpdateObjectEncryptionOperation::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode objectEncryptionNode = resultNode.FirstChild("ObjectEncryption");
    if (!objectEncryptionNode.IsNull()) {
      m_objectEncryption = objectEncryptionNode;
      m_objectEncryptionHasBeenSet = true;
    }
  }

  return *this;
}

void S3UpdateObjectEncryptionOperation::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_objectEncryptionHasBeenSet) {
    XmlNode objectEncryptionNode = parentNode.CreateChildElement("ObjectEncryption");
    m_objectEncryption.AddToNode(objectEncryptionNode);
  }
}

}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
