/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ThemeConfiguration.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateThemeRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateThemeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTheme"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the theme that you're
     * updating.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    UpdateThemeRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the theme.</p>
     */
    inline const Aws::String& GetThemeId() const { return m_themeId; }
    inline bool ThemeIdHasBeenSet() const { return m_themeIdHasBeenSet; }
    template<typename ThemeIdT = Aws::String>
    void SetThemeId(ThemeIdT&& value) { m_themeIdHasBeenSet = true; m_themeId = std::forward<ThemeIdT>(value); }
    template<typename ThemeIdT = Aws::String>
    UpdateThemeRequest& WithThemeId(ThemeIdT&& value) { SetThemeId(std::forward<ThemeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the theme.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateThemeRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The theme ID, defined by Amazon QuickSight, that a custom theme inherits
     * from. All themes initially inherit from a default QuickSight theme.</p>
     */
    inline const Aws::String& GetBaseThemeId() const { return m_baseThemeId; }
    inline bool BaseThemeIdHasBeenSet() const { return m_baseThemeIdHasBeenSet; }
    template<typename BaseThemeIdT = Aws::String>
    void SetBaseThemeId(BaseThemeIdT&& value) { m_baseThemeIdHasBeenSet = true; m_baseThemeId = std::forward<BaseThemeIdT>(value); }
    template<typename BaseThemeIdT = Aws::String>
    UpdateThemeRequest& WithBaseThemeId(BaseThemeIdT&& value) { SetBaseThemeId(std::forward<BaseThemeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the theme version that you're updating Every time that you
     * call <code>UpdateTheme</code>, you create a new version of the theme. Each
     * version of the theme maintains a description of the version in
     * <code>VersionDescription</code>.</p>
     */
    inline const Aws::String& GetVersionDescription() const { return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    template<typename VersionDescriptionT = Aws::String>
    void SetVersionDescription(VersionDescriptionT&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::forward<VersionDescriptionT>(value); }
    template<typename VersionDescriptionT = Aws::String>
    UpdateThemeRequest& WithVersionDescription(VersionDescriptionT&& value) { SetVersionDescription(std::forward<VersionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The theme configuration, which contains the theme display properties.</p>
     */
    inline const ThemeConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = ThemeConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = ThemeConfiguration>
    UpdateThemeRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_themeId;
    bool m_themeIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_baseThemeId;
    bool m_baseThemeIdHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;

    ThemeConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
