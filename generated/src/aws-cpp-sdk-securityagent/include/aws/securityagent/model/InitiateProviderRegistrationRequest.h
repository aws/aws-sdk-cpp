/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
   * <p>Provider to register with</p>
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
 private:
  Provider m_provider{Provider::NOT_SET};
  bool m_providerHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
