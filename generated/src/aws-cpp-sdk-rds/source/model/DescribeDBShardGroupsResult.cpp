/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBShardGroupsResult.h>
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

DescribeDBShardGroupsResult::DescribeDBShardGroupsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBShardGroupsResult& DescribeDBShardGroupsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBShardGroupsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBShardGroupsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBShardGroupsNode = resultNode.FirstChild("DBShardGroups");
    if(!dBShardGroupsNode.IsNull())
    {
      XmlNode dBShardGroupsMember = dBShardGroupsNode.FirstChild("DBShardGroup");
      m_dBShardGroupsHasBeenSet = !dBShardGroupsMember.IsNull();
      while(!dBShardGroupsMember.IsNull())
      {
        m_dBShardGroups.push_back(dBShardGroupsMember);
        dBShardGroupsMember = dBShardGroupsMember.NextNode("DBShardGroup");
      }

      m_dBShardGroupsHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeDBShardGroupsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
