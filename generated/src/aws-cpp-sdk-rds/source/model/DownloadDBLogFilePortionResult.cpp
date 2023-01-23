/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DownloadDBLogFilePortionResult.h>
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

DownloadDBLogFilePortionResult::DownloadDBLogFilePortionResult() : 
    m_additionalDataPending(false)
{
}

DownloadDBLogFilePortionResult::DownloadDBLogFilePortionResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_additionalDataPending(false)
{
  *this = result;
}

DownloadDBLogFilePortionResult& DownloadDBLogFilePortionResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DownloadDBLogFilePortionResult"))
  {
    resultNode = rootNode.FirstChild("DownloadDBLogFilePortionResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode logFileDataNode = resultNode.FirstChild("LogFileData");
    if(!logFileDataNode.IsNull())
    {
      m_logFileData = Aws::Utils::Xml::DecodeEscapedXmlText(logFileDataNode.GetText());
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode additionalDataPendingNode = resultNode.FirstChild("AdditionalDataPending");
    if(!additionalDataPendingNode.IsNull())
    {
      m_additionalDataPending = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(additionalDataPendingNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DownloadDBLogFilePortionResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
