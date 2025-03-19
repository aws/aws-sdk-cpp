/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeHsmClientCertificatesResult.h>
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

DescribeHsmClientCertificatesResult::DescribeHsmClientCertificatesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeHsmClientCertificatesResult& DescribeHsmClientCertificatesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeHsmClientCertificatesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeHsmClientCertificatesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
    XmlNode hsmClientCertificatesNode = resultNode.FirstChild("HsmClientCertificates");
    if(!hsmClientCertificatesNode.IsNull())
    {
      XmlNode hsmClientCertificatesMember = hsmClientCertificatesNode.FirstChild("HsmClientCertificate");
      m_hsmClientCertificatesHasBeenSet = !hsmClientCertificatesMember.IsNull();
      while(!hsmClientCertificatesMember.IsNull())
      {
        m_hsmClientCertificates.push_back(hsmClientCertificatesMember);
        hsmClientCertificatesMember = hsmClientCertificatesMember.NextNode("HsmClientCertificate");
      }

      m_hsmClientCertificatesHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeHsmClientCertificatesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
