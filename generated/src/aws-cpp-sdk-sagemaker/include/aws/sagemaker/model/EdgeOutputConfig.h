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
    AWS_SAGEMAKER_API EdgeOutputConfig();
    AWS_SAGEMAKER_API EdgeOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EdgeOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Simple Storage (S3) bucker URI.</p>
     */
    inline const Aws::String& GetS3OutputLocation() const{ return m_s3OutputLocation; }

    /**
     * <p>The Amazon Simple Storage (S3) bucker URI.</p>
     */
    inline bool S3OutputLocationHasBeenSet() const { return m_s3OutputLocationHasBeenSet; }

    /**
     * <p>The Amazon Simple Storage (S3) bucker URI.</p>
     */
    inline void SetS3OutputLocation(const Aws::String& value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation = value; }

    /**
     * <p>The Amazon Simple Storage (S3) bucker URI.</p>
     */
    inline void SetS3OutputLocation(Aws::String&& value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation = std::move(value); }

    /**
     * <p>The Amazon Simple Storage (S3) bucker URI.</p>
     */
    inline void SetS3OutputLocation(const char* value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation.assign(value); }

    /**
     * <p>The Amazon Simple Storage (S3) bucker URI.</p>
     */
    inline EdgeOutputConfig& WithS3OutputLocation(const Aws::String& value) { SetS3OutputLocation(value); return *this;}

    /**
     * <p>The Amazon Simple Storage (S3) bucker URI.</p>
     */
    inline EdgeOutputConfig& WithS3OutputLocation(Aws::String&& value) { SetS3OutputLocation(std::move(value)); return *this;}

    /**
     * <p>The Amazon Simple Storage (S3) bucker URI.</p>
     */
    inline EdgeOutputConfig& WithS3OutputLocation(const char* value) { SetS3OutputLocation(value); return *this;}


    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume after
     * compilation job. If you don't provide a KMS key ID, Amazon SageMaker uses the
     * default KMS key for Amazon S3 for your role's account.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume after
     * compilation job. If you don't provide a KMS key ID, Amazon SageMaker uses the
     * default KMS key for Amazon S3 for your role's account.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume after
     * compilation job. If you don't provide a KMS key ID, Amazon SageMaker uses the
     * default KMS key for Amazon S3 for your role's account.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume after
     * compilation job. If you don't provide a KMS key ID, Amazon SageMaker uses the
     * default KMS key for Amazon S3 for your role's account.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume after
     * compilation job. If you don't provide a KMS key ID, Amazon SageMaker uses the
     * default KMS key for Amazon S3 for your role's account.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume after
     * compilation job. If you don't provide a KMS key ID, Amazon SageMaker uses the
     * default KMS key for Amazon S3 for your role's account.</p>
     */
    inline EdgeOutputConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume after
     * compilation job. If you don't provide a KMS key ID, Amazon SageMaker uses the
     * default KMS key for Amazon S3 for your role's account.</p>
     */
    inline EdgeOutputConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume after
     * compilation job. If you don't provide a KMS key ID, Amazon SageMaker uses the
     * default KMS key for Amazon S3 for your role's account.</p>
     */
    inline EdgeOutputConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The deployment type SageMaker Edge Manager will create. Currently only
     * supports Amazon Web Services IoT Greengrass Version 2 components.</p>
     */
    inline const EdgePresetDeploymentType& GetPresetDeploymentType() const{ return m_presetDeploymentType; }

    /**
     * <p>The deployment type SageMaker Edge Manager will create. Currently only
     * supports Amazon Web Services IoT Greengrass Version 2 components.</p>
     */
    inline bool PresetDeploymentTypeHasBeenSet() const { return m_presetDeploymentTypeHasBeenSet; }

    /**
     * <p>The deployment type SageMaker Edge Manager will create. Currently only
     * supports Amazon Web Services IoT Greengrass Version 2 components.</p>
     */
    inline void SetPresetDeploymentType(const EdgePresetDeploymentType& value) { m_presetDeploymentTypeHasBeenSet = true; m_presetDeploymentType = value; }

    /**
     * <p>The deployment type SageMaker Edge Manager will create. Currently only
     * supports Amazon Web Services IoT Greengrass Version 2 components.</p>
     */
    inline void SetPresetDeploymentType(EdgePresetDeploymentType&& value) { m_presetDeploymentTypeHasBeenSet = true; m_presetDeploymentType = std::move(value); }

    /**
     * <p>The deployment type SageMaker Edge Manager will create. Currently only
     * supports Amazon Web Services IoT Greengrass Version 2 components.</p>
     */
    inline EdgeOutputConfig& WithPresetDeploymentType(const EdgePresetDeploymentType& value) { SetPresetDeploymentType(value); return *this;}

    /**
     * <p>The deployment type SageMaker Edge Manager will create. Currently only
     * supports Amazon Web Services IoT Greengrass Version 2 components.</p>
     */
    inline EdgeOutputConfig& WithPresetDeploymentType(EdgePresetDeploymentType&& value) { SetPresetDeploymentType(std::move(value)); return *this;}


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
    inline const Aws::String& GetPresetDeploymentConfig() const{ return m_presetDeploymentConfig; }

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
    inline bool PresetDeploymentConfigHasBeenSet() const { return m_presetDeploymentConfigHasBeenSet; }

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
    inline void SetPresetDeploymentConfig(const Aws::String& value) { m_presetDeploymentConfigHasBeenSet = true; m_presetDeploymentConfig = value; }

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
    inline void SetPresetDeploymentConfig(Aws::String&& value) { m_presetDeploymentConfigHasBeenSet = true; m_presetDeploymentConfig = std::move(value); }

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
    inline void SetPresetDeploymentConfig(const char* value) { m_presetDeploymentConfigHasBeenSet = true; m_presetDeploymentConfig.assign(value); }

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
    inline EdgeOutputConfig& WithPresetDeploymentConfig(const Aws::String& value) { SetPresetDeploymentConfig(value); return *this;}

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
    inline EdgeOutputConfig& WithPresetDeploymentConfig(Aws::String&& value) { SetPresetDeploymentConfig(std::move(value)); return *this;}

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
    inline EdgeOutputConfig& WithPresetDeploymentConfig(const char* value) { SetPresetDeploymentConfig(value); return *this;}

  private:

    Aws::String m_s3OutputLocation;
    bool m_s3OutputLocationHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    EdgePresetDeploymentType m_presetDeploymentType;
    bool m_presetDeploymentTypeHasBeenSet = false;

    Aws::String m_presetDeploymentConfig;
    bool m_presetDeploymentConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
