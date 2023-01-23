/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The theme summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ThemeSummary">AWS
   * API Reference</a></p>
   */
  class ThemeSummary
  {
  public:
    AWS_QUICKSIGHT_API ThemeSummary();
    AWS_QUICKSIGHT_API ThemeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ThemeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline ThemeSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline ThemeSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline ThemeSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>the display name for the theme.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>the display name for the theme.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>the display name for the theme.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>the display name for the theme.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>the display name for the theme.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>the display name for the theme.</p>
     */
    inline ThemeSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>the display name for the theme.</p>
     */
    inline ThemeSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>the display name for the theme.</p>
     */
    inline ThemeSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the theme. This ID is unique per Amazon Web Services Region for
     * each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetThemeId() const{ return m_themeId; }

    /**
     * <p>The ID of the theme. This ID is unique per Amazon Web Services Region for
     * each Amazon Web Services account.</p>
     */
    inline bool ThemeIdHasBeenSet() const { return m_themeIdHasBeenSet; }

    /**
     * <p>The ID of the theme. This ID is unique per Amazon Web Services Region for
     * each Amazon Web Services account.</p>
     */
    inline void SetThemeId(const Aws::String& value) { m_themeIdHasBeenSet = true; m_themeId = value; }

    /**
     * <p>The ID of the theme. This ID is unique per Amazon Web Services Region for
     * each Amazon Web Services account.</p>
     */
    inline void SetThemeId(Aws::String&& value) { m_themeIdHasBeenSet = true; m_themeId = std::move(value); }

    /**
     * <p>The ID of the theme. This ID is unique per Amazon Web Services Region for
     * each Amazon Web Services account.</p>
     */
    inline void SetThemeId(const char* value) { m_themeIdHasBeenSet = true; m_themeId.assign(value); }

    /**
     * <p>The ID of the theme. This ID is unique per Amazon Web Services Region for
     * each Amazon Web Services account.</p>
     */
    inline ThemeSummary& WithThemeId(const Aws::String& value) { SetThemeId(value); return *this;}

    /**
     * <p>The ID of the theme. This ID is unique per Amazon Web Services Region for
     * each Amazon Web Services account.</p>
     */
    inline ThemeSummary& WithThemeId(Aws::String&& value) { SetThemeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the theme. This ID is unique per Amazon Web Services Region for
     * each Amazon Web Services account.</p>
     */
    inline ThemeSummary& WithThemeId(const char* value) { SetThemeId(value); return *this;}


    /**
     * <p>The latest version number for the theme. </p>
     */
    inline long long GetLatestVersionNumber() const{ return m_latestVersionNumber; }

    /**
     * <p>The latest version number for the theme. </p>
     */
    inline bool LatestVersionNumberHasBeenSet() const { return m_latestVersionNumberHasBeenSet; }

    /**
     * <p>The latest version number for the theme. </p>
     */
    inline void SetLatestVersionNumber(long long value) { m_latestVersionNumberHasBeenSet = true; m_latestVersionNumber = value; }

    /**
     * <p>The latest version number for the theme. </p>
     */
    inline ThemeSummary& WithLatestVersionNumber(long long value) { SetLatestVersionNumber(value); return *this;}


    /**
     * <p>The date and time that this theme was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time that this theme was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The date and time that this theme was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The date and time that this theme was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The date and time that this theme was created.</p>
     */
    inline ThemeSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time that this theme was created.</p>
     */
    inline ThemeSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The last date and time that this theme was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The last date and time that this theme was updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The last date and time that this theme was updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The last date and time that this theme was updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The last date and time that this theme was updated.</p>
     */
    inline ThemeSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The last date and time that this theme was updated.</p>
     */
    inline ThemeSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_themeId;
    bool m_themeIdHasBeenSet = false;

    long long m_latestVersionNumber;
    bool m_latestVersionNumberHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
