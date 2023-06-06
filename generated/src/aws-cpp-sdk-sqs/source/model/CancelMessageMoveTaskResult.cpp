/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/CancelMessageMoveTaskResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

CancelMessageMoveTaskResult::CancelMessageMoveTaskResult() : 
    m_approximateNumberOfMessagesMoved(0)
{
}

CancelMessageMoveTaskResult::CancelMessageMoveTaskResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_approximateNumberOfMessagesMoved(0)
{
  *this = result;
}

CancelMessageMoveTaskResult& CancelMessageMoveTaskResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CancelMessageMoveTaskResult"))
  {
    resultNode = rootNode.FirstChild("CancelMessageMoveTaskResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode approximateNumberOfMessagesMovedNode = resultNode.FirstChild("ApproximateNumberOfMessagesMoved");
    if(!approximateNumberOfMessagesMovedNode.IsNull())
    {
      m_approximateNumberOfMessagesMoved = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(approximateNumberOfMessagesMovedNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SQS::Model::CancelMessageMoveTaskResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
