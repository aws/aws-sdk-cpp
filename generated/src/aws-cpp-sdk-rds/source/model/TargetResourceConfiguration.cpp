/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/model/TargetResourceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RDS {
namespace Model {

TargetResourceConfiguration::TargetResourceConfiguration(const XmlNode& xmlNode) { *this = xmlNode; }

TargetResourceConfiguration& TargetResourceConfiguration::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode sourceArnNode = resultNode.FirstChild("SourceArn");
    if (!sourceArnNode.IsNull()) {
      m_sourceArn = Aws::Utils::Xml::DecodeEscapedXmlText(sourceArnNode.GetText());
      m_sourceArnHasBeenSet = true;
    }
    XmlNode targetKmsKeyIdNode = resultNode.FirstChild("TargetKmsKeyId");
    if (!targetKmsKeyIdNode.IsNull()) {
      m_targetKmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(targetKmsKeyIdNode.GetText());
      m_targetKmsKeyIdHasBeenSet = true;
    }
  }

  return *this;
}

void TargetResourceConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                 const char* locationValue) const {
  if (m_sourceArnHasBeenSet) {
    oStream << location << index << locationValue << ".SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }

  if (m_targetKmsKeyIdHasBeenSet) {
    oStream << location << index << locationValue << ".TargetKmsKeyId=" << StringUtils::URLEncode(m_targetKmsKeyId.c_str()) << "&";
  }
}

void TargetResourceConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_sourceArnHasBeenSet) {
    oStream << location << ".SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }
  if (m_targetKmsKeyIdHasBeenSet) {
    oStream << location << ".TargetKmsKeyId=" << StringUtils::URLEncode(m_targetKmsKeyId.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
