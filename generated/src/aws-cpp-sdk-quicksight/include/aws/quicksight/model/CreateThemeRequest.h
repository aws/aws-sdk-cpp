/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ThemeConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourcePermission.h>
#include <aws/quicksight/model/Tag.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class CreateThemeRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API CreateThemeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTheme"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account where you want to store the new
     * theme. </p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account where you want to store the new
     * theme. </p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account where you want to store the new
     * theme. </p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account where you want to store the new
     * theme. </p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account where you want to store the new
     * theme. </p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account where you want to store the new
     * theme. </p>
     */
    inline CreateThemeRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account where you want to store the new
     * theme. </p>
     */
    inline CreateThemeRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account where you want to store the new
     * theme. </p>
     */
    inline CreateThemeRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>An ID for the theme that you want to create. The theme ID is unique per
     * Amazon Web Services Region in each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetThemeId() const{ return m_themeId; }

    /**
     * <p>An ID for the theme that you want to create. The theme ID is unique per
     * Amazon Web Services Region in each Amazon Web Services account.</p>
     */
    inline bool ThemeIdHasBeenSet() const { return m_themeIdHasBeenSet; }

    /**
     * <p>An ID for the theme that you want to create. The theme ID is unique per
     * Amazon Web Services Region in each Amazon Web Services account.</p>
     */
    inline void SetThemeId(const Aws::String& value) { m_themeIdHasBeenSet = true; m_themeId = value; }

    /**
     * <p>An ID for the theme that you want to create. The theme ID is unique per
     * Amazon Web Services Region in each Amazon Web Services account.</p>
     */
    inline void SetThemeId(Aws::String&& value) { m_themeIdHasBeenSet = true; m_themeId = std::move(value); }

    /**
     * <p>An ID for the theme that you want to create. The theme ID is unique per
     * Amazon Web Services Region in each Amazon Web Services account.</p>
     */
    inline void SetThemeId(const char* value) { m_themeIdHasBeenSet = true; m_themeId.assign(value); }

    /**
     * <p>An ID for the theme that you want to create. The theme ID is unique per
     * Amazon Web Services Region in each Amazon Web Services account.</p>
     */
    inline CreateThemeRequest& WithThemeId(const Aws::String& value) { SetThemeId(value); return *this;}

    /**
     * <p>An ID for the theme that you want to create. The theme ID is unique per
     * Amazon Web Services Region in each Amazon Web Services account.</p>
     */
    inline CreateThemeRequest& WithThemeId(Aws::String&& value) { SetThemeId(std::move(value)); return *this;}

    /**
     * <p>An ID for the theme that you want to create. The theme ID is unique per
     * Amazon Web Services Region in each Amazon Web Services account.</p>
     */
    inline CreateThemeRequest& WithThemeId(const char* value) { SetThemeId(value); return *this;}


    /**
     * <p>A display name for the theme.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A display name for the theme.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A display name for the theme.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A display name for the theme.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A display name for the theme.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A display name for the theme.</p>
     */
    inline CreateThemeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A display name for the theme.</p>
     */
    inline CreateThemeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A display name for the theme.</p>
     */
    inline CreateThemeRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the theme that a custom theme will inherit from. All themes inherit
     * from one of the starting themes defined by Amazon QuickSight. For a list of the
     * starting themes, use <code>ListThemes</code> or choose <b>Themes</b> from within
     * an analysis. </p>
     */
    inline const Aws::String& GetBaseThemeId() const{ return m_baseThemeId; }

    /**
     * <p>The ID of the theme that a custom theme will inherit from. All themes inherit
     * from one of the starting themes defined by Amazon QuickSight. For a list of the
     * starting themes, use <code>ListThemes</code> or choose <b>Themes</b> from within
     * an analysis. </p>
     */
    inline bool BaseThemeIdHasBeenSet() const { return m_baseThemeIdHasBeenSet; }

    /**
     * <p>The ID of the theme that a custom theme will inherit from. All themes inherit
     * from one of the starting themes defined by Amazon QuickSight. For a list of the
     * starting themes, use <code>ListThemes</code> or choose <b>Themes</b> from within
     * an analysis. </p>
     */
    inline void SetBaseThemeId(const Aws::String& value) { m_baseThemeIdHasBeenSet = true; m_baseThemeId = value; }

    /**
     * <p>The ID of the theme that a custom theme will inherit from. All themes inherit
     * from one of the starting themes defined by Amazon QuickSight. For a list of the
     * starting themes, use <code>ListThemes</code> or choose <b>Themes</b> from within
     * an analysis. </p>
     */
    inline void SetBaseThemeId(Aws::String&& value) { m_baseThemeIdHasBeenSet = true; m_baseThemeId = std::move(value); }

    /**
     * <p>The ID of the theme that a custom theme will inherit from. All themes inherit
     * from one of the starting themes defined by Amazon QuickSight. For a list of the
     * starting themes, use <code>ListThemes</code> or choose <b>Themes</b> from within
     * an analysis. </p>
     */
    inline void SetBaseThemeId(const char* value) { m_baseThemeIdHasBeenSet = true; m_baseThemeId.assign(value); }

    /**
     * <p>The ID of the theme that a custom theme will inherit from. All themes inherit
     * from one of the starting themes defined by Amazon QuickSight. For a list of the
     * starting themes, use <code>ListThemes</code> or choose <b>Themes</b> from within
     * an analysis. </p>
     */
    inline CreateThemeRequest& WithBaseThemeId(const Aws::String& value) { SetBaseThemeId(value); return *this;}

    /**
     * <p>The ID of the theme that a custom theme will inherit from. All themes inherit
     * from one of the starting themes defined by Amazon QuickSight. For a list of the
     * starting themes, use <code>ListThemes</code> or choose <b>Themes</b> from within
     * an analysis. </p>
     */
    inline CreateThemeRequest& WithBaseThemeId(Aws::String&& value) { SetBaseThemeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the theme that a custom theme will inherit from. All themes inherit
     * from one of the starting themes defined by Amazon QuickSight. For a list of the
     * starting themes, use <code>ListThemes</code> or choose <b>Themes</b> from within
     * an analysis. </p>
     */
    inline CreateThemeRequest& WithBaseThemeId(const char* value) { SetBaseThemeId(value); return *this;}


    /**
     * <p>A description of the first version of the theme that you're creating. Every
     * time <code>UpdateTheme</code> is called, a new version is created. Each version
     * of the theme has a description of the version in the
     * <code>VersionDescription</code> field.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }

    /**
     * <p>A description of the first version of the theme that you're creating. Every
     * time <code>UpdateTheme</code> is called, a new version is created. Each version
     * of the theme has a description of the version in the
     * <code>VersionDescription</code> field.</p>
     */
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }

    /**
     * <p>A description of the first version of the theme that you're creating. Every
     * time <code>UpdateTheme</code> is called, a new version is created. Each version
     * of the theme has a description of the version in the
     * <code>VersionDescription</code> field.</p>
     */
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }

    /**
     * <p>A description of the first version of the theme that you're creating. Every
     * time <code>UpdateTheme</code> is called, a new version is created. Each version
     * of the theme has a description of the version in the
     * <code>VersionDescription</code> field.</p>
     */
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }

    /**
     * <p>A description of the first version of the theme that you're creating. Every
     * time <code>UpdateTheme</code> is called, a new version is created. Each version
     * of the theme has a description of the version in the
     * <code>VersionDescription</code> field.</p>
     */
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }

    /**
     * <p>A description of the first version of the theme that you're creating. Every
     * time <code>UpdateTheme</code> is called, a new version is created. Each version
     * of the theme has a description of the version in the
     * <code>VersionDescription</code> field.</p>
     */
    inline CreateThemeRequest& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}

    /**
     * <p>A description of the first version of the theme that you're creating. Every
     * time <code>UpdateTheme</code> is called, a new version is created. Each version
     * of the theme has a description of the version in the
     * <code>VersionDescription</code> field.</p>
     */
    inline CreateThemeRequest& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the first version of the theme that you're creating. Every
     * time <code>UpdateTheme</code> is called, a new version is created. Each version
     * of the theme has a description of the version in the
     * <code>VersionDescription</code> field.</p>
     */
    inline CreateThemeRequest& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}


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
    inline CreateThemeRequest& WithConfiguration(const ThemeConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The theme configuration, which contains the theme display properties.</p>
     */
    inline CreateThemeRequest& WithConfiguration(ThemeConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>A valid grouping of resource permissions to apply to the new theme. </p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A valid grouping of resource permissions to apply to the new theme. </p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>A valid grouping of resource permissions to apply to the new theme. </p>
     */
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>A valid grouping of resource permissions to apply to the new theme. </p>
     */
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>A valid grouping of resource permissions to apply to the new theme. </p>
     */
    inline CreateThemeRequest& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>A valid grouping of resource permissions to apply to the new theme. </p>
     */
    inline CreateThemeRequest& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>A valid grouping of resource permissions to apply to the new theme. </p>
     */
    inline CreateThemeRequest& AddPermissions(const ResourcePermission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>A valid grouping of resource permissions to apply to the new theme. </p>
     */
    inline CreateThemeRequest& AddPermissions(ResourcePermission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>A map of the key-value pairs for the resource tag or tags that you want to
     * add to the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of the key-value pairs for the resource tag or tags that you want to
     * add to the resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map of the key-value pairs for the resource tag or tags that you want to
     * add to the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map of the key-value pairs for the resource tag or tags that you want to
     * add to the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map of the key-value pairs for the resource tag or tags that you want to
     * add to the resource.</p>
     */
    inline CreateThemeRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of the key-value pairs for the resource tag or tags that you want to
     * add to the resource.</p>
     */
    inline CreateThemeRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of the key-value pairs for the resource tag or tags that you want to
     * add to the resource.</p>
     */
    inline CreateThemeRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A map of the key-value pairs for the resource tag or tags that you want to
     * add to the resource.</p>
     */
    inline CreateThemeRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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

    Aws::Vector<ResourcePermission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
