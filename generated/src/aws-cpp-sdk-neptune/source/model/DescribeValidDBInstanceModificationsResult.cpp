/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/DescribeValidDBInstanceModificationsResult.h>
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

DescribeValidDBInstanceModificationsResult::DescribeValidDBInstanceModificationsResult()
{
}

DescribeValidDBInstanceModificationsResult::DescribeValidDBInstanceModificationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeValidDBInstanceModificationsResult& DescribeValidDBInstanceModificationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeValidDBInstanceModificationsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeValidDBInstanceModificationsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode validDBInstanceModificationsMessageNode = resultNode.FirstChild("ValidDBInstanceModificationsMessage");
    if(!validDBInstanceModificationsMessageNode.IsNull())
    {
      m_validDBInstanceModificationsMessage = validDBInstanceModificationsMessageNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Neptune::Model::DescribeValidDBInstanceModificationsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
