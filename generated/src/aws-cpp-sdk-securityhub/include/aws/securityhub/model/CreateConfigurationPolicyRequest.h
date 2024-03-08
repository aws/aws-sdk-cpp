/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/Policy.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class CreateConfigurationPolicyRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API CreateConfigurationPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfigurationPolicy"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


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
    inline CreateConfigurationPolicyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline CreateConfigurationPolicyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the configuration policy. Alphanumeric characters and the
     * following ASCII characters are permitted: <code>-, ., !, *, /</code>. </p>
     */
    inline CreateConfigurationPolicyRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline CreateConfigurationPolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the configuration policy. </p>
     */
    inline CreateConfigurationPolicyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the configuration policy. </p>
     */
    inline CreateConfigurationPolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> An object that defines how Security Hub is configured. It includes whether
     * Security Hub is enabled or disabled, a list of enabled security standards, a
     * list of enabled or disabled security controls, and a list of custom parameter
     * values for specified controls. If you provide a list of security controls that
     * are enabled in the configuration policy, Security Hub disables all other
     * controls (including newly released controls). If you provide a list of security
     * controls that are disabled in the configuration policy, Security Hub enables all
     * other controls (including newly released controls). </p>
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
     * other controls (including newly released controls). </p>
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
     * other controls (including newly released controls). </p>
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
     * other controls (including newly released controls). </p>
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
     * other controls (including newly released controls). </p>
     */
    inline CreateConfigurationPolicyRequest& WithConfigurationPolicy(const Policy& value) { SetConfigurationPolicy(value); return *this;}

    /**
     * <p> An object that defines how Security Hub is configured. It includes whether
     * Security Hub is enabled or disabled, a list of enabled security standards, a
     * list of enabled or disabled security controls, and a list of custom parameter
     * values for specified controls. If you provide a list of security controls that
     * are enabled in the configuration policy, Security Hub disables all other
     * controls (including newly released controls). If you provide a list of security
     * controls that are disabled in the configuration policy, Security Hub enables all
     * other controls (including newly released controls). </p>
     */
    inline CreateConfigurationPolicyRequest& WithConfigurationPolicy(Policy&& value) { SetConfigurationPolicy(std::move(value)); return *this;}


    /**
     * <p> User-defined tags associated with a configuration policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/tagging-resources.html">Tagging
     * Security Hub resources</a> in the <i>Security Hub user guide</i>. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> User-defined tags associated with a configuration policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/tagging-resources.html">Tagging
     * Security Hub resources</a> in the <i>Security Hub user guide</i>. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> User-defined tags associated with a configuration policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/tagging-resources.html">Tagging
     * Security Hub resources</a> in the <i>Security Hub user guide</i>. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> User-defined tags associated with a configuration policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/tagging-resources.html">Tagging
     * Security Hub resources</a> in the <i>Security Hub user guide</i>. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> User-defined tags associated with a configuration policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/tagging-resources.html">Tagging
     * Security Hub resources</a> in the <i>Security Hub user guide</i>. </p>
     */
    inline CreateConfigurationPolicyRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> User-defined tags associated with a configuration policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/tagging-resources.html">Tagging
     * Security Hub resources</a> in the <i>Security Hub user guide</i>. </p>
     */
    inline CreateConfigurationPolicyRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> User-defined tags associated with a configuration policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/tagging-resources.html">Tagging
     * Security Hub resources</a> in the <i>Security Hub user guide</i>. </p>
     */
    inline CreateConfigurationPolicyRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> User-defined tags associated with a configuration policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/tagging-resources.html">Tagging
     * Security Hub resources</a> in the <i>Security Hub user guide</i>. </p>
     */
    inline CreateConfigurationPolicyRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> User-defined tags associated with a configuration policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/tagging-resources.html">Tagging
     * Security Hub resources</a> in the <i>Security Hub user guide</i>. </p>
     */
    inline CreateConfigurationPolicyRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> User-defined tags associated with a configuration policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/tagging-resources.html">Tagging
     * Security Hub resources</a> in the <i>Security Hub user guide</i>. </p>
     */
    inline CreateConfigurationPolicyRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> User-defined tags associated with a configuration policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/tagging-resources.html">Tagging
     * Security Hub resources</a> in the <i>Security Hub user guide</i>. </p>
     */
    inline CreateConfigurationPolicyRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> User-defined tags associated with a configuration policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/tagging-resources.html">Tagging
     * Security Hub resources</a> in the <i>Security Hub user guide</i>. </p>
     */
    inline CreateConfigurationPolicyRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> User-defined tags associated with a configuration policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/tagging-resources.html">Tagging
     * Security Hub resources</a> in the <i>Security Hub user guide</i>. </p>
     */
    inline CreateConfigurationPolicyRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Policy m_configurationPolicy;
    bool m_configurationPolicyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
