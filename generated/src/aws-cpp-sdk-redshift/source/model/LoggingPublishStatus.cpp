/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/redshift/model/LoggingPublishStatus.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace Redshift {
namespace Model {

LoggingPublishStatus::LoggingPublishStatus(const XmlNode& xmlNode) { *this = xmlNode; }

LoggingPublishStatus& LoggingPublishStatus::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode s3TablesNode = resultNode.FirstChild("S3Tables");
    if (!s3TablesNode.IsNull()) {
      m_s3Tables = s3TablesNode;
      m_s3TablesHasBeenSet = true;
    }
  }

  return *this;
}

void LoggingPublishStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_s3TablesHasBeenSet) {
    Aws::StringStream s3TablesLocationAndMemberSs;
    s3TablesLocationAndMemberSs << location << index << locationValue << ".S3Tables";
    m_s3Tables.OutputToStream(oStream, s3TablesLocationAndMemberSs.str().c_str());
  }
}

void LoggingPublishStatus::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_s3TablesHasBeenSet) {
    Aws::String s3TablesLocationAndMember(location);
    s3TablesLocationAndMember += ".S3Tables";
    m_s3Tables.OutputToStream(oStream, s3TablesLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
