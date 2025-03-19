/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/GetMetricDataResult.h>
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

GetMetricDataResult::GetMetricDataResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetMetricDataResult& GetMetricDataResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetMetricDataResult"))
  {
    resultNode = rootNode.FirstChild("GetMetricDataResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode metricDataResultsNode = resultNode.FirstChild("MetricDataResults");
    if(!metricDataResultsNode.IsNull())
    {
      XmlNode metricDataResultsMember = metricDataResultsNode.FirstChild("member");
      m_metricDataResultsHasBeenSet = !metricDataResultsMember.IsNull();
      while(!metricDataResultsMember.IsNull())
      {
        m_metricDataResults.push_back(metricDataResultsMember);
        metricDataResultsMember = metricDataResultsMember.NextNode("member");
      }

      m_metricDataResultsHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
    XmlNode messagesNode = resultNode.FirstChild("Messages");
    if(!messagesNode.IsNull())
    {
      XmlNode messagesMember = messagesNode.FirstChild("member");
      m_messagesHasBeenSet = !messagesMember.IsNull();
      while(!messagesMember.IsNull())
      {
        m_messages.push_back(messagesMember);
        messagesMember = messagesMember.NextNode("member");
      }

      m_messagesHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::CloudWatch::Model::GetMetricDataResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
