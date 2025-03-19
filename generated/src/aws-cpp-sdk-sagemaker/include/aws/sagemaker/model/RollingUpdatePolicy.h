/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CapacitySize.h>
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
   * <p>Specifies a rolling deployment strategy for updating a SageMaker
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RollingUpdatePolicy">AWS
   * API Reference</a></p>
   */
  class RollingUpdatePolicy
  {
  public:
    AWS_SAGEMAKER_API RollingUpdatePolicy() = default;
    AWS_SAGEMAKER_API RollingUpdatePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RollingUpdatePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Batch size for each rolling step to provision capacity and turn on traffic on
     * the new endpoint fleet, and terminate capacity on the old endpoint fleet. Value
     * must be between 5% to 50% of the variant's total instance count.</p>
     */
    inline const CapacitySize& GetMaximumBatchSize() const { return m_maximumBatchSize; }
    inline bool MaximumBatchSizeHasBeenSet() const { return m_maximumBatchSizeHasBeenSet; }
    template<typename MaximumBatchSizeT = CapacitySize>
    void SetMaximumBatchSize(MaximumBatchSizeT&& value) { m_maximumBatchSizeHasBeenSet = true; m_maximumBatchSize = std::forward<MaximumBatchSizeT>(value); }
    template<typename MaximumBatchSizeT = CapacitySize>
    RollingUpdatePolicy& WithMaximumBatchSize(MaximumBatchSizeT&& value) { SetMaximumBatchSize(std::forward<MaximumBatchSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of the baking period, during which SageMaker monitors alarms for
     * each batch on the new fleet.</p>
     */
    inline int GetWaitIntervalInSeconds() const { return m_waitIntervalInSeconds; }
    inline bool WaitIntervalInSecondsHasBeenSet() const { return m_waitIntervalInSecondsHasBeenSet; }
    inline void SetWaitIntervalInSeconds(int value) { m_waitIntervalInSecondsHasBeenSet = true; m_waitIntervalInSeconds = value; }
    inline RollingUpdatePolicy& WithWaitIntervalInSeconds(int value) { SetWaitIntervalInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time limit for the total deployment. Exceeding this limit causes a
     * timeout.</p>
     */
    inline int GetMaximumExecutionTimeoutInSeconds() const { return m_maximumExecutionTimeoutInSeconds; }
    inline bool MaximumExecutionTimeoutInSecondsHasBeenSet() const { return m_maximumExecutionTimeoutInSecondsHasBeenSet; }
    inline void SetMaximumExecutionTimeoutInSeconds(int value) { m_maximumExecutionTimeoutInSecondsHasBeenSet = true; m_maximumExecutionTimeoutInSeconds = value; }
    inline RollingUpdatePolicy& WithMaximumExecutionTimeoutInSeconds(int value) { SetMaximumExecutionTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Batch size for rollback to the old endpoint fleet. Each rolling step to
     * provision capacity and turn on traffic on the old endpoint fleet, and terminate
     * capacity on the new endpoint fleet. If this field is absent, the default value
     * will be set to 100% of total capacity which means to bring up the whole capacity
     * of the old fleet at once during rollback.</p>
     */
    inline const CapacitySize& GetRollbackMaximumBatchSize() const { return m_rollbackMaximumBatchSize; }
    inline bool RollbackMaximumBatchSizeHasBeenSet() const { return m_rollbackMaximumBatchSizeHasBeenSet; }
    template<typename RollbackMaximumBatchSizeT = CapacitySize>
    void SetRollbackMaximumBatchSize(RollbackMaximumBatchSizeT&& value) { m_rollbackMaximumBatchSizeHasBeenSet = true; m_rollbackMaximumBatchSize = std::forward<RollbackMaximumBatchSizeT>(value); }
    template<typename RollbackMaximumBatchSizeT = CapacitySize>
    RollingUpdatePolicy& WithRollbackMaximumBatchSize(RollbackMaximumBatchSizeT&& value) { SetRollbackMaximumBatchSize(std::forward<RollbackMaximumBatchSizeT>(value)); return *this;}
    ///@}
  private:

    CapacitySize m_maximumBatchSize;
    bool m_maximumBatchSizeHasBeenSet = false;

    int m_waitIntervalInSeconds{0};
    bool m_waitIntervalInSecondsHasBeenSet = false;

    int m_maximumExecutionTimeoutInSeconds{0};
    bool m_maximumExecutionTimeoutInSecondsHasBeenSet = false;

    CapacitySize m_rollbackMaximumBatchSize;
    bool m_rollbackMaximumBatchSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
