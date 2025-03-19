/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DisableLoggingResult.h>
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

DisableLoggingResult::DisableLoggingResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DisableLoggingResult& DisableLoggingResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DisableLoggingResult"))
  {
    resultNode = rootNode.FirstChild("DisableLoggingResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode loggingEnabledNode = resultNode.FirstChild("LoggingEnabled");
    if(!loggingEnabledNode.IsNull())
    {
      m_loggingEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(loggingEnabledNode.GetText()).c_str()).c_str());
      m_loggingEnabledHasBeenSet = true;
    }
    XmlNode bucketNameNode = resultNode.FirstChild("BucketName");
    if(!bucketNameNode.IsNull())
    {
      m_bucketName = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNameNode.GetText());
      m_bucketNameHasBeenSet = true;
    }
    XmlNode s3KeyPrefixNode = resultNode.FirstChild("S3KeyPrefix");
    if(!s3KeyPrefixNode.IsNull())
    {
      m_s3KeyPrefix = Aws::Utils::Xml::DecodeEscapedXmlText(s3KeyPrefixNode.GetText());
      m_s3KeyPrefixHasBeenSet = true;
    }
    XmlNode lastSuccessfulDeliveryTimeNode = resultNode.FirstChild("LastSuccessfulDeliveryTime");
    if(!lastSuccessfulDeliveryTimeNode.IsNull())
    {
      m_lastSuccessfulDeliveryTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastSuccessfulDeliveryTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastSuccessfulDeliveryTimeHasBeenSet = true;
    }
    XmlNode lastFailureTimeNode = resultNode.FirstChild("LastFailureTime");
    if(!lastFailureTimeNode.IsNull())
    {
      m_lastFailureTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastFailureTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastFailureTimeHasBeenSet = true;
    }
    XmlNode lastFailureMessageNode = resultNode.FirstChild("LastFailureMessage");
    if(!lastFailureMessageNode.IsNull())
    {
      m_lastFailureMessage = Aws::Utils::Xml::DecodeEscapedXmlText(lastFailureMessageNode.GetText());
      m_lastFailureMessageHasBeenSet = true;
    }
    XmlNode logDestinationTypeNode = resultNode.FirstChild("LogDestinationType");
    if(!logDestinationTypeNode.IsNull())
    {
      m_logDestinationType = LogDestinationTypeMapper::GetLogDestinationTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(logDestinationTypeNode.GetText()).c_str()));
      m_logDestinationTypeHasBeenSet = true;
    }
    XmlNode logExportsNode = resultNode.FirstChild("LogExports");
    if(!logExportsNode.IsNull())
    {
      XmlNode logExportsMember = logExportsNode.FirstChild("member");
      m_logExportsHasBeenSet = !logExportsMember.IsNull();
      while(!logExportsMember.IsNull())
      {
        m_logExports.push_back(logExportsMember.GetText());
        logExportsMember = logExportsMember.NextNode("member");
      }

      m_logExportsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DisableLoggingResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
