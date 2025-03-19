/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sdb/model/DomainMetadataResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SimpleDB::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DomainMetadataResult::DomainMetadataResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DomainMetadataResult& DomainMetadataResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DomainMetadataResult"))
  {
    resultNode = rootNode.FirstChild("DomainMetadataResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode itemCountNode = resultNode.FirstChild("ItemCount");
    if(!itemCountNode.IsNull())
    {
      m_itemCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(itemCountNode.GetText()).c_str()).c_str());
      m_itemCountHasBeenSet = true;
    }
    XmlNode itemNamesSizeBytesNode = resultNode.FirstChild("ItemNamesSizeBytes");
    if(!itemNamesSizeBytesNode.IsNull())
    {
      m_itemNamesSizeBytes = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(itemNamesSizeBytesNode.GetText()).c_str()).c_str());
      m_itemNamesSizeBytesHasBeenSet = true;
    }
    XmlNode attributeNameCountNode = resultNode.FirstChild("AttributeNameCount");
    if(!attributeNameCountNode.IsNull())
    {
      m_attributeNameCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(attributeNameCountNode.GetText()).c_str()).c_str());
      m_attributeNameCountHasBeenSet = true;
    }
    XmlNode attributeNamesSizeBytesNode = resultNode.FirstChild("AttributeNamesSizeBytes");
    if(!attributeNamesSizeBytesNode.IsNull())
    {
      m_attributeNamesSizeBytes = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(attributeNamesSizeBytesNode.GetText()).c_str()).c_str());
      m_attributeNamesSizeBytesHasBeenSet = true;
    }
    XmlNode attributeValueCountNode = resultNode.FirstChild("AttributeValueCount");
    if(!attributeValueCountNode.IsNull())
    {
      m_attributeValueCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(attributeValueCountNode.GetText()).c_str()).c_str());
      m_attributeValueCountHasBeenSet = true;
    }
    XmlNode attributeValuesSizeBytesNode = resultNode.FirstChild("AttributeValuesSizeBytes");
    if(!attributeValuesSizeBytesNode.IsNull())
    {
      m_attributeValuesSizeBytes = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(attributeValuesSizeBytesNode.GetText()).c_str()).c_str());
      m_attributeValuesSizeBytesHasBeenSet = true;
    }
    XmlNode timestampNode = resultNode.FirstChild("Timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timestampNode.GetText()).c_str()).c_str());
      m_timestampHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::SimpleDB::Model::DomainMetadataResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
