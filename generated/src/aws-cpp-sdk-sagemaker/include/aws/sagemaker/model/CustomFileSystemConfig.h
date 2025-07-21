/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/EFSFileSystemConfig.h>
#include <aws/sagemaker/model/FSxLustreFileSystemConfig.h>
#include <aws/sagemaker/model/S3FileSystemConfig.h>
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
   * <p>The settings for assigning a custom file system to a user profile or space
   * for an Amazon SageMaker AI Domain. Permitted users can access this file system
   * in Amazon SageMaker AI Studio.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CustomFileSystemConfig">AWS
   * API Reference</a></p>
   */
  class CustomFileSystemConfig
  {
  public:
    AWS_SAGEMAKER_API CustomFileSystemConfig() = default;
    AWS_SAGEMAKER_API CustomFileSystemConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CustomFileSystemConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The settings for a custom Amazon EFS file system.</p>
     */
    inline const EFSFileSystemConfig& GetEFSFileSystemConfig() const { return m_eFSFileSystemConfig; }
    inline bool EFSFileSystemConfigHasBeenSet() const { return m_eFSFileSystemConfigHasBeenSet; }
    template<typename EFSFileSystemConfigT = EFSFileSystemConfig>
    void SetEFSFileSystemConfig(EFSFileSystemConfigT&& value) { m_eFSFileSystemConfigHasBeenSet = true; m_eFSFileSystemConfig = std::forward<EFSFileSystemConfigT>(value); }
    template<typename EFSFileSystemConfigT = EFSFileSystemConfig>
    CustomFileSystemConfig& WithEFSFileSystemConfig(EFSFileSystemConfigT&& value) { SetEFSFileSystemConfig(std::forward<EFSFileSystemConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for a custom Amazon FSx for Lustre file system.</p>
     */
    inline const FSxLustreFileSystemConfig& GetFSxLustreFileSystemConfig() const { return m_fSxLustreFileSystemConfig; }
    inline bool FSxLustreFileSystemConfigHasBeenSet() const { return m_fSxLustreFileSystemConfigHasBeenSet; }
    template<typename FSxLustreFileSystemConfigT = FSxLustreFileSystemConfig>
    void SetFSxLustreFileSystemConfig(FSxLustreFileSystemConfigT&& value) { m_fSxLustreFileSystemConfigHasBeenSet = true; m_fSxLustreFileSystemConfig = std::forward<FSxLustreFileSystemConfigT>(value); }
    template<typename FSxLustreFileSystemConfigT = FSxLustreFileSystemConfig>
    CustomFileSystemConfig& WithFSxLustreFileSystemConfig(FSxLustreFileSystemConfigT&& value) { SetFSxLustreFileSystemConfig(std::forward<FSxLustreFileSystemConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for a custom Amazon S3 file system.</p>
     */
    inline const S3FileSystemConfig& GetS3FileSystemConfig() const { return m_s3FileSystemConfig; }
    inline bool S3FileSystemConfigHasBeenSet() const { return m_s3FileSystemConfigHasBeenSet; }
    template<typename S3FileSystemConfigT = S3FileSystemConfig>
    void SetS3FileSystemConfig(S3FileSystemConfigT&& value) { m_s3FileSystemConfigHasBeenSet = true; m_s3FileSystemConfig = std::forward<S3FileSystemConfigT>(value); }
    template<typename S3FileSystemConfigT = S3FileSystemConfig>
    CustomFileSystemConfig& WithS3FileSystemConfig(S3FileSystemConfigT&& value) { SetS3FileSystemConfig(std::forward<S3FileSystemConfigT>(value)); return *this;}
    ///@}
  private:

    EFSFileSystemConfig m_eFSFileSystemConfig;
    bool m_eFSFileSystemConfigHasBeenSet = false;

    FSxLustreFileSystemConfig m_fSxLustreFileSystemConfig;
    bool m_fSxLustreFileSystemConfigHasBeenSet = false;

    S3FileSystemConfig m_s3FileSystemConfig;
    bool m_s3FileSystemConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
