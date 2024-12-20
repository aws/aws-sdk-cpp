/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/FileSystemConfig.h>
#include <aws/sagemaker/model/KernelSpec.h>
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
   * <p>The configuration for the file system and kernels in a SageMaker AI image
   * running as a KernelGateway app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/KernelGatewayImageConfig">AWS
   * API Reference</a></p>
   */
  class KernelGatewayImageConfig
  {
  public:
    AWS_SAGEMAKER_API KernelGatewayImageConfig();
    AWS_SAGEMAKER_API KernelGatewayImageConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API KernelGatewayImageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The specification of the Jupyter kernels in the image.</p>
     */
    inline const Aws::Vector<KernelSpec>& GetKernelSpecs() const{ return m_kernelSpecs; }
    inline bool KernelSpecsHasBeenSet() const { return m_kernelSpecsHasBeenSet; }
    inline void SetKernelSpecs(const Aws::Vector<KernelSpec>& value) { m_kernelSpecsHasBeenSet = true; m_kernelSpecs = value; }
    inline void SetKernelSpecs(Aws::Vector<KernelSpec>&& value) { m_kernelSpecsHasBeenSet = true; m_kernelSpecs = std::move(value); }
    inline KernelGatewayImageConfig& WithKernelSpecs(const Aws::Vector<KernelSpec>& value) { SetKernelSpecs(value); return *this;}
    inline KernelGatewayImageConfig& WithKernelSpecs(Aws::Vector<KernelSpec>&& value) { SetKernelSpecs(std::move(value)); return *this;}
    inline KernelGatewayImageConfig& AddKernelSpecs(const KernelSpec& value) { m_kernelSpecsHasBeenSet = true; m_kernelSpecs.push_back(value); return *this; }
    inline KernelGatewayImageConfig& AddKernelSpecs(KernelSpec&& value) { m_kernelSpecsHasBeenSet = true; m_kernelSpecs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Elastic File System storage configuration for a SageMaker AI
     * image.</p>
     */
    inline const FileSystemConfig& GetFileSystemConfig() const{ return m_fileSystemConfig; }
    inline bool FileSystemConfigHasBeenSet() const { return m_fileSystemConfigHasBeenSet; }
    inline void SetFileSystemConfig(const FileSystemConfig& value) { m_fileSystemConfigHasBeenSet = true; m_fileSystemConfig = value; }
    inline void SetFileSystemConfig(FileSystemConfig&& value) { m_fileSystemConfigHasBeenSet = true; m_fileSystemConfig = std::move(value); }
    inline KernelGatewayImageConfig& WithFileSystemConfig(const FileSystemConfig& value) { SetFileSystemConfig(value); return *this;}
    inline KernelGatewayImageConfig& WithFileSystemConfig(FileSystemConfig&& value) { SetFileSystemConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<KernelSpec> m_kernelSpecs;
    bool m_kernelSpecsHasBeenSet = false;

    FileSystemConfig m_fileSystemConfig;
    bool m_fileSystemConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
