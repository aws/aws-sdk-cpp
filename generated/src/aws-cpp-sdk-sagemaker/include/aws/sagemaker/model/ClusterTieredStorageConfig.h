/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterConfigMode.h>
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
   * <p>Defines the configuration for managed tier checkpointing in a HyperPod
   * cluster. Managed tier checkpointing uses multiple storage tiers, including
   * cluster CPU memory, to provide faster checkpoint operations and improved fault
   * tolerance for large-scale model training. The system automatically saves
   * checkpoints at high frequency to memory and periodically persists them to
   * durable storage, like Amazon S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterTieredStorageConfig">AWS
   * API Reference</a></p>
   */
  class ClusterTieredStorageConfig
  {
  public:
    AWS_SAGEMAKER_API ClusterTieredStorageConfig() = default;
    AWS_SAGEMAKER_API ClusterTieredStorageConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterTieredStorageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether managed tier checkpointing is enabled or disabled for the
     * HyperPod cluster. When set to <code>Enable</code>, the system installs a memory
     * management daemon that provides disaggregated memory as a service for checkpoint
     * storage. When set to <code>Disable</code>, the feature is turned off and the
     * memory management daemon is removed from the cluster.</p>
     */
    inline ClusterConfigMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(ClusterConfigMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline ClusterTieredStorageConfig& WithMode(ClusterConfigMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage (int) of cluster memory to allocate for checkpointing.</p>
     */
    inline int GetInstanceMemoryAllocationPercentage() const { return m_instanceMemoryAllocationPercentage; }
    inline bool InstanceMemoryAllocationPercentageHasBeenSet() const { return m_instanceMemoryAllocationPercentageHasBeenSet; }
    inline void SetInstanceMemoryAllocationPercentage(int value) { m_instanceMemoryAllocationPercentageHasBeenSet = true; m_instanceMemoryAllocationPercentage = value; }
    inline ClusterTieredStorageConfig& WithInstanceMemoryAllocationPercentage(int value) { SetInstanceMemoryAllocationPercentage(value); return *this;}
    ///@}
  private:

    ClusterConfigMode m_mode{ClusterConfigMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    int m_instanceMemoryAllocationPercentage{0};
    bool m_instanceMemoryAllocationPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
