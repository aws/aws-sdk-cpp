/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/GetBucketNotificationConfigurationResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetBucketNotificationConfigurationResult::GetBucketNotificationConfigurationResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetBucketNotificationConfigurationResult& GetBucketNotificationConfigurationResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode topicConfigurationsNode = resultNode.FirstChild("TopicConfiguration");
    if(!topicConfigurationsNode.IsNull())
    {
      XmlNode topicConfigurationMember = topicConfigurationsNode;
      m_topicConfigurationsHasBeenSet = !topicConfigurationMember.IsNull();
      while(!topicConfigurationMember.IsNull())
      {
        m_topicConfigurations.push_back(topicConfigurationMember);
        topicConfigurationMember = topicConfigurationMember.NextNode("TopicConfiguration");
      }

      m_topicConfigurationsHasBeenSet = true;
    }
    XmlNode queueConfigurationsNode = resultNode.FirstChild("QueueConfiguration");
    if(!queueConfigurationsNode.IsNull())
    {
      XmlNode queueConfigurationMember = queueConfigurationsNode;
      m_queueConfigurationsHasBeenSet = !queueConfigurationMember.IsNull();
      while(!queueConfigurationMember.IsNull())
      {
        m_queueConfigurations.push_back(queueConfigurationMember);
        queueConfigurationMember = queueConfigurationMember.NextNode("QueueConfiguration");
      }

      m_queueConfigurationsHasBeenSet = true;
    }
    XmlNode lambdaFunctionConfigurationsNode = resultNode.FirstChild("CloudFunctionConfiguration");
    if(!lambdaFunctionConfigurationsNode.IsNull())
    {
      XmlNode cloudFunctionConfigurationMember = lambdaFunctionConfigurationsNode;
      m_lambdaFunctionConfigurationsHasBeenSet = !cloudFunctionConfigurationMember.IsNull();
      while(!cloudFunctionConfigurationMember.IsNull())
      {
        m_lambdaFunctionConfigurations.push_back(cloudFunctionConfigurationMember);
        cloudFunctionConfigurationMember = cloudFunctionConfigurationMember.NextNode("CloudFunctionConfiguration");
      }

      m_lambdaFunctionConfigurationsHasBeenSet = true;
    }
    XmlNode eventBridgeConfigurationNode = resultNode.FirstChild("EventBridgeConfiguration");
    if(!eventBridgeConfigurationNode.IsNull())
    {
      m_eventBridgeConfiguration = eventBridgeConfigurationNode;
      m_eventBridgeConfigurationHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amz-request-id");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
