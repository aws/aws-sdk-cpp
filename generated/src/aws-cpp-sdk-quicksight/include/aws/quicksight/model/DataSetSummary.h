/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/DataSetImportMode.h>
#include <aws/quicksight/model/RowLevelPermissionDataSet.h>
#include <aws/quicksight/model/DataSetUseAs.h>
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
   * <p>Dataset summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetSummary">AWS
   * API Reference</a></p>
   */
  class DataSetSummary
  {
  public:
    AWS_QUICKSIGHT_API DataSetSummary() = default;
    AWS_QUICKSIGHT_API DataSetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DataSetSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the dataset.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    DataSetSummary& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A display name for the dataset.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataSetSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    DataSetSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that this dataset was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    DataSetSummary& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether you want to import the data into SPICE.</p>
     */
    inline DataSetImportMode GetImportMode() const { return m_importMode; }
    inline bool ImportModeHasBeenSet() const { return m_importModeHasBeenSet; }
    inline void SetImportMode(DataSetImportMode value) { m_importModeHasBeenSet = true; m_importMode = value; }
    inline DataSetSummary& WithImportMode(DataSetImportMode value) { SetImportMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The row-level security configuration for the dataset.</p>
     */
    inline const RowLevelPermissionDataSet& GetRowLevelPermissionDataSet() const { return m_rowLevelPermissionDataSet; }
    inline bool RowLevelPermissionDataSetHasBeenSet() const { return m_rowLevelPermissionDataSetHasBeenSet; }
    template<typename RowLevelPermissionDataSetT = RowLevelPermissionDataSet>
    void SetRowLevelPermissionDataSet(RowLevelPermissionDataSetT&& value) { m_rowLevelPermissionDataSetHasBeenSet = true; m_rowLevelPermissionDataSet = std::forward<RowLevelPermissionDataSetT>(value); }
    template<typename RowLevelPermissionDataSetT = RowLevelPermissionDataSet>
    DataSetSummary& WithRowLevelPermissionDataSet(RowLevelPermissionDataSetT&& value) { SetRowLevelPermissionDataSet(std::forward<RowLevelPermissionDataSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the row level permission tags are applied.</p>
     */
    inline bool GetRowLevelPermissionTagConfigurationApplied() const { return m_rowLevelPermissionTagConfigurationApplied; }
    inline bool RowLevelPermissionTagConfigurationAppliedHasBeenSet() const { return m_rowLevelPermissionTagConfigurationAppliedHasBeenSet; }
    inline void SetRowLevelPermissionTagConfigurationApplied(bool value) { m_rowLevelPermissionTagConfigurationAppliedHasBeenSet = true; m_rowLevelPermissionTagConfigurationApplied = value; }
    inline DataSetSummary& WithRowLevelPermissionTagConfigurationApplied(bool value) { SetRowLevelPermissionTagConfigurationApplied(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates if the dataset has column level permission
     * configured.</p>
     */
    inline bool GetColumnLevelPermissionRulesApplied() const { return m_columnLevelPermissionRulesApplied; }
    inline bool ColumnLevelPermissionRulesAppliedHasBeenSet() const { return m_columnLevelPermissionRulesAppliedHasBeenSet; }
    inline void SetColumnLevelPermissionRulesApplied(bool value) { m_columnLevelPermissionRulesAppliedHasBeenSet = true; m_columnLevelPermissionRulesApplied = value; }
    inline DataSetSummary& WithColumnLevelPermissionRulesApplied(bool value) { SetColumnLevelPermissionRulesApplied(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usage of the dataset.</p>
     */
    inline DataSetUseAs GetUseAs() const { return m_useAs; }
    inline bool UseAsHasBeenSet() const { return m_useAsHasBeenSet; }
    inline void SetUseAs(DataSetUseAs value) { m_useAsHasBeenSet = true; m_useAs = value; }
    inline DataSetSummary& WithUseAs(DataSetUseAs value) { SetUseAs(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    DataSetImportMode m_importMode{DataSetImportMode::NOT_SET};
    bool m_importModeHasBeenSet = false;

    RowLevelPermissionDataSet m_rowLevelPermissionDataSet;
    bool m_rowLevelPermissionDataSetHasBeenSet = false;

    bool m_rowLevelPermissionTagConfigurationApplied{false};
    bool m_rowLevelPermissionTagConfigurationAppliedHasBeenSet = false;

    bool m_columnLevelPermissionRulesApplied{false};
    bool m_columnLevelPermissionRulesAppliedHasBeenSet = false;

    DataSetUseAs m_useAs{DataSetUseAs::NOT_SET};
    bool m_useAsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
