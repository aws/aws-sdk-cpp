/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/S3DataSource.h>
#include <aws/sagemaker/model/FileSystemDataSource.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Describes the location of the channel data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DataSource">AWS
   * API Reference</a></p>
   */
  class DataSource
  {
  public:
    AWS_SAGEMAKER_API DataSource() = default;
    AWS_SAGEMAKER_API DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 location of the data source that is associated with a channel.</p>
     */
    inline const S3DataSource& GetS3DataSource() const { return m_s3DataSource; }
    inline bool S3DataSourceHasBeenSet() const { return m_s3DataSourceHasBeenSet; }
    template<typename S3DataSourceT = S3DataSource>
    void SetS3DataSource(S3DataSourceT&& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = std::forward<S3DataSourceT>(value); }
    template<typename S3DataSourceT = S3DataSource>
    DataSource& WithS3DataSource(S3DataSourceT&& value) { SetS3DataSource(std::forward<S3DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file system that is associated with a channel.</p>
     */
    inline const FileSystemDataSource& GetFileSystemDataSource() const { return m_fileSystemDataSource; }
    inline bool FileSystemDataSourceHasBeenSet() const { return m_fileSystemDataSourceHasBeenSet; }
    template<typename FileSystemDataSourceT = FileSystemDataSource>
    void SetFileSystemDataSource(FileSystemDataSourceT&& value) { m_fileSystemDataSourceHasBeenSet = true; m_fileSystemDataSource = std::forward<FileSystemDataSourceT>(value); }
    template<typename FileSystemDataSourceT = FileSystemDataSource>
    DataSource& WithFileSystemDataSource(FileSystemDataSourceT&& value) { SetFileSystemDataSource(std::forward<FileSystemDataSourceT>(value)); return *this;}
    ///@}
  private:

    S3DataSource m_s3DataSource;
    bool m_s3DataSourceHasBeenSet = false;

    FileSystemDataSource m_fileSystemDataSource;
    bool m_fileSystemDataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
