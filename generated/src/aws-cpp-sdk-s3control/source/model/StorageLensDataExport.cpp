/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3control/model/StorageLensDataExport.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace S3Control {
namespace Model {

StorageLensDataExport::StorageLensDataExport(const XmlNode& xmlNode) { *this = xmlNode; }

StorageLensDataExport& StorageLensDataExport::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode s3BucketDestinationNode = resultNode.FirstChild("S3BucketDestination");
    if (!s3BucketDestinationNode.IsNull()) {
      m_s3BucketDestination = s3BucketDestinationNode;
      m_s3BucketDestinationHasBeenSet = true;
    }
    XmlNode cloudWatchMetricsNode = resultNode.FirstChild("CloudWatchMetrics");
    if (!cloudWatchMetricsNode.IsNull()) {
      m_cloudWatchMetrics = cloudWatchMetricsNode;
      m_cloudWatchMetricsHasBeenSet = true;
    }
    XmlNode storageLensTableDestinationNode = resultNode.FirstChild("StorageLensTableDestination");
    if (!storageLensTableDestinationNode.IsNull()) {
      m_storageLensTableDestination = storageLensTableDestinationNode;
      m_storageLensTableDestinationHasBeenSet = true;
    }
  }

  return *this;
}

void StorageLensDataExport::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_s3BucketDestinationHasBeenSet) {
    XmlNode s3BucketDestinationNode = parentNode.CreateChildElement("S3BucketDestination");
    m_s3BucketDestination.AddToNode(s3BucketDestinationNode);
  }

  if (m_cloudWatchMetricsHasBeenSet) {
    XmlNode cloudWatchMetricsNode = parentNode.CreateChildElement("CloudWatchMetrics");
    m_cloudWatchMetrics.AddToNode(cloudWatchMetricsNode);
  }

  if (m_storageLensTableDestinationHasBeenSet) {
    XmlNode storageLensTableDestinationNode = parentNode.CreateChildElement("StorageLensTableDestination");
    m_storageLensTableDestination.AddToNode(storageLensTableDestinationNode);
  }
}

}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
