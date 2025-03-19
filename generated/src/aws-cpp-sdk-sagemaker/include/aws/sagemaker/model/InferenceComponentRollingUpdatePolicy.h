/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/InferenceComponentCapacitySize.h>
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
   * <p>Specifies a rolling deployment strategy for updating a SageMaker AI inference
   * component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentRollingUpdatePolicy">AWS
   * API Reference</a></p>
   */
  class InferenceComponentRollingUpdatePolicy
  {
  public:
    AWS_SAGEMAKER_API InferenceComponentRollingUpdatePolicy() = default;
    AWS_SAGEMAKER_API InferenceComponentRollingUpdatePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceComponentRollingUpdatePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The batch size for each rolling step in the deployment process. For each
     * step, SageMaker AI provisions capacity on the new endpoint fleet, routes traffic
     * to that fleet, and terminates capacity on the old endpoint fleet. The value must
     * be between 5% to 50% of the copy count of the inference component.</p>
     */
    inline const InferenceComponentCapacitySize& GetMaximumBatchSize() const { return m_maximumBatchSize; }
    inline bool MaximumBatchSizeHasBeenSet() const { return m_maximumBatchSizeHasBeenSet; }
    template<typename MaximumBatchSizeT = InferenceComponentCapacitySize>
    void SetMaximumBatchSize(MaximumBatchSizeT&& value) { m_maximumBatchSizeHasBeenSet = true; m_maximumBatchSize = std::forward<MaximumBatchSizeT>(value); }
    template<typename MaximumBatchSizeT = InferenceComponentCapacitySize>
    InferenceComponentRollingUpdatePolicy& WithMaximumBatchSize(MaximumBatchSizeT&& value) { SetMaximumBatchSize(std::forward<MaximumBatchSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of the baking period, during which SageMaker AI monitors alarms
     * for each batch on the new fleet.</p>
     */
    inline int GetWaitIntervalInSeconds() const { return m_waitIntervalInSeconds; }
    inline bool WaitIntervalInSecondsHasBeenSet() const { return m_waitIntervalInSecondsHasBeenSet; }
    inline void SetWaitIntervalInSeconds(int value) { m_waitIntervalInSecondsHasBeenSet = true; m_waitIntervalInSeconds = value; }
    inline InferenceComponentRollingUpdatePolicy& WithWaitIntervalInSeconds(int value) { SetWaitIntervalInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time limit for the total deployment. Exceeding this limit causes a
     * timeout.</p>
     */
    inline int GetMaximumExecutionTimeoutInSeconds() const { return m_maximumExecutionTimeoutInSeconds; }
    inline bool MaximumExecutionTimeoutInSecondsHasBeenSet() const { return m_maximumExecutionTimeoutInSecondsHasBeenSet; }
    inline void SetMaximumExecutionTimeoutInSeconds(int value) { m_maximumExecutionTimeoutInSecondsHasBeenSet = true; m_maximumExecutionTimeoutInSeconds = value; }
    inline InferenceComponentRollingUpdatePolicy& WithMaximumExecutionTimeoutInSeconds(int value) { SetMaximumExecutionTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch size for a rollback to the old endpoint fleet. If this field is
     * absent, the value is set to the default, which is 100% of the total capacity.
     * When the default is used, SageMaker AI provisions the entire capacity of the old
     * fleet at once during rollback.</p>
     */
    inline const InferenceComponentCapacitySize& GetRollbackMaximumBatchSize() const { return m_rollbackMaximumBatchSize; }
    inline bool RollbackMaximumBatchSizeHasBeenSet() const { return m_rollbackMaximumBatchSizeHasBeenSet; }
    template<typename RollbackMaximumBatchSizeT = InferenceComponentCapacitySize>
    void SetRollbackMaximumBatchSize(RollbackMaximumBatchSizeT&& value) { m_rollbackMaximumBatchSizeHasBeenSet = true; m_rollbackMaximumBatchSize = std::forward<RollbackMaximumBatchSizeT>(value); }
    template<typename RollbackMaximumBatchSizeT = InferenceComponentCapacitySize>
    InferenceComponentRollingUpdatePolicy& WithRollbackMaximumBatchSize(RollbackMaximumBatchSizeT&& value) { SetRollbackMaximumBatchSize(std::forward<RollbackMaximumBatchSizeT>(value)); return *this;}
    ///@}
  private:

    InferenceComponentCapacitySize m_maximumBatchSize;
    bool m_maximumBatchSizeHasBeenSet = false;

    int m_waitIntervalInSeconds{0};
    bool m_waitIntervalInSecondsHasBeenSet = false;

    int m_maximumExecutionTimeoutInSeconds{0};
    bool m_maximumExecutionTimeoutInSecondsHasBeenSet = false;

    InferenceComponentCapacitySize m_rollbackMaximumBatchSize;
    bool m_rollbackMaximumBatchSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
