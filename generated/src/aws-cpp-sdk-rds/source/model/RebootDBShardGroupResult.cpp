/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/RebootDBShardGroupResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

RebootDBShardGroupResult::RebootDBShardGroupResult() : 
    m_maxACU(0.0),
    m_computeRedundancy(0),
    m_publiclyAccessible(false)
{
}

RebootDBShardGroupResult::RebootDBShardGroupResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_maxACU(0.0),
    m_computeRedundancy(0),
    m_publiclyAccessible(false)
{
  *this = result;
}

RebootDBShardGroupResult& RebootDBShardGroupResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "RebootDBShardGroupResult"))
  {
    resultNode = rootNode.FirstChild("RebootDBShardGroupResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBShardGroupResourceIdNode = resultNode.FirstChild("DBShardGroupResourceId");
    if(!dBShardGroupResourceIdNode.IsNull())
    {
      m_dBShardGroupResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(dBShardGroupResourceIdNode.GetText());
    }
    XmlNode dBShardGroupIdentifierNode = resultNode.FirstChild("DBShardGroupIdentifier");
    if(!dBShardGroupIdentifierNode.IsNull())
    {
      m_dBShardGroupIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBShardGroupIdentifierNode.GetText());
    }
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterIdentifierNode.GetText());
    }
    XmlNode maxACUNode = resultNode.FirstChild("MaxACU");
    if(!maxACUNode.IsNull())
    {
      m_maxACU = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxACUNode.GetText()).c_str()).c_str());
    }
    XmlNode computeRedundancyNode = resultNode.FirstChild("ComputeRedundancy");
    if(!computeRedundancyNode.IsNull())
    {
      m_computeRedundancy = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(computeRedundancyNode.GetText()).c_str()).c_str());
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
    }
    XmlNode publiclyAccessibleNode = resultNode.FirstChild("PubliclyAccessible");
    if(!publiclyAccessibleNode.IsNull())
    {
      m_publiclyAccessible = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(publiclyAccessibleNode.GetText()).c_str()).c_str());
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = Aws::Utils::Xml::DecodeEscapedXmlText(endpointNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::RebootDBShardGroupResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
