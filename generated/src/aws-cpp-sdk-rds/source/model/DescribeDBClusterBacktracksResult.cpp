/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBClusterBacktracksResult.h>
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

DescribeDBClusterBacktracksResult::DescribeDBClusterBacktracksResult()
{
}

DescribeDBClusterBacktracksResult::DescribeDBClusterBacktracksResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBClusterBacktracksResult& DescribeDBClusterBacktracksResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBClusterBacktracksResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBClusterBacktracksResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode dBClusterBacktracksNode = resultNode.FirstChild("DBClusterBacktracks");
    if(!dBClusterBacktracksNode.IsNull())
    {
      XmlNode dBClusterBacktracksMember = dBClusterBacktracksNode.FirstChild("DBClusterBacktrack");
      while(!dBClusterBacktracksMember.IsNull())
      {
        m_dBClusterBacktracks.push_back(dBClusterBacktracksMember);
        dBClusterBacktracksMember = dBClusterBacktracksMember.NextNode("DBClusterBacktrack");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeDBClusterBacktracksResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
