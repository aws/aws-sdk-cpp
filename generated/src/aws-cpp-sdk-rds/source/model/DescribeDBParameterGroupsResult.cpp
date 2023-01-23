/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBParameterGroupsResult.h>
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

DescribeDBParameterGroupsResult::DescribeDBParameterGroupsResult()
{
}

DescribeDBParameterGroupsResult::DescribeDBParameterGroupsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBParameterGroupsResult& DescribeDBParameterGroupsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBParameterGroupsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBParameterGroupsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode dBParameterGroupsNode = resultNode.FirstChild("DBParameterGroups");
    if(!dBParameterGroupsNode.IsNull())
    {
      XmlNode dBParameterGroupsMember = dBParameterGroupsNode.FirstChild("DBParameterGroup");
      while(!dBParameterGroupsMember.IsNull())
      {
        m_dBParameterGroups.push_back(dBParameterGroupsMember);
        dBParameterGroupsMember = dBParameterGroupsMember.NextNode("DBParameterGroup");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeDBParameterGroupsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
