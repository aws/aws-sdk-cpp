/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/InputColumn.h>
#include <aws/quicksight/model/UploadSettings.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A physical table type that contains the schema and upload settings for a
 * file-based data source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FileSource">AWS
 * API Reference</a></p>
 */
class FileSource {
 public:
  AWS_QUICKSIGHT_API FileSource() = default;
  AWS_QUICKSIGHT_API FileSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API FileSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the data source.</p>
   */
  inline const Aws::String& GetDataSourceArn() const { return m_dataSourceArn; }
  inline bool DataSourceArnHasBeenSet() const { return m_dataSourceArnHasBeenSet; }
  template <typename DataSourceArnT = Aws::String>
  void SetDataSourceArn(DataSourceArnT&& value) {
    m_dataSourceArnHasBeenSet = true;
    m_dataSourceArn = std::forward<DataSourceArnT>(value);
  }
  template <typename DataSourceArnT = Aws::String>
  FileSource& WithDataSourceArn(DataSourceArnT&& value) {
    SetDataSourceArn(std::forward<DataSourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the format for the source file.</p>
   */
  inline const UploadSettings& GetUploadSettings() const { return m_uploadSettings; }
  inline bool UploadSettingsHasBeenSet() const { return m_uploadSettingsHasBeenSet; }
  template <typename UploadSettingsT = UploadSettings>
  void SetUploadSettings(UploadSettingsT&& value) {
    m_uploadSettingsHasBeenSet = true;
    m_uploadSettings = std::forward<UploadSettingsT>(value);
  }
  template <typename UploadSettingsT = UploadSettings>
  FileSource& WithUploadSettings(UploadSettingsT&& value) {
    SetUploadSettings(std::forward<UploadSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The zero-based index of the sheet to use within the file. For files that
   * contain multiple sheets, this identifies which sheet to read. Files that contain
   * a single sheet, or that have no concept of sheets, use sheet 0.</p>
   */
  inline int GetSheetIndex() const { return m_sheetIndex; }
  inline bool SheetIndexHasBeenSet() const { return m_sheetIndexHasBeenSet; }
  inline void SetSheetIndex(int value) {
    m_sheetIndexHasBeenSet = true;
    m_sheetIndex = value;
  }
  inline FileSource& WithSheetIndex(int value) {
    SetSheetIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The column schema of the file.</p>
   */
  inline const Aws::Vector<InputColumn>& GetInputColumns() const { return m_inputColumns; }
  inline bool InputColumnsHasBeenSet() const { return m_inputColumnsHasBeenSet; }
  template <typename InputColumnsT = Aws::Vector<InputColumn>>
  void SetInputColumns(InputColumnsT&& value) {
    m_inputColumnsHasBeenSet = true;
    m_inputColumns = std::forward<InputColumnsT>(value);
  }
  template <typename InputColumnsT = Aws::Vector<InputColumn>>
  FileSource& WithInputColumns(InputColumnsT&& value) {
    SetInputColumns(std::forward<InputColumnsT>(value));
    return *this;
  }
  template <typename InputColumnsT = InputColumn>
  FileSource& AddInputColumns(InputColumnsT&& value) {
    m_inputColumnsHasBeenSet = true;
    m_inputColumns.emplace_back(std::forward<InputColumnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dataSourceArn;

  UploadSettings m_uploadSettings;

  int m_sheetIndex{0};

  Aws::Vector<InputColumn> m_inputColumns;
  bool m_dataSourceArnHasBeenSet = false;
  bool m_uploadSettingsHasBeenSet = false;
  bool m_sheetIndexHasBeenSet = false;
  bool m_inputColumnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
