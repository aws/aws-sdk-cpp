/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/StartMessageMoveTaskResult.h>
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

StartMessageMoveTaskResult::StartMessageMoveTaskResult()
{
}

StartMessageMoveTaskResult::StartMessageMoveTaskResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

StartMessageMoveTaskResult& StartMessageMoveTaskResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "StartMessageMoveTaskResult"))
  {
    resultNode = rootNode.FirstChild("StartMessageMoveTaskResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode taskHandleNode = resultNode.FirstChild("TaskHandle");
    if(!taskHandleNode.IsNull())
    {
      m_taskHandle = Aws::Utils::Xml::DecodeEscapedXmlText(taskHandleNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SQS::Model::StartMessageMoveTaskResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
