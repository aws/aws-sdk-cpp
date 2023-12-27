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
    AWS_SECURITYHUB_API UpdateConfigurationPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfigurationPolicy"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline UpdateConfigurationPolicyRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline UpdateConfigurationPolicyRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline UpdateConfigurationPolicyRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline UpdateConfigurationPolicyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline UpdateConfigurationPolicyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline UpdateConfigurationPolicyRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The description of the configuration policy. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the configuration policy. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the configuration policy. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the configuration policy. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the configuration policy. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the configuration policy. </p>
     */
    inline UpdateConfigurationPolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the configuration policy. </p>
     */
    inline UpdateConfigurationPolicyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the configuration policy. </p>
     */
    inline UpdateConfigurationPolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The reason for updating the configuration policy. </p>
     */
    inline const Aws::String& GetUpdatedReason() const{ return m_updatedReason; }

    /**
     * <p> The reason for updating the configuration policy. </p>
     */
    inline bool UpdatedReasonHasBeenSet() const { return m_updatedReasonHasBeenSet; }

    /**
     * <p> The reason for updating the configuration policy. </p>
     */
    inline void SetUpdatedReason(const Aws::String& value) { m_updatedReasonHasBeenSet = true; m_updatedReason = value; }

    /**
     * <p> The reason for updating the configuration policy. </p>
     */
    inline void SetUpdatedReason(Aws::String&& value) { m_updatedReasonHasBeenSet = true; m_updatedReason = std::move(value); }

    /**
     * <p> The reason for updating the configuration policy. </p>
     */
    inline void SetUpdatedReason(const char* value) { m_updatedReasonHasBeenSet = true; m_updatedReason.assign(value); }

    /**
     * <p> The reason for updating the configuration policy. </p>
     */
    inline UpdateConfigurationPolicyRequest& WithUpdatedReason(const Aws::String& value) { SetUpdatedReason(value); return *this;}

    /**
     * <p> The reason for updating the configuration policy. </p>
     */
    inline UpdateConfigurationPolicyRequest& WithUpdatedReason(Aws::String&& value) { SetUpdatedReason(std::move(value)); return *this;}

    /**
     * <p> The reason for updating the configuration policy. </p>
     */
    inline UpdateConfigurationPolicyRequest& WithUpdatedReason(const char* value) { SetUpdatedReason(value); return *this;}


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
    inline const Policy& GetConfigurationPolicy() const{ return m_configurationPolicy; }

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
    inline bool ConfigurationPolicyHasBeenSet() const { return m_configurationPolicyHasBeenSet; }

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
    inline void SetConfigurationPolicy(const Policy& value) { m_configurationPolicyHasBeenSet = true; m_configurationPolicy = value; }

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
    inline void SetConfigurationPolicy(Policy&& value) { m_configurationPolicyHasBeenSet = true; m_configurationPolicy = std::move(value); }

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
    inline UpdateConfigurationPolicyRequest& WithConfigurationPolicy(const Policy& value) { SetConfigurationPolicy(value); return *this;}

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
    inline UpdateConfigurationPolicyRequest& WithConfigurationPolicy(Policy&& value) { SetConfigurationPolicy(std::move(value)); return *this;}

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
