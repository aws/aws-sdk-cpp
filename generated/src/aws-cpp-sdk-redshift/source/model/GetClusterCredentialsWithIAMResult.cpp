/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/GetClusterCredentialsWithIAMResult.h>
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

GetClusterCredentialsWithIAMResult::GetClusterCredentialsWithIAMResult()
{
}

GetClusterCredentialsWithIAMResult::GetClusterCredentialsWithIAMResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetClusterCredentialsWithIAMResult& GetClusterCredentialsWithIAMResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetClusterCredentialsWithIAMResult"))
  {
    resultNode = rootNode.FirstChild("GetClusterCredentialsWithIAMResult");
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
    XmlNode nextRefreshTimeNode = resultNode.FirstChild("NextRefreshTime");
    if(!nextRefreshTimeNode.IsNull())
    {
      m_nextRefreshTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nextRefreshTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::GetClusterCredentialsWithIAMResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
