/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/ListMessageMoveTasksResult.h>
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

ListMessageMoveTasksResult::ListMessageMoveTasksResult()
{
}

ListMessageMoveTasksResult::ListMessageMoveTasksResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListMessageMoveTasksResult& ListMessageMoveTasksResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListMessageMoveTasksResult"))
  {
    resultNode = rootNode.FirstChild("ListMessageMoveTasksResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode resultsNode = resultNode.FirstChild("ListMessageMoveTasksResultEntry");
    if(!resultsNode.IsNull())
    {
      XmlNode listMessageMoveTasksResultEntryMember = resultsNode;
      while(!listMessageMoveTasksResultEntryMember.IsNull())
      {
        m_results.push_back(listMessageMoveTasksResultEntryMember);
        listMessageMoveTasksResultEntryMember = listMessageMoveTasksResultEntryMember.NextNode("ListMessageMoveTasksResultEntry");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SQS::Model::ListMessageMoveTasksResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
