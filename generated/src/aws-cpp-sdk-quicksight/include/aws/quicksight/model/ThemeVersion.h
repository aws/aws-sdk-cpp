/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/ThemeConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourceStatus.h>
#include <aws/quicksight/model/ThemeError.h>
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
   * <p>A version of a theme.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ThemeVersion">AWS
   * API Reference</a></p>
   */
  class ThemeVersion
  {
  public:
    AWS_QUICKSIGHT_API ThemeVersion();
    AWS_QUICKSIGHT_API ThemeVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ThemeVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version number of the theme.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline ThemeVersion& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ThemeVersion& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ThemeVersion& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ThemeVersion& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the theme.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ThemeVersion& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ThemeVersion& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ThemeVersion& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon QuickSight-defined ID of the theme that a custom theme inherits
     * from. All themes initially inherit from a default Amazon QuickSight theme.</p>
     */
    inline const Aws::String& GetBaseThemeId() const{ return m_baseThemeId; }
    inline bool BaseThemeIdHasBeenSet() const { return m_baseThemeIdHasBeenSet; }
    inline void SetBaseThemeId(const Aws::String& value) { m_baseThemeIdHasBeenSet = true; m_baseThemeId = value; }
    inline void SetBaseThemeId(Aws::String&& value) { m_baseThemeIdHasBeenSet = true; m_baseThemeId = std::move(value); }
    inline void SetBaseThemeId(const char* value) { m_baseThemeIdHasBeenSet = true; m_baseThemeId.assign(value); }
    inline ThemeVersion& WithBaseThemeId(const Aws::String& value) { SetBaseThemeId(value); return *this;}
    inline ThemeVersion& WithBaseThemeId(Aws::String&& value) { SetBaseThemeId(std::move(value)); return *this;}
    inline ThemeVersion& WithBaseThemeId(const char* value) { SetBaseThemeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that this theme version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline ThemeVersion& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline ThemeVersion& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The theme configuration, which contains all the theme display properties.</p>
     */
    inline const ThemeConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const ThemeConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(ThemeConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline ThemeVersion& WithConfiguration(const ThemeConfiguration& value) { SetConfiguration(value); return *this;}
    inline ThemeVersion& WithConfiguration(ThemeConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Errors associated with the theme.</p>
     */
    inline const Aws::Vector<ThemeError>& GetErrors() const{ return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    inline void SetErrors(const Aws::Vector<ThemeError>& value) { m_errorsHasBeenSet = true; m_errors = value; }
    inline void SetErrors(Aws::Vector<ThemeError>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }
    inline ThemeVersion& WithErrors(const Aws::Vector<ThemeError>& value) { SetErrors(value); return *this;}
    inline ThemeVersion& WithErrors(Aws::Vector<ThemeError>&& value) { SetErrors(std::move(value)); return *this;}
    inline ThemeVersion& AddErrors(const ThemeError& value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }
    inline ThemeVersion& AddErrors(ThemeError&& value) { m_errorsHasBeenSet = true; m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the theme version.</p>
     */
    inline const ResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ThemeVersion& WithStatus(const ResourceStatus& value) { SetStatus(value); return *this;}
    inline ThemeVersion& WithStatus(ResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_baseThemeId;
    bool m_baseThemeIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    ThemeConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<ThemeError> m_errors;
    bool m_errorsHasBeenSet = false;

    ResourceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
