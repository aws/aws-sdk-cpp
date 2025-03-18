/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/ssm-quicksetup/SSMQuickSetupRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm-quicksetup/model/ConfigurationDefinitionInput.h>
#include <utility>

namespace Aws
{
namespace SSMQuickSetup
{
namespace Model
{

  /**
   */
  class CreateConfigurationManagerRequest : public SSMQuickSetupRequest
  {
  public:
    AWS_SSMQUICKSETUP_API CreateConfigurationManagerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfigurationManager"; }

    AWS_SSMQUICKSETUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The definition of the Quick Setup configuration that the configuration
     * manager deploys.</p>
     */
    inline const Aws::Vector<ConfigurationDefinitionInput>& GetConfigurationDefinitions() const { return m_configurationDefinitions; }
    inline bool ConfigurationDefinitionsHasBeenSet() const { return m_configurationDefinitionsHasBeenSet; }
    template<typename ConfigurationDefinitionsT = Aws::Vector<ConfigurationDefinitionInput>>
    void SetConfigurationDefinitions(ConfigurationDefinitionsT&& value) { m_configurationDefinitionsHasBeenSet = true; m_configurationDefinitions = std::forward<ConfigurationDefinitionsT>(value); }
    template<typename ConfigurationDefinitionsT = Aws::Vector<ConfigurationDefinitionInput>>
    CreateConfigurationManagerRequest& WithConfigurationDefinitions(ConfigurationDefinitionsT&& value) { SetConfigurationDefinitions(std::forward<ConfigurationDefinitionsT>(value)); return *this;}
    template<typename ConfigurationDefinitionsT = ConfigurationDefinitionInput>
    CreateConfigurationManagerRequest& AddConfigurationDefinitions(ConfigurationDefinitionsT&& value) { m_configurationDefinitionsHasBeenSet = true; m_configurationDefinitions.emplace_back(std::forward<ConfigurationDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of the configuration manager.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateConfigurationManagerRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the configuration manager.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateConfigurationManagerRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs of metadata to assign to the configuration manager.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateConfigurationManagerRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateConfigurationManagerRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<ConfigurationDefinitionInput> m_configurationDefinitions;
    bool m_configurationDefinitionsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
