/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/model/DescribeDBCapacityReservationsResult.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeDBCapacityReservationsResult::DescribeDBCapacityReservationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

DescribeDBCapacityReservationsResult& DescribeDBCapacityReservationsResult::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBCapacityReservationsResult")) {
    resultNode = rootNode.FirstChild("DescribeDBCapacityReservationsResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode dBCapacityReservationsNode = resultNode.FirstChild("DBCapacityReservations");
    if (!dBCapacityReservationsNode.IsNull()) {
      XmlNode dBCapacityReservationsMember = dBCapacityReservationsNode.FirstChild("member");
      m_dBCapacityReservationsHasBeenSet = !dBCapacityReservationsMember.IsNull();
      while (!dBCapacityReservationsMember.IsNull()) {
        m_dBCapacityReservations.push_back(dBCapacityReservationsMember);
        dBCapacityReservationsMember = dBCapacityReservationsMember.NextNode("member");
      }

      m_dBCapacityReservationsHasBeenSet = true;
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if (!markerNode.IsNull()) {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeDBCapacityReservationsResult",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
