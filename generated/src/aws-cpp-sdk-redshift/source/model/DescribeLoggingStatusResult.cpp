/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeLoggingStatusResult.h>
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

DescribeLoggingStatusResult::DescribeLoggingStatusResult() : 
    m_loggingEnabled(false),
    m_logDestinationType(LogDestinationType::NOT_SET)
{
}

DescribeLoggingStatusResult::DescribeLoggingStatusResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_loggingEnabled(false),
    m_logDestinationType(LogDestinationType::NOT_SET)
{
  *this = result;
}

DescribeLoggingStatusResult& DescribeLoggingStatusResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeLoggingStatusResult"))
  {
    resultNode = rootNode.FirstChild("DescribeLoggingStatusResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode loggingEnabledNode = resultNode.FirstChild("LoggingEnabled");
    if(!loggingEnabledNode.IsNull())
    {
      m_loggingEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(loggingEnabledNode.GetText()).c_str()).c_str());
    }
    XmlNode bucketNameNode = resultNode.FirstChild("BucketName");
    if(!bucketNameNode.IsNull())
    {
      m_bucketName = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNameNode.GetText());
    }
    XmlNode s3KeyPrefixNode = resultNode.FirstChild("S3KeyPrefix");
    if(!s3KeyPrefixNode.IsNull())
    {
      m_s3KeyPrefix = Aws::Utils::Xml::DecodeEscapedXmlText(s3KeyPrefixNode.GetText());
    }
    XmlNode lastSuccessfulDeliveryTimeNode = resultNode.FirstChild("LastSuccessfulDeliveryTime");
    if(!lastSuccessfulDeliveryTimeNode.IsNull())
    {
      m_lastSuccessfulDeliveryTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastSuccessfulDeliveryTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode lastFailureTimeNode = resultNode.FirstChild("LastFailureTime");
    if(!lastFailureTimeNode.IsNull())
    {
      m_lastFailureTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastFailureTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode lastFailureMessageNode = resultNode.FirstChild("LastFailureMessage");
    if(!lastFailureMessageNode.IsNull())
    {
      m_lastFailureMessage = Aws::Utils::Xml::DecodeEscapedXmlText(lastFailureMessageNode.GetText());
    }
    XmlNode logDestinationTypeNode = resultNode.FirstChild("LogDestinationType");
    if(!logDestinationTypeNode.IsNull())
    {
      m_logDestinationType = LogDestinationTypeMapper::GetLogDestinationTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(logDestinationTypeNode.GetText()).c_str()).c_str());
    }
    XmlNode logExportsNode = resultNode.FirstChild("LogExports");
    if(!logExportsNode.IsNull())
    {
      XmlNode logExportsMember = logExportsNode.FirstChild("member");
      while(!logExportsMember.IsNull())
      {
        m_logExports.push_back(logExportsMember.GetText());
        logExportsMember = logExportsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeLoggingStatusResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
