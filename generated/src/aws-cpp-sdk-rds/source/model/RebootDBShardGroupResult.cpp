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

RebootDBShardGroupResult::RebootDBShardGroupResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
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
      m_dBShardGroupResourceIdHasBeenSet = true;
    }
    XmlNode dBShardGroupIdentifierNode = resultNode.FirstChild("DBShardGroupIdentifier");
    if(!dBShardGroupIdentifierNode.IsNull())
    {
      m_dBShardGroupIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBShardGroupIdentifierNode.GetText());
      m_dBShardGroupIdentifierHasBeenSet = true;
    }
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterIdentifierNode.GetText());
      m_dBClusterIdentifierHasBeenSet = true;
    }
    XmlNode maxACUNode = resultNode.FirstChild("MaxACU");
    if(!maxACUNode.IsNull())
    {
      m_maxACU = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxACUNode.GetText()).c_str()).c_str());
      m_maxACUHasBeenSet = true;
    }
    XmlNode minACUNode = resultNode.FirstChild("MinACU");
    if(!minACUNode.IsNull())
    {
      m_minACU = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minACUNode.GetText()).c_str()).c_str());
      m_minACUHasBeenSet = true;
    }
    XmlNode computeRedundancyNode = resultNode.FirstChild("ComputeRedundancy");
    if(!computeRedundancyNode.IsNull())
    {
      m_computeRedundancy = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(computeRedundancyNode.GetText()).c_str()).c_str());
      m_computeRedundancyHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode publiclyAccessibleNode = resultNode.FirstChild("PubliclyAccessible");
    if(!publiclyAccessibleNode.IsNull())
    {
      m_publiclyAccessible = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(publiclyAccessibleNode.GetText()).c_str()).c_str());
      m_publiclyAccessibleHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = Aws::Utils::Xml::DecodeEscapedXmlText(endpointNode.GetText());
      m_endpointHasBeenSet = true;
    }
    XmlNode dBShardGroupArnNode = resultNode.FirstChild("DBShardGroupArn");
    if(!dBShardGroupArnNode.IsNull())
    {
      m_dBShardGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBShardGroupArnNode.GetText());
      m_dBShardGroupArnHasBeenSet = true;
    }
    XmlNode tagListNode = resultNode.FirstChild("TagList");
    if(!tagListNode.IsNull())
    {
      XmlNode tagListMember = tagListNode.FirstChild("Tag");
      m_tagListHasBeenSet = !tagListMember.IsNull();
      while(!tagListMember.IsNull())
      {
        m_tagList.push_back(tagListMember);
        tagListMember = tagListMember.NextNode("Tag");
      }

      m_tagListHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::RebootDBShardGroupResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
