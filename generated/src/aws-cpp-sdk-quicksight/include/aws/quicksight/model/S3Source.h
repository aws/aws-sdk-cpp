/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/UploadSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/InputColumn.h>
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
   * <p>A physical table type for an S3 data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/S3Source">AWS
   * API Reference</a></p>
   */
  class S3Source
  {
  public:
    AWS_QUICKSIGHT_API S3Source() = default;
    AWS_QUICKSIGHT_API S3Source(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API S3Source& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the data source.</p>
     */
    inline const Aws::String& GetDataSourceArn() const { return m_dataSourceArn; }
    inline bool DataSourceArnHasBeenSet() const { return m_dataSourceArnHasBeenSet; }
    template<typename DataSourceArnT = Aws::String>
    void SetDataSourceArn(DataSourceArnT&& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = std::forward<DataSourceArnT>(value); }
    template<typename DataSourceArnT = Aws::String>
    S3Source& WithDataSourceArn(DataSourceArnT&& value) { SetDataSourceArn(std::forward<DataSourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the format for the S3 source file or files.</p>
     */
    inline const UploadSettings& GetUploadSettings() const { return m_uploadSettings; }
    inline bool UploadSettingsHasBeenSet() const { return m_uploadSettingsHasBeenSet; }
    template<typename UploadSettingsT = UploadSettings>
    void SetUploadSettings(UploadSettingsT&& value) { m_uploadSettingsHasBeenSet = true; m_uploadSettings = std::forward<UploadSettingsT>(value); }
    template<typename UploadSettingsT = UploadSettings>
    S3Source& WithUploadSettings(UploadSettingsT&& value) { SetUploadSettings(std::forward<UploadSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A physical table type for an S3 data source.</p>  <p>For files that
     * aren't JSON, only <code>STRING</code> data types are supported in input
     * columns.</p> 
     */
    inline const Aws::Vector<InputColumn>& GetInputColumns() const { return m_inputColumns; }
    inline bool InputColumnsHasBeenSet() const { return m_inputColumnsHasBeenSet; }
    template<typename InputColumnsT = Aws::Vector<InputColumn>>
    void SetInputColumns(InputColumnsT&& value) { m_inputColumnsHasBeenSet = true; m_inputColumns = std::forward<InputColumnsT>(value); }
    template<typename InputColumnsT = Aws::Vector<InputColumn>>
    S3Source& WithInputColumns(InputColumnsT&& value) { SetInputColumns(std::forward<InputColumnsT>(value)); return *this;}
    template<typename InputColumnsT = InputColumn>
    S3Source& AddInputColumns(InputColumnsT&& value) { m_inputColumnsHasBeenSet = true; m_inputColumns.emplace_back(std::forward<InputColumnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dataSourceArn;
    bool m_dataSourceArnHasBeenSet = false;

    UploadSettings m_uploadSettings;
    bool m_uploadSettingsHasBeenSet = false;

    Aws::Vector<InputColumn> m_inputColumns;
    bool m_inputColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
