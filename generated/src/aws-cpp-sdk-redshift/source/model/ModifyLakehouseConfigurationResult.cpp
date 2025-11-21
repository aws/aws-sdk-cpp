/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/redshift/model/ModifyLakehouseConfigurationResult.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyLakehouseConfigurationResult::ModifyLakehouseConfigurationResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

ModifyLakehouseConfigurationResult& ModifyLakehouseConfigurationResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyLakehouseConfigurationResult")) {
    resultNode = rootNode.FirstChild("ModifyLakehouseConfigurationResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode clusterIdentifierNode = resultNode.FirstChild("ClusterIdentifier");
    if (!clusterIdentifierNode.IsNull()) {
      m_clusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(clusterIdentifierNode.GetText());
      m_clusterIdentifierHasBeenSet = true;
    }
    XmlNode lakehouseIdcApplicationArnNode = resultNode.FirstChild("LakehouseIdcApplicationArn");
    if (!lakehouseIdcApplicationArnNode.IsNull()) {
      m_lakehouseIdcApplicationArn = Aws::Utils::Xml::DecodeEscapedXmlText(lakehouseIdcApplicationArnNode.GetText());
      m_lakehouseIdcApplicationArnHasBeenSet = true;
    }
    XmlNode lakehouseRegistrationStatusNode = resultNode.FirstChild("LakehouseRegistrationStatus");
    if (!lakehouseRegistrationStatusNode.IsNull()) {
      m_lakehouseRegistrationStatus = Aws::Utils::Xml::DecodeEscapedXmlText(lakehouseRegistrationStatusNode.GetText());
      m_lakehouseRegistrationStatusHasBeenSet = true;
    }
    XmlNode catalogArnNode = resultNode.FirstChild("CatalogArn");
    if (!catalogArnNode.IsNull()) {
      m_catalogArn = Aws::Utils::Xml::DecodeEscapedXmlText(catalogArnNode.GetText());
      m_catalogArnHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::ModifyLakehouseConfigurationResult",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
