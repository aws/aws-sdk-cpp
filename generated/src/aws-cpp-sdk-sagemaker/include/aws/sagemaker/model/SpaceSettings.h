/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/JupyterServerAppSettings.h>
#include <aws/sagemaker/model/KernelGatewayAppSettings.h>
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
   * <p>A collection of space settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SpaceSettings">AWS
   * API Reference</a></p>
   */
  class SpaceSettings
  {
  public:
    AWS_SAGEMAKER_API SpaceSettings();
    AWS_SAGEMAKER_API SpaceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SpaceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const JupyterServerAppSettings& GetJupyterServerAppSettings() const{ return m_jupyterServerAppSettings; }

    
    inline bool JupyterServerAppSettingsHasBeenSet() const { return m_jupyterServerAppSettingsHasBeenSet; }

    
    inline void SetJupyterServerAppSettings(const JupyterServerAppSettings& value) { m_jupyterServerAppSettingsHasBeenSet = true; m_jupyterServerAppSettings = value; }

    
    inline void SetJupyterServerAppSettings(JupyterServerAppSettings&& value) { m_jupyterServerAppSettingsHasBeenSet = true; m_jupyterServerAppSettings = std::move(value); }

    
    inline SpaceSettings& WithJupyterServerAppSettings(const JupyterServerAppSettings& value) { SetJupyterServerAppSettings(value); return *this;}

    
    inline SpaceSettings& WithJupyterServerAppSettings(JupyterServerAppSettings&& value) { SetJupyterServerAppSettings(std::move(value)); return *this;}


    
    inline const KernelGatewayAppSettings& GetKernelGatewayAppSettings() const{ return m_kernelGatewayAppSettings; }

    
    inline bool KernelGatewayAppSettingsHasBeenSet() const { return m_kernelGatewayAppSettingsHasBeenSet; }

    
    inline void SetKernelGatewayAppSettings(const KernelGatewayAppSettings& value) { m_kernelGatewayAppSettingsHasBeenSet = true; m_kernelGatewayAppSettings = value; }

    
    inline void SetKernelGatewayAppSettings(KernelGatewayAppSettings&& value) { m_kernelGatewayAppSettingsHasBeenSet = true; m_kernelGatewayAppSettings = std::move(value); }

    
    inline SpaceSettings& WithKernelGatewayAppSettings(const KernelGatewayAppSettings& value) { SetKernelGatewayAppSettings(value); return *this;}

    
    inline SpaceSettings& WithKernelGatewayAppSettings(KernelGatewayAppSettings&& value) { SetKernelGatewayAppSettings(std::move(value)); return *this;}

  private:

    JupyterServerAppSettings m_jupyterServerAppSettings;
    bool m_jupyterServerAppSettingsHasBeenSet = false;

    KernelGatewayAppSettings m_kernelGatewayAppSettings;
    bool m_kernelGatewayAppSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
