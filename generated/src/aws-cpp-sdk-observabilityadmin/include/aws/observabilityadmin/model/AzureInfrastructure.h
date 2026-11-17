/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AzureEventHubConfiguration.h>
#include <aws/observabilityadmin/model/AzureFlowLogsInfrastructure.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>The choices for the Azure infrastructure that the setup
 * creates.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureInfrastructure">AWS
 * API Reference</a></p>
 */
class AzureInfrastructure {
 public:
  AWS_OBSERVABILITYADMIN_API AzureInfrastructure() = default;
  AWS_OBSERVABILITYADMIN_API AzureInfrastructure(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureInfrastructure& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Azure subscription in which the setup creates the Event Hubs namespaces
   * and, for <code>AwsManaged</code> Flow Logs, the Storage Accounts. You must
   * specify this value if an <code>AzureScopeItem</code> collects
   * <code>ResourceLogs</code>, or if you specify <code>EventHubs</code> or
   * <code>AwsManaged</code> Flow Logs.</p>
   */
  inline const Aws::String& GetSubscriptionId() const { return m_subscriptionId; }
  inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }
  template <typename SubscriptionIdT = Aws::String>
  void SetSubscriptionId(SubscriptionIdT&& value) {
    m_subscriptionIdHasBeenSet = true;
    m_subscriptionId = std::forward<SubscriptionIdT>(value);
  }
  template <typename SubscriptionIdT = Aws::String>
  AzureInfrastructure& WithSubscriptionId(SubscriptionIdT&& value) {
    SetSubscriptionId(std::forward<SubscriptionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Event Hubs configuration. Specify exactly one entry, which applies to the
   * Event Hubs in every Azure Region. This value applies only if an
   * <code>AzureScopeItem</code> collects <code>ResourceLogs</code>. If you omit it,
   * the setup uses default settings.</p>
   */
  inline const Aws::Vector<AzureEventHubConfiguration>& GetEventHubs() const { return m_eventHubs; }
  inline bool EventHubsHasBeenSet() const { return m_eventHubsHasBeenSet; }
  template <typename EventHubsT = Aws::Vector<AzureEventHubConfiguration>>
  void SetEventHubs(EventHubsT&& value) {
    m_eventHubsHasBeenSet = true;
    m_eventHubs = std::forward<EventHubsT>(value);
  }
  template <typename EventHubsT = Aws::Vector<AzureEventHubConfiguration>>
  AzureInfrastructure& WithEventHubs(EventHubsT&& value) {
    SetEventHubs(std::forward<EventHubsT>(value));
    return *this;
  }
  template <typename EventHubsT = AzureEventHubConfiguration>
  AzureInfrastructure& AddEventHubs(EventHubsT&& value) {
    m_eventHubsHasBeenSet = true;
    m_eventHubs.emplace_back(std::forward<EventHubsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location of your Flow Logs. You must specify this value if an
   * <code>AzureScopeItem</code> collects <code>FlowLogs</code>, and you can specify
   * it only in that case.</p>
   */
  inline const AzureFlowLogsInfrastructure& GetFlowLogs() const { return m_flowLogs; }
  inline bool FlowLogsHasBeenSet() const { return m_flowLogsHasBeenSet; }
  template <typename FlowLogsT = AzureFlowLogsInfrastructure>
  void SetFlowLogs(FlowLogsT&& value) {
    m_flowLogsHasBeenSet = true;
    m_flowLogs = std::forward<FlowLogsT>(value);
  }
  template <typename FlowLogsT = AzureFlowLogsInfrastructure>
  AzureInfrastructure& WithFlowLogs(FlowLogsT&& value) {
    SetFlowLogs(std::forward<FlowLogsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_subscriptionId;

  Aws::Vector<AzureEventHubConfiguration> m_eventHubs;

  AzureFlowLogsInfrastructure m_flowLogs;
  bool m_subscriptionIdHasBeenSet = false;
  bool m_eventHubsHasBeenSet = false;
  bool m_flowLogsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
