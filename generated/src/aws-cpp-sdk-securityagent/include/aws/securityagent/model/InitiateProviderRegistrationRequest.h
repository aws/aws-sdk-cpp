/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/Provider.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 */
class InitiateProviderRegistrationRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API InitiateProviderRegistrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InitiateProviderRegistration"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The provider to initiate registration with.</p>
   */
  inline Provider GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  inline void SetProvider(Provider value) {
    m_providerHasBeenSet = true;
    m_provider = value;
  }
  inline InitiateProviderRegistrationRequest& WithProvider(Provider value) {
    SetProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTPS URL of a self-managed provider instance. Omit for SaaS
   * providers.</p>
   */
  inline const Aws::String& GetTargetUrl() const { return m_targetUrl; }
  inline bool TargetUrlHasBeenSet() const { return m_targetUrlHasBeenSet; }
  template <typename TargetUrlT = Aws::String>
  void SetTargetUrl(TargetUrlT&& value) {
    m_targetUrlHasBeenSet = true;
    m_targetUrl = std::forward<TargetUrlT>(value);
  }
  template <typename TargetUrlT = Aws::String>
  InitiateProviderRegistrationRequest& WithTargetUrl(TargetUrlT&& value) {
    SetTargetUrl(std::forward<TargetUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the organization to connect.</p>
   */
  inline const Aws::String& GetOrganizationName() const { return m_organizationName; }
  inline bool OrganizationNameHasBeenSet() const { return m_organizationNameHasBeenSet; }
  template <typename OrganizationNameT = Aws::String>
  void SetOrganizationName(OrganizationNameT&& value) {
    m_organizationNameHasBeenSet = true;
    m_organizationName = std::forward<OrganizationNameT>(value);
  }
  template <typename OrganizationNameT = Aws::String>
  InitiateProviderRegistrationRequest& WithOrganizationName(OrganizationNameT&& value) {
    SetOrganizationName(std::forward<OrganizationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client ID of the OAuth application registered on your self-managed
   * provider instance.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  InitiateProviderRegistrationRequest& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client secret of the OAuth application registered on your self-managed
   * provider instance.</p>
   */
  inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
  inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
  template <typename ClientSecretT = Aws::String>
  void SetClientSecret(ClientSecretT&& value) {
    m_clientSecretHasBeenSet = true;
    m_clientSecret = std::forward<ClientSecretT>(value);
  }
  template <typename ClientSecretT = Aws::String>
  InitiateProviderRegistrationRequest& WithClientSecret(ClientSecretT&& value) {
    SetClientSecret(std::forward<ClientSecretT>(value));
    return *this;
  }
  ///@}
 private:
  Provider m_provider{Provider::NOT_SET};

  Aws::String m_targetUrl;

  Aws::String m_organizationName;

  Aws::String m_clientId;

  Aws::String m_clientSecret;
  bool m_providerHasBeenSet = false;
  bool m_targetUrlHasBeenSet = false;
  bool m_organizationNameHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_clientSecretHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
