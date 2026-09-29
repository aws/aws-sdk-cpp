/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/WebhookAction.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 * <p>Input for creating or rotating an integration's webhook.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UpdateIntegrationInput">AWS
 * API Reference</a></p>
 */
class UpdateIntegrationRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API UpdateIntegrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateIntegration"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the integration whose webhook you want to create or rotate.</p>
   */
  inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
  inline bool IntegrationIdHasBeenSet() const { return m_integrationIdHasBeenSet; }
  template <typename IntegrationIdT = Aws::String>
  void SetIntegrationId(IntegrationIdT&& value) {
    m_integrationIdHasBeenSet = true;
    m_integrationId = std::forward<IntegrationIdT>(value);
  }
  template <typename IntegrationIdT = Aws::String>
  UpdateIntegrationRequest& WithIntegrationId(IntegrationIdT&& value) {
    SetIntegrationId(std::forward<IntegrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action to perform on the integration's webhook.</p>
   */
  inline WebhookAction GetWebhookAction() const { return m_webhookAction; }
  inline bool WebhookActionHasBeenSet() const { return m_webhookActionHasBeenSet; }
  inline void SetWebhookAction(WebhookAction value) {
    m_webhookActionHasBeenSet = true;
    m_webhookAction = value;
  }
  inline UpdateIntegrationRequest& WithWebhookAction(WebhookAction value) {
    SetWebhookAction(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_integrationId;

  WebhookAction m_webhookAction{WebhookAction::NOT_SET};
  bool m_integrationIdHasBeenSet = false;
  bool m_webhookActionHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
