/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/DescribeAlarmsResult.h>
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

DescribeAlarmsResult::DescribeAlarmsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeAlarmsResult& DescribeAlarmsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeAlarmsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeAlarmsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode compositeAlarmsNode = resultNode.FirstChild("CompositeAlarms");
    if(!compositeAlarmsNode.IsNull())
    {
      XmlNode compositeAlarmsMember = compositeAlarmsNode.FirstChild("member");
      m_compositeAlarmsHasBeenSet = !compositeAlarmsMember.IsNull();
      while(!compositeAlarmsMember.IsNull())
      {
        m_compositeAlarms.push_back(compositeAlarmsMember);
        compositeAlarmsMember = compositeAlarmsMember.NextNode("member");
      }

      m_compositeAlarmsHasBeenSet = true;
    }
    XmlNode metricAlarmsNode = resultNode.FirstChild("MetricAlarms");
    if(!metricAlarmsNode.IsNull())
    {
      XmlNode metricAlarmsMember = metricAlarmsNode.FirstChild("member");
      m_metricAlarmsHasBeenSet = !metricAlarmsMember.IsNull();
      while(!metricAlarmsMember.IsNull())
      {
        m_metricAlarms.push_back(metricAlarmsMember);
        metricAlarmsMember = metricAlarmsMember.NextNode("member");
      }

      m_metricAlarmsHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::CloudWatch::Model::DescribeAlarmsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
