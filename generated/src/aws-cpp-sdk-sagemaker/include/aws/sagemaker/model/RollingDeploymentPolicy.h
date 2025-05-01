/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CapacitySizeConfig.h>
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
   * <p>The configurations that SageMaker uses when updating the AMI
   * versions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RollingDeploymentPolicy">AWS
   * API Reference</a></p>
   */
  class RollingDeploymentPolicy
  {
  public:
    AWS_SAGEMAKER_API RollingDeploymentPolicy() = default;
    AWS_SAGEMAKER_API RollingDeploymentPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RollingDeploymentPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum amount of instances in the cluster that SageMaker can update at a
     * time.</p>
     */
    inline const CapacitySizeConfig& GetMaximumBatchSize() const { return m_maximumBatchSize; }
    inline bool MaximumBatchSizeHasBeenSet() const { return m_maximumBatchSizeHasBeenSet; }
    template<typename MaximumBatchSizeT = CapacitySizeConfig>
    void SetMaximumBatchSize(MaximumBatchSizeT&& value) { m_maximumBatchSizeHasBeenSet = true; m_maximumBatchSize = std::forward<MaximumBatchSizeT>(value); }
    template<typename MaximumBatchSizeT = CapacitySizeConfig>
    RollingDeploymentPolicy& WithMaximumBatchSize(MaximumBatchSizeT&& value) { SetMaximumBatchSize(std::forward<MaximumBatchSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of instances in the cluster that SageMaker can roll back
     * at a time.</p>
     */
    inline const CapacitySizeConfig& GetRollbackMaximumBatchSize() const { return m_rollbackMaximumBatchSize; }
    inline bool RollbackMaximumBatchSizeHasBeenSet() const { return m_rollbackMaximumBatchSizeHasBeenSet; }
    template<typename RollbackMaximumBatchSizeT = CapacitySizeConfig>
    void SetRollbackMaximumBatchSize(RollbackMaximumBatchSizeT&& value) { m_rollbackMaximumBatchSizeHasBeenSet = true; m_rollbackMaximumBatchSize = std::forward<RollbackMaximumBatchSizeT>(value); }
    template<typename RollbackMaximumBatchSizeT = CapacitySizeConfig>
    RollingDeploymentPolicy& WithRollbackMaximumBatchSize(RollbackMaximumBatchSizeT&& value) { SetRollbackMaximumBatchSize(std::forward<RollbackMaximumBatchSizeT>(value)); return *this;}
    ///@}
  private:

    CapacitySizeConfig m_maximumBatchSize;
    bool m_maximumBatchSizeHasBeenSet = false;

    CapacitySizeConfig m_rollbackMaximumBatchSize;
    bool m_rollbackMaximumBatchSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
