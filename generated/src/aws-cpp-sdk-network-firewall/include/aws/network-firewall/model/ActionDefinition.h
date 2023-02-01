/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/PublishMetricAction.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>A custom action to use in stateless rule actions settings. This is used in
   * <a>CustomAction</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ActionDefinition">AWS
   * API Reference</a></p>
   */
  class ActionDefinition
  {
  public:
    AWS_NETWORKFIREWALL_API ActionDefinition();
    AWS_NETWORKFIREWALL_API ActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API ActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Stateless inspection criteria that publishes the specified metrics to Amazon
     * CloudWatch for the matching packet. This setting defines a CloudWatch dimension
     * value to be published.</p> <p>You can pair this custom action with any of the
     * standard stateless rule actions. For example, you could pair this in a rule
     * action with the standard action that forwards the packet for stateful
     * inspection. Then, when a packet matches the rule, Network Firewall publishes
     * metrics for the packet and forwards it. </p>
     */
    inline const PublishMetricAction& GetPublishMetricAction() const{ return m_publishMetricAction; }

    /**
     * <p>Stateless inspection criteria that publishes the specified metrics to Amazon
     * CloudWatch for the matching packet. This setting defines a CloudWatch dimension
     * value to be published.</p> <p>You can pair this custom action with any of the
     * standard stateless rule actions. For example, you could pair this in a rule
     * action with the standard action that forwards the packet for stateful
     * inspection. Then, when a packet matches the rule, Network Firewall publishes
     * metrics for the packet and forwards it. </p>
     */
    inline bool PublishMetricActionHasBeenSet() const { return m_publishMetricActionHasBeenSet; }

    /**
     * <p>Stateless inspection criteria that publishes the specified metrics to Amazon
     * CloudWatch for the matching packet. This setting defines a CloudWatch dimension
     * value to be published.</p> <p>You can pair this custom action with any of the
     * standard stateless rule actions. For example, you could pair this in a rule
     * action with the standard action that forwards the packet for stateful
     * inspection. Then, when a packet matches the rule, Network Firewall publishes
     * metrics for the packet and forwards it. </p>
     */
    inline void SetPublishMetricAction(const PublishMetricAction& value) { m_publishMetricActionHasBeenSet = true; m_publishMetricAction = value; }

    /**
     * <p>Stateless inspection criteria that publishes the specified metrics to Amazon
     * CloudWatch for the matching packet. This setting defines a CloudWatch dimension
     * value to be published.</p> <p>You can pair this custom action with any of the
     * standard stateless rule actions. For example, you could pair this in a rule
     * action with the standard action that forwards the packet for stateful
     * inspection. Then, when a packet matches the rule, Network Firewall publishes
     * metrics for the packet and forwards it. </p>
     */
    inline void SetPublishMetricAction(PublishMetricAction&& value) { m_publishMetricActionHasBeenSet = true; m_publishMetricAction = std::move(value); }

    /**
     * <p>Stateless inspection criteria that publishes the specified metrics to Amazon
     * CloudWatch for the matching packet. This setting defines a CloudWatch dimension
     * value to be published.</p> <p>You can pair this custom action with any of the
     * standard stateless rule actions. For example, you could pair this in a rule
     * action with the standard action that forwards the packet for stateful
     * inspection. Then, when a packet matches the rule, Network Firewall publishes
     * metrics for the packet and forwards it. </p>
     */
    inline ActionDefinition& WithPublishMetricAction(const PublishMetricAction& value) { SetPublishMetricAction(value); return *this;}

    /**
     * <p>Stateless inspection criteria that publishes the specified metrics to Amazon
     * CloudWatch for the matching packet. This setting defines a CloudWatch dimension
     * value to be published.</p> <p>You can pair this custom action with any of the
     * standard stateless rule actions. For example, you could pair this in a rule
     * action with the standard action that forwards the packet for stateful
     * inspection. Then, when a packet matches the rule, Network Firewall publishes
     * metrics for the packet and forwards it. </p>
     */
    inline ActionDefinition& WithPublishMetricAction(PublishMetricAction&& value) { SetPublishMetricAction(std::move(value)); return *this;}

  private:

    PublishMetricAction m_publishMetricAction;
    bool m_publishMetricActionHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
