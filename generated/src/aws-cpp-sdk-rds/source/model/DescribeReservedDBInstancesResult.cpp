/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeReservedDBInstancesResult.h>
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

DescribeReservedDBInstancesResult::DescribeReservedDBInstancesResult()
{
}

DescribeReservedDBInstancesResult::DescribeReservedDBInstancesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeReservedDBInstancesResult& DescribeReservedDBInstancesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeReservedDBInstancesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeReservedDBInstancesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode reservedDBInstancesNode = resultNode.FirstChild("ReservedDBInstances");
    if(!reservedDBInstancesNode.IsNull())
    {
      XmlNode reservedDBInstancesMember = reservedDBInstancesNode.FirstChild("ReservedDBInstance");
      while(!reservedDBInstancesMember.IsNull())
      {
        m_reservedDBInstances.push_back(reservedDBInstancesMember);
        reservedDBInstancesMember = reservedDBInstancesMember.NextNode("ReservedDBInstance");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeReservedDBInstancesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
