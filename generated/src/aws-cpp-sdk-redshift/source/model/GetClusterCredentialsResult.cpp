/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/GetClusterCredentialsResult.h>
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

GetClusterCredentialsResult::GetClusterCredentialsResult()
{
}

GetClusterCredentialsResult::GetClusterCredentialsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetClusterCredentialsResult& GetClusterCredentialsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetClusterCredentialsResult"))
  {
    resultNode = rootNode.FirstChild("GetClusterCredentialsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dbUserNode = resultNode.FirstChild("DbUser");
    if(!dbUserNode.IsNull())
    {
      m_dbUser = Aws::Utils::Xml::DecodeEscapedXmlText(dbUserNode.GetText());
    }
    XmlNode dbPasswordNode = resultNode.FirstChild("DbPassword");
    if(!dbPasswordNode.IsNull())
    {
      m_dbPassword = Aws::Utils::Xml::DecodeEscapedXmlText(dbPasswordNode.GetText());
    }
    XmlNode expirationNode = resultNode.FirstChild("Expiration");
    if(!expirationNode.IsNull())
    {
      m_expiration = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(expirationNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::GetClusterCredentialsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
