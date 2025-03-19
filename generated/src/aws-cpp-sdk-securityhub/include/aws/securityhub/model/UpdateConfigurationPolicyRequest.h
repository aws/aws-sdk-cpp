/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/Policy.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class UpdateConfigurationPolicyRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API UpdateConfigurationPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfigurationPolicy"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    UpdateConfigurationPolicyRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateConfigurationPolicyRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the configuration policy. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateConfigurationPolicyRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason for updating the configuration policy. </p>
     */
    inline const Aws::String& GetUpdatedReason() const { return m_updatedReason; }
    inline bool UpdatedReasonHasBeenSet() const { return m_updatedReasonHasBeenSet; }
    template<typename UpdatedReasonT = Aws::String>
    void SetUpdatedReason(UpdatedReasonT&& value) { m_updatedReasonHasBeenSet = true; m_updatedReason = std::forward<UpdatedReasonT>(value); }
    template<typename UpdatedReasonT = Aws::String>
    UpdateConfigurationPolicyRequest& WithUpdatedReason(UpdatedReasonT&& value) { SetUpdatedReason(std::forward<UpdatedReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that defines how Security Hub is configured. It includes whether
     * Security Hub is enabled or disabled, a list of enabled security standards, a
     * list of enabled or disabled security controls, and a list of custom parameter
     * values for specified controls. If you provide a list of security controls that
     * are enabled in the configuration policy, Security Hub disables all other
     * controls (including newly released controls). If you provide a list of security
     * controls that are disabled in the configuration policy, Security Hub enables all
     * other controls (including newly released controls). </p> <p>When updating a
     * configuration policy, provide a complete list of standards that you want to
     * enable and a complete list of controls that you want to enable or disable. The
     * updated configuration replaces the current configuration.</p>
     */
    inline const Policy& GetConfigurationPolicy() const { return m_configurationPolicy; }
    inline bool ConfigurationPolicyHasBeenSet() const { return m_configurationPolicyHasBeenSet; }
    template<typename ConfigurationPolicyT = Policy>
    void SetConfigurationPolicy(ConfigurationPolicyT&& value) { m_configurationPolicyHasBeenSet = true; m_configurationPolicy = std::forward<ConfigurationPolicyT>(value); }
    template<typename ConfigurationPolicyT = Policy>
    UpdateConfigurationPolicyRequest& WithConfigurationPolicy(ConfigurationPolicyT&& value) { SetConfigurationPolicy(std::forward<ConfigurationPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_updatedReason;
    bool m_updatedReasonHasBeenSet = false;

    Policy m_configurationPolicy;
    bool m_configurationPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
