/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeClusterDbRevisionsResult.h>
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

DescribeClusterDbRevisionsResult::DescribeClusterDbRevisionsResult()
{
}

DescribeClusterDbRevisionsResult::DescribeClusterDbRevisionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeClusterDbRevisionsResult& DescribeClusterDbRevisionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeClusterDbRevisionsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeClusterDbRevisionsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode clusterDbRevisionsNode = resultNode.FirstChild("ClusterDbRevisions");
    if(!clusterDbRevisionsNode.IsNull())
    {
      XmlNode clusterDbRevisionsMember = clusterDbRevisionsNode.FirstChild("ClusterDbRevision");
      while(!clusterDbRevisionsMember.IsNull())
      {
        m_clusterDbRevisions.push_back(clusterDbRevisionsMember);
        clusterDbRevisionsMember = clusterDbRevisionsMember.NextNode("ClusterDbRevision");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeClusterDbRevisionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
