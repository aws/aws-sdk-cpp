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
    AWS_SAGEMAKER_API KernelGatewayImageConfig() = default;
    AWS_SAGEMAKER_API KernelGatewayImageConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API KernelGatewayImageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The specification of the Jupyter kernels in the image.</p>
     */
    inline const Aws::Vector<KernelSpec>& GetKernelSpecs() const { return m_kernelSpecs; }
    inline bool KernelSpecsHasBeenSet() const { return m_kernelSpecsHasBeenSet; }
    template<typename KernelSpecsT = Aws::Vector<KernelSpec>>
    void SetKernelSpecs(KernelSpecsT&& value) { m_kernelSpecsHasBeenSet = true; m_kernelSpecs = std::forward<KernelSpecsT>(value); }
    template<typename KernelSpecsT = Aws::Vector<KernelSpec>>
    KernelGatewayImageConfig& WithKernelSpecs(KernelSpecsT&& value) { SetKernelSpecs(std::forward<KernelSpecsT>(value)); return *this;}
    template<typename KernelSpecsT = KernelSpec>
    KernelGatewayImageConfig& AddKernelSpecs(KernelSpecsT&& value) { m_kernelSpecsHasBeenSet = true; m_kernelSpecs.emplace_back(std::forward<KernelSpecsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Elastic File System storage configuration for a SageMaker AI
     * image.</p>
     */
    inline const FileSystemConfig& GetFileSystemConfig() const { return m_fileSystemConfig; }
    inline bool FileSystemConfigHasBeenSet() const { return m_fileSystemConfigHasBeenSet; }
    template<typename FileSystemConfigT = FileSystemConfig>
    void SetFileSystemConfig(FileSystemConfigT&& value) { m_fileSystemConfigHasBeenSet = true; m_fileSystemConfig = std::forward<FileSystemConfigT>(value); }
    template<typename FileSystemConfigT = FileSystemConfig>
    KernelGatewayImageConfig& WithFileSystemConfig(FileSystemConfigT&& value) { SetFileSystemConfig(std::forward<FileSystemConfigT>(value)); return *this;}
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
