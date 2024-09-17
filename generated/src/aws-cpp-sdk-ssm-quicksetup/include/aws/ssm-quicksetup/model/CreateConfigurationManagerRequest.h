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
    AWS_SSMQUICKSETUP_API CreateConfigurationManagerRequest();

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
    inline const Aws::Vector<ConfigurationDefinitionInput>& GetConfigurationDefinitions() const{ return m_configurationDefinitions; }
    inline bool ConfigurationDefinitionsHasBeenSet() const { return m_configurationDefinitionsHasBeenSet; }
    inline void SetConfigurationDefinitions(const Aws::Vector<ConfigurationDefinitionInput>& value) { m_configurationDefinitionsHasBeenSet = true; m_configurationDefinitions = value; }
    inline void SetConfigurationDefinitions(Aws::Vector<ConfigurationDefinitionInput>&& value) { m_configurationDefinitionsHasBeenSet = true; m_configurationDefinitions = std::move(value); }
    inline CreateConfigurationManagerRequest& WithConfigurationDefinitions(const Aws::Vector<ConfigurationDefinitionInput>& value) { SetConfigurationDefinitions(value); return *this;}
    inline CreateConfigurationManagerRequest& WithConfigurationDefinitions(Aws::Vector<ConfigurationDefinitionInput>&& value) { SetConfigurationDefinitions(std::move(value)); return *this;}
    inline CreateConfigurationManagerRequest& AddConfigurationDefinitions(const ConfigurationDefinitionInput& value) { m_configurationDefinitionsHasBeenSet = true; m_configurationDefinitions.push_back(value); return *this; }
    inline CreateConfigurationManagerRequest& AddConfigurationDefinitions(ConfigurationDefinitionInput&& value) { m_configurationDefinitionsHasBeenSet = true; m_configurationDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of the configuration manager.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateConfigurationManagerRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateConfigurationManagerRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateConfigurationManagerRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the configuration manager.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateConfigurationManagerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateConfigurationManagerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateConfigurationManagerRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs of metadata to assign to the configuration manager.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateConfigurationManagerRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateConfigurationManagerRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateConfigurationManagerRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateConfigurationManagerRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateConfigurationManagerRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateConfigurationManagerRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateConfigurationManagerRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateConfigurationManagerRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateConfigurationManagerRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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
