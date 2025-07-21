/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/EFSFileSystem.h>
#include <aws/sagemaker/model/FSxLustreFileSystem.h>
#include <aws/sagemaker/model/S3FileSystem.h>
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
   * <p>A file system, created by you, that you assign to a user profile or space for
   * an Amazon SageMaker AI Domain. Permitted users can access this file system in
   * Amazon SageMaker AI Studio.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CustomFileSystem">AWS
   * API Reference</a></p>
   */
  class CustomFileSystem
  {
  public:
    AWS_SAGEMAKER_API CustomFileSystem() = default;
    AWS_SAGEMAKER_API CustomFileSystem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CustomFileSystem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A custom file system in Amazon EFS.</p>
     */
    inline const EFSFileSystem& GetEFSFileSystem() const { return m_eFSFileSystem; }
    inline bool EFSFileSystemHasBeenSet() const { return m_eFSFileSystemHasBeenSet; }
    template<typename EFSFileSystemT = EFSFileSystem>
    void SetEFSFileSystem(EFSFileSystemT&& value) { m_eFSFileSystemHasBeenSet = true; m_eFSFileSystem = std::forward<EFSFileSystemT>(value); }
    template<typename EFSFileSystemT = EFSFileSystem>
    CustomFileSystem& WithEFSFileSystem(EFSFileSystemT&& value) { SetEFSFileSystem(std::forward<EFSFileSystemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom file system in Amazon FSx for Lustre.</p>
     */
    inline const FSxLustreFileSystem& GetFSxLustreFileSystem() const { return m_fSxLustreFileSystem; }
    inline bool FSxLustreFileSystemHasBeenSet() const { return m_fSxLustreFileSystemHasBeenSet; }
    template<typename FSxLustreFileSystemT = FSxLustreFileSystem>
    void SetFSxLustreFileSystem(FSxLustreFileSystemT&& value) { m_fSxLustreFileSystemHasBeenSet = true; m_fSxLustreFileSystem = std::forward<FSxLustreFileSystemT>(value); }
    template<typename FSxLustreFileSystemT = FSxLustreFileSystem>
    CustomFileSystem& WithFSxLustreFileSystem(FSxLustreFileSystemT&& value) { SetFSxLustreFileSystem(std::forward<FSxLustreFileSystemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom file system in Amazon S3. This is only supported in Amazon SageMaker
     * Unified Studio.</p>
     */
    inline const S3FileSystem& GetS3FileSystem() const { return m_s3FileSystem; }
    inline bool S3FileSystemHasBeenSet() const { return m_s3FileSystemHasBeenSet; }
    template<typename S3FileSystemT = S3FileSystem>
    void SetS3FileSystem(S3FileSystemT&& value) { m_s3FileSystemHasBeenSet = true; m_s3FileSystem = std::forward<S3FileSystemT>(value); }
    template<typename S3FileSystemT = S3FileSystem>
    CustomFileSystem& WithS3FileSystem(S3FileSystemT&& value) { SetS3FileSystem(std::forward<S3FileSystemT>(value)); return *this;}
    ///@}
  private:

    EFSFileSystem m_eFSFileSystem;
    bool m_eFSFileSystemHasBeenSet = false;

    FSxLustreFileSystem m_fSxLustreFileSystem;
    bool m_fSxLustreFileSystemHasBeenSet = false;

    S3FileSystem m_s3FileSystem;
    bool m_s3FileSystemHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
