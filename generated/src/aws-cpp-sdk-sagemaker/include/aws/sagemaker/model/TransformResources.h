/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TransformInstanceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes the resources, including ML instance types and ML instance count,
   * to use for transform job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TransformResources">AWS
   * API Reference</a></p>
   */
  class TransformResources
  {
  public:
    AWS_SAGEMAKER_API TransformResources() = default;
    AWS_SAGEMAKER_API TransformResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TransformResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ML compute instance type for the transform job. If you are using built-in
     * algorithms to transform moderately sized datasets, we recommend using
     * ml.m4.xlarge or <code>ml.m5.large</code>instance types.</p>
     */
    inline TransformInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(TransformInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline TransformResources& WithInstanceType(TransformInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of ML compute instances to use in the transform job. The default
     * value is <code>1</code>, and the maximum is <code>100</code>. For distributed
     * transform jobs, specify a value greater than <code>1</code>.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline TransformResources& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt model data on the storage volume attached
     * to the ML compute instance(s) that run the batch transform job.</p> 
     * <p>Certain Nitro-based instances include local storage, dependent on the
     * instance type. Local storage volumes are encrypted using a hardware module on
     * the instance. You can't request a <code>VolumeKmsKeyId</code> when using an
     * instance type with local storage.</p> <p>For a list of instance types that
     * support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p>  <p> The <code>VolumeKmsKeyId</code> can
     * be any of the following formats:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetVolumeKmsKeyId() const { return m_volumeKmsKeyId; }
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }
    template<typename VolumeKmsKeyIdT = Aws::String>
    void SetVolumeKmsKeyId(VolumeKmsKeyIdT&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::forward<VolumeKmsKeyIdT>(value); }
    template<typename VolumeKmsKeyIdT = Aws::String>
    TransformResources& WithVolumeKmsKeyId(VolumeKmsKeyIdT&& value) { SetVolumeKmsKeyId(std::forward<VolumeKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an option from a collection of preconfigured Amazon Machine Image
     * (AMI) images. Each image is configured by Amazon Web Services with a set of
     * software and driver versions.</p> <dl> <dt>al2-ami-sagemaker-batch-gpu-470</dt>
     * <dd> <ul> <li> <p>Accelerator: GPU</p> </li> <li> <p>NVIDIA driver version:
     * 470</p> </li> </ul> </dd> <dt>al2-ami-sagemaker-batch-gpu-535</dt> <dd> <ul>
     * <li> <p>Accelerator: GPU</p> </li> <li> <p>NVIDIA driver version: 535</p> </li>
     * </ul> </dd> </dl>
     */
    inline const Aws::String& GetTransformAmiVersion() const { return m_transformAmiVersion; }
    inline bool TransformAmiVersionHasBeenSet() const { return m_transformAmiVersionHasBeenSet; }
    template<typename TransformAmiVersionT = Aws::String>
    void SetTransformAmiVersion(TransformAmiVersionT&& value) { m_transformAmiVersionHasBeenSet = true; m_transformAmiVersion = std::forward<TransformAmiVersionT>(value); }
    template<typename TransformAmiVersionT = Aws::String>
    TransformResources& WithTransformAmiVersion(TransformAmiVersionT&& value) { SetTransformAmiVersion(std::forward<TransformAmiVersionT>(value)); return *this;}
    ///@}
  private:

    TransformInstanceType m_instanceType{TransformInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet = false;

    Aws::String m_transformAmiVersion;
    bool m_transformAmiVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
