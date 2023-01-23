/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/RestoreDBInstanceFromS3Result.h>
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

RestoreDBInstanceFromS3Result::RestoreDBInstanceFromS3Result()
{
}

RestoreDBInstanceFromS3Result::RestoreDBInstanceFromS3Result(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

RestoreDBInstanceFromS3Result& RestoreDBInstanceFromS3Result::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "RestoreDBInstanceFromS3Result"))
  {
    resultNode = rootNode.FirstChild("RestoreDBInstanceFromS3Result");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBInstanceNode = resultNode.FirstChild("DBInstance");
    if(!dBInstanceNode.IsNull())
    {
      m_dBInstance = dBInstanceNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::RestoreDBInstanceFromS3Result", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
