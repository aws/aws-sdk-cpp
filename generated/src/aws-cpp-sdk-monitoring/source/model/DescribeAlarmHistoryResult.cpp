/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/DescribeAlarmHistoryResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeAlarmHistoryResult::DescribeAlarmHistoryResult()
{
}

DescribeAlarmHistoryResult::DescribeAlarmHistoryResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeAlarmHistoryResult& DescribeAlarmHistoryResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeAlarmHistoryResult"))
  {
    resultNode = rootNode.FirstChild("DescribeAlarmHistoryResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode alarmHistoryItemsNode = resultNode.FirstChild("AlarmHistoryItems");
    if(!alarmHistoryItemsNode.IsNull())
    {
      XmlNode alarmHistoryItemsMember = alarmHistoryItemsNode.FirstChild("member");
      while(!alarmHistoryItemsMember.IsNull())
      {
        m_alarmHistoryItems.push_back(alarmHistoryItemsMember);
        alarmHistoryItemsMember = alarmHistoryItemsMember.NextNode("member");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudWatch::Model::DescribeAlarmHistoryResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
