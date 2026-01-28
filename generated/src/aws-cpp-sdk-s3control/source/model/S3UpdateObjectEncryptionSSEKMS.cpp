/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3control/model/S3UpdateObjectEncryptionSSEKMS.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace S3Control {
namespace Model {

S3UpdateObjectEncryptionSSEKMS::S3UpdateObjectEncryptionSSEKMS(const XmlNode& xmlNode) { *this = xmlNode; }

S3UpdateObjectEncryptionSSEKMS& S3UpdateObjectEncryptionSSEKMS::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode kMSKeyArnNode = resultNode.FirstChild("KMSKeyArn");
    if (!kMSKeyArnNode.IsNull()) {
      m_kMSKeyArn = Aws::Utils::Xml::DecodeEscapedXmlText(kMSKeyArnNode.GetText());
      m_kMSKeyArnHasBeenSet = true;
    }
    XmlNode bucketKeyEnabledNode = resultNode.FirstChild("BucketKeyEnabled");
    if (!bucketKeyEnabledNode.IsNull()) {
      m_bucketKeyEnabled = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(bucketKeyEnabledNode.GetText()).c_str()).c_str());
      m_bucketKeyEnabledHasBeenSet = true;
    }
  }

  return *this;
}

void S3UpdateObjectEncryptionSSEKMS::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_kMSKeyArnHasBeenSet) {
    XmlNode kMSKeyArnNode = parentNode.CreateChildElement("KMSKeyArn");
    kMSKeyArnNode.SetText(m_kMSKeyArn);
  }

  if (m_bucketKeyEnabledHasBeenSet) {
    XmlNode bucketKeyEnabledNode = parentNode.CreateChildElement("BucketKeyEnabled");
    ss << std::boolalpha << m_bucketKeyEnabled;
    bucketKeyEnabledNode.SetText(ss.str());
    ss.str("");
  }
}

}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
