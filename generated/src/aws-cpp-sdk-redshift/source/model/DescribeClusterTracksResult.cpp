﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeClusterTracksResult.h>
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

DescribeClusterTracksResult::DescribeClusterTracksResult()
{
}

DescribeClusterTracksResult::DescribeClusterTracksResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeClusterTracksResult& DescribeClusterTracksResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeClusterTracksResult"))
  {
    resultNode = rootNode.FirstChild("DescribeClusterTracksResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode maintenanceTracksNode = resultNode.FirstChild("MaintenanceTracks");
    if(!maintenanceTracksNode.IsNull())
    {
      XmlNode maintenanceTracksMember = maintenanceTracksNode.FirstChild("MaintenanceTrack");
      while(!maintenanceTracksMember.IsNull())
      {
        m_maintenanceTracks.push_back(maintenanceTracksMember);
        maintenanceTracksMember = maintenanceTracksMember.NextNode("MaintenanceTrack");
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
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeClusterTracksResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
