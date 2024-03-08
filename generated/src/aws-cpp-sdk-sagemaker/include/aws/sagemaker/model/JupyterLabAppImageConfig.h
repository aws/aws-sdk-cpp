/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/FileSystemConfig.h>
#include <aws/sagemaker/model/ContainerConfig.h>
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
   * <p>The configuration for the file system and kernels in a SageMaker image
   * running as a JupyterLab app. The <code>FileSystemConfig</code> object is not
   * supported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/JupyterLabAppImageConfig">AWS
   * API Reference</a></p>
   */
  class JupyterLabAppImageConfig
  {
  public:
    AWS_SAGEMAKER_API JupyterLabAppImageConfig();
    AWS_SAGEMAKER_API JupyterLabAppImageConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API JupyterLabAppImageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const FileSystemConfig& GetFileSystemConfig() const{ return m_fileSystemConfig; }

    
    inline bool FileSystemConfigHasBeenSet() const { return m_fileSystemConfigHasBeenSet; }

    
    inline void SetFileSystemConfig(const FileSystemConfig& value) { m_fileSystemConfigHasBeenSet = true; m_fileSystemConfig = value; }

    
    inline void SetFileSystemConfig(FileSystemConfig&& value) { m_fileSystemConfigHasBeenSet = true; m_fileSystemConfig = std::move(value); }

    
    inline JupyterLabAppImageConfig& WithFileSystemConfig(const FileSystemConfig& value) { SetFileSystemConfig(value); return *this;}

    
    inline JupyterLabAppImageConfig& WithFileSystemConfig(FileSystemConfig&& value) { SetFileSystemConfig(std::move(value)); return *this;}


    
    inline const ContainerConfig& GetContainerConfig() const{ return m_containerConfig; }

    
    inline bool ContainerConfigHasBeenSet() const { return m_containerConfigHasBeenSet; }

    
    inline void SetContainerConfig(const ContainerConfig& value) { m_containerConfigHasBeenSet = true; m_containerConfig = value; }

    
    inline void SetContainerConfig(ContainerConfig&& value) { m_containerConfigHasBeenSet = true; m_containerConfig = std::move(value); }

    
    inline JupyterLabAppImageConfig& WithContainerConfig(const ContainerConfig& value) { SetContainerConfig(value); return *this;}

    
    inline JupyterLabAppImageConfig& WithContainerConfig(ContainerConfig&& value) { SetContainerConfig(std::move(value)); return *this;}

  private:

    FileSystemConfig m_fileSystemConfig;
    bool m_fileSystemConfigHasBeenSet = false;

    ContainerConfig m_containerConfig;
    bool m_containerConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
