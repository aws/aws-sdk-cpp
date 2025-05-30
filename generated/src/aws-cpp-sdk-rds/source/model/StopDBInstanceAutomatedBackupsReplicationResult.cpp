﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/StopDBInstanceAutomatedBackupsReplicationResult.h>
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

StopDBInstanceAutomatedBackupsReplicationResult::StopDBInstanceAutomatedBackupsReplicationResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

StopDBInstanceAutomatedBackupsReplicationResult& StopDBInstanceAutomatedBackupsReplicationResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "StopDBInstanceAutomatedBackupsReplicationResult"))
  {
    resultNode = rootNode.FirstChild("StopDBInstanceAutomatedBackupsReplicationResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBInstanceAutomatedBackupNode = resultNode.FirstChild("DBInstanceAutomatedBackup");
    if(!dBInstanceAutomatedBackupNode.IsNull())
    {
      m_dBInstanceAutomatedBackup = dBInstanceAutomatedBackupNode;
      m_dBInstanceAutomatedBackupHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::StopDBInstanceAutomatedBackupsReplicationResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
