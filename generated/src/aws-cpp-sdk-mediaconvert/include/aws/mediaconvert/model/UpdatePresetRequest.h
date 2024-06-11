﻿/**
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
    AWS_MEDIACONVERT_API UpdatePresetRequest();

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
    inline const Aws::String& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }
    inline UpdatePresetRequest& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}
    inline UpdatePresetRequest& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}
    inline UpdatePresetRequest& WithCategory(const char* value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * The new description for the preset, if you are changing it.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdatePresetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdatePresetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdatePresetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the preset you are modifying.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdatePresetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdatePresetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdatePresetRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings for preset
     */
    inline const PresetSettings& GetSettings() const{ return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    inline void SetSettings(const PresetSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }
    inline void SetSettings(PresetSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }
    inline UpdatePresetRequest& WithSettings(const PresetSettings& value) { SetSettings(value); return *this;}
    inline UpdatePresetRequest& WithSettings(PresetSettings&& value) { SetSettings(std::move(value)); return *this;}
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
