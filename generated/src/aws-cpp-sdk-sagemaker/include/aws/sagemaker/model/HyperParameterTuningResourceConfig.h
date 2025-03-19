/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingInstanceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HyperParameterTuningAllocationStrategy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/HyperParameterTuningInstanceConfig.h>
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
   * <p>The configuration of resources, including compute instances and storage
   * volumes for use in training jobs launched by hyperparameter tuning jobs.
   * <code>HyperParameterTuningResourceConfig</code> is similar to
   * <code>ResourceConfig</code>, but has the additional <code>InstanceConfigs</code>
   * and <code>AllocationStrategy</code> fields to allow for flexible instance
   * management. Specify one or more instance types, count, and the allocation
   * strategy for instance selection.</p>  <p>
   * <code>HyperParameterTuningResourceConfig</code> supports the capabilities of
   * <code>ResourceConfig</code> with the exception of
   * <code>KeepAlivePeriodInSeconds</code>. Hyperparameter tuning jobs use warm pools
   * by default, which reuse clusters between training jobs.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTuningResourceConfig">AWS
   * API Reference</a></p>
   */
  class HyperParameterTuningResourceConfig
  {
  public:
    AWS_SAGEMAKER_API HyperParameterTuningResourceConfig() = default;
    AWS_SAGEMAKER_API HyperParameterTuningResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperParameterTuningResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance type used to run hyperparameter optimization tuning jobs. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebooks-available-instance-types.html">
     * descriptions of instance types</a> for more information.</p>
     */
    inline TrainingInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(TrainingInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline HyperParameterTuningResourceConfig& WithInstanceType(TrainingInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of compute instances of type <code>InstanceType</code> to use. For
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/data-parallel-use-api.html">distributed
     * training</a>, select a value greater than 1.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline HyperParameterTuningResourceConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume size in GB for the storage volume to be used in processing
     * hyperparameter optimization jobs (optional). These volumes store model
     * artifacts, incremental states and optionally, scratch space for training
     * algorithms. Do not provide a value for this parameter if a value for
     * <code>InstanceConfigs</code> is also specified.</p> <p>Some instance types have
     * a fixed total local storage size. If you select one of these instances for
     * training, <code>VolumeSizeInGB</code> cannot be greater than this total size.
     * For a list of instance types with local instance storage and their sizes, see <a
     * href="http://aws.amazon.com/releasenotes/host-instance-storage-volumes-table/">instance
     * store volumes</a>.</p>  <p>SageMaker supports only the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-volume-types.html">General
     * Purpose SSD (gp2)</a> storage volume type.</p> 
     */
    inline int GetVolumeSizeInGB() const { return m_volumeSizeInGB; }
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }
    inline HyperParameterTuningResourceConfig& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key used by Amazon Web Services Key Management Service to encrypt data on
     * the storage volume attached to the compute instances used to run the training
     * job. You can use either of the following formats to specify a key.</p> <p>KMS
     * Key ID:</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * <p>Amazon Resource Name (ARN) of a KMS key:</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> <p>Some instances use local storage, which use a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssd-instance-store.html">hardware
     * module to encrypt</a> storage volumes. If you choose one of these instance
     * types, you cannot request a <code>VolumeKmsKeyId</code>. For a list of instance
     * types that use local storage, see <a
     * href="http://aws.amazon.com/releasenotes/host-instance-storage-volumes-table/">instance
     * store volumes</a>. For more information about Amazon Web Services Key Management
     * Service, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-security-kms-permissions.html">KMS
     * encryption</a> for more information.</p>
     */
    inline const Aws::String& GetVolumeKmsKeyId() const { return m_volumeKmsKeyId; }
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }
    template<typename VolumeKmsKeyIdT = Aws::String>
    void SetVolumeKmsKeyId(VolumeKmsKeyIdT&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::forward<VolumeKmsKeyIdT>(value); }
    template<typename VolumeKmsKeyIdT = Aws::String>
    HyperParameterTuningResourceConfig& WithVolumeKmsKeyId(VolumeKmsKeyIdT&& value) { SetVolumeKmsKeyId(std::forward<VolumeKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strategy that determines the order of preference for resources specified
     * in <code>InstanceConfigs</code> used in hyperparameter optimization.</p>
     */
    inline HyperParameterTuningAllocationStrategy GetAllocationStrategy() const { return m_allocationStrategy; }
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }
    inline void SetAllocationStrategy(HyperParameterTuningAllocationStrategy value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }
    inline HyperParameterTuningResourceConfig& WithAllocationStrategy(HyperParameterTuningAllocationStrategy value) { SetAllocationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list containing the configuration(s) for one or more resources for
     * processing hyperparameter jobs. These resources include compute instances and
     * storage volumes to use in model training jobs launched by hyperparameter tuning
     * jobs. The <code>AllocationStrategy</code> controls the order in which multiple
     * configurations provided in <code>InstanceConfigs</code> are used.</p> 
     * <p>If you only want to use a single instance configuration inside the
     * <code>HyperParameterTuningResourceConfig</code> API, do not provide a value for
     * <code>InstanceConfigs</code>. Instead, use <code>InstanceType</code>,
     * <code>VolumeSizeInGB</code> and <code>InstanceCount</code>. If you use
     * <code>InstanceConfigs</code>, do not provide values for
     * <code>InstanceType</code>, <code>VolumeSizeInGB</code> or
     * <code>InstanceCount</code>.</p> 
     */
    inline const Aws::Vector<HyperParameterTuningInstanceConfig>& GetInstanceConfigs() const { return m_instanceConfigs; }
    inline bool InstanceConfigsHasBeenSet() const { return m_instanceConfigsHasBeenSet; }
    template<typename InstanceConfigsT = Aws::Vector<HyperParameterTuningInstanceConfig>>
    void SetInstanceConfigs(InstanceConfigsT&& value) { m_instanceConfigsHasBeenSet = true; m_instanceConfigs = std::forward<InstanceConfigsT>(value); }
    template<typename InstanceConfigsT = Aws::Vector<HyperParameterTuningInstanceConfig>>
    HyperParameterTuningResourceConfig& WithInstanceConfigs(InstanceConfigsT&& value) { SetInstanceConfigs(std::forward<InstanceConfigsT>(value)); return *this;}
    template<typename InstanceConfigsT = HyperParameterTuningInstanceConfig>
    HyperParameterTuningResourceConfig& AddInstanceConfigs(InstanceConfigsT&& value) { m_instanceConfigsHasBeenSet = true; m_instanceConfigs.emplace_back(std::forward<InstanceConfigsT>(value)); return *this; }
    ///@}
  private:

    TrainingInstanceType m_instanceType{TrainingInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    int m_volumeSizeInGB{0};
    bool m_volumeSizeInGBHasBeenSet = false;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet = false;

    HyperParameterTuningAllocationStrategy m_allocationStrategy{HyperParameterTuningAllocationStrategy::NOT_SET};
    bool m_allocationStrategyHasBeenSet = false;

    Aws::Vector<HyperParameterTuningInstanceConfig> m_instanceConfigs;
    bool m_instanceConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
