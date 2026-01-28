/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3control/model/ObjectEncryption.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace S3Control {
namespace Model {

ObjectEncryption::ObjectEncryption(const XmlNode& xmlNode) { *this = xmlNode; }

ObjectEncryption& ObjectEncryption::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode sSEKMSNode = resultNode.FirstChild("SSE-KMS");
    if (!sSEKMSNode.IsNull()) {
      m_sSEKMS = sSEKMSNode;
      m_sSEKMSHasBeenSet = true;
    }
  }

  return *this;
}

void ObjectEncryption::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_sSEKMSHasBeenSet) {
    XmlNode sSEKMSNode = parentNode.CreateChildElement("SSE-KMS");
    m_sSEKMS.AddToNode(sSEKMSNode);
  }
}

}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
