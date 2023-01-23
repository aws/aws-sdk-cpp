/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeClusterParameterGroupsResult.h>
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

DescribeClusterParameterGroupsResult::DescribeClusterParameterGroupsResult()
{
}

DescribeClusterParameterGroupsResult::DescribeClusterParameterGroupsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeClusterParameterGroupsResult& DescribeClusterParameterGroupsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeClusterParameterGroupsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeClusterParameterGroupsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode parameterGroupsNode = resultNode.FirstChild("ParameterGroups");
    if(!parameterGroupsNode.IsNull())
    {
      XmlNode parameterGroupsMember = parameterGroupsNode.FirstChild("ClusterParameterGroup");
      while(!parameterGroupsMember.IsNull())
      {
        m_parameterGroups.push_back(parameterGroupsMember);
        parameterGroupsMember = parameterGroupsMember.NextNode("ClusterParameterGroup");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeClusterParameterGroupsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
