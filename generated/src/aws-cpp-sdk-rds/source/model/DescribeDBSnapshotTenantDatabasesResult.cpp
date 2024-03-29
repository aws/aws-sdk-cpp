﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBSnapshotTenantDatabasesResult.h>
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

DescribeDBSnapshotTenantDatabasesResult::DescribeDBSnapshotTenantDatabasesResult()
{
}

DescribeDBSnapshotTenantDatabasesResult::DescribeDBSnapshotTenantDatabasesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBSnapshotTenantDatabasesResult& DescribeDBSnapshotTenantDatabasesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBSnapshotTenantDatabasesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBSnapshotTenantDatabasesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode dBSnapshotTenantDatabasesNode = resultNode.FirstChild("DBSnapshotTenantDatabases");
    if(!dBSnapshotTenantDatabasesNode.IsNull())
    {
      XmlNode dBSnapshotTenantDatabasesMember = dBSnapshotTenantDatabasesNode.FirstChild("DBSnapshotTenantDatabase");
      while(!dBSnapshotTenantDatabasesMember.IsNull())
      {
        m_dBSnapshotTenantDatabases.push_back(dBSnapshotTenantDatabasesMember);
        dBSnapshotTenantDatabasesMember = dBSnapshotTenantDatabasesMember.NextNode("DBSnapshotTenantDatabase");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeDBSnapshotTenantDatabasesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
