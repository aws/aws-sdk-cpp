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
#include <aws/quicksight/model/DashboardError.h>
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
   * <p>Dashboard version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardVersion">AWS
   * API Reference</a></p>
   */
  class DashboardVersion
  {
  public:
    AWS_QUICKSIGHT_API DashboardVersion() = default;
    AWS_QUICKSIGHT_API DashboardVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DashboardVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time that this dashboard version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    DashboardVersion& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline const Aws::Vector<DashboardError>& GetErrors() const { return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    template<typename ErrorsT = Aws::Vector<DashboardError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<DashboardError>>
    DashboardVersion& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = DashboardError>
    DashboardVersion& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Version number for this version of the dashboard.</p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline DashboardVersion& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline ResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DashboardVersion& WithStatus(ResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DashboardVersion& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source entity ARN.</p>
     */
    inline const Aws::String& GetSourceEntityArn() const { return m_sourceEntityArn; }
    inline bool SourceEntityArnHasBeenSet() const { return m_sourceEntityArnHasBeenSet; }
    template<typename SourceEntityArnT = Aws::String>
    void SetSourceEntityArn(SourceEntityArnT&& value) { m_sourceEntityArnHasBeenSet = true; m_sourceEntityArn = std::forward<SourceEntityArnT>(value); }
    template<typename SourceEntityArnT = Aws::String>
    DashboardVersion& WithSourceEntityArn(SourceEntityArnT&& value) { SetSourceEntityArn(std::forward<SourceEntityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Numbers (ARNs) for the datasets that are associated with
     * this version of the dashboard.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSetArns() const { return m_dataSetArns; }
    inline bool DataSetArnsHasBeenSet() const { return m_dataSetArnsHasBeenSet; }
    template<typename DataSetArnsT = Aws::Vector<Aws::String>>
    void SetDataSetArns(DataSetArnsT&& value) { m_dataSetArnsHasBeenSet = true; m_dataSetArns = std::forward<DataSetArnsT>(value); }
    template<typename DataSetArnsT = Aws::Vector<Aws::String>>
    DashboardVersion& WithDataSetArns(DataSetArnsT&& value) { SetDataSetArns(std::forward<DataSetArnsT>(value)); return *this;}
    template<typename DataSetArnsT = Aws::String>
    DashboardVersion& AddDataSetArns(DataSetArnsT&& value) { m_dataSetArnsHasBeenSet = true; m_dataSetArns.emplace_back(std::forward<DataSetArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DashboardVersion& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the theme associated with a version of the dashboard.</p>
     */
    inline const Aws::String& GetThemeArn() const { return m_themeArn; }
    inline bool ThemeArnHasBeenSet() const { return m_themeArnHasBeenSet; }
    template<typename ThemeArnT = Aws::String>
    void SetThemeArn(ThemeArnT&& value) { m_themeArnHasBeenSet = true; m_themeArn = std::forward<ThemeArnT>(value); }
    template<typename ThemeArnT = Aws::String>
    DashboardVersion& WithThemeArn(ThemeArnT&& value) { SetThemeArn(std::forward<ThemeArnT>(value)); return *this;}
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
    DashboardVersion& WithSheets(SheetsT&& value) { SetSheets(std::forward<SheetsT>(value)); return *this;}
    template<typename SheetsT = Sheet>
    DashboardVersion& AddSheets(SheetsT&& value) { m_sheetsHasBeenSet = true; m_sheets.emplace_back(std::forward<SheetsT>(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Vector<DashboardError> m_errors;
    bool m_errorsHasBeenSet = false;

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;

    ResourceStatus m_status{ResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_sourceEntityArn;
    bool m_sourceEntityArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataSetArns;
    bool m_dataSetArnsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_themeArn;
    bool m_themeArnHasBeenSet = false;

    Aws::Vector<Sheet> m_sheets;
    bool m_sheetsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
