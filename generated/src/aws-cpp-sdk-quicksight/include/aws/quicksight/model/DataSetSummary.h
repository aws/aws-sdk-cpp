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
    AWS_QUICKSIGHT_API DataSetSummary();
    AWS_QUICKSIGHT_API DataSetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DataSetSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DataSetSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DataSetSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the dataset.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }
    inline DataSetSummary& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}
    inline DataSetSummary& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}
    inline DataSetSummary& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A display name for the dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DataSetSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DataSetSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DataSetSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline DataSetSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline DataSetSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that this dataset was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline DataSetSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline DataSetSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether you want to import the data into SPICE.</p>
     */
    inline const DataSetImportMode& GetImportMode() const{ return m_importMode; }
    inline bool ImportModeHasBeenSet() const { return m_importModeHasBeenSet; }
    inline void SetImportMode(const DataSetImportMode& value) { m_importModeHasBeenSet = true; m_importMode = value; }
    inline void SetImportMode(DataSetImportMode&& value) { m_importModeHasBeenSet = true; m_importMode = std::move(value); }
    inline DataSetSummary& WithImportMode(const DataSetImportMode& value) { SetImportMode(value); return *this;}
    inline DataSetSummary& WithImportMode(DataSetImportMode&& value) { SetImportMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The row-level security configuration for the dataset.</p>
     */
    inline const RowLevelPermissionDataSet& GetRowLevelPermissionDataSet() const{ return m_rowLevelPermissionDataSet; }
    inline bool RowLevelPermissionDataSetHasBeenSet() const { return m_rowLevelPermissionDataSetHasBeenSet; }
    inline void SetRowLevelPermissionDataSet(const RowLevelPermissionDataSet& value) { m_rowLevelPermissionDataSetHasBeenSet = true; m_rowLevelPermissionDataSet = value; }
    inline void SetRowLevelPermissionDataSet(RowLevelPermissionDataSet&& value) { m_rowLevelPermissionDataSetHasBeenSet = true; m_rowLevelPermissionDataSet = std::move(value); }
    inline DataSetSummary& WithRowLevelPermissionDataSet(const RowLevelPermissionDataSet& value) { SetRowLevelPermissionDataSet(value); return *this;}
    inline DataSetSummary& WithRowLevelPermissionDataSet(RowLevelPermissionDataSet&& value) { SetRowLevelPermissionDataSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the row level permission tags are applied.</p>
     */
    inline bool GetRowLevelPermissionTagConfigurationApplied() const{ return m_rowLevelPermissionTagConfigurationApplied; }
    inline bool RowLevelPermissionTagConfigurationAppliedHasBeenSet() const { return m_rowLevelPermissionTagConfigurationAppliedHasBeenSet; }
    inline void SetRowLevelPermissionTagConfigurationApplied(bool value) { m_rowLevelPermissionTagConfigurationAppliedHasBeenSet = true; m_rowLevelPermissionTagConfigurationApplied = value; }
    inline DataSetSummary& WithRowLevelPermissionTagConfigurationApplied(bool value) { SetRowLevelPermissionTagConfigurationApplied(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates if the dataset has column level permission
     * configured.</p>
     */
    inline bool GetColumnLevelPermissionRulesApplied() const{ return m_columnLevelPermissionRulesApplied; }
    inline bool ColumnLevelPermissionRulesAppliedHasBeenSet() const { return m_columnLevelPermissionRulesAppliedHasBeenSet; }
    inline void SetColumnLevelPermissionRulesApplied(bool value) { m_columnLevelPermissionRulesAppliedHasBeenSet = true; m_columnLevelPermissionRulesApplied = value; }
    inline DataSetSummary& WithColumnLevelPermissionRulesApplied(bool value) { SetColumnLevelPermissionRulesApplied(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    DataSetImportMode m_importMode;
    bool m_importModeHasBeenSet = false;

    RowLevelPermissionDataSet m_rowLevelPermissionDataSet;
    bool m_rowLevelPermissionDataSetHasBeenSet = false;

    bool m_rowLevelPermissionTagConfigurationApplied;
    bool m_rowLevelPermissionTagConfigurationAppliedHasBeenSet = false;

    bool m_columnLevelPermissionRulesApplied;
    bool m_columnLevelPermissionRulesAppliedHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
