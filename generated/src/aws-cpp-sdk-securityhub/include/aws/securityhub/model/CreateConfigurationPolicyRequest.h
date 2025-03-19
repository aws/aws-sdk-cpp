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
    AWS_SECURITYHUB_API CreateConfigurationPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfigurationPolicy"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


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
    CreateConfigurationPolicyRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    CreateConfigurationPolicyRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
     * other controls (including newly released controls). </p>
     */
    inline const Policy& GetConfigurationPolicy() const { return m_configurationPolicy; }
    inline bool ConfigurationPolicyHasBeenSet() const { return m_configurationPolicyHasBeenSet; }
    template<typename ConfigurationPolicyT = Policy>
    void SetConfigurationPolicy(ConfigurationPolicyT&& value) { m_configurationPolicyHasBeenSet = true; m_configurationPolicy = std::forward<ConfigurationPolicyT>(value); }
    template<typename ConfigurationPolicyT = Policy>
    CreateConfigurationPolicyRequest& WithConfigurationPolicy(ConfigurationPolicyT&& value) { SetConfigurationPolicy(std::forward<ConfigurationPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> User-defined tags associated with a configuration policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/tagging-resources.html">Tagging
     * Security Hub resources</a> in the <i>Security Hub user guide</i>. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateConfigurationPolicyRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateConfigurationPolicyRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
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
