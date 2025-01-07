/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/EFSFileSystemConfig.h>
#include <aws/sagemaker/model/FSxLustreFileSystemConfig.h>
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
    AWS_SAGEMAKER_API CustomFileSystemConfig();
    AWS_SAGEMAKER_API CustomFileSystemConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CustomFileSystemConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The settings for a custom Amazon EFS file system.</p>
     */
    inline const EFSFileSystemConfig& GetEFSFileSystemConfig() const{ return m_eFSFileSystemConfig; }
    inline bool EFSFileSystemConfigHasBeenSet() const { return m_eFSFileSystemConfigHasBeenSet; }
    inline void SetEFSFileSystemConfig(const EFSFileSystemConfig& value) { m_eFSFileSystemConfigHasBeenSet = true; m_eFSFileSystemConfig = value; }
    inline void SetEFSFileSystemConfig(EFSFileSystemConfig&& value) { m_eFSFileSystemConfigHasBeenSet = true; m_eFSFileSystemConfig = std::move(value); }
    inline CustomFileSystemConfig& WithEFSFileSystemConfig(const EFSFileSystemConfig& value) { SetEFSFileSystemConfig(value); return *this;}
    inline CustomFileSystemConfig& WithEFSFileSystemConfig(EFSFileSystemConfig&& value) { SetEFSFileSystemConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for a custom Amazon FSx for Lustre file system.</p>
     */
    inline const FSxLustreFileSystemConfig& GetFSxLustreFileSystemConfig() const{ return m_fSxLustreFileSystemConfig; }
    inline bool FSxLustreFileSystemConfigHasBeenSet() const { return m_fSxLustreFileSystemConfigHasBeenSet; }
    inline void SetFSxLustreFileSystemConfig(const FSxLustreFileSystemConfig& value) { m_fSxLustreFileSystemConfigHasBeenSet = true; m_fSxLustreFileSystemConfig = value; }
    inline void SetFSxLustreFileSystemConfig(FSxLustreFileSystemConfig&& value) { m_fSxLustreFileSystemConfigHasBeenSet = true; m_fSxLustreFileSystemConfig = std::move(value); }
    inline CustomFileSystemConfig& WithFSxLustreFileSystemConfig(const FSxLustreFileSystemConfig& value) { SetFSxLustreFileSystemConfig(value); return *this;}
    inline CustomFileSystemConfig& WithFSxLustreFileSystemConfig(FSxLustreFileSystemConfig&& value) { SetFSxLustreFileSystemConfig(std::move(value)); return *this;}
    ///@}
  private:

    EFSFileSystemConfig m_eFSFileSystemConfig;
    bool m_eFSFileSystemConfigHasBeenSet = false;

    FSxLustreFileSystemConfig m_fSxLustreFileSystemConfig;
    bool m_fSxLustreFileSystemConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
