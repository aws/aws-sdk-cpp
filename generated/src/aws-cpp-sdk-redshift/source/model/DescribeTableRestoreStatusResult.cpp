/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeTableRestoreStatusResult.h>
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

DescribeTableRestoreStatusResult::DescribeTableRestoreStatusResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeTableRestoreStatusResult& DescribeTableRestoreStatusResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeTableRestoreStatusResult"))
  {
    resultNode = rootNode.FirstChild("DescribeTableRestoreStatusResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode tableRestoreStatusDetailsNode = resultNode.FirstChild("TableRestoreStatusDetails");
    if(!tableRestoreStatusDetailsNode.IsNull())
    {
      XmlNode tableRestoreStatusDetailsMember = tableRestoreStatusDetailsNode.FirstChild("TableRestoreStatus");
      m_tableRestoreStatusDetailsHasBeenSet = !tableRestoreStatusDetailsMember.IsNull();
      while(!tableRestoreStatusDetailsMember.IsNull())
      {
        m_tableRestoreStatusDetails.push_back(tableRestoreStatusDetailsMember);
        tableRestoreStatusDetailsMember = tableRestoreStatusDetailsMember.NextNode("TableRestoreStatus");
      }

      m_tableRestoreStatusDetailsHasBeenSet = true;
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeTableRestoreStatusResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
