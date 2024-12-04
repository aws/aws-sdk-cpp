/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingInstanceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/InstanceGroup.h>
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
   * <p>Describes the resources, including machine learning (ML) compute instances
   * and ML storage volumes, to use for model training. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ResourceConfig">AWS
   * API Reference</a></p>
   */
  class ResourceConfig
  {
  public:
    AWS_SAGEMAKER_API ResourceConfig();
    AWS_SAGEMAKER_API ResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ML compute instance type. </p>  <p>SageMaker Training on Amazon
     * Elastic Compute Cloud (EC2) P4de instances is in preview release starting
     * December 9th, 2022. </p> <p> <a
     * href="http://aws.amazon.com/ec2/instance-types/p4/">Amazon EC2 P4de
     * instances</a> (currently in preview) are powered by 8 NVIDIA A100 GPUs with 80GB
     * high-performance HBM2e GPU memory, which accelerate the speed of training ML
     * models that need to be trained on large datasets of high-resolution data. In
     * this preview release, Amazon SageMaker supports ML training jobs on P4de
     * instances (<code>ml.p4de.24xlarge</code>) to reduce model training time. The
     * <code>ml.p4de.24xlarge</code> instances are available in the following Amazon
     * Web Services Regions. </p> <ul> <li> <p>US East (N. Virginia) (us-east-1)</p>
     * </li> <li> <p>US West (Oregon) (us-west-2)</p> </li> </ul> <p>To request quota
     * limit increase and start using P4de instances, contact the SageMaker Training
     * service team through your account team.</p> 
     */
    inline const TrainingInstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const TrainingInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(TrainingInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline ResourceConfig& WithInstanceType(const TrainingInstanceType& value) { SetInstanceType(value); return *this;}
    inline ResourceConfig& WithInstanceType(TrainingInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of ML compute instances to use. For distributed training, provide
     * a value greater than 1. </p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline ResourceConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the ML storage volume that you want to provision. </p> <p>ML
     * storage volumes store model artifacts and incremental states. Training
     * algorithms might also use the ML storage volume for scratch space. If you want
     * to store the training data in the ML storage volume, choose <code>File</code> as
     * the <code>TrainingInputMode</code> in the algorithm specification. </p> <p>When
     * using an ML instance with <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html#nvme-ssd-volumes">NVMe
     * SSD volumes</a>, SageMaker doesn't provision Amazon EBS General Purpose SSD
     * (gp2) storage. Available storage is fixed to the NVMe-type instance's storage
     * capacity. SageMaker configures storage paths for training datasets, checkpoints,
     * model artifacts, and outputs to use the entire capacity of the instance storage.
     * For example, ML instance families with the NVMe-type instance storage include
     * <code>ml.p4d</code>, <code>ml.g4dn</code>, and <code>ml.g5</code>. </p> <p>When
     * using an ML instance with the EBS-only storage option and without instance
     * storage, you must define the size of EBS volume through
     * <code>VolumeSizeInGB</code> in the <code>ResourceConfig</code> API. For example,
     * ML instance families that use EBS volumes include <code>ml.c5</code> and
     * <code>ml.p2</code>. </p> <p>To look up instance types and their instance storage
     * types and volumes, see <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance
     * Types</a>.</p> <p>To find the default local paths defined by the SageMaker
     * training platform, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-train-storage.html">Amazon
     * SageMaker Training Storage Folders for Training Datasets, Checkpoints, Model
     * Artifacts, and Outputs</a>.</p>
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }
    inline ResourceConfig& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key that SageMaker uses to encrypt data on the
     * storage volume attached to the ML compute instance(s) that run the training
     * job.</p>  <p>Certain Nitro-based instances include local storage,
     * dependent on the instance type. Local storage volumes are encrypted using a
     * hardware module on the instance. You can't request a <code>VolumeKmsKeyId</code>
     * when using an instance type with local storage.</p> <p>For a list of instance
     * types that support local instance storage, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html#instance-store-volumes">Instance
     * Store Volumes</a>.</p> <p>For more information about local instance storage
     * encryption, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">SSD
     * Instance Store Volumes</a>.</p>  <p>The <code>VolumeKmsKeyId</code> can
     * be in any of the following formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetVolumeKmsKeyId() const{ return m_volumeKmsKeyId; }
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }
    inline void SetVolumeKmsKeyId(const Aws::String& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = value; }
    inline void SetVolumeKmsKeyId(Aws::String&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::move(value); }
    inline void SetVolumeKmsKeyId(const char* value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId.assign(value); }
    inline ResourceConfig& WithVolumeKmsKeyId(const Aws::String& value) { SetVolumeKmsKeyId(value); return *this;}
    inline ResourceConfig& WithVolumeKmsKeyId(Aws::String&& value) { SetVolumeKmsKeyId(std::move(value)); return *this;}
    inline ResourceConfig& WithVolumeKmsKeyId(const char* value) { SetVolumeKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of time in seconds to retain configured resources in a warm pool
     * for subsequent training jobs.</p>
     */
    inline int GetKeepAlivePeriodInSeconds() const{ return m_keepAlivePeriodInSeconds; }
    inline bool KeepAlivePeriodInSecondsHasBeenSet() const { return m_keepAlivePeriodInSecondsHasBeenSet; }
    inline void SetKeepAlivePeriodInSeconds(int value) { m_keepAlivePeriodInSecondsHasBeenSet = true; m_keepAlivePeriodInSeconds = value; }
    inline ResourceConfig& WithKeepAlivePeriodInSeconds(int value) { SetKeepAlivePeriodInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a heterogeneous cluster in JSON format.</p>
     */
    inline const Aws::Vector<InstanceGroup>& GetInstanceGroups() const{ return m_instanceGroups; }
    inline bool InstanceGroupsHasBeenSet() const { return m_instanceGroupsHasBeenSet; }
    inline void SetInstanceGroups(const Aws::Vector<InstanceGroup>& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = value; }
    inline void SetInstanceGroups(Aws::Vector<InstanceGroup>&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = std::move(value); }
    inline ResourceConfig& WithInstanceGroups(const Aws::Vector<InstanceGroup>& value) { SetInstanceGroups(value); return *this;}
    inline ResourceConfig& WithInstanceGroups(Aws::Vector<InstanceGroup>&& value) { SetInstanceGroups(std::move(value)); return *this;}
    inline ResourceConfig& AddInstanceGroups(const InstanceGroup& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(value); return *this; }
    inline ResourceConfig& AddInstanceGroups(InstanceGroup&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN); of the training plan to use for this resource
     * configuration.</p>
     */
    inline const Aws::String& GetTrainingPlanArn() const{ return m_trainingPlanArn; }
    inline bool TrainingPlanArnHasBeenSet() const { return m_trainingPlanArnHasBeenSet; }
    inline void SetTrainingPlanArn(const Aws::String& value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn = value; }
    inline void SetTrainingPlanArn(Aws::String&& value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn = std::move(value); }
    inline void SetTrainingPlanArn(const char* value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn.assign(value); }
    inline ResourceConfig& WithTrainingPlanArn(const Aws::String& value) { SetTrainingPlanArn(value); return *this;}
    inline ResourceConfig& WithTrainingPlanArn(Aws::String&& value) { SetTrainingPlanArn(std::move(value)); return *this;}
    inline ResourceConfig& WithTrainingPlanArn(const char* value) { SetTrainingPlanArn(value); return *this;}
    ///@}
  private:

    TrainingInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    int m_volumeSizeInGB;
    bool m_volumeSizeInGBHasBeenSet = false;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet = false;

    int m_keepAlivePeriodInSeconds;
    bool m_keepAlivePeriodInSecondsHasBeenSet = false;

    Aws::Vector<InstanceGroup> m_instanceGroups;
    bool m_instanceGroupsHasBeenSet = false;

    Aws::String m_trainingPlanArn;
    bool m_trainingPlanArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
