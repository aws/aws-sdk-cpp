/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ThemeVersion.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/ThemeType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Summary information about a theme.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Theme">AWS
   * API Reference</a></p>
   */
  class Theme
  {
  public:
    AWS_QUICKSIGHT_API Theme();
    AWS_QUICKSIGHT_API Theme(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Theme& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the theme.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the theme.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the theme.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the theme.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the theme.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the theme.</p>
     */
    inline Theme& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the theme.</p>
     */
    inline Theme& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the theme.</p>
     */
    inline Theme& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name that the user gives to the theme.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name that the user gives to the theme.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name that the user gives to the theme.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name that the user gives to the theme.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name that the user gives to the theme.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name that the user gives to the theme.</p>
     */
    inline Theme& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name that the user gives to the theme.</p>
     */
    inline Theme& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name that the user gives to the theme.</p>
     */
    inline Theme& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier that the user gives to the theme.</p>
     */
    inline const Aws::String& GetThemeId() const{ return m_themeId; }

    /**
     * <p>The identifier that the user gives to the theme.</p>
     */
    inline bool ThemeIdHasBeenSet() const { return m_themeIdHasBeenSet; }

    /**
     * <p>The identifier that the user gives to the theme.</p>
     */
    inline void SetThemeId(const Aws::String& value) { m_themeIdHasBeenSet = true; m_themeId = value; }

    /**
     * <p>The identifier that the user gives to the theme.</p>
     */
    inline void SetThemeId(Aws::String&& value) { m_themeIdHasBeenSet = true; m_themeId = std::move(value); }

    /**
     * <p>The identifier that the user gives to the theme.</p>
     */
    inline void SetThemeId(const char* value) { m_themeIdHasBeenSet = true; m_themeId.assign(value); }

    /**
     * <p>The identifier that the user gives to the theme.</p>
     */
    inline Theme& WithThemeId(const Aws::String& value) { SetThemeId(value); return *this;}

    /**
     * <p>The identifier that the user gives to the theme.</p>
     */
    inline Theme& WithThemeId(Aws::String&& value) { SetThemeId(std::move(value)); return *this;}

    /**
     * <p>The identifier that the user gives to the theme.</p>
     */
    inline Theme& WithThemeId(const char* value) { SetThemeId(value); return *this;}


    
    inline const ThemeVersion& GetVersion() const{ return m_version; }

    
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    
    inline void SetVersion(const ThemeVersion& value) { m_versionHasBeenSet = true; m_version = value; }

    
    inline void SetVersion(ThemeVersion&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    
    inline Theme& WithVersion(const ThemeVersion& value) { SetVersion(value); return *this;}

    
    inline Theme& WithVersion(ThemeVersion&& value) { SetVersion(std::move(value)); return *this;}


    /**
     * <p>The date and time that the theme was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time that the theme was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The date and time that the theme was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The date and time that the theme was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The date and time that the theme was created.</p>
     */
    inline Theme& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time that the theme was created.</p>
     */
    inline Theme& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the theme was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The date and time that the theme was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The date and time that the theme was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The date and time that the theme was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The date and time that the theme was last updated.</p>
     */
    inline Theme& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The date and time that the theme was last updated.</p>
     */
    inline Theme& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The type of theme, based on how it was created. Valid values include:
     * <code>QUICKSIGHT</code> and <code>CUSTOM</code>.</p>
     */
    inline const ThemeType& GetType() const{ return m_type; }

    /**
     * <p>The type of theme, based on how it was created. Valid values include:
     * <code>QUICKSIGHT</code> and <code>CUSTOM</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of theme, based on how it was created. Valid values include:
     * <code>QUICKSIGHT</code> and <code>CUSTOM</code>.</p>
     */
    inline void SetType(const ThemeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of theme, based on how it was created. Valid values include:
     * <code>QUICKSIGHT</code> and <code>CUSTOM</code>.</p>
     */
    inline void SetType(ThemeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of theme, based on how it was created. Valid values include:
     * <code>QUICKSIGHT</code> and <code>CUSTOM</code>.</p>
     */
    inline Theme& WithType(const ThemeType& value) { SetType(value); return *this;}

    /**
     * <p>The type of theme, based on how it was created. Valid values include:
     * <code>QUICKSIGHT</code> and <code>CUSTOM</code>.</p>
     */
    inline Theme& WithType(ThemeType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_themeId;
    bool m_themeIdHasBeenSet = false;

    ThemeVersion m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    ThemeType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
