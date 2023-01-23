/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeReservedDBInstancesOfferingsResult.h>
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

DescribeReservedDBInstancesOfferingsResult::DescribeReservedDBInstancesOfferingsResult()
{
}

DescribeReservedDBInstancesOfferingsResult::DescribeReservedDBInstancesOfferingsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeReservedDBInstancesOfferingsResult& DescribeReservedDBInstancesOfferingsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeReservedDBInstancesOfferingsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeReservedDBInstancesOfferingsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode reservedDBInstancesOfferingsNode = resultNode.FirstChild("ReservedDBInstancesOfferings");
    if(!reservedDBInstancesOfferingsNode.IsNull())
    {
      XmlNode reservedDBInstancesOfferingsMember = reservedDBInstancesOfferingsNode.FirstChild("ReservedDBInstancesOffering");
      while(!reservedDBInstancesOfferingsMember.IsNull())
      {
        m_reservedDBInstancesOfferings.push_back(reservedDBInstancesOfferingsMember);
        reservedDBInstancesOfferingsMember = reservedDBInstancesOfferingsMember.NextNode("ReservedDBInstancesOffering");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeReservedDBInstancesOfferingsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
