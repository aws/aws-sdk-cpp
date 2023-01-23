/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/AuthorizeEndpointAccessResult.h>
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

AuthorizeEndpointAccessResult::AuthorizeEndpointAccessResult() : 
    m_status(AuthorizationStatus::NOT_SET),
    m_allowedAllVPCs(false),
    m_endpointCount(0)
{
}

AuthorizeEndpointAccessResult::AuthorizeEndpointAccessResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_status(AuthorizationStatus::NOT_SET),
    m_allowedAllVPCs(false),
    m_endpointCount(0)
{
  *this = result;
}

AuthorizeEndpointAccessResult& AuthorizeEndpointAccessResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AuthorizeEndpointAccessResult"))
  {
    resultNode = rootNode.FirstChild("AuthorizeEndpointAccessResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode grantorNode = resultNode.FirstChild("Grantor");
    if(!grantorNode.IsNull())
    {
      m_grantor = Aws::Utils::Xml::DecodeEscapedXmlText(grantorNode.GetText());
    }
    XmlNode granteeNode = resultNode.FirstChild("Grantee");
    if(!granteeNode.IsNull())
    {
      m_grantee = Aws::Utils::Xml::DecodeEscapedXmlText(granteeNode.GetText());
    }
    XmlNode clusterIdentifierNode = resultNode.FirstChild("ClusterIdentifier");
    if(!clusterIdentifierNode.IsNull())
    {
      m_clusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(clusterIdentifierNode.GetText());
    }
    XmlNode authorizeTimeNode = resultNode.FirstChild("AuthorizeTime");
    if(!authorizeTimeNode.IsNull())
    {
      m_authorizeTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(authorizeTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode clusterStatusNode = resultNode.FirstChild("ClusterStatus");
    if(!clusterStatusNode.IsNull())
    {
      m_clusterStatus = Aws::Utils::Xml::DecodeEscapedXmlText(clusterStatusNode.GetText());
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = AuthorizationStatusMapper::GetAuthorizationStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
    }
    XmlNode allowedAllVPCsNode = resultNode.FirstChild("AllowedAllVPCs");
    if(!allowedAllVPCsNode.IsNull())
    {
      m_allowedAllVPCs = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allowedAllVPCsNode.GetText()).c_str()).c_str());
    }
    XmlNode allowedVPCsNode = resultNode.FirstChild("AllowedVPCs");
    if(!allowedVPCsNode.IsNull())
    {
      XmlNode allowedVPCsMember = allowedVPCsNode.FirstChild("VpcIdentifier");
      while(!allowedVPCsMember.IsNull())
      {
        m_allowedVPCs.push_back(allowedVPCsMember.GetText());
        allowedVPCsMember = allowedVPCsMember.NextNode("VpcIdentifier");
      }

    }
    XmlNode endpointCountNode = resultNode.FirstChild("EndpointCount");
    if(!endpointCountNode.IsNull())
    {
      m_endpointCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endpointCountNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::AuthorizeEndpointAccessResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
