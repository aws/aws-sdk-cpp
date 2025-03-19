/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/BatchDeleteClusterSnapshotsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

BatchDeleteClusterSnapshotsResult::BatchDeleteClusterSnapshotsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

BatchDeleteClusterSnapshotsResult& BatchDeleteClusterSnapshotsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "BatchDeleteClusterSnapshotsResult"))
  {
    resultNode = rootNode.FirstChild("BatchDeleteClusterSnapshotsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode resourcesNode = resultNode.FirstChild("Resources");
    if(!resourcesNode.IsNull())
    {
      XmlNode resourcesMember = resourcesNode.FirstChild("String");
      m_resourcesHasBeenSet = !resourcesMember.IsNull();
      while(!resourcesMember.IsNull())
      {
        m_resources.push_back(resourcesMember.GetText());
        resourcesMember = resourcesMember.NextNode("String");
      }

      m_resourcesHasBeenSet = true;
    }
    XmlNode errorsNode = resultNode.FirstChild("Errors");
    if(!errorsNode.IsNull())
    {
      XmlNode errorsMember = errorsNode.FirstChild("SnapshotErrorMessage");
      m_errorsHasBeenSet = !errorsMember.IsNull();
      while(!errorsMember.IsNull())
      {
        m_errors.push_back(errorsMember);
        errorsMember = errorsMember.NextNode("SnapshotErrorMessage");
      }

      m_errorsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::BatchDeleteClusterSnapshotsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
