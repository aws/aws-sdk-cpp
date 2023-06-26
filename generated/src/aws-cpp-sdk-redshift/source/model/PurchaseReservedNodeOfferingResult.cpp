/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/PurchaseReservedNodeOfferingResult.h>
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

PurchaseReservedNodeOfferingResult::PurchaseReservedNodeOfferingResult()
{
}

PurchaseReservedNodeOfferingResult::PurchaseReservedNodeOfferingResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

PurchaseReservedNodeOfferingResult& PurchaseReservedNodeOfferingResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "PurchaseReservedNodeOfferingResult"))
  {
    resultNode = rootNode.FirstChild("PurchaseReservedNodeOfferingResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode reservedNodeNode = resultNode.FirstChild("ReservedNode");
    if(!reservedNodeNode.IsNull())
    {
      m_reservedNode = reservedNodeNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::PurchaseReservedNodeOfferingResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
