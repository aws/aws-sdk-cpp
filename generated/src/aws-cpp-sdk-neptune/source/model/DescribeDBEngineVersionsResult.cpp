/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/DescribeDBEngineVersionsResult.h>
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

DescribeDBEngineVersionsResult::DescribeDBEngineVersionsResult()
{
}

DescribeDBEngineVersionsResult::DescribeDBEngineVersionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBEngineVersionsResult& DescribeDBEngineVersionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBEngineVersionsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBEngineVersionsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode dBEngineVersionsNode = resultNode.FirstChild("DBEngineVersions");
    if(!dBEngineVersionsNode.IsNull())
    {
      XmlNode dBEngineVersionsMember = dBEngineVersionsNode.FirstChild("DBEngineVersion");
      while(!dBEngineVersionsMember.IsNull())
      {
        m_dBEngineVersions.push_back(dBEngineVersionsMember);
        dBEngineVersionsMember = dBEngineVersionsMember.NextNode("DBEngineVersion");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Neptune::Model::DescribeDBEngineVersionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
