﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/AddPartnerResult.h>
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

AddPartnerResult::AddPartnerResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

AddPartnerResult& AddPartnerResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AddPartnerResult"))
  {
    resultNode = rootNode.FirstChild("AddPartnerResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode databaseNameNode = resultNode.FirstChild("DatabaseName");
    if(!databaseNameNode.IsNull())
    {
      m_databaseName = Aws::Utils::Xml::DecodeEscapedXmlText(databaseNameNode.GetText());
      m_databaseNameHasBeenSet = true;
    }
    XmlNode partnerNameNode = resultNode.FirstChild("PartnerName");
    if(!partnerNameNode.IsNull())
    {
      m_partnerName = Aws::Utils::Xml::DecodeEscapedXmlText(partnerNameNode.GetText());
      m_partnerNameHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::AddPartnerResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
