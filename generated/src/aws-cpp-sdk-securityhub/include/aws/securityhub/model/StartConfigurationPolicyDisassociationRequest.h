/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/model/Target.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class StartConfigurationPolicyDisassociationRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API StartConfigurationPolicyDisassociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartConfigurationPolicyDisassociation"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The identifier of the target account, organizational unit, or the root to
     * disassociate from the specified configuration. </p>
     */
    inline const Target& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Target>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Target>
    StartConfigurationPolicyDisassociationRequest& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of a configuration policy, the universally
     * unique identifier (UUID) of a configuration policy, or a value of
     * <code>SELF_MANAGED_SECURITY_HUB</code> for a self-managed configuration. </p>
     */
    inline const Aws::String& GetConfigurationPolicyIdentifier() const { return m_configurationPolicyIdentifier; }
    inline bool ConfigurationPolicyIdentifierHasBeenSet() const { return m_configurationPolicyIdentifierHasBeenSet; }
    template<typename ConfigurationPolicyIdentifierT = Aws::String>
    void SetConfigurationPolicyIdentifier(ConfigurationPolicyIdentifierT&& value) { m_configurationPolicyIdentifierHasBeenSet = true; m_configurationPolicyIdentifier = std::forward<ConfigurationPolicyIdentifierT>(value); }
    template<typename ConfigurationPolicyIdentifierT = Aws::String>
    StartConfigurationPolicyDisassociationRequest& WithConfigurationPolicyIdentifier(ConfigurationPolicyIdentifierT&& value) { SetConfigurationPolicyIdentifier(std::forward<ConfigurationPolicyIdentifierT>(value)); return *this;}
    ///@}
  private:

    Target m_target;
    bool m_targetHasBeenSet = false;

    Aws::String m_configurationPolicyIdentifier;
    bool m_configurationPolicyIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
