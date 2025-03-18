/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/FileSystemAccessMode.h>
#include <aws/sagemaker/model/FileSystemType.h>
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
   * <p>Specifies a file system data source for a channel.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FileSystemDataSource">AWS
   * API Reference</a></p>
   */
  class FileSystemDataSource
  {
  public:
    AWS_SAGEMAKER_API FileSystemDataSource() = default;
    AWS_SAGEMAKER_API FileSystemDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FileSystemDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file system id.</p>
     */
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    FileSystemDataSource& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access mode of the mount of the directory associated with the channel. A
     * directory can be mounted either in <code>ro</code> (read-only) or
     * <code>rw</code> (read-write) mode.</p>
     */
    inline FileSystemAccessMode GetFileSystemAccessMode() const { return m_fileSystemAccessMode; }
    inline bool FileSystemAccessModeHasBeenSet() const { return m_fileSystemAccessModeHasBeenSet; }
    inline void SetFileSystemAccessMode(FileSystemAccessMode value) { m_fileSystemAccessModeHasBeenSet = true; m_fileSystemAccessMode = value; }
    inline FileSystemDataSource& WithFileSystemAccessMode(FileSystemAccessMode value) { SetFileSystemAccessMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file system type. </p>
     */
    inline FileSystemType GetFileSystemType() const { return m_fileSystemType; }
    inline bool FileSystemTypeHasBeenSet() const { return m_fileSystemTypeHasBeenSet; }
    inline void SetFileSystemType(FileSystemType value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = value; }
    inline FileSystemDataSource& WithFileSystemType(FileSystemType value) { SetFileSystemType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full path to the directory to associate with the channel.</p>
     */
    inline const Aws::String& GetDirectoryPath() const { return m_directoryPath; }
    inline bool DirectoryPathHasBeenSet() const { return m_directoryPathHasBeenSet; }
    template<typename DirectoryPathT = Aws::String>
    void SetDirectoryPath(DirectoryPathT&& value) { m_directoryPathHasBeenSet = true; m_directoryPath = std::forward<DirectoryPathT>(value); }
    template<typename DirectoryPathT = Aws::String>
    FileSystemDataSource& WithDirectoryPath(DirectoryPathT&& value) { SetDirectoryPath(std::forward<DirectoryPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    FileSystemAccessMode m_fileSystemAccessMode{FileSystemAccessMode::NOT_SET};
    bool m_fileSystemAccessModeHasBeenSet = false;

    FileSystemType m_fileSystemType{FileSystemType::NOT_SET};
    bool m_fileSystemTypeHasBeenSet = false;

    Aws::String m_directoryPath;
    bool m_directoryPathHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
