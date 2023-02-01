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
    AWS_QUICKSIGHT_API UpdateThemeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTheme"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the theme that you're
     * updating.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme that you're
     * updating.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme that you're
     * updating.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme that you're
     * updating.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme that you're
     * updating.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme that you're
     * updating.</p>
     */
    inline UpdateThemeRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme that you're
     * updating.</p>
     */
    inline UpdateThemeRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme that you're
     * updating.</p>
     */
    inline UpdateThemeRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID for the theme.</p>
     */
    inline const Aws::String& GetThemeId() const{ return m_themeId; }

    /**
     * <p>The ID for the theme.</p>
     */
    inline bool ThemeIdHasBeenSet() const { return m_themeIdHasBeenSet; }

    /**
     * <p>The ID for the theme.</p>
     */
    inline void SetThemeId(const Aws::String& value) { m_themeIdHasBeenSet = true; m_themeId = value; }

    /**
     * <p>The ID for the theme.</p>
     */
    inline void SetThemeId(Aws::String&& value) { m_themeIdHasBeenSet = true; m_themeId = std::move(value); }

    /**
     * <p>The ID for the theme.</p>
     */
    inline void SetThemeId(const char* value) { m_themeIdHasBeenSet = true; m_themeId.assign(value); }

    /**
     * <p>The ID for the theme.</p>
     */
    inline UpdateThemeRequest& WithThemeId(const Aws::String& value) { SetThemeId(value); return *this;}

    /**
     * <p>The ID for the theme.</p>
     */
    inline UpdateThemeRequest& WithThemeId(Aws::String&& value) { SetThemeId(std::move(value)); return *this;}

    /**
     * <p>The ID for the theme.</p>
     */
    inline UpdateThemeRequest& WithThemeId(const char* value) { SetThemeId(value); return *this;}


    /**
     * <p>The name for the theme.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the theme.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the theme.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the theme.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the theme.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the theme.</p>
     */
    inline UpdateThemeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the theme.</p>
     */
    inline UpdateThemeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the theme.</p>
     */
    inline UpdateThemeRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The theme ID, defined by Amazon QuickSight, that a custom theme inherits
     * from. All themes initially inherit from a default Amazon QuickSight theme.</p>
     */
    inline const Aws::String& GetBaseThemeId() const{ return m_baseThemeId; }

    /**
     * <p>The theme ID, defined by Amazon QuickSight, that a custom theme inherits
     * from. All themes initially inherit from a default Amazon QuickSight theme.</p>
     */
    inline bool BaseThemeIdHasBeenSet() const { return m_baseThemeIdHasBeenSet; }

    /**
     * <p>The theme ID, defined by Amazon QuickSight, that a custom theme inherits
     * from. All themes initially inherit from a default Amazon QuickSight theme.</p>
     */
    inline void SetBaseThemeId(const Aws::String& value) { m_baseThemeIdHasBeenSet = true; m_baseThemeId = value; }

    /**
     * <p>The theme ID, defined by Amazon QuickSight, that a custom theme inherits
     * from. All themes initially inherit from a default Amazon QuickSight theme.</p>
     */
    inline void SetBaseThemeId(Aws::String&& value) { m_baseThemeIdHasBeenSet = true; m_baseThemeId = std::move(value); }

    /**
     * <p>The theme ID, defined by Amazon QuickSight, that a custom theme inherits
     * from. All themes initially inherit from a default Amazon QuickSight theme.</p>
     */
    inline void SetBaseThemeId(const char* value) { m_baseThemeIdHasBeenSet = true; m_baseThemeId.assign(value); }

    /**
     * <p>The theme ID, defined by Amazon QuickSight, that a custom theme inherits
     * from. All themes initially inherit from a default Amazon QuickSight theme.</p>
     */
    inline UpdateThemeRequest& WithBaseThemeId(const Aws::String& value) { SetBaseThemeId(value); return *this;}

    /**
     * <p>The theme ID, defined by Amazon QuickSight, that a custom theme inherits
     * from. All themes initially inherit from a default Amazon QuickSight theme.</p>
     */
    inline UpdateThemeRequest& WithBaseThemeId(Aws::String&& value) { SetBaseThemeId(std::move(value)); return *this;}

    /**
     * <p>The theme ID, defined by Amazon QuickSight, that a custom theme inherits
     * from. All themes initially inherit from a default Amazon QuickSight theme.</p>
     */
    inline UpdateThemeRequest& WithBaseThemeId(const char* value) { SetBaseThemeId(value); return *this;}


    /**
     * <p>A description of the theme version that you're updating Every time that you
     * call <code>UpdateTheme</code>, you create a new version of the theme. Each
     * version of the theme maintains a description of the version in
     * <code>VersionDescription</code>.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }

    /**
     * <p>A description of the theme version that you're updating Every time that you
     * call <code>UpdateTheme</code>, you create a new version of the theme. Each
     * version of the theme maintains a description of the version in
     * <code>VersionDescription</code>.</p>
     */
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }

    /**
     * <p>A description of the theme version that you're updating Every time that you
     * call <code>UpdateTheme</code>, you create a new version of the theme. Each
     * version of the theme maintains a description of the version in
     * <code>VersionDescription</code>.</p>
     */
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }

    /**
     * <p>A description of the theme version that you're updating Every time that you
     * call <code>UpdateTheme</code>, you create a new version of the theme. Each
     * version of the theme maintains a description of the version in
     * <code>VersionDescription</code>.</p>
     */
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }

    /**
     * <p>A description of the theme version that you're updating Every time that you
     * call <code>UpdateTheme</code>, you create a new version of the theme. Each
     * version of the theme maintains a description of the version in
     * <code>VersionDescription</code>.</p>
     */
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }

    /**
     * <p>A description of the theme version that you're updating Every time that you
     * call <code>UpdateTheme</code>, you create a new version of the theme. Each
     * version of the theme maintains a description of the version in
     * <code>VersionDescription</code>.</p>
     */
    inline UpdateThemeRequest& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}

    /**
     * <p>A description of the theme version that you're updating Every time that you
     * call <code>UpdateTheme</code>, you create a new version of the theme. Each
     * version of the theme maintains a description of the version in
     * <code>VersionDescription</code>.</p>
     */
    inline UpdateThemeRequest& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the theme version that you're updating Every time that you
     * call <code>UpdateTheme</code>, you create a new version of the theme. Each
     * version of the theme maintains a description of the version in
     * <code>VersionDescription</code>.</p>
     */
    inline UpdateThemeRequest& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}


    /**
     * <p>The theme configuration, which contains the theme display properties.</p>
     */
    inline const ThemeConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The theme configuration, which contains the theme display properties.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The theme configuration, which contains the theme display properties.</p>
     */
    inline void SetConfiguration(const ThemeConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The theme configuration, which contains the theme display properties.</p>
     */
    inline void SetConfiguration(ThemeConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The theme configuration, which contains the theme display properties.</p>
     */
    inline UpdateThemeRequest& WithConfiguration(const ThemeConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The theme configuration, which contains the theme display properties.</p>
     */
    inline UpdateThemeRequest& WithConfiguration(ThemeConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

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
