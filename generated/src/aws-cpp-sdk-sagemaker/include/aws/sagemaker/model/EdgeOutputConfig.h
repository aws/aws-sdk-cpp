/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/EdgePresetDeploymentType.h>
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
   * <p>The output configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EdgeOutputConfig">AWS
   * API Reference</a></p>
   */
  class EdgeOutputConfig
  {
  public:
    AWS_SAGEMAKER_API EdgeOutputConfig() = default;
    AWS_SAGEMAKER_API EdgeOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EdgeOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Simple Storage (S3) bucker URI.</p>
     */
    inline const Aws::String& GetS3OutputLocation() const { return m_s3OutputLocation; }
    inline bool S3OutputLocationHasBeenSet() const { return m_s3OutputLocationHasBeenSet; }
    template<typename S3OutputLocationT = Aws::String>
    void SetS3OutputLocation(S3OutputLocationT&& value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation = std::forward<S3OutputLocationT>(value); }
    template<typename S3OutputLocationT = Aws::String>
    EdgeOutputConfig& WithS3OutputLocation(S3OutputLocationT&& value) { SetS3OutputLocation(std::forward<S3OutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume after
     * compilation job. If you don't provide a KMS key ID, Amazon SageMaker uses the
     * default KMS key for Amazon S3 for your role's account.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    EdgeOutputConfig& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment type SageMaker Edge Manager will create. Currently only
     * supports Amazon Web Services IoT Greengrass Version 2 components.</p>
     */
    inline EdgePresetDeploymentType GetPresetDeploymentType() const { return m_presetDeploymentType; }
    inline bool PresetDeploymentTypeHasBeenSet() const { return m_presetDeploymentTypeHasBeenSet; }
    inline void SetPresetDeploymentType(EdgePresetDeploymentType value) { m_presetDeploymentTypeHasBeenSet = true; m_presetDeploymentType = value; }
    inline EdgeOutputConfig& WithPresetDeploymentType(EdgePresetDeploymentType value) { SetPresetDeploymentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration used to create deployment artifacts. Specify configuration
     * options with a JSON string. The available configuration options for each type
     * are:</p> <ul> <li> <p> <code>ComponentName</code> (optional) - Name of the
     * GreenGrass V2 component. If not specified, the default name generated consists
     * of "SagemakerEdgeManager" and the name of your SageMaker Edge Manager packaging
     * job.</p> </li> <li> <p> <code>ComponentDescription</code> (optional) -
     * Description of the component.</p> </li> <li> <p> <code>ComponentVersion</code>
     * (optional) - The version of the component.</p>  <p>Amazon Web Services IoT
     * Greengrass uses semantic versions for components. Semantic versions follow a<i>
     * major.minor.patch</i> number system. For example, version 1.0.0 represents the
     * first major release for a component. For more information, see the <a
     * href="https://semver.org/">semantic version specification</a>.</p>  </li>
     * <li> <p> <code>PlatformOS</code> (optional) - The name of the operating system
     * for the platform. Supported platforms include Windows and Linux.</p> </li> <li>
     * <p> <code>PlatformArchitecture</code> (optional) - The processor architecture
     * for the platform. </p> <p>Supported architectures Windows include:
     * Windows32_x86, Windows64_x64.</p> <p>Supported architectures for Linux include:
     * Linux x86_64, Linux ARMV8.</p> </li> </ul>
     */
    inline const Aws::String& GetPresetDeploymentConfig() const { return m_presetDeploymentConfig; }
    inline bool PresetDeploymentConfigHasBeenSet() const { return m_presetDeploymentConfigHasBeenSet; }
    template<typename PresetDeploymentConfigT = Aws::String>
    void SetPresetDeploymentConfig(PresetDeploymentConfigT&& value) { m_presetDeploymentConfigHasBeenSet = true; m_presetDeploymentConfig = std::forward<PresetDeploymentConfigT>(value); }
    template<typename PresetDeploymentConfigT = Aws::String>
    EdgeOutputConfig& WithPresetDeploymentConfig(PresetDeploymentConfigT&& value) { SetPresetDeploymentConfig(std::forward<PresetDeploymentConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3OutputLocation;
    bool m_s3OutputLocationHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    EdgePresetDeploymentType m_presetDeploymentType{EdgePresetDeploymentType::NOT_SET};
    bool m_presetDeploymentTypeHasBeenSet = false;

    Aws::String m_presetDeploymentConfig;
    bool m_presetDeploymentConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
