/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/RestoreDBClusterToPointInTimeResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

RestoreDBClusterToPointInTimeResult::RestoreDBClusterToPointInTimeResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

RestoreDBClusterToPointInTimeResult& RestoreDBClusterToPointInTimeResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "RestoreDBClusterToPointInTimeResult"))
  {
    resultNode = rootNode.FirstChild("RestoreDBClusterToPointInTimeResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBClusterNode = resultNode.FirstChild("DBCluster");
    if(!dBClusterNode.IsNull())
    {
      m_dBCluster = dBClusterNode;
      m_dBClusterHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::RestoreDBClusterToPointInTimeResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
