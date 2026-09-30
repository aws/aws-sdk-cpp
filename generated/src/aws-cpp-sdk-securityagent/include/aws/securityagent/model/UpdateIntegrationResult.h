/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {
/**
 * <p>Output for the UpdateIntegration operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UpdateIntegrationOutput">AWS
 * API Reference</a></p>
 */
class UpdateIntegrationResult {
 public:
  AWS_SECURITYAGENT_API UpdateIntegrationResult() = default;
  AWS_SECURITYAGENT_API UpdateIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API UpdateIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the integration.</p>
   */
  inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
  template <typename IntegrationIdT = Aws::String>
  void SetIntegrationId(IntegrationIdT&& value) {
    m_integrationIdHasBeenSet = true;
    m_integrationId = std::forward<IntegrationIdT>(value);
  }
  template <typename IntegrationIdT = Aws::String>
  UpdateIntegrationResult& WithIntegrationId(IntegrationIdT&& value) {
    SetIntegrationId(std::forward<IntegrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payload URL to configure on your provider instance. Returned when a
   * webhook is created; unchanged by a rotate.</p>
   */
  inline const Aws::String& GetWebhookUrl() const { return m_webhookUrl; }
  template <typename WebhookUrlT = Aws::String>
  void SetWebhookUrl(WebhookUrlT&& value) {
    m_webhookUrlHasBeenSet = true;
    m_webhookUrl = std::forward<WebhookUrlT>(value);
  }
  template <typename WebhookUrlT = Aws::String>
  UpdateIntegrationResult& WithWebhookUrl(WebhookUrlT&& value) {
    SetWebhookUrl(std::forward<WebhookUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HMAC signing secret for the webhook. Returned only once, in this
   * response; it is never returned again.</p>
   */
  inline const Aws::String& GetSecret() const { return m_secret; }
  template <typename SecretT = Aws::String>
  void SetSecret(SecretT&& value) {
    m_secretHasBeenSet = true;
    m_secret = std::forward<SecretT>(value);
  }
  template <typename SecretT = Aws::String>
  UpdateIntegrationResult& WithSecret(SecretT&& value) {
    SetSecret(std::forward<SecretT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateIntegrationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_integrationId;

  Aws::String m_webhookUrl;

  Aws::String m_secret;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_integrationIdHasBeenSet = false;
  bool m_webhookUrlHasBeenSet = false;
  bool m_secretHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
