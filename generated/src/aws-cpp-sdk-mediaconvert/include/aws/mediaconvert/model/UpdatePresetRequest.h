/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/PresetSettings.h>
#include <utility>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class UpdatePresetRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API UpdatePresetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePreset"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The new category for the preset, if you are changing it.
     */
    inline const Aws::String& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::String>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::String>
    UpdatePresetRequest& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The new description for the preset, if you are changing it.
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdatePresetRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the preset you are modifying.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdatePresetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings for preset
     */
    inline const PresetSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = PresetSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = PresetSettings>
    UpdatePresetRequest& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PresetSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
