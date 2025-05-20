/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBMajorEngineVersionsResult.h>
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

DescribeDBMajorEngineVersionsResult::DescribeDBMajorEngineVersionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBMajorEngineVersionsResult& DescribeDBMajorEngineVersionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBMajorEngineVersionsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBMajorEngineVersionsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBMajorEngineVersionsNode = resultNode.FirstChild("DBMajorEngineVersions");
    if(!dBMajorEngineVersionsNode.IsNull())
    {
      XmlNode dBMajorEngineVersionsMember = dBMajorEngineVersionsNode.FirstChild("DBMajorEngineVersion");
      m_dBMajorEngineVersionsHasBeenSet = !dBMajorEngineVersionsMember.IsNull();
      while(!dBMajorEngineVersionsMember.IsNull())
      {
        m_dBMajorEngineVersions.push_back(dBMajorEngineVersionsMember);
        dBMajorEngineVersionsMember = dBMajorEngineVersionsMember.NextNode("DBMajorEngineVersion");
      }

      m_dBMajorEngineVersionsHasBeenSet = true;
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeDBMajorEngineVersionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
