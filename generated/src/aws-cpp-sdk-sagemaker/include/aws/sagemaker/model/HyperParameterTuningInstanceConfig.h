/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingInstanceType.h>
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
   * <p>The configuration for hyperparameter tuning resources for use in training
   * jobs launched by the tuning job. These resources include compute instances and
   * storage volumes. Specify one or more compute instance configurations and
   * allocation strategies to select resources (optional).</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTuningInstanceConfig">AWS
   * API Reference</a></p>
   */
  class HyperParameterTuningInstanceConfig
  {
  public:
    AWS_SAGEMAKER_API HyperParameterTuningInstanceConfig() = default;
    AWS_SAGEMAKER_API HyperParameterTuningInstanceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperParameterTuningInstanceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance type used for processing of hyperparameter optimization jobs.
     * Choose from general purpose (no GPUs) instance types: ml.m5.xlarge,
     * ml.m5.2xlarge, and ml.m5.4xlarge or compute optimized (no GPUs) instance types:
     * ml.c5.xlarge and ml.c5.2xlarge. For more information about instance types, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebooks-available-instance-types.html">instance
     * type descriptions</a>.</p>
     */
    inline TrainingInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(TrainingInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline HyperParameterTuningInstanceConfig& WithInstanceType(TrainingInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances of the type specified by <code>InstanceType</code>.
     * Choose an instance count larger than 1 for distributed training algorithms. See
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/data-parallel-use-api.html">Step
     * 2: Launch a SageMaker Distributed Training Job Using the SageMaker Python
     * SDK</a> for more information.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline HyperParameterTuningInstanceConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume size in GB of the data to be processed for hyperparameter
     * optimization (optional).</p>
     */
    inline int GetVolumeSizeInGB() const { return m_volumeSizeInGB; }
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }
    inline HyperParameterTuningInstanceConfig& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}
    ///@}
  private:

    TrainingInstanceType m_instanceType{TrainingInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    int m_volumeSizeInGB{0};
    bool m_volumeSizeInGBHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
