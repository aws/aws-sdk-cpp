/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyCustomDomainAssociationResult.h>
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

ModifyCustomDomainAssociationResult::ModifyCustomDomainAssociationResult()
{
}

ModifyCustomDomainAssociationResult::ModifyCustomDomainAssociationResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ModifyCustomDomainAssociationResult& ModifyCustomDomainAssociationResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyCustomDomainAssociationResult"))
  {
    resultNode = rootNode.FirstChild("ModifyCustomDomainAssociationResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode customDomainNameNode = resultNode.FirstChild("CustomDomainName");
    if(!customDomainNameNode.IsNull())
    {
      m_customDomainName = Aws::Utils::Xml::DecodeEscapedXmlText(customDomainNameNode.GetText());
    }
    XmlNode customDomainCertificateArnNode = resultNode.FirstChild("CustomDomainCertificateArn");
    if(!customDomainCertificateArnNode.IsNull())
    {
      m_customDomainCertificateArn = Aws::Utils::Xml::DecodeEscapedXmlText(customDomainCertificateArnNode.GetText());
    }
    XmlNode clusterIdentifierNode = resultNode.FirstChild("ClusterIdentifier");
    if(!clusterIdentifierNode.IsNull())
    {
      m_clusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(clusterIdentifierNode.GetText());
    }
    XmlNode customDomainCertExpiryTimeNode = resultNode.FirstChild("CustomDomainCertExpiryTime");
    if(!customDomainCertExpiryTimeNode.IsNull())
    {
      m_customDomainCertExpiryTime = Aws::Utils::Xml::DecodeEscapedXmlText(customDomainCertExpiryTimeNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::ModifyCustomDomainAssociationResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
