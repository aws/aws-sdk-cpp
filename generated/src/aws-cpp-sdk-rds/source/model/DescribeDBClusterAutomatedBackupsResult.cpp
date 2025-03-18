/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBClusterAutomatedBackupsResult.h>
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

DescribeDBClusterAutomatedBackupsResult::DescribeDBClusterAutomatedBackupsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBClusterAutomatedBackupsResult& DescribeDBClusterAutomatedBackupsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBClusterAutomatedBackupsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBClusterAutomatedBackupsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
    XmlNode dBClusterAutomatedBackupsNode = resultNode.FirstChild("DBClusterAutomatedBackups");
    if(!dBClusterAutomatedBackupsNode.IsNull())
    {
      XmlNode dBClusterAutomatedBackupsMember = dBClusterAutomatedBackupsNode.FirstChild("DBClusterAutomatedBackup");
      m_dBClusterAutomatedBackupsHasBeenSet = !dBClusterAutomatedBackupsMember.IsNull();
      while(!dBClusterAutomatedBackupsMember.IsNull())
      {
        m_dBClusterAutomatedBackups.push_back(dBClusterAutomatedBackupsMember);
        dBClusterAutomatedBackupsMember = dBClusterAutomatedBackupsMember.NextNode("DBClusterAutomatedBackup");
      }

      m_dBClusterAutomatedBackupsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeDBClusterAutomatedBackupsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
