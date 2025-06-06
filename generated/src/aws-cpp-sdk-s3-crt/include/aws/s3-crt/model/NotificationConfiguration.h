﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3-crt/model/EventBridgeConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3-crt/model/TopicConfiguration.h>
#include <aws/s3-crt/model/QueueConfiguration.h>
#include <aws/s3-crt/model/LambdaFunctionConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Crt
{
namespace Model
{

  /**
   * <p>A container for specifying the notification configuration of the bucket. If
   * this element is empty, notifications are turned off for the
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/NotificationConfiguration">AWS
   * API Reference</a></p>
   */
  class NotificationConfiguration
  {
  public:
    AWS_S3CRT_API NotificationConfiguration() = default;
    AWS_S3CRT_API NotificationConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CRT_API NotificationConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The topic to which notifications are sent and the events for which
     * notifications are generated.</p>
     */
    inline const Aws::Vector<TopicConfiguration>& GetTopicConfigurations() const { return m_topicConfigurations; }
    inline bool TopicConfigurationsHasBeenSet() const { return m_topicConfigurationsHasBeenSet; }
    template<typename TopicConfigurationsT = Aws::Vector<TopicConfiguration>>
    void SetTopicConfigurations(TopicConfigurationsT&& value) { m_topicConfigurationsHasBeenSet = true; m_topicConfigurations = std::forward<TopicConfigurationsT>(value); }
    template<typename TopicConfigurationsT = Aws::Vector<TopicConfiguration>>
    NotificationConfiguration& WithTopicConfigurations(TopicConfigurationsT&& value) { SetTopicConfigurations(std::forward<TopicConfigurationsT>(value)); return *this;}
    template<typename TopicConfigurationsT = TopicConfiguration>
    NotificationConfiguration& AddTopicConfigurations(TopicConfigurationsT&& value) { m_topicConfigurationsHasBeenSet = true; m_topicConfigurations.emplace_back(std::forward<TopicConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Simple Queue Service queues to publish messages to and the events
     * for which to publish messages.</p>
     */
    inline const Aws::Vector<QueueConfiguration>& GetQueueConfigurations() const { return m_queueConfigurations; }
    inline bool QueueConfigurationsHasBeenSet() const { return m_queueConfigurationsHasBeenSet; }
    template<typename QueueConfigurationsT = Aws::Vector<QueueConfiguration>>
    void SetQueueConfigurations(QueueConfigurationsT&& value) { m_queueConfigurationsHasBeenSet = true; m_queueConfigurations = std::forward<QueueConfigurationsT>(value); }
    template<typename QueueConfigurationsT = Aws::Vector<QueueConfiguration>>
    NotificationConfiguration& WithQueueConfigurations(QueueConfigurationsT&& value) { SetQueueConfigurations(std::forward<QueueConfigurationsT>(value)); return *this;}
    template<typename QueueConfigurationsT = QueueConfiguration>
    NotificationConfiguration& AddQueueConfigurations(QueueConfigurationsT&& value) { m_queueConfigurationsHasBeenSet = true; m_queueConfigurations.emplace_back(std::forward<QueueConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the Lambda functions to invoke and the events for which to invoke
     * them.</p>
     */
    inline const Aws::Vector<LambdaFunctionConfiguration>& GetLambdaFunctionConfigurations() const { return m_lambdaFunctionConfigurations; }
    inline bool LambdaFunctionConfigurationsHasBeenSet() const { return m_lambdaFunctionConfigurationsHasBeenSet; }
    template<typename LambdaFunctionConfigurationsT = Aws::Vector<LambdaFunctionConfiguration>>
    void SetLambdaFunctionConfigurations(LambdaFunctionConfigurationsT&& value) { m_lambdaFunctionConfigurationsHasBeenSet = true; m_lambdaFunctionConfigurations = std::forward<LambdaFunctionConfigurationsT>(value); }
    template<typename LambdaFunctionConfigurationsT = Aws::Vector<LambdaFunctionConfiguration>>
    NotificationConfiguration& WithLambdaFunctionConfigurations(LambdaFunctionConfigurationsT&& value) { SetLambdaFunctionConfigurations(std::forward<LambdaFunctionConfigurationsT>(value)); return *this;}
    template<typename LambdaFunctionConfigurationsT = LambdaFunctionConfiguration>
    NotificationConfiguration& AddLambdaFunctionConfigurations(LambdaFunctionConfigurationsT&& value) { m_lambdaFunctionConfigurationsHasBeenSet = true; m_lambdaFunctionConfigurations.emplace_back(std::forward<LambdaFunctionConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables delivery of events to Amazon EventBridge.</p>
     */
    inline const EventBridgeConfiguration& GetEventBridgeConfiguration() const { return m_eventBridgeConfiguration; }
    inline bool EventBridgeConfigurationHasBeenSet() const { return m_eventBridgeConfigurationHasBeenSet; }
    template<typename EventBridgeConfigurationT = EventBridgeConfiguration>
    void SetEventBridgeConfiguration(EventBridgeConfigurationT&& value) { m_eventBridgeConfigurationHasBeenSet = true; m_eventBridgeConfiguration = std::forward<EventBridgeConfigurationT>(value); }
    template<typename EventBridgeConfigurationT = EventBridgeConfiguration>
    NotificationConfiguration& WithEventBridgeConfiguration(EventBridgeConfigurationT&& value) { SetEventBridgeConfiguration(std::forward<EventBridgeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    NotificationConfiguration& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TopicConfiguration> m_topicConfigurations;
    bool m_topicConfigurationsHasBeenSet = false;

    Aws::Vector<QueueConfiguration> m_queueConfigurations;
    bool m_queueConfigurationsHasBeenSet = false;

    Aws::Vector<LambdaFunctionConfiguration> m_lambdaFunctionConfigurations;
    bool m_lambdaFunctionConfigurationsHasBeenSet = false;

    EventBridgeConfiguration m_eventBridgeConfiguration;
    bool m_eventBridgeConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
