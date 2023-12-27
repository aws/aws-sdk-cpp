/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/EFSFileSystemConfig.h>
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
   * for an Amazon SageMaker Domain. Permitted users can access this file system in
   * Amazon SageMaker Studio.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>The settings for a custom Amazon EFS file system.</p>
     */
    inline const EFSFileSystemConfig& GetEFSFileSystemConfig() const{ return m_eFSFileSystemConfig; }

    /**
     * <p>The settings for a custom Amazon EFS file system.</p>
     */
    inline bool EFSFileSystemConfigHasBeenSet() const { return m_eFSFileSystemConfigHasBeenSet; }

    /**
     * <p>The settings for a custom Amazon EFS file system.</p>
     */
    inline void SetEFSFileSystemConfig(const EFSFileSystemConfig& value) { m_eFSFileSystemConfigHasBeenSet = true; m_eFSFileSystemConfig = value; }

    /**
     * <p>The settings for a custom Amazon EFS file system.</p>
     */
    inline void SetEFSFileSystemConfig(EFSFileSystemConfig&& value) { m_eFSFileSystemConfigHasBeenSet = true; m_eFSFileSystemConfig = std::move(value); }

    /**
     * <p>The settings for a custom Amazon EFS file system.</p>
     */
    inline CustomFileSystemConfig& WithEFSFileSystemConfig(const EFSFileSystemConfig& value) { SetEFSFileSystemConfig(value); return *this;}

    /**
     * <p>The settings for a custom Amazon EFS file system.</p>
     */
    inline CustomFileSystemConfig& WithEFSFileSystemConfig(EFSFileSystemConfig&& value) { SetEFSFileSystemConfig(std::move(value)); return *this;}

  private:

    EFSFileSystemConfig m_eFSFileSystemConfig;
    bool m_eFSFileSystemConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
