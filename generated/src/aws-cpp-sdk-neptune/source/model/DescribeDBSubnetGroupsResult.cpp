﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/DescribeDBSubnetGroupsResult.h>
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

DescribeDBSubnetGroupsResult::DescribeDBSubnetGroupsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBSubnetGroupsResult& DescribeDBSubnetGroupsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBSubnetGroupsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBSubnetGroupsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
    XmlNode dBSubnetGroupsNode = resultNode.FirstChild("DBSubnetGroups");
    if(!dBSubnetGroupsNode.IsNull())
    {
      XmlNode dBSubnetGroupsMember = dBSubnetGroupsNode.FirstChild("DBSubnetGroup");
      m_dBSubnetGroupsHasBeenSet = !dBSubnetGroupsMember.IsNull();
      while(!dBSubnetGroupsMember.IsNull())
      {
        m_dBSubnetGroups.push_back(dBSubnetGroupsMember);
        dBSubnetGroupsMember = dBSubnetGroupsMember.NextNode("DBSubnetGroup");
      }

      m_dBSubnetGroupsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Neptune::Model::DescribeDBSubnetGroupsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
