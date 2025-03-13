/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourceStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TemplateError.h>
#include <aws/quicksight/model/DataSetConfiguration.h>
#include <aws/quicksight/model/Sheet.h>
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
   * <p>A version of a template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TemplateVersion">AWS
   * API Reference</a></p>
   */
  class TemplateVersion
  {
  public:
    AWS_QUICKSIGHT_API TemplateVersion() = default;
    AWS_QUICKSIGHT_API TemplateVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TemplateVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time that this template version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    TemplateVersion& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Errors associated with this template version.</p>
     */
    inline const Aws::Vector<TemplateError>& GetErrors() const { return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    template<typename ErrorsT = Aws::Vector<TemplateError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<TemplateError>>
    TemplateVersion& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = TemplateError>
    TemplateVersion& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version number of the template version.</p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline TemplateVersion& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status that is associated with the template.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>CREATION_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> </p> </li> <li> <p> <code>DELETED</code> </p> </li>
     * </ul>
     */
    inline ResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TemplateVersion& WithStatus(ResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Schema of the dataset identified by the placeholder. Any dashboard created
     * from this template should be bound to new datasets matching the same schema
     * described through this API operation.</p>
     */
    inline const Aws::Vector<DataSetConfiguration>& GetDataSetConfigurations() const { return m_dataSetConfigurations; }
    inline bool DataSetConfigurationsHasBeenSet() const { return m_dataSetConfigurationsHasBeenSet; }
    template<typename DataSetConfigurationsT = Aws::Vector<DataSetConfiguration>>
    void SetDataSetConfigurations(DataSetConfigurationsT&& value) { m_dataSetConfigurationsHasBeenSet = true; m_dataSetConfigurations = std::forward<DataSetConfigurationsT>(value); }
    template<typename DataSetConfigurationsT = Aws::Vector<DataSetConfiguration>>
    TemplateVersion& WithDataSetConfigurations(DataSetConfigurationsT&& value) { SetDataSetConfigurations(std::forward<DataSetConfigurationsT>(value)); return *this;}
    template<typename DataSetConfigurationsT = DataSetConfiguration>
    TemplateVersion& AddDataSetConfigurations(DataSetConfigurationsT&& value) { m_dataSetConfigurationsHasBeenSet = true; m_dataSetConfigurations.emplace_back(std::forward<DataSetConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TemplateVersion& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an analysis or template that was used to
     * create this template.</p>
     */
    inline const Aws::String& GetSourceEntityArn() const { return m_sourceEntityArn; }
    inline bool SourceEntityArnHasBeenSet() const { return m_sourceEntityArnHasBeenSet; }
    template<typename SourceEntityArnT = Aws::String>
    void SetSourceEntityArn(SourceEntityArnT&& value) { m_sourceEntityArnHasBeenSet = true; m_sourceEntityArn = std::forward<SourceEntityArnT>(value); }
    template<typename SourceEntityArnT = Aws::String>
    TemplateVersion& WithSourceEntityArn(SourceEntityArnT&& value) { SetSourceEntityArn(std::forward<SourceEntityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the theme associated with this version of the template.</p>
     */
    inline const Aws::String& GetThemeArn() const { return m_themeArn; }
    inline bool ThemeArnHasBeenSet() const { return m_themeArnHasBeenSet; }
    template<typename ThemeArnT = Aws::String>
    void SetThemeArn(ThemeArnT&& value) { m_themeArnHasBeenSet = true; m_themeArn = std::forward<ThemeArnT>(value); }
    template<typename ThemeArnT = Aws::String>
    TemplateVersion& WithThemeArn(ThemeArnT&& value) { SetThemeArn(std::forward<ThemeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the associated sheets with the unique identifier and name of each
     * sheet.</p>
     */
    inline const Aws::Vector<Sheet>& GetSheets() const { return m_sheets; }
    inline bool SheetsHasBeenSet() const { return m_sheetsHasBeenSet; }
    template<typename SheetsT = Aws::Vector<Sheet>>
    void SetSheets(SheetsT&& value) { m_sheetsHasBeenSet = true; m_sheets = std::forward<SheetsT>(value); }
    template<typename SheetsT = Aws::Vector<Sheet>>
    TemplateVersion& WithSheets(SheetsT&& value) { SetSheets(std::forward<SheetsT>(value)); return *this;}
    template<typename SheetsT = Sheet>
    TemplateVersion& AddSheets(SheetsT&& value) { m_sheetsHasBeenSet = true; m_sheets.emplace_back(std::forward<SheetsT>(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Vector<TemplateError> m_errors;
    bool m_errorsHasBeenSet = false;

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;

    ResourceStatus m_status{ResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<DataSetConfiguration> m_dataSetConfigurations;
    bool m_dataSetConfigurationsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_sourceEntityArn;
    bool m_sourceEntityArnHasBeenSet = false;

    Aws::String m_themeArn;
    bool m_themeArnHasBeenSet = false;

    Aws::Vector<Sheet> m_sheets;
    bool m_sheetsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
