/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/CreateSnapshotCopyGrantResult.h>
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

CreateSnapshotCopyGrantResult::CreateSnapshotCopyGrantResult()
{
}

CreateSnapshotCopyGrantResult::CreateSnapshotCopyGrantResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateSnapshotCopyGrantResult& CreateSnapshotCopyGrantResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateSnapshotCopyGrantResult"))
  {
    resultNode = rootNode.FirstChild("CreateSnapshotCopyGrantResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode snapshotCopyGrantNode = resultNode.FirstChild("SnapshotCopyGrant");
    if(!snapshotCopyGrantNode.IsNull())
    {
      m_snapshotCopyGrant = snapshotCopyGrantNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::CreateSnapshotCopyGrantResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
