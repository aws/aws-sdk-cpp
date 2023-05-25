/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/GetMetricStatisticsResult.h>
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

GetMetricStatisticsResult::GetMetricStatisticsResult()
{
}

GetMetricStatisticsResult::GetMetricStatisticsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetMetricStatisticsResult& GetMetricStatisticsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetMetricStatisticsResult"))
  {
    resultNode = rootNode.FirstChild("GetMetricStatisticsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode labelNode = resultNode.FirstChild("Label");
    if(!labelNode.IsNull())
    {
      m_label = Aws::Utils::Xml::DecodeEscapedXmlText(labelNode.GetText());
    }
    XmlNode datapointsNode = resultNode.FirstChild("Datapoints");
    if(!datapointsNode.IsNull())
    {
      XmlNode datapointsMember = datapointsNode.FirstChild("member");
      while(!datapointsMember.IsNull())
      {
        m_datapoints.push_back(datapointsMember);
        datapointsMember = datapointsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudWatch::Model::GetMetricStatisticsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
