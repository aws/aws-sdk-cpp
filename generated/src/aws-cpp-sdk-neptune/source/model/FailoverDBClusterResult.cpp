/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/FailoverDBClusterResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

FailoverDBClusterResult::FailoverDBClusterResult()
{
}

FailoverDBClusterResult::FailoverDBClusterResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

FailoverDBClusterResult& FailoverDBClusterResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "FailoverDBClusterResult"))
  {
    resultNode = rootNode.FirstChild("FailoverDBClusterResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBClusterNode = resultNode.FirstChild("DBCluster");
    if(!dBClusterNode.IsNull())
    {
      m_dBCluster = dBClusterNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Neptune::Model::FailoverDBClusterResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
