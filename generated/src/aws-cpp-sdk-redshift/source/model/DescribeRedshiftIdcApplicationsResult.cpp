/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeRedshiftIdcApplicationsResult.h>
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

DescribeRedshiftIdcApplicationsResult::DescribeRedshiftIdcApplicationsResult()
{
}

DescribeRedshiftIdcApplicationsResult::DescribeRedshiftIdcApplicationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeRedshiftIdcApplicationsResult& DescribeRedshiftIdcApplicationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeRedshiftIdcApplicationsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeRedshiftIdcApplicationsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode redshiftIdcApplicationsNode = resultNode.FirstChild("RedshiftIdcApplications");
    if(!redshiftIdcApplicationsNode.IsNull())
    {
      XmlNode redshiftIdcApplicationsMember = redshiftIdcApplicationsNode.FirstChild("member");
      while(!redshiftIdcApplicationsMember.IsNull())
      {
        m_redshiftIdcApplications.push_back(redshiftIdcApplicationsMember);
        redshiftIdcApplicationsMember = redshiftIdcApplicationsMember.NextNode("member");
      }

    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeRedshiftIdcApplicationsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
